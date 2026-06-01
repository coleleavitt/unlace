int *__fastcall sub_B33D0(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  int *result; // rax
  __int64 v5; // rax

  v3 = a3;
  if ( dword_25274C <= 0 || (result = (int *)dbg, *(_DWORD *)(dbg + 16LL) != 12) )
  {
    if ( dword_252080 == -1 )
    {
      if ( dbg )
      {
        dword_252080 = *(_DWORD *)(dbg + 16LL);
        dword_252084 = *(_QWORD *)(dbg + 32LL);
        v5 = getinf();
        v3 = a3;
        qword_252008 = v5;
        byte_252088 = *(_BYTE *)(dbg + 34LL) >> 7;
      }
    }
    return sub_AEEC0(xmmword_251F20, a1, a2, v3);
  }
  return result;
}

