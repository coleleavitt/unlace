__int64 __fastcall sub_2EB940(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rcx
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp

  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      sub_15D7BC0(v10, v9);
  }
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(unsigned int *)(a1 + 688);
  *a3 = v7;
  v14 = *(__int64 **)(a1 + 680);
  v15 = *(_DWORD *)(v12 + 12);
  v16 = v13 - 1;
  v13 *= 16;
  v17 = (__int64 *)((char *)v14 + v13);
  v18 = 16LL * (v15 & v16);
  v19 = &v14[(unsigned __int64)v18 / 8];
  if ( v18 == v13 )
  {
LABEL_14:
    while ( v19 != v14 )
    {
      v22 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v15 && v12 == v22 )
        {
          v20 = v14;
          goto LABEL_23;
        }
      }
      else if ( !v22 )
      {
        break;
      }
      v14 += 2;
    }
LABEL_26:
    BUG();
  }
  v20 = &v14[(unsigned __int64)v18 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *v20;
      if ( (unsigned __int64)*v20 > 1 )
        break;
      if ( !v21 )
        goto LABEL_26;
      v20 += 2;
      if ( v17 == v20 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(v21 + 12) == v15 && v12 == v21 )
      break;
    v20 += 2;
    if ( v17 == v20 )
      goto LABEL_14;
  }
LABEL_23:
  v23 = v20[1];
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_2EB430(*a4, a4[1]);
  *a4 = v23;
  return 1;
}

