/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401B0
// Address: 0x000401B0

//----- (000401B0) --------------------------------------------------------
unsigned int __cdecl sub_401B0(int a1, _BYTE *a2)
{
  char v2; // al
  unsigned int v3; // ecx

  if ( a2 && *a2 == 36 && a2[1] && ((v2 = a2[2], v2 == 46) || !v2) && (v3 = (char)a2[1] - 97, v3 <= 0x17) )
    return (0x88802Bu >> v3) & 1;
  else
    return 0;
}
