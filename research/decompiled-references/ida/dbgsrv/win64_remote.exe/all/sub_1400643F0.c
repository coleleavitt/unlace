/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400643F0
// Address: 0x00000001400643F0

//----- (00000001400643F0) ----------------------------------------------------
__int64 __fastcall sub_1400643F0(FILE *a1)
{
  unsigned int v2; // ebx

  if ( a1 )
  {
    v2 = fclose(a1);
    if ( v2 )
      sub_1400640B0(1u);
    return v2;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 9;
    sub_1400640B0(1u);
    return 0xFFFFFFFFLL;
  }
}
