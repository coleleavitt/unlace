__int64 __fastcall sub_41ECC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r10
  size_t v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v15; // [rsp+0h] [rbp-E8h]
  size_t na; // [rsp+8h] [rbp-E0h]
  size_t n; // [rsp+8h] [rbp-E0h]
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+10h] [rbp-D8h]
  unsigned int v20; // [rsp+1Ch] [rbp-CCh]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+28h] [rbp-C0h]
  _OWORD v23[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-88h]
  _BYTE src[56]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp-40h]

  v3 = a1;
  v20 = a3;
  v26 = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v22 = 0;
  if ( a1 == a2 )
    return 0;
  do
  {
    sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(v3 + 32));
    v8 = *(_QWORD *)(v3 + 72);
    v23[0] = _mm_loadu_si128((const __m128i *)(v3 + 40));
    v9 = _mm_loadu_si128((const __m128i *)(v3 + 56));
    v24 = v8;
    v23[1] = v9;
    v10 = sub_41C230((__int64)src, 48, (unsigned __int16 *)v23);
    v12 = v10;
    if ( v10 )
    {
      v11 = v22;
      v13 = v22 + v10;
      if ( __CFADD__((_QWORD)v22, v10) )
      {
        if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
          memcpy((char *)ptr + v11, src, v12);
          goto LABEL_9;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 = (char *)ptr;
      v7 = v22;
      if ( *((_QWORD *)&v22 + 1) < v13 )
      {
        v19 = v22;
        n = v12;
        v15 = v13;
        ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
        v6 = (char *)ptr;
        v11 = v19;
        v7 = v22;
        v12 = n;
        v13 = v15;
      }
      v18 = v11;
      na = v12;
      v14 = v13;
      memset(&v6[v7], 0, v13 - v7);
      v12 = na;
      v11 = v18;
      *(_QWORD *)&v22 = v14;
      goto LABEL_8;
    }
LABEL_9:
    v3 = std::_Rb_tree_increment(v3);
  }
  while ( v3 != a2 );
  if ( (_QWORD)v22 )
  {
    add_undo_record(v20, ptr, v22);
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}
