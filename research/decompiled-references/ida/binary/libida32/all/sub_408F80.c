__int64 __fastcall sub_408F80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // esi
  __m128i v9; // xmm0
  __int64 v10; // rax
  size_t v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  char *v14; // rsi
  __int64 v15; // rax
  void *v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v18; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+10h] [rbp-B8h]
  size_t n; // [rsp+10h] [rbp-B8h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __int64 v22; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-A0h]
  __m128i v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+50h] [rbp-78h]
  _BYTE src[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = a1[297];
  if ( !v2 )
    return v28 - __readfsqword(0x28u);
  v3 = a2;
  v4 = a1 + 296;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) >= (unsigned int)a2 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 296 == v4 || (unsigned int)a2 < *((_DWORD *)v4 + 8) )
    return v28 - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, v5) )
  {
    v8 = *((_DWORD *)v4 + 8);
    ptr = nullptr;
    v24 = 0;
    sub_407AD0((__int64 *)&ptr, v8);
    v9 = _mm_loadu_si128((const __m128i *)((char *)v4 + 36));
    v26 = *(_QWORD *)((char *)v4 + 52);
    v25 = v9;
    v10 = sub_408EB0((__int64)src, 28, &v25);
    v11 = v10;
    if ( !v10 )
      goto LABEL_16;
    v12 = v24;
    v13 = v24 + v10;
    if ( __CFADD__((_QWORD)v24, v10) )
    {
      if ( (unsigned __int64)v24 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v24 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v24 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_15;
      }
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v14 = (char *)ptr;
    v15 = v24;
    if ( *((_QWORD *)&v24 + 1) < v13 )
    {
      v22 = v24;
      n = v11;
      v18 = v13;
      ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
      v14 = (char *)ptr;
      v12 = v22;
      v15 = v24;
      v11 = n;
      v13 = v18;
    }
    v21 = v12;
    na = v11;
    v17 = v13;
    memset(&v14[v15], 0, v13 - v15);
    v11 = na;
    v12 = v21;
    *(_QWORD *)&v24 = v17;
LABEL_15:
    memcpy((char *)ptr + v12, src, v11);
LABEL_16:
    add_undo_record(166, ptr, v24);
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
  }
  v16 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v16, 0x40u);
  --a1[300];
  return sub_79B4D0((char *)a1 + 2356, *a1, v3, 339);
}

