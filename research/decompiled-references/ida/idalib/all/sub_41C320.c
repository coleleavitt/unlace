__int64 __fastcall sub_41C320(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r12
  _QWORD *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  size_t v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  char *v16; // rsi
  __int64 v17; // rax
  void *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v20; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+10h] [rbp-D8h]
  __int64 v23; // [rsp+18h] [rbp-D0h]
  __int64 v24; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+28h] [rbp-C0h]
  _OWORD v27[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-88h]
  _BYTE src[56]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[311];
  if ( !v2 )
    return v30 - __readfsqword(0x28u);
  v3 = a1 + 310;
  v5 = a1 + 310;
  do
  {
    while ( 1 )
    {
      v6 = v2[2];
      v7 = v2[3];
      if ( v2[4] >= a2 )
        break;
      v2 = (_QWORD *)v2[3];
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = v2;
    v2 = (_QWORD *)v2[2];
  }
  while ( v6 );
LABEL_6:
  if ( v3 == v5 || a2 < v5[4] )
    return v30 - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, v6) )
  {
    v9 = v5[4];
    ptr = nullptr;
    v26 = 0;
    sub_3A0A80((__int64 *)&ptr, v9);
    v10 = v5[9];
    v27[0] = _mm_loadu_si128((const __m128i *)(v5 + 5));
    v11 = _mm_loadu_si128((const __m128i *)(v5 + 7));
    v28 = v10;
    v27[1] = v11;
    v12 = sub_41C230((__int64)src, 48, (unsigned __int16 *)v27);
    v13 = v12;
    if ( !v12 )
      goto LABEL_16;
    v14 = v26;
    v15 = v26 + v12;
    if ( __CFADD__((_QWORD)v26, v12) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_15;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = v26;
    if ( *((_QWORD *)&v26 + 1) < v15 )
    {
      v24 = v26;
      n = v13;
      v20 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v14 = v24;
      v17 = v26;
      v13 = n;
      v15 = v20;
    }
    v23 = v14;
    na = v13;
    v19 = v15;
    memset(&v16[v17], 0, v15 - v17);
    v13 = na;
    v14 = v23;
    *(_QWORD *)&v26 = v19;
LABEL_15:
    memcpy((char *)ptr + v14, src, v13);
LABEL_16:
    add_undo_record(166, ptr, v26);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
  }
  v18 = (void *)std::_Rb_tree_rebalance_for_erase(v5, v3);
  operator delete(v18, 0x50u);
  --a1[314];
  return sub_7BE850(a1 + 308, *a1, a2, 339);
}
