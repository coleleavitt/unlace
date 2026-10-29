/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809F100
// Address: 0x0809F100

//----- (0809F100) --------------------------------------------------------
int __cdecl sub_809F100(int a1, unsigned int a2)
{
  unsigned int v2; // ecx
  int v4; // [esp-14h] [ebp-18h]
  int v5; // [esp-10h] [ebp-14h]
  int v6; // [esp-Ch] [ebp-10h]

  v2 = *(_DWORD *)(a1 + 348);
  if ( !v2 )
    sub_8058270("debmod_t::get_reginfo is not implemented");
  if ( a2 >= v2 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(3256, v4, v5, v6);
    BUG();
  }
  return *(_DWORD *)(a1 + 344) + 20 * a2;
}
// 809F15C: variable 'v4' is possibly undefined
// 809F15C: variable 'v5' is possibly undefined
// 809F15C: variable 'v6' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
