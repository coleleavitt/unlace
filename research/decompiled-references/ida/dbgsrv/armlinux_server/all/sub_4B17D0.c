/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B17D0
// Address: 0x00000000004B17D0

//----- (00000000004B17D0) ----------------------------------------------------
size_t __fastcall sub_4B17D0(__int64 *a1, _BYTE *dest, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // x3
  size_t v6; // x3
  size_t v7; // x19
  __int64 v8; // x0

  v5 = a1[1];
  if ( a4 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v5);
  v6 = v5 - a4;
  if ( v6 > a3 )
    v7 = a3;
  else
    v7 = v6;
  if ( !v7 )
    return v7;
  v8 = *a1;
  if ( v7 != 1 )
  {
    memcpy(dest, (const void *)(v8 + a4), v7);
    return v7;
  }
  *dest = *(_BYTE *)(v8 + a4);
  return 1;
}
