/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_799D0
// Address: 0x000799D0

//----- (000799D0) --------------------------------------------------------
int __fastcall sub_799D0(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0

  v2 = getsid(0);
  if ( v2 == -1 )
    return 0;
  v3 = v2;
  v4 = tcgetsid(a1);
  if ( v4 == -1 )
    return 0;
  if ( v3 == v4 )
    return 1;
  return 2;
}
// 14698: using guessed type int __fastcall getsid(_DWORD);
// 146EC: using guessed type int __fastcall tcgetsid(_DWORD);
