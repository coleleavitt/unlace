/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91274
// Address: 0x00091274

//----- (00091274) --------------------------------------------------------
bool __fastcall sub_91274(int a1, int a2, int a3)
{
  if ( a3 )
    return strcmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4)) == 0;
  else
    return a1 == a2;
}
