/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AAA0
// Address: 0x000000000040AAA0

//----- (000000000040AAA0) ----------------------------------------------------
__int64 __fastcall sub_40AAA0(__int64 result)
{
  unsigned int v1; // [xsp+1Ch] [xbp-4h]

  if ( dword_51F73C != -1 )
  {
    if ( !dword_51F73C )
      return result;
    return ptrace(PTRACE_SETOPTIONS, (unsigned int)result, 0, 8);
  }
  v1 = result;
  sub_40A748();
  result = v1;
  if ( dword_51F73C )
    return ptrace(PTRACE_SETOPTIONS, (unsigned int)result, 0, 8);
  return result;
}
// 51F73C: using guessed type int dword_51F73C;
