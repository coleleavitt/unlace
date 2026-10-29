__int64 __fastcall ZSTD_DCtx_setMaxWindowSize(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  unsigned __int64 v4; // rsi
  char v5; // rdx^4
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  ZSTD_dParam_getBounds(100);
  v4 = 1LL << v3;
  v6 = 1LL << v5;
  result = -60;
  if ( !*(_DWORD *)(a1 + 30236) )
  {
    if ( v4 > a2 || v6 < a2 )
    {
      return -42;
    }
    else
    {
      *(_QWORD *)(a1 + 30264) = a2;
      return 0;
    }
  }
  return result;
}

