__int16 __fastcall sub_20496E0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // dl
  unsigned __int64 v12; // rax
  __int16 result; // ax

  v6 = *a1;
  v7 = 0;
  if ( *a1 )
  {
    v8 = (unsigned int)(a2 + 2);
    if ( (unsigned int)v8 < *(_DWORD *)(v6 + 8) )
    {
      v9 = *(_QWORD *)(v6 + 8 * v8 + 48);
      if ( v9 )
      {
        sub_2049440(v9, 87);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v10 + 16);
          if ( v12 )
          {
            _BitScanReverse64(&v12, v12);
            v7 = 1;
            a6 = 63 - (v12 ^ 0x3F);
          }
        }
      }
    }
  }
  LOBYTE(result) = a6;
  HIBYTE(result) = v7;
  return result;
}
