unsigned __int64 __fastcall sub_10FF9B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // r14
  int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  size_t v18; // rcx
  size_t v19; // r14
  size_t v20; // rdx
  const void *v21; // rsi
  const void *v22; // rdi
  int v23; // eax
  double v24[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a3;
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( v5 == (_QWORD *)v6 )
    {
LABEL_30:
      v3 = a3;
      goto LABEL_2;
    }
    while ( *v5 == -1 || *v5 == -2 )
    {
      v5 += 2;
      if ( (_QWORD *)v6 == v5 )
        goto LABEL_30;
    }
    v3 = a3;
    if ( (_QWORD *)v6 != v5 )
    {
      v8 = a2 + 1;
      while ( 1 )
      {
        v9 = sub_9F5F30(a2, v3, (const void **)v5);
        v11 = v10;
        v12 = v9;
        if ( !v10 )
          goto LABEL_13;
        v13 = 1;
        if ( !v9 && v8 != v10 )
        {
          v18 = v5[1];
          v20 = v10[5];
          v19 = v20;
          if ( v18 <= v20 )
            v20 = v5[1];
          if ( v20
            && (v21 = (const void *)v11[4],
                v22 = (const void *)*v5,
                v24[0] = *((double *)v5 + 1),
                v23 = memcmp(v22, v21, v20),
                v18 = *(_QWORD *)&v24[0],
                v23) )
          {
            if ( v23 >= 0 )
              goto LABEL_29;
          }
          else if ( v18 == v19 || v18 >= v19 )
          {
LABEL_29:
            v13 = 0;
            goto LABEL_12;
          }
          v13 = 1;
        }
LABEL_12:
        LODWORD(v24[0]) = v13;
        v14 = operator new(0x30u);
        v15 = LODWORD(v24[0]);
        v12 = v14;
        v16 = v5[1];
        *(_QWORD *)(v12 + 32) = *v5;
        *(_QWORD *)(v12 + 40) = v16;
        std::_Rb_tree_insert_and_rebalance(v15, v12, v11, a2 + 1);
        ++a2[5];
LABEL_13:
        v3 = (_QWORD *)std::_Rb_tree_increment(v12);
        v17 = v5 + 2;
        if ( (_QWORD *)v6 != v5 + 2 )
        {
          while ( 1 )
          {
            v5 = v17;
            if ( *v17 != -1 && *v17 != -2 )
              break;
            v17 += 2;
            if ( (_QWORD *)v6 == v17 )
              goto LABEL_2;
          }
          if ( (_QWORD *)v6 != v17 )
            continue;
        }
        break;
      }
    }
  }
LABEL_2:
  *(_QWORD *)&v24[0] = v3;
  return _mm_loadh_ps(v24).m128_u64[0];
}
