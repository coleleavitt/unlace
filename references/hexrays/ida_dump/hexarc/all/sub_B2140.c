__int64 __fastcall sub_B2140(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 i; // r15
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbp
  unsigned int *v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned int *v15; // r15
  __int64 v16; // rdi
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // [rsp+8h] [rbp-60h]
  int v21; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-48h]

  v24 = a3 & 1;
  v23 = (a3 - 1) / 2;
  if ( a2 >= v23 )
  {
    v12 = (unsigned int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_28;
    v11 = a2;
    if ( a2 != (a3 - 2) / 2 )
      goto LABEL_28;
    goto LABEL_30;
  }
  for ( i = a2; ; i = v11 )
  {
    v11 = 2 * (i + 1);
    v12 = (unsigned int *)(a1 + 8 * (i + 1));
    v20 = *(v12 - 1);
    if ( sub_329800(a5, *v12) != *(_QWORD *)(a5 + 56) || (v8 = 1000, *(_DWORD *)(a5 + 76) != 4) )
      v8 = ((__int64 (*)(void))sub_16EB80)();
    v9 = sub_329800(a5, v20);
    if ( v9 != *(_QWORD *)(a5 + 56) || (v10 = 1000, *(_DWORD *)(a5 + 76) != 4) )
      v10 = sub_16EB80(v9);
    if ( v10 > v8 )
    {
      --v11;
      v12 = (unsigned int *)(a1 + 4 * v11);
    }
    *(_DWORD *)(a1 + 4 * i) = *v12;
    if ( v11 >= v23 )
      break;
  }
  if ( !v24 && (a3 - 2) / 2 == v11 )
  {
LABEL_30:
    v18 = 2 * v11 + 2;
    v19 = *(_DWORD *)(a1 + 4 * v18 - 4);
    v11 = v18 - 1;
    *v12 = v19;
    v12 = (unsigned int *)(a1 + 4 * v11);
  }
  v13 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v15 = (unsigned int *)(a1 + 4 * v13);
      v16 = sub_329800(a5, *v15);
      if ( v16 != *(_QWORD *)(a5 + 56) || (v21 = 1000, *(_DWORD *)(a5 + 76) != 4) )
        v21 = sub_16EB80(v16);
      v14 = sub_329800(a5, a4);
      if ( v14 == *(_QWORD *)(a5 + 56) && *(_DWORD *)(a5 + 76) == 4 )
      {
        v12 = (unsigned int *)(a1 + 4 * v11);
        if ( v21 >= 1000 )
          goto LABEL_28;
      }
      else
      {
        v12 = (unsigned int *)(a1 + 4 * v11);
        if ( (int)sub_16EB80(v14) <= v21 )
          goto LABEL_28;
      }
      v11 = v13;
      *v12 = *v15;
      if ( a2 >= v13 )
        break;
      v13 = (v13 - 1) / 2;
    }
    v12 = (unsigned int *)(a1 + 4 * v13);
  }
LABEL_28:
  *v12 = a4;
  return a4;
}
