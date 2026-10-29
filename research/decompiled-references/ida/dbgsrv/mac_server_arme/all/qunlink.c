/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qunlink
// Address: 0x0000000100073E18

//----- (0000000100073E18) ----------------------------------------------------
__int64 __fastcall qunlink(const char *a1)
{
  __int64 result; // x0
  __int64 v2; // x19

  result = unlink(a1);
  if ( (_DWORD)result )
  {
    v2 = result;
    set_qerrno();
    return v2;
  }
  return result;
}
