__int64 __fastcall sub_D0F90(__int64 a1, int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdx

  if ( !a1 )
    return -1;
  result = *(_QWORD *)(a1 + 32LL * a2 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v3 = qword_252758;
      if ( qword_252758 )
      {
        *((_QWORD *)qword_252758 + 1) = a1;
        v3[4] = a2;
        *(_QWORD *)v3 = result;
        if ( (unsigned int)sub_CDCF0((__int64)v3, 11) == 1 )
          return *(_QWORD *)qword_252758;
        else
          return -1;
      }
    }
  }
  return result;
}

