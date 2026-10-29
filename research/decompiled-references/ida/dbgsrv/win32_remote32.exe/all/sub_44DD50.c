/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DD50
// Address: 0x0044DD50

//----- (0044DD50) --------------------------------------------------------
int *__cdecl sub_44DD50(int *a1, char a2)
{
  char *v2; // eax
  int v3; // ecx
  int v4; // ecx

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (char *)sub_453B00((int)a1, nullptr, 5u, 1u);
  v3 = a1[1];
  *a1 = (int)v2;
  sub_464890((__m128i *)&v2[v3], 0, 5 - v3);
  v4 = *a1;
  a1[1] = 5;
  *(_DWORD *)v4 = 0;
  *(_BYTE *)(v4 + 4) = a2;
  return a1;
}
