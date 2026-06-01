__int64 __fastcall sub_D0DD0(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx

  nullsub_99();
  v2 = dword_24411C;
  v3 = *(_QWORD *)(a1 + 32LL * dword_24411C + 8);
  v4 = v3;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v5 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = v3;
        v5[1] = a1;
        *((_DWORD *)v5 + 4) = v2;
        v4 = -1;
        if ( (unsigned int)sub_CC780((__int64)v5, 11) == 1 )
          v4 = *(_DWORD *)qword_2515B0;
      }
    }
  }
  dword_244128 = v4;
  result = sub_D0800(v4);
  if ( dword_251408 )
  {
    result = qword_251410;
    v7 = qword_251410 + 232 * xmmword_251418;
    if ( qword_251410 != v7 )
    {
      while ( dword_251408 != *(_DWORD *)result )
      {
        result += 232;
        if ( v7 == result )
          return result;
      }
      if ( result )
      {
        result = sub_D0B80(*(_QWORD *)(result + 40), 0);
        dword_244120 = result;
      }
    }
  }
  return result;
}

