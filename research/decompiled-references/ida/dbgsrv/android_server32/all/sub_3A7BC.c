/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A7BC
// Address: 0x0003A7BC

//----- (0003A7BC) --------------------------------------------------------
int __fastcall sub_3A7BC(_DWORD *a1)
{
  int v2; // r1
  int *v3; // r7
  void **v4; // r5
  void *v5; // r0
  int v6; // r1
  int *v7; // r7
  void **v8; // r5
  void *v9; // r0
  unsigned int v10; // r0
  int v11; // r1
  int *v12; // r5
  int v13; // r6
  void **v14; // r4
  void *v15; // r0

  v2 = a1[37];
  v3 = a1 + 37;
  v4 = (void **)(a1 + 36);
  if ( a1[38] >= (unsigned int)(v2 + 1) )
  {
    v5 = *v4;
  }
  else
  {
    v5 = qvector_reserve((int)(a1 + 36), *v4, v2 + 1, 4u);
    *v4 = v5;
    v2 = *v3;
  }
  *((_DWORD *)v5 + v2) = -1;
  ++*v3;
  v6 = a1[40];
  v7 = a1 + 40;
  v8 = (void **)(a1 + 39);
  if ( a1[41] >= (unsigned int)(v6 + 1) )
  {
    v9 = *v8;
  }
  else
  {
    v9 = qvector_reserve((int)(a1 + 39), *v8, v6 + 1, 4u);
    *v8 = v9;
    v6 = *v7;
  }
  *((_DWORD *)v9 + v6) = -1;
  ++*v7;
  v10 = a1[44];
  v11 = a1[43];
  v12 = a1 + 43;
  v13 = a1[29];
  v14 = (void **)(a1 + 42);
  if ( v10 >= v11 + 1 )
  {
    v15 = *v14;
  }
  else
  {
    v15 = qvector_reserve((int)v14, *v14, v11 + 1, 4u);
    *v14 = v15;
    v11 = *v12;
  }
  *((_DWORD *)v15 + v11) = v13;
  ++*v12;
  return 0;
}
