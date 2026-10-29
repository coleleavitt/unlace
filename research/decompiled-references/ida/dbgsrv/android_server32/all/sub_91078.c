/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91078
// Address: 0x00091078

//----- (00091078) --------------------------------------------------------
void *__fastcall sub_91078(size_t a1, size_t a2)
{
  void *v4; // r4
  int v5; // r5
  int *v6; // r0

  v4 = calloc(a1, a2);
  if ( !v4 )
  {
    v5 = a2 * a1;
    v6 = sub_90FB8(v5);
    if ( v6 )
    {
      v4 = v6;
      memset(v6, 0, v5);
    }
    else
    {
      return nullptr;
    }
  }
  return v4;
}
