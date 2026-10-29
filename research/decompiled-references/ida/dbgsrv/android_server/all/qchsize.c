/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qchsize
// Address: 0x00000000000BD114

//----- (00000000000BD114) ----------------------------------------------------
__int64 __fastcall qchsize(int a1, __off_t a2)
{
  __int64 result; // x0

  result = ftruncate(a1, a2);
  if ( (_DWORD)result )
  {
    set_qerrno(1u);
    return 0xFFFFFFFFLL;
  }
  return result;
}
