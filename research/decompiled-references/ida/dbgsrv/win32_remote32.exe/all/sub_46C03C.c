/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C03C
// Address: 0x0046C03C

//----- (0046C03C) --------------------------------------------------------
int __cdecl sub_46C03C(char a1)
{
  int result; // eax
  int *v2[3]; // [esp+0h] [ebp-20h] BYREF
  int v3; // [esp+Ch] [ebp-14h] BYREF
  int v4; // [esp+10h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-8h] BYREF

  v6 = 0;
  v5 = 0;
  v2[0] = &v6;
  v2[1] = (int *)&a1;
  v2[2] = &v5;
  v4 = 8;
  v3 = 8;
  sub_46BF30(&v3, v2, &v4);
  result = v6;
  if ( !a1 )
    return v5;
  return result;
}
