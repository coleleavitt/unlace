/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D4D4
// Address: 0x0008D4D4

//----- (0008D4D4) --------------------------------------------------------
int __fastcall sub_8D4D4(_DWORD *a1, unsigned int a2, unsigned int a3, char *s)
{
  unsigned int v5; // r4
  unsigned int v6; // r4
  size_t v9; // r0
  size_t v10; // r2
  size_t v11; // r6
  int result; // r0

  v5 = a1[1];
  if ( a2 > v5 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v6 = v5 - a2;
  if ( v6 >= a3 )
    v6 = a3;
  v9 = strlen(s);
  v10 = v9;
  if ( v9 >= v6 )
    v10 = v6;
  v11 = v9;
  if ( !v10 )
    return v6 - v11;
  result = memcmp((const void *)(*a1 + a2), s, v10);
  if ( !result )
    return v6 - v11;
  return result;
}
