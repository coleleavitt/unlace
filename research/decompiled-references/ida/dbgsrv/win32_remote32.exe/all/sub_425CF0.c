/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425CF0
// Address: 0x00425CF0

//----- (00425CF0) --------------------------------------------------------
bool __stdcall sub_425CF0(int a1, const char *a2, char *a3)
{
  int v3; // eax
  const char *v4; // esi
  _DWORD *v5; // eax

  v3 = a1;
  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    v4 = MultiByteStr;
    if ( *(_DWORD *)(a1 + 12) )
      v4 = *(const char **)(a1 + 8);
    v5 = sub_428030();
    v3 = sub_427A50(v5, v4);
  }
  return sub_424EF0(v3, a2, a3, 0) == 0;
}
