/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47827B
// Address: 0x0047827B

//----- (0047827B) --------------------------------------------------------
signed __int32 __cdecl sub_47827B(int a1, int a2)
{
  int v2; // eax
  signed __int32 result; // eax

  if ( *(_DWORD *)(a1 + 76) )
  {
    sub_47E8D2(*(_DWORD *)(a1 + 76));
    v2 = *(_DWORD *)(a1 + 76);
    if ( v2 != dword_4B7A54 && (wchar_t **)v2 != &off_4B6028 && !*(_DWORD *)(v2 + 12) )
      sub_47E707(*(char **)(a1 + 76));
  }
  result = a2;
  *(_DWORD *)(a1 + 76) = a2;
  if ( a2 )
    return sub_47E68A(a2);
  return result;
}
// 4B6028: using guessed type wchar_t *off_4B6028;
// 4B7A54: using guessed type int dword_4B7A54;
