/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E9D4
// Address: 0x0047E9D4

//----- (0047E9D4) --------------------------------------------------------
int __cdecl sub_47E9D4(signed __int32 *a1, int a2)
{
  signed __int32 v2; // edi

  if ( !a2 || !a1 )
    return 0;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    sub_47E68A(a2);
    if ( v2 )
    {
      sub_47E8D2(v2);
      if ( !*(_DWORD *)(v2 + 12) && (wchar_t **)v2 != &off_4B6028 )
        sub_47E707((char *)v2);
    }
  }
  return a2;
}
// 4B6028: using guessed type wchar_t *off_4B6028;
