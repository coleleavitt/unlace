/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C78C0
// Address: 0x080C78C0

//----- (080C78C0) --------------------------------------------------------
unsigned int __cdecl sub_80C78C0(unsigned int a1, int a2)
{
  unsigned int result; // eax
  int v3; // [esp-10h] [ebp-18h]
  int v4; // [esp-Ch] [ebp-14h]
  int v5; // [esp-8h] [ebp-10h]

  if ( a1 > 3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(480, v3, v4, v5);
    BUG();
  }
  result = __readgsdword(0) - 132;
  *(_DWORD *)(result + 4 * a1) = a2;
  return result;
}
// 80C7909: variable 'v3' is possibly undefined
// 80C7909: variable 'v4' is possibly undefined
// 80C7909: variable 'v5' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
