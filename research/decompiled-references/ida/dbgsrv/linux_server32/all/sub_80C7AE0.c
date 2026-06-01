/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7AE0
// Address: 0x080C7AE0

//----- (080C7AE0) --------------------------------------------------------
int __cdecl sub_80C7AE0(unsigned int a1)
{
  int v2; // [esp-10h] [ebp-18h]
  int v3; // [esp-Ch] [ebp-14h]
  int v4; // [esp-8h] [ebp-10h]

  if ( a1 > 3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(483, v2, v3, v4);
    BUG();
  }
  return *(_DWORD *)(__readgsdword(0) - 132 + 12 * a1 + 16);
}
// 80C7B29: variable 'v2' is possibly undefined
// 80C7B29: variable 'v3' is possibly undefined
// 80C7B29: variable 'v4' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
