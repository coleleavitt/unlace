/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0770
// Address: 0x00000000004B0770

//----- (00000000004B0770) ----------------------------------------------------
__int64 *__fastcall sub_4B0770(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x3
  unsigned __int64 v5; // x3
  __int64 v7; // x0

  v3 = a1[1];
  if ( a2 > v3 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v3);
  if ( a3 == -1 )
  {
    v7 = *a1;
    a1[1] = a2;
    *(_BYTE *)(v7 + a2) = 0;
    return a1;
  }
  else
  {
    if ( a3 )
    {
      v5 = v3 - a2;
      if ( v5 <= a3 )
        a3 = v5;
      sub_4AFF90(a1, a2, a3);
    }
    return a1;
  }
}
