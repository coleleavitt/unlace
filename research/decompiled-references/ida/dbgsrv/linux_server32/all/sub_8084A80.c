/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084A80
// Address: 0x08084A80

//----- (08084A80) --------------------------------------------------------
int __cdecl sub_8084A80(_DWORD *a1, int a2)
{
  int v2; // eax
  int v4; // [esp-18h] [ebp-18h]
  int v5; // [esp-14h] [ebp-14h]
  int v6; // [esp-10h] [ebp-10h]

  v2 = a2 + a1[13];
  if ( v2 < 0 || (unsigned int)v2 >= a1[4] )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(286, v4, v5, v6);
    JUMPOUT(0x804DF4A);
  }
  return a1[3] + 20 * v2;
}
// 8084AB8: control flows out of bounds to 804DF4A
// 8084AC8: variable 'v4' is possibly undefined
// 8084AC8: variable 'v5' is possibly undefined
// 8084AC8: variable 'v6' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
