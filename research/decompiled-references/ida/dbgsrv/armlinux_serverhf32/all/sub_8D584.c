/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D584
// Address: 0x0008D584

//----- (0008D584) --------------------------------------------------------
int __fastcall sub_8D584(int a1, char *s, int a3)
{
  unsigned int v6; // r5

  v6 = strlen(s);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_8C1A0((_DWORD *)a1, *(_DWORD *)(a3 + 4) + v6);
  if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 4) < v6 )
    sub_83AE4("basic_string::append");
  sub_8CD2C((_DWORD *)a1, s, v6);
  sub_8CD2C((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
