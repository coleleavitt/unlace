unsigned __int64 __fastcall sub_10DBC70(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // r15
  int v12; // r8d
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rdx
  size_t v16; // rcx
  size_t v17; // r14
  size_t v18; // rdx
  const void *v19; // rsi
  const void *v20; // rdi
  int v21; // eax
  double v22[9]; // [rsp+0h] [rbp-48h] BYREF

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
        v9 = sub_9D21F0(a2, v3, (const void **)v5);
        v11 = v10;
        if ( !v10 )
          goto LABEL_13;
        v12 = 1;
        if ( !v9 && v8 != v10 )
        {
          v16 = v5[1];
          v18 = v10[5];
          v17 = v18;
          if ( v16 <= v18 )
            v18 = v5[1];
          if ( v18
            && (v19 = (const void *)v11[4],
                v20 = (const void *)*v5,
                v22[0] = *((double *)v5 + 1),
                v21 = memcmp(v20, v19, v18),
                v16 = *(_QWORD *)&v22[0],
                v21) )
          {
            if ( v21 >= 0 )
              goto LABEL_29;
          }
          else if ( v16 == v17 || v16 >= v17 )
          {
LABEL_29:
            v12 = 0;
            goto LABEL_12;
          }
          v12 = 1;
        }
LABEL_12:
        LODWORD(v22[0]) = v12;
        v13 = operator new(0x30u);
        v14 = v5[1];
        *(_QWORD *)(v13 + 32) = *v5;
        *(_QWORD *)(v13 + 40) = v14;
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
LABEL_13:
        v3 = (_QWORD *)std::_Rb_tree_increment();
        v15 = v5 + 2;
        if ( (_QWORD *)v6 != v5 + 2 )
        {
          while ( 1 )
          {
            v5 = v15;
            if ( *v15 != -1 && *v15 != -2 )
              break;
            v15 += 2;
            if ( (_QWORD *)v6 == v15 )
              goto LABEL_2;
          }
          if ( (_QWORD *)v6 != v15 )
            continue;
        }
        break;
      }
    }
  }
LABEL_2:
  *(_QWORD *)&v22[0] = v3;
  return _mm_loadh_ps(v22).m128_u64[0];
}

