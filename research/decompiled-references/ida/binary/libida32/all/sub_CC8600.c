__int64 __fastcall sub_CC8600(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rsi
  unsigned int v12; // edx

  result = a8;
  *(_BYTE *)(a2 + 24) = 0;
  v9 = *(_DWORD *)(a8 + 20);
  if ( v9 != -1 )
  {
    v10 = *(_DWORD *)(a8 + 16);
    result = v9 / v10;
    if ( v10 <= v9 )
    {
      v11 = a2 + 32;
      v12 = 0;
      do
      {
        ++v12;
        *(_DWORD *)(v11 + 8) = 0;
        *(_QWORD *)v11 = 0;
        v11 += 24;
        *(_BYTE *)(v11 - 12) = 1;
        *(_WORD *)(v11 - 8) = 0;
        *(_WORD *)(v11 - 6) = 0;
      }
      while ( (unsigned int)result > v12 );
    }
  }
  return result;
}

