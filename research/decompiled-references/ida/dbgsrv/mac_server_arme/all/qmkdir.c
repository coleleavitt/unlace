/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmkdir
// Address: 0x00000001000739C4

//----- (00000001000739C4) ----------------------------------------------------
__int64 __fastcall qmkdir(const char *a1, mode_t a2)
{
  __int64 result; // x0
  __int64 v3; // x19

  result = mkdir(a1, a2);
  if ( (_DWORD)result == -1 )
  {
    v3 = result;
    set_qerrno();
    return v3;
  }
  return result;
}
