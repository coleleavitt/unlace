__int64 __fastcall sub_4ED1A0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (unsigned __int8)sub_1673B10(a1 + 48, a2) )
  {
    v2 = *(_BYTE **)(*(_QWORD *)(a2 + 24) + 8LL);
    if ( v2[8] )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    return *(unsigned int *)v2;
  }
  else
  {
    result = 1;
    if ( a2 != *(_QWORD *)(*(_QWORD *)(a1 + 40) + 840LL) )
    {
      if ( !(unsigned __int8)sub_16256D0(a1 + 72, a2, v5) )
      {
        sub_1872CE0("");
        sub_1873130(114, 284);
      }
      if ( v5[0] )
      {
        _BitScanReverse64(&v4, v5[0]);
        return (unsigned int)(v4 + 1);
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

