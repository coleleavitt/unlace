/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30ACC
// Address: 0x00030ACC

//----- (00030ACC) --------------------------------------------------------
int __fastcall sub_30ACC(int a1, int a2)
{
  _DWORD *v2; // r3
  unsigned int v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int v6; // r2
  int v7; // r3
  _DWORD *v8; // r6
  unsigned __int64 v9; // r4
  int v10; // r7
  int v11; // r0

  v2 = *(_DWORD **)(a1 + 12);
  if ( !v2 )
    return 1;
  v3 = *(_DWORD *)(a2 + 60);
  v4 = (_DWORD *)(a1 + 8);
  v5 = v4;
  do
  {
    v6 = v2[4];
    if ( v6 < v3 )
      v2 = (_DWORD *)v2[3];
    else
      v5 = v2;
    if ( v6 >= v3 )
      v2 = (_DWORD *)v2[2];
  }
  while ( v2 );
  if ( v4 == v5 )
    return 1;
  if ( v3 < v5[4] )
    return 1;
  v7 = v5[8];
  v8 = v5 + 6;
  if ( (_DWORD *)v7 == v5 + 6 )
    return 1;
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 < *(_QWORD *)(v7 + 16) )
    return 1;
  do
  {
    v10 = *(_DWORD *)(v7 + 24);
    v11 = sub_81478(v7);
    v7 = v11;
  }
  while ( v8 != (_DWORD *)v11 && v9 >= *(_QWORD *)(v11 + 16) );
  return v10;
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
