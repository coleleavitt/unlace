/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E060
// Address: 0x0044E060

//----- (0044E060) --------------------------------------------------------
int sub_44E060()
{
  int *v0; // esi
  __int128 v2; // [esp+0h] [ebp-14h] BYREF
  int v3; // [esp+10h] [ebp-4h] BYREF

  v2 = xmmword_48F950;
  v0 = (int *)&v2;
  do
    sub_46C5CD(*v0++, (int)dword_44E0C0);
  while ( v0 != &v3 );
  return sub_462A4C((int)sub_44E050);
}
// 44E0C0: using guessed type int dword_44E0C0[8];
// 48F950: using guessed type __int128 xmmword_48F950;
