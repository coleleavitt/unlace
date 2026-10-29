__int16 __fastcall sub_2049690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // dl
  unsigned __int64 v11; // rax
  __int16 result; // ax

  v6 = *a1;
  v7 = 0;
  if ( *a1 )
  {
    if ( *(_DWORD *)(v6 + 8) > 1u )
    {
      v8 = *(_QWORD *)(v6 + 56);
      if ( v8 )
      {
        sub_2049440(v8, 87);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( v11 )
          {
            _BitScanReverse64(&v11, v11);
            v7 = 1;
            a6 = 63 - (v11 ^ 0x3F);
          }
        }
      }
    }
  }
  LOBYTE(result) = a6;
  HIBYTE(result) = v7;
  return result;
}
