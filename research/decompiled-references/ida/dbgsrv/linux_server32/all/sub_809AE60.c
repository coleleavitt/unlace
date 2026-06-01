/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809AE60
// Address: 0x0809AE60

//----- (0809AE60) --------------------------------------------------------
int __cdecl sub_809AE60(int a1)
{
  int v1; // ebx
  int v3; // [esp-14h] [ebp-18h]
  int v4; // [esp-10h] [ebp-14h]
  int v5; // [esp-Ch] [ebp-10h]

  if ( *(_BYTE *)(a1 + 404) )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(302, v3, v4, v5);
    BUG();
  }
  v1 = *(_DWORD *)(a1 + 372);
  *(_DWORD *)(a1 + 372) = 0;
  sub_809A780(a1, 0, 0);
  return v1;
}
// 809AEB7: variable 'v3' is possibly undefined
// 809AEB7: variable 'v4' is possibly undefined
// 809AEB7: variable 'v5' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
