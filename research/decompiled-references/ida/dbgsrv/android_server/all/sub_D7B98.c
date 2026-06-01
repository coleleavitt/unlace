/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7B98
// Address: 0x00000000000D7B98

//----- (00000000000D7B98) ----------------------------------------------------
void *__fastcall sub_D7B98(size_t a1, size_t a2)
{
  void *v4; // x19
  size_t v5; // x20
  unsigned __int16 *v6; // x0

  v4 = calloc(a1, a2);
  if ( !v4 )
  {
    v5 = a2 * a1;
    v6 = sub_D7AA0(v5);
    v4 = v6;
    if ( v6 )
      memset(v6, 0, v5);
  }
  return v4;
}
