/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0BA0
// Address: 0x00000000004A0BA0

//----- (00000000004A0BA0) ----------------------------------------------------
size_t __fastcall sub_4A0BA0(__int64 *a1, _BYTE *dest, size_t a3, unsigned __int64 a4)
{
  __int64 v5; // x5
  unsigned __int64 v6; // x3
  size_t v7; // x3
  size_t v8; // x19

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( a4 > v6 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v6);
  v7 = v6 - a4;
  if ( v7 > a3 )
    v8 = a3;
  else
    v8 = v7;
  if ( !v8 )
    return v8;
  if ( v8 != 1 )
  {
    memcpy(dest, (const void *)(v5 + a4), v8);
    return v8;
  }
  *dest = *(_BYTE *)(v5 + a4);
  return 1;
}
