/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81F48
// Address: 0x00081F48

//----- (00081F48) --------------------------------------------------------
int __fastcall sub_81F48(int *a1, unsigned int a2, unsigned int a3, char *s)
{
  int v5; // r7
  unsigned int v6; // r4
  unsigned int v7; // r4
  size_t v9; // r0
  size_t v10; // r2
  size_t v11; // r6
  int result; // r0

  v5 = *a1;
  v6 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v6 )
    sub_83B6C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_DWORD *)(*a1 - 12));
  v7 = v6 - a2;
  if ( v7 >= a3 )
    v7 = a3;
  v9 = strlen(s);
  v10 = v9;
  if ( v9 >= v7 )
    v10 = v7;
  v11 = v9;
  if ( !v10 )
    return v7 - v11;
  result = memcmp((const void *)(v5 + a2), s, v10);
  if ( !result )
    return v7 - v11;
  return result;
}
