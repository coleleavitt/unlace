__int64 __fastcall sub_40B6F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char *v6; // rsi
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r10
  size_t v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v14; // [rsp+0h] [rbp-C8h]
  size_t na; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+8h] [rbp-C0h]
  __int64 v17; // [rsp+10h] [rbp-B8h]
  __int64 v18; // [rsp+10h] [rbp-B8h]
  unsigned int v19; // [rsp+1Ch] [rbp-ACh]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+28h] [rbp-A0h]
  __m128i v22; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+50h] [rbp-78h]
  _BYTE src[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v3 = a1;
  v19 = a3;
  v25 = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v21 = 0;
  if ( a1 == a2 )
    return 0;
  do
  {
    sub_407AD0((__int64 *)&ptr, *(_DWORD *)(v3 + 32));
    v8 = _mm_loadu_si128((const __m128i *)(v3 + 36));
    v23 = *(_QWORD *)(v3 + 52);
    v22 = v8;
    v9 = sub_408EB0((__int64)src, 28, &v22);
    v11 = v9;
    if ( v9 )
    {
      v10 = v21;
      v12 = v21 + v9;
      if ( __CFADD__((_QWORD)v21, v9) )
      {
        if ( (unsigned __int64)v21 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v21 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v21 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
          memcpy((char *)ptr + v10, src, v11);
          goto LABEL_9;
        }
        v12 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 = (char *)ptr;
      v7 = v21;
      if ( *((_QWORD *)&v21 + 1) < v12 )
      {
        v18 = v21;
        n = v11;
        v14 = v12;
        ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
        v6 = (char *)ptr;
        v10 = v18;
        v7 = v21;
        v11 = n;
        v12 = v14;
      }
      v17 = v10;
      na = v11;
      v13 = v12;
      memset(&v6[v7], 0, v12 - v7);
      v11 = na;
      v10 = v17;
      *(_QWORD *)&v21 = v13;
      goto LABEL_8;
    }
LABEL_9:
    v3 = std::_Rb_tree_increment();
  }
  while ( v3 != a2 );
  if ( (_QWORD)v21 )
  {
    add_undo_record(v19, ptr, v21);
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}

