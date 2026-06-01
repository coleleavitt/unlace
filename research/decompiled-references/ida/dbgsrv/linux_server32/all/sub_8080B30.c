/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080B30
// Address: 0x08080B30

//----- (08080B30) --------------------------------------------------------
bool __cdecl sub_8080B30(int a1, char *a2, unsigned __int8 *a3)
{
  int v3; // eax

  v3 = a1;
  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      v3 = sub_8080B10(*(char **)(a1 + 4));
    else
      v3 = sub_8080B10((char *)&dword_80DDFD8);
  }
  return sub_808C1E0(v3, a2, a3, 0) == 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
