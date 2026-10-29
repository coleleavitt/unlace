__int64 __fastcall sub_CE400(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdi
  int v5; // edx

  result = a1;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v4 = qword_252758;
      if ( qword_252758 )
      {
        *((_QWORD *)qword_252758 + 1) = a2;
        v4[4] = a3;
        *(_QWORD *)v4 = result;
        v5 = sub_CDCF0((__int64)v4, 11);
        result = -1;
        if ( v5 == 1 )
          return *(_QWORD *)qword_252758;
      }
    }
  }
  return result;
}

