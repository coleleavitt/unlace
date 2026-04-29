__int64 __fastcall sub_13B10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 i; // r13
  __int64 v7; // rbx
  unsigned int *v8; // r14
  int v9; // r12d
  __int64 v10; // r13
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // [rsp+8h] [rbp-60h]
  unsigned int v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+18h] [rbp-50h]

  v14 = (a3 - 1) / 2;
  v16 = a3 & 1;
  if ( a2 >= v14 )
  {
    v8 = (unsigned int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v7 = a2;
    if ( a2 != (a3 - 2) / 2 )
      goto LABEL_13;
    goto LABEL_15;
  }
  for ( i = a2; ; i = v7 )
  {
    v7 = 2 * (i + 1);
    v8 = (unsigned int *)(a1 + 8 * (i + 1));
    v9 = *v8;
    if ( sub_86D0(208LL * *v8 + *a5, *a5 + 208LL * *(v8 - 1)) < 0 )
    {
      --v7;
      v8 = (unsigned int *)(a1 + 4 * v7);
      v9 = *v8;
    }
    *(_DWORD *)(a1 + 4 * i) = v9;
    if ( v7 >= v14 )
      break;
  }
  if ( !v16 && (a3 - 2) / 2 == v7 )
  {
LABEL_15:
    v12 = 2 * v7 + 2;
    v13 = *(_DWORD *)(a1 + 4 * v12 - 4);
    v7 = v12 - 1;
    *v8 = v13;
    v8 = (unsigned int *)(a1 + 4 * v7);
  }
  v10 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v8 = (unsigned int *)(a1 + 4 * v7);
      v15 = *(_DWORD *)(a1 + 4 * v10);
      if ( sub_86D0(208LL * v15 + *a5, *a5 + 208LL * a4) >= 0 )
        break;
      v7 = v10;
      *v8 = v15;
      if ( a2 >= v10 )
      {
        v8 = (unsigned int *)(a1 + 4 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *v8 = a4;
  return a4;
}
