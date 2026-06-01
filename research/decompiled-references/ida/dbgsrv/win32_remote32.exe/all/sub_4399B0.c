/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4399B0
// Address: 0x004399B0

//----- (004399B0) --------------------------------------------------------
int __cdecl sub_4399B0(unsigned int a1, unsigned int a2)
{
  CHAR *v2; // eax
  int v3; // esi
  CHAR *v5; // [esp+8h] [ebp-18h] BYREF
  int v6; // [esp+Ch] [ebp-14h]
  int v7; // [esp+1Ch] [ebp-4h]

  if ( a1 > a2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1833);
  }
  sub_41BB70(&v5, a1, a2 - a1);
  v2 = (CHAR *)MultiByteStr;
  v7 = 0;
  if ( v6 )
    v2 = v5;
  v3 = sub_45A380(v2);
  v7 = 1;
  if ( v5 )
  {
    v6 = 0;
    sub_453A20(v5);
  }
  return v3;
}
// 4B70F0: using guessed type char byte_4B70F0;
