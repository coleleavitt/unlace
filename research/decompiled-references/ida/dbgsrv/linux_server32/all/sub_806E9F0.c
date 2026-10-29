/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806E9F0
// Address: 0x0806E9F0

//----- (0806E9F0) --------------------------------------------------------
int __cdecl sub_806E9F0(int a1, __m128i **a2, _DWORD *a3)
{
  int result; // eax
  __int64 v4; // [esp-8h] [ebp-14h]

  if ( !a3 )
    return 0;
  result = 0;
  if ( (*(_DWORD *)(a1 + 140) != 0) + *(_DWORD *)(a1 + 144) > 0 )
  {
    if ( *(_QWORD *)(a1 + 156) )
    {
      HIDWORD(v4) = *a3;
      LODWORD(v4) = a1 + 140;
      return sub_806E910(*(_DWORD *)(a1 + 132), a2, v4);
    }
  }
  return result;
}
