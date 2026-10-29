__int64 __fastcall sub_206DE10(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  _QWORD *v3; // r9
  _QWORD *v4; // rsi
  unsigned __int64 **v5; // r10
  __int64 v7; // r11
  _QWORD *v8; // r9
  _QWORD *v9; // [rsp+8h] [rbp-10h] BYREF

  LOBYTE(v1) = sub_206DBB0(a1);
  v2 = v1;
  if ( !(_BYTE)v1 )
    return v2;
  v3 = *(_QWORD **)(a1 + 24);
  v4 = *(_QWORD **)(a1 + 16);
  if ( (unsigned int)(v3 - v4) )
  {
    v9 = *(_QWORD **)(a1 + 16);
    if ( v3 != v4 )
    {
      if ( (unsigned __int64)(*v4 - 4096LL) > 5 )
        return v2;
      v5 = &v9;
      if ( ((1LL << *(_BYTE *)v4) & 0x25) == 0 )
        return v2;
      while ( 1 )
      {
        v4 += (unsigned int)sub_206DAF0(v5);
        v9 = v4;
        if ( v8 == v4 )
          break;
        if ( (unsigned __int64)(*v4 - 4096LL) > 5 )
          return v2;
        if ( ((v7 << *(_BYTE *)v4) & 0x25) == 0 )
          return v2;
      }
    }
  }
  return 0;
}
