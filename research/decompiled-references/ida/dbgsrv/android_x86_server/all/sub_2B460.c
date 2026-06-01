/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B460
// Address: 0x0002B460

//----- (0002B460) --------------------------------------------------------
bool __cdecl sub_2B460(_DWORD *a1)
{
  bool result; // al
  _BYTE v2[48]; // [esp+0h] [ebp-5Ch] BYREF
  int v3; // [esp+30h] [ebp-2Ch]
  unsigned int v4; // [esp+48h] [ebp-14h]

  v4 = __readgsdword(0x14u);
  result = 1;
  if ( (a1[24] & 0xFFFFFFF) == 5 )
  {
    if ( ptrace(PTRACE_GETREGS, a1[21], 0, v2) )
    {
      return 0;
    }
    else
    {
      if ( a1[22] == v3 - 1 )
        v3 = a1[22];
      return ptrace(PTRACE_SETREGS, a1[21], 0, v2) == 0;
    }
  }
  return result;
}
