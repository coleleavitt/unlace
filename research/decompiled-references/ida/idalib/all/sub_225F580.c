_QWORD *__fastcall sub_225F580(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // r14
  _QWORD *v13; // r13
  size_t v14; // rcx
  _QWORD *v15; // rax
  char v16; // dl
  size_t v17; // r10
  size_t v18; // rdx
  signed __int64 v19; // rax
  void *v20; // rdi
  __int64 v22; // rdi
  size_t v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+0h] [rbp-58h]
  size_t v25; // [rsp+8h] [rbp-50h]
  void *s1; // [rsp+10h] [rbp-48h]
  void *v27; // [rsp+18h] [rbp-40h]

  v6 = (_QWORD *)operator new(0x48u);
  v7 = *(_BYTE **)a2;
  v8 = (__int64)(v6 + 4);
  v9 = v6;
  v10 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 8);
  v27 = v6 + 6;
  v6[4] = v6 + 6;
  sub_2259A00(v6 + 4, v7, v10);
  v11 = *a3;
  v12 = (_QWORD *)a1[2];
  *a3 = 0;
  v13 = a1 + 1;
  v9[8] = v11;
  if ( !v12 )
  {
    v12 = a1 + 1;
    if ( v13 == (_QWORD *)a1[3] )
    {
      v22 = 1;
      goto LABEL_23;
    }
    goto LABEL_25;
  }
  v14 = v9[5];
  s1 = (void *)v9[4];
  while ( 1 )
  {
    v17 = v12[5];
    v18 = v17;
    if ( v14 <= v17 )
      v18 = v14;
    if ( !v18
      || (v25 = v12[5],
          v23 = v14,
          LODWORD(v19) = memcmp(s1, (const void *)v12[4], v18),
          v14 = v23,
          v17 = v25,
          !(_DWORD)v19) )
    {
      v19 = v14 - v17;
      if ( (__int64)(v14 - v17) > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v19 < (__int64)0xFFFFFFFF80000000LL )
        break;
    }
    if ( (int)v19 < 0 )
      break;
LABEL_3:
    v15 = (_QWORD *)v12[3];
    v16 = 0;
    if ( !v15 )
      goto LABEL_11;
LABEL_4:
    v12 = v15;
  }
  v15 = (_QWORD *)v12[2];
  v16 = 1;
  if ( v15 )
    goto LABEL_4;
LABEL_11:
  if ( v16 )
  {
    if ( (_QWORD *)a1[3] == v12 )
      goto LABEL_21;
LABEL_25:
    v24 = std::_Rb_tree_decrement(v12);
    if ( sub_9C4B50(v24 + 32, v8) < 0 )
      goto LABEL_21;
    v12 = (_QWORD *)v24;
LABEL_13:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v20 = (void *)v9[4];
    if ( v27 != v20 )
      operator delete(v20);
    operator delete(v9);
    return v12;
  }
  if ( sub_9C4B50((__int64)(v12 + 4), v8) >= 0 )
    goto LABEL_13;
LABEL_21:
  v22 = 1;
  if ( v13 != v12 )
    v22 = (unsigned int)sub_9C4B50(v8, (__int64)(v12 + 4)) >> 31;
LABEL_23:
  std::_Rb_tree_insert_and_rebalance(v22, v9, v12, a1 + 1);
  ++a1[5];
  return v9;
}
