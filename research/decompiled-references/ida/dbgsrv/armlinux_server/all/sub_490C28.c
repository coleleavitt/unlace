/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490C28
// Address: 0x0000000000490C28

//----- (0000000000490C28) ----------------------------------------------------
__int64 __fastcall sub_490C28(FILE *a1)
{
  int v2; // w0
  int v3; // w0
  __int64 result; // x0

  if ( a1 )
  {
    if ( fflush(a1) || (v2 = fileno(a1), v3 = dup(v2), v3 == -1) || (result = close(v3), (_DWORD)result) )
    {
      sub_4869C8(1);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    sub_4869C8(1);
    *__errno_location() = 9;
    sub_4869C8(1);
    return 1;
  }
  return result;
}
