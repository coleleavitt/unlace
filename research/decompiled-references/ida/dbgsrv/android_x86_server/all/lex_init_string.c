/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_string
// Address: 0x0006A840

//----- (0006A840) --------------------------------------------------------
int __cdecl lex_init_string(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax

  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    if ( !v6 )
      break;
    v3 = *(_DWORD *)(a1 + 28);
    v4 = v6 - 1;
    v5 = v6 + 27 * (v6 - 1) - 1;
    *(_DWORD *)a1 = *(_DWORD *)(v3 + v5 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v3 + v5 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v3 + v5 + 24);
    *(_DWORD *)(a1 + 32) = v4;
    sub_1BC40((char **)(v3 + v5));
  }
  *(_DWORD *)(a1 + 104) = sub_6A9E0;
  *(_DWORD *)(a1 + 108) = a1 + 112;
  *(_DWORD *)(a1 + 112) = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  if ( a3 )
  {
    sub_6A690(a1);
    *(_DWORD *)(a1 + 248) = a3;
    *(_BYTE *)(a1 + 272) = 1;
  }
  return 0;
}
