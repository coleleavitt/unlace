/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9A20
// Address: 0x080B9A20

//----- (080B9A20) --------------------------------------------------------
void *__cdecl sub_80B9A20(char **a1, char *s)
{
  size_t v2; // eax
  char *v3; // eax
  _BYTE v5[5]; // [esp+1h] [ebp-25h] BYREF
  unsigned int v6[8]; // [esp+6h] [ebp-20h] BYREF

  v6[0] = __readgsdword(0x14u);
  v2 = sub_80CDC90(v5, (unsigned int)v6, *((_DWORD *)s + 1)) - v5;
  if ( v2 )
    sub_80B7DF0(v2, a1, v5);
  v3 = (char *)&dword_80DDFD8;
  if ( *((_DWORD *)s + 3) )
    v3 = *((char **)s + 2);
  if ( v6[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return sub_80A6780(a1, v3);
}
// 80DDFD8: using guessed type int dword_80DDFD8;
