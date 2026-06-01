/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61DF8
// Address: 0x00061DF8

//----- (00061DF8) --------------------------------------------------------
int __fastcall sub_61DF8(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r4
  int v4; // r3
  unsigned int *v5; // r0
  int v6; // r4

  if ( !a2 || (v3 = a3, *a2 != 3) )
  {
    v4 = *(_DWORD *)(a1 + 8) - 1;
    if ( v4 < 0 )
    {
LABEL_12:
      v6 = 0;
      qlseek((int)a2, a3, 0);
      return v6;
    }
    v5 = (unsigned int *)(*(_DWORD *)(a1 + 4) + 16 * v4);
    while ( *v5 > a3 || v5[1] <= a3 )
    {
      v5 -= 4;
      if ( --v4 < 0 )
        goto LABEL_12;
    }
    v3 = a3 - *v5 + v5[2];
  }
  if ( v3 == -1 )
    goto LABEL_12;
  qlseek((int)a2, (unsigned int)v3, 0);
  return 1;
}
