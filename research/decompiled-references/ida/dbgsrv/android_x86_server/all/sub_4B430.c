/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B430
// Address: 0x0004B430

//----- (0004B430) --------------------------------------------------------
int __cdecl sub_4B430(int a1, char *s)
{
  int v3; // [esp+14h] [ebp-28h]
  int v4[9]; // [esp+18h] [ebp-24h] BYREF

  v4[4] = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 4);
  sub_1B530((int)v4, s);
  sub_2DAC0(a1, (char *)v4);
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree((void *)v4[0]);
    v4[0] = 0;
    v4[2] = 0;
  }
  return v3;
}
