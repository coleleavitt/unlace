__int64 __fastcall sub_B8A810(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rax

  result = a1[14];
  if ( !result )
  {
    v7 = a1[15];
    if ( !v7 )
    {
      sub_A557A0((__int64 *)(a1[12] + 88), a1[12], a3, a4, a5, a6);
      v7 = a1[15];
    }
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 && (v9 = *v8) != 0 )
    {
      return *(_QWORD *)(v9 + 112);
    }
    else
    {
      v10 = a1[12];
      while ( 1 )
      {
        v11 = sub_A557A0((__int64 *)(v10 + 88), v10, a3, a4, a5, a6);
        v10 = (__int64)v11;
        if ( !v11 )
          break;
        result = v11[14];
        if ( result || (*(_BYTE *)(v10 + 88) & 3) != 0 )
          return result;
      }
      return 0;
    }
  }
  return result;
}

