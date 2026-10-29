/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428F00
// Address: 0x00428F00

//----- (00428F00) --------------------------------------------------------
int __stdcall sub_428F00(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  int i; // edi
  LPVOID v6; // eax

  if ( !a1 || *(_DWORD *)(a1 + 8) )
    return -1;
  v1 = dword_4B6BD4;
  sub_4562D0(dword_4B6BD4);
  v2 = dword_4B6BDC;
  v3 = 0;
  v4 = dword_4B6BD8;
  if ( dword_4B6BDC <= 0 )
  {
LABEL_6:
    for ( i = 0; i < dword_4B6BDC; ++i )
    {
      if ( !*(_DWORD *)(dword_4B6BD8 + 4 * i) )
        break;
    }
    if ( i == dword_4B6BDC )
    {
      if ( dword_4B6BDC + 1 > (unsigned int)dword_4B6BE0 )
      {
        v6 = sub_453B00((int)&dword_4B6BD8, (void *)dword_4B6BD8, dword_4B6BDC + 1, 4u);
        v2 = dword_4B6BDC;
        v4 = (int)v6;
        dword_4B6BD8 = (int)v6;
      }
      dword_4B6BDC = v2 + 1;
      *(_DWORD *)(v4 + 4 * v2) = a1;
    }
    else
    {
      *(_DWORD *)(dword_4B6BD8 + 4 * i) = a1;
    }
    nullsub_1(0);
  }
  else
  {
    while ( *(_DWORD *)(dword_4B6BD8 + 4 * v3) != a1 )
    {
      if ( ++v3 >= dword_4B6BDC )
        goto LABEL_6;
    }
    i = -1;
  }
  sub_4562F0(v1);
  return i;
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 4B6BD8: using guessed type int dword_4B6BD8;
// 4B6BDC: using guessed type int dword_4B6BDC;
// 4B6BE0: using guessed type int dword_4B6BE0;
