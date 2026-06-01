bool __fastcall sub_10220D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  _BYTE v10[9]; // [rsp+Fh] [rbp-9h] BYREF

  v2 = *(unsigned int *)(a1 + 520);
  v10[0] = 0;
  if ( (unsigned int)(v2 + 1) > 1 )
  {
    if ( (int)v2 < 0 )
    {
      v8 = (unsigned int)(-2 - v2);
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v2) >> 6));
      if ( _bittest64(&v9, v8) )
        v4 = sub_101F8A0(a1 + 264, (int)v8);
      else
        v4 = sub_101F930(a1, v8, v10);
      if ( v10[0] )
        return 0;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 184) + 24 * v2;
    }
    if ( v4 && *(char *)(v4 + 3) >= 0 )
    {
      v5 = *(_QWORD *)((*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      while ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( !v6 )
          break;
        v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v6 & 4) == 0 )
        {
          if ( !v5 )
            return 0;
          return *(_DWORD *)(v5 + 72) == *(_DWORD *)(a2 + 72);
        }
      }
    }
  }
  return 0;
}
