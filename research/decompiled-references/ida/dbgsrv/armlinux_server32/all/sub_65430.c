/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65430
// Address: 0x00065430

//----- (00065430) --------------------------------------------------------
_DWORD *__fastcall sub_65430(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r3
  unsigned int v4; // r6
  unsigned int v5; // r5
  _DWORD *v6; // r2
  _DWORD *v7; // r3
  char *v9; // r0
  unsigned int v10; // r2

  v2 = a1 + 164;
  sub_55568((int)a1);
  v3 = a1 + 116;
  *a1 = &off_D29D0;
  do
  {
    v3[2] = 0;
    *(_QWORD *)v3 = -4294967284LL;
    v3 += 3;
  }
  while ( v3 != v2 );
  do
  {
    v3[2] = 0;
    *v3 = 12;
    v3[1] = -1;
    v3 += 3;
  }
  while ( a1 + 212 != v3 );
  v4 = a1[64];
  a1[212] = -1;
  a1[213] = -1;
  v5 = v4 + 4;
  if ( v4 >= 0xFFFFFFFC )
  {
    a1[64] = 0x7FFFFFFF;
  }
  else if ( v4 < v5 )
  {
    v9 = (char *)a1[63];
    if ( v5 > a1[65] )
    {
      v9 = (char *)sub_78018((int)(a1 + 63), (void *)a1[63], v4 + 4, 1u);
      a1[63] = v9;
      v10 = a1[64];
    }
    else
    {
      v10 = v4;
    }
    memset(&v9[v10], 0, v5 - v10);
    a1[64] = v5;
  }
  *(_DWORD *)(a1[63] + v4) = -403701264;
  sub_54E18(a1, "linux");
  v6 = a1;
  v7 = a1;
  a1[114] = -1;
  a1[115] = -1;
  do
  {
    v7[118] = 0;
    v7[116] = 12;
    v7[117] = -1;
    v7 += 3;
  }
  while ( v7 != a1 + 48 );
  do
  {
    v6[166] = 0;
    v6[164] = 12;
    v6[165] = -1;
    v6 += 3;
  }
  while ( v7 != v6 );
  return a1;
}
// D29D0: using guessed type _UNKNOWN *off_D29D0;
