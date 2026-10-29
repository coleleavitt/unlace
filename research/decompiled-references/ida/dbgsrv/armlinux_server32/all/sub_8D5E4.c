/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D5E4
// Address: 0x0008D5E4

//----- (0008D5E4) --------------------------------------------------------
int __fastcall sub_8D5E4(int a1, char *s)
{
  size_t v3; // r5
  size_t v5; // r0
  size_t v6; // r2
  size_t v7; // r4
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v5 = strlen(s);
  v6 = v5;
  if ( v5 >= v3 )
    v6 = v3;
  v7 = v5;
  if ( !v6 )
    return v3 - v7;
  result = memcmp(*(const void **)a1, s, v6);
  if ( !result )
    return v3 - v7;
  return result;
}
