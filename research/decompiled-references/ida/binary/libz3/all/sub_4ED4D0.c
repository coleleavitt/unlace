__int64 __fastcall sub_4ED4D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  unsigned int v4; // r13d
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( v3 >= *(_DWORD *)(v2 - 4) )
        break;
      v5 = *(_QWORD *)(v2 + 8LL * v3);
      if ( (unsigned __int8)sub_1673B10(a1 + 48, v5) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL);
        if ( *(_BYTE *)(v6 + 8) )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v4 += *(_DWORD *)v6;
      }
      else if ( v5 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 840LL) )
      {
        ++v4;
      }
      else
      {
        if ( !(unsigned __int8)sub_16256D0(a1 + 72, v5, v9) )
        {
          sub_1872CE0("");
          sub_1873130(114, 284);
        }
        if ( v9[0] )
        {
          _BitScanReverse64(&v8, v9[0]);
          v4 = v4 + 64 - (v8 ^ 0x3F);
        }
      }
      v2 = *a2;
      ++v3;
    }
    while ( *a2 );
  }
  else
  {
    return 0;
  }
  return v4;
}

