/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcalloc
// Address: 0x00000000000BE2E4

//----- (00000000000BE2E4) ----------------------------------------------------
signed __int64 __fastcall qcalloc(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 result; // x0

  result = a2 * a1;
  if ( result )
  {
    if ( a1 && a2 && 0xFFFFFFFFFFFFFFFFLL / a2 < a1 || result == 3735928559LL || result <= 0 )
    {
      *(_DWORD *)__errno(result) = 12;
      set_qerrno(1u);
    }
    else
    {
      result = (signed __int64)calloc(result, 1u);
      if ( result )
        return result;
    }
    set_qerrno(1u);
    return 0;
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
