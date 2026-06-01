/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_begin_cleanup
// Address: 0x0007FDF4

//----- (0007FDF4) --------------------------------------------------------
int __fastcall _cxa_begin_cleanup(_BYTE *a1)
{
  int v2; // r0
  _BYTE *v3; // r2
  int v5; // r3

  v2 = sub_80630();
  v3 = a1 - 32;
  if ( *a1 != 71
    || a1[1] != 78
    || a1[2] != 85
    || a1[3] != 67
    || a1[4] != 67
    || a1[5] != 43
    || a1[6] != 43
    || (unsigned __int8)a1[7] > 1u )
  {
    if ( *(_DWORD *)(v2 + 8) )
      sub_7FF18();
    *(_DWORD *)(v2 + 8) = v3;
    return 1;
  }
  v5 = *((_DWORD *)a1 - 1) + 1;
  *((_DWORD *)a1 - 1) = v5;
  if ( v5 != 1 )
    return 1;
  *((_DWORD *)a1 - 2) = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = v3;
  return 1;
}
