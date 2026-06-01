/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ED02
// Address: 0x0004ED02

//----- (0004ED02) --------------------------------------------------------
int __fastcall sub_4ED02(int a1, int a2)
{
  int *v3; // r6
  void **v4; // r7
  FILE **v5; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int result; // r0
  int v12; // [sp+18h] [bp-8h]

  if ( a2 )
    sub_4E710(a1, 0, 0);
  v3 = (int *)(a1 + 132);
  if ( *(_DWORD *)(a1 + 132) )
  {
    v4 = (void **)(a1 + 144);
    v5 = (FILE **)(a1 + 140);
    while ( 1 )
    {
      if ( *v5 )
        qfclose(*v5);
      qfree(*v4);
      *v4 = nullptr;
      v12 = *v3;
      v6 = *v3 - 1;
      v7 = *(_DWORD *)(a1 + 128) + 24 * v6;
      *(_DWORD *)(a1 + 140) = *(_DWORD *)(v7 + 4);
      *(_DWORD *)(a1 + 148) = *(_DWORD *)(v7 + 16);
      v4 = (void **)(a1 + 144);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)v7;
      *(_BYTE *)(a1 + 68) = *(_BYTE *)(v7 + 20);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(v7 + 12);
      if ( !v12 )
        break;
      *v3 = v6;
      v5 = (FILE **)(a1 + 140);
      if ( !v6 )
        goto LABEL_12;
    }
    v5 = (FILE **)(a1 + 140);
  }
  else
  {
    v5 = (FILE **)(a1 + 140);
    v4 = (void **)(a1 + 144);
  }
LABEL_12:
  qfree(*v4);
  *v4 = nullptr;
  if ( *v5 )
    qfclose(*v5);
  *v5 = nullptr;
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 148) = -1;
  while ( 1 )
  {
    result = *(_DWORD *)(a1 + 32);
    if ( !result )
      break;
    v8 = result - 1;
    v9 = *(_DWORD *)(a1 + 28) + 28 * (result - 1);
    *(_DWORD *)a1 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v9 + 16);
    v10 = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(a1 + 32) = v8;
    *(_DWORD *)(a1 + 40) = v10;
    sub_1B3BC((char **)v9);
  }
  return result;
}
