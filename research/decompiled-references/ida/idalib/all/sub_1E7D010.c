__int64 __fastcall sub_1E7D010(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 i; // r14
  __int64 v8; // r15
  int *v9; // r13
  __int64 v10; // rbp
  int *v11; // r14
  int v13; // eax
  __int64 v15; // [rsp+10h] [rbp-48h]

  v6 = (a3 - 1) / 2;
  v15 = a3 & 1;
  if ( a2 >= v6 )
  {
    v8 = a2;
    v9 = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
LABEL_15:
    if ( (a3 - 2) / 2 == v8 )
    {
      v13 = *(_DWORD *)(a1 + 4 * (2 * v8 + 2) - 4);
      v8 = 2 * v8 + 1;
      *v9 = v13;
      v9 = (int *)(a1 + 4 * v8);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v8 )
  {
    v8 = 2 * (i + 1);
    v9 = (int *)(a1 + 8 * (i + 1));
    if ( !sub_10246C0(a5, *v9, *(v9 - 1)) )
      break;
    --v8;
    v9 = (int *)(a1 + 4 * v8);
    *(_DWORD *)(a1 + 4 * i) = *v9;
    if ( v8 >= v6 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  *(_DWORD *)(a1 + 4 * i) = *v9;
  if ( v8 < v6 )
    goto LABEL_4;
LABEL_7:
  if ( !v15 )
    goto LABEL_15;
LABEL_8:
  v10 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v11 = (int *)(a1 + 4 * v10);
      v9 = (int *)(a1 + 4 * v8);
      if ( !sub_10246C0(a5, *v11, a4) )
        break;
      v8 = v10;
      *v9 = *v11;
      if ( a2 >= v10 )
      {
        v9 = (int *)(a1 + 4 * v10);
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *v9 = a4;
  return a4;
}
