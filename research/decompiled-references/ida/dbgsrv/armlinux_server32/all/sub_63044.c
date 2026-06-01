/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63044
// Address: 0x00063044

//----- (00063044) --------------------------------------------------------
void __fastcall sub_63044(char **a1, int a2, char **a3, unsigned __int8 **a4)
{
  unsigned int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r6
  unsigned int v10; // r1
  unsigned __int8 *v11; // r3
  void *v12; // r0
  unsigned int v13; // r12
  int v14; // r2
  unsigned int v15; // r0
  unsigned int v16; // r2
  unsigned int v17; // r6
  unsigned __int8 *v18; // r1
  void *v19; // r0
  unsigned int v20; // r2
  _BOOL4 v21; // r3
  char *v22; // r0
  char *v23; // r0

  sub_62E14(a1, 1, (int)a4);
  v7 = sub_762E4(a4, (unsigned int)a4[1]);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = v7;
  if ( v7 > v8 )
  {
    v22 = *(char **)a2;
    if ( v9 > *(_DWORD *)(a2 + 8) )
    {
      v22 = (char *)sub_78018(a2, *(void **)a2, v9, 1u);
      v8 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)a2 = v22;
    }
    memset(&v22[v8], 0, v9 - v8);
    *(_DWORD *)(a2 + 4) = v9;
  }
  else if ( v7 < v8 )
  {
    *(_DWORD *)(a2 + 4) = v7;
  }
  v10 = (unsigned int)a4[1];
  v11 = *a4;
  v12 = *(void **)a2;
  v13 = (unsigned int)&(*a4)[v9];
  v14 = __CFADD__(*a4, v9);
  if ( v10 < v13 )
    v14 |= 1u;
  if ( !v14 )
  {
    *a4 = (unsigned __int8 *)v13;
    memcpy(v12, v11, v9);
    v10 = (unsigned int)a4[1];
  }
  *(_DWORD *)(a2 + 12) = sub_763AC(a4, v10) - 1;
  v15 = sub_762E4(a4, (unsigned int)a4[1]);
  v16 = *(_DWORD *)(a2 + 20);
  v17 = v15;
  if ( v15 > v16 )
  {
    v23 = *(char **)(a2 + 16);
    if ( v17 > *(_DWORD *)(a2 + 24) )
    {
      v23 = (char *)sub_78018(a2 + 16, *(void **)(a2 + 16), v17, 1u);
      v16 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 16) = v23;
    }
    memset(&v23[v16], 0, v17 - v16);
    *(_DWORD *)(a2 + 20) = v17;
  }
  else if ( v15 < v16 )
  {
    *(_DWORD *)(a2 + 20) = v15;
  }
  v18 = *a4;
  v19 = *(void **)(a2 + 16);
  v20 = (unsigned int)&(*a4)[v17];
  v21 = (unsigned int)*a4 > v20;
  if ( (unsigned int)a4[1] < v20 )
    v21 = 1;
  if ( !v21 )
  {
    *a4 = (unsigned __int8 *)v20;
    memcpy(v19, v18, v17);
  }
  if ( a3 )
    sub_62E14(a3, 0, (int)a4);
}
