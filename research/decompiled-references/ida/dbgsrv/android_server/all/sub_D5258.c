/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5258
// Address: 0x00000000000D5258

//----- (00000000000D5258) ----------------------------------------------------
__int64 __fastcall sub_D5258(int a1, FILE *stream, __int64 off, unsigned int whence)
{
  if ( whence > 2 )
    return -1;
  if ( fseek(stream, off, whence) )
    return -1;
  return 0;
}
