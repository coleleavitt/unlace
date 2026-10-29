/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F12E4
// Address: 0x00000000000F12E4

//----- (00000000000F12E4) ----------------------------------------------------
__int64 *sub_F12E4()
{
  __int64 *result; // x0

  result = &qword_168FE0[4];
  if ( dword_169584 )
  {
    dword_169584 = 0;
    return (__int64 *)pthread_key_delete(dword_169580);
  }
  return result;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 169580: using guessed type int dword_169580;
// 169584: using guessed type int dword_169584;
