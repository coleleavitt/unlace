/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C664
// Address: 0x0003C664

//----- (0003C664) --------------------------------------------------------
bool __fastcall sub_3C664(_DWORD *a1, int a2, signed int a3)
{
  int v4; // r4
  int v5; // r1
  signed int v6; // r0
  char *v7; // r7
  char **v8; // r0
  char v10[4]; // [sp+4h] [bp-8h] BYREF

  v4 = 0;
  v10[0] = 0;
  if ( a2 < 0 )
  {
    if ( dword_DD60C <= (unsigned int)-a2 )
      return v4;
    v8 = &off_DD610[-6 * a2];
    v7 = v8[4];
    v6 = sub_41A04(v8[2], v10);
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || a1[1] <= (unsigned int)a2 )
      return v4;
    v5 = *(_DWORD *)(*a1 + 4 * a2);
    v6 = *(_DWORD *)(v5 + 12);
    v7 = *(char **)(v5 + 36);
  }
  if ( (int)&v7[a3] >= v6 )
    return v6 >= a3 || v10[0] != 0;
  return v4;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
