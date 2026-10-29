/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_579BC
// Address: 0x000579BC

//----- (000579BC) --------------------------------------------------------
int __fastcall sub_579BC(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  unsigned int v6; // r5
  int v8; // r5

  if ( a2 && *a2 == 3 )
  {
    v8 = a3;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8);
    v4 = v3 - 1;
    if ( v3 - 1 < 0 )
    {
LABEL_8:
      sub_74D98((int)a2, a3, 0);
      return 0;
    }
    v5 = *(_DWORD *)(a1 + 4) + 16 * v3;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 - 16);
      --v4;
      if ( a3 >= v6 && a3 < *(_DWORD *)(v5 - 12) )
        break;
      v5 -= 16;
      if ( v4 == -1 )
        goto LABEL_8;
    }
    v8 = a3 - v6 + *(_DWORD *)(v5 - 8);
  }
  if ( v8 == -1 )
    goto LABEL_8;
  sub_74D98((int)a2, (unsigned int)v8, 0);
  return 1;
}
