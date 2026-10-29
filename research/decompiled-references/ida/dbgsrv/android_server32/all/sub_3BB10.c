/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BB10
// Address: 0x0003BB10

//----- (0003BB10) --------------------------------------------------------
int __fastcall sub_3BB10(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  char *v4; // r1
  int v5; // r1
  int *v6; // r6
  void **v7; // r5
  int v8; // r7
  void *v9; // r0
  unsigned int v10; // r0
  int v11; // r1
  int *v12; // r5
  void **v13; // r4
  void *v14; // r0

  v2 = *(_DWORD **)(a1[48] + 4 * a1[49] - 4);
  if ( *v2 == 1 )
  {
    v3 = v2[2];
    if ( *(_DWORD *)(v3 + 4) )
      v4 = *(char **)v3;
    else
      v4 = &byte_B3CBE;
  }
  else
  {
    v4 = &byte_A0742;
  }
  sub_3BBC0((int)(a1 + 23), v4);
  v5 = a1[37];
  v6 = a1 + 37;
  v7 = (void **)(a1 + 36);
  v8 = a1[29];
  if ( a1[38] >= (unsigned int)(v5 + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = qvector_reserve((int)(a1 + 36), *v7, v5 + 1, 4u);
    *v7 = v9;
    v5 = *v6;
  }
  *((_DWORD *)v9 + v5) = v8;
  ++*v6;
  v10 = a1[47];
  v11 = a1[46];
  v12 = a1 + 46;
  v13 = (void **)(a1 + 45);
  if ( v10 >= v11 + 1 )
  {
    v14 = *v13;
  }
  else
  {
    v14 = qvector_reserve((int)v13, *v13, v11 + 1, 2u);
    *v13 = v14;
    v11 = *v12;
  }
  *((_WORD *)v14 + v11) = 0;
  ++*v12;
  return 0;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
