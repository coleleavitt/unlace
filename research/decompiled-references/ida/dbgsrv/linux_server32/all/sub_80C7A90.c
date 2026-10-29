/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7A90
// Address: 0x080C7A90

//----- (080C7A90) --------------------------------------------------------
int __cdecl sub_80C7A90(unsigned int a1)
{
  int v2; // [esp-10h] [ebp-18h]
  int v3; // [esp-Ch] [ebp-14h]
  int v4; // [esp-8h] [ebp-10h]

  if ( a1 > 3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(482, v2, v3, v4);
    BUG();
  }
  return *(_DWORD *)(__readgsdword(0) - 132 + 4 * a1);
}
// 80C7AD5: variable 'v2' is possibly undefined
// 80C7AD5: variable 'v3' is possibly undefined
// 80C7AD5: variable 'v4' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
