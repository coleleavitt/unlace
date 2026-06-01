__int64 __fastcall sub_6794C0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rbx
  unsigned int v17; // r13d
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 *v22; // rbx
  __int64 v23; // rsi
  __int64 *v24; // rbx
  __int64 *v25; // rdx
  __int64 *v26; // r12

  v8 = sub_ACED50(*(_QWORD *)(a2 + 40));
  v9 = *(_QWORD *)(a2 + 40);
  v10 = (__int64 *)(v8 + 8LL * *(unsigned int *)(v9 + 4));
  v11 = sub_ACED50(v9);
  if ( v10 == (__int64 *)v11 )
  {
LABEL_7:
    v19 = *(unsigned int **)(a2 + 40);
    v20 = 2LL * *v19;
    v21 = (__int64)&v19[v20 + 4];
    v22 = (__int64 *)(v19 + 4);
    if ( v20 * 4 )
    {
      while ( (unsigned __int8)sub_675FE0(a1, *v22, a3, a4, a5, a6, v12, v13, v14, v15) )
      {
        if ( (__int64 *)v21 == ++v22 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v23 = 0;
      if ( (unsigned __int8)sub_79B790(a2) )
        v23 = sub_79AC10(a2);
      v17 = sub_66F3A0(a1, v23, a3, a4, a5, a6);
      if ( (_BYTE)v17 )
      {
        v24 = (__int64 *)sub_6434A0(a2);
        v26 = v25;
        if ( v24 == v25 )
          return v17;
        while ( (unsigned __int8)sub_6777E0(a1, *v24, a3, a4, a5, a6) )
        {
          if ( v26 == ++v24 )
            return v17;
        }
      }
    }
  }
  else
  {
    v16 = (__int64 *)v11;
    while ( (unsigned __int8)sub_672CC0(a1, *v16, a3, a4, a5, a6) )
    {
      if ( v10 == ++v16 )
        goto LABEL_7;
    }
  }
  return 0;
}

