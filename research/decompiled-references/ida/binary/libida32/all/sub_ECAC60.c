__int64 __fastcall sub_ECAC60(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  if ( a3 )
  {
    _BitScanReverse64(&v3, a3);
    LODWORD(v3) = v3 ^ 0x3F;
    v4 = 1LL << (63 - (unsigned __int8)v3);
    v5 = (unsigned int)(63 - v3);
    v6 = -v4;
  }
  else
  {
    v6 = 0;
    v4 = 0;
    v5 = 0xFFFFFFFFLL;
  }
  v7 = a2[294];
  a2[304] += a1;
  result = v6 & (v7 + v4 - 1);
  if ( a2[295] < (unsigned __int64)(a1 + result) || !v7 )
    return sub_962430((__int64)(a2 + 294), a1, a1, (unsigned int)v5, v6, v5);
  a2[294] = a1 + result;
  return result;
}

