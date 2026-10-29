/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_820B8
// Address: 0x000820B8

//----- (000820B8) --------------------------------------------------------
int __fastcall sub_820B8(const void **a1, char *s)
{
  _DWORD *v3; // r6
  size_t v4; // r5
  size_t v5; // r2
  size_t v6; // r4
  int result; // r0

  v3 = *a1;
  v4 = *((_DWORD *)*a1 - 3);
  v5 = strlen(s);
  v6 = v5;
  if ( v5 >= v4 )
    v5 = *(v3 - 3);
  if ( !v5 )
    return v4 - v6;
  result = memcmp(v3, s, v5);
  if ( !result )
    return v4 - v6;
  return result;
}
