/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE9C0
// Address: 0x080CE9C0

//----- (080CE9C0) --------------------------------------------------------
int __cdecl sub_80CE9C0(int a1, char a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v6; // [esp+0h] [ebp-20h]

  if ( a3 == 2 )
    return sub_80CE930(a1, a3);
  if ( (a2 & 3) != 0 )
  {
    v6 = 2;
  }
  else
  {
    if ( a3 == 1 )
      return sub_80CE930(a1, a3);
    v6 = 1;
  }
  v3 = 11;
  while ( sub_80CE930(a1, v6) )
  {
    if ( !--v3 )
      return -1;
    v4 = *__errno_location();
    if ( v4 != 11 && v4 != 4 )
      return -1;
    sub_80D01A0(10);
  }
  return sub_80CE930(a1, a3);
}
