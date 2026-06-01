__int64 __fastcall sub_F12C0(__int64 a1, __int64 a2, char a3)
{
  __m128i *v5; // r14
  __int64 v6; // r12
  __m128i *v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i *v10; // r12
  __int64 v11; // rdi

  if ( a3 )
  {
    v5 = *(__m128i **)a1;
    v6 = 80LL * *(_QWORD *)(a1 + 8);
    v7 = (__m128i *)(*(_QWORD *)a1 + v6);
    if ( *(__m128i **)a1 != v7 )
    {
      v8 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 4);
      if ( v8 )
      {
        _BitScanReverse64(&v9, v8);
        sub_F0680(*(_QWORD *)a1, (unsigned __int64)v7, 2LL * (int)v9);
        if ( v6 > 1280 )
        {
          v10 = v5 + 80;
          sub_BBA30(v5, v5 + 80);
          do
          {
            v11 = (__int64)v10;
            v10 += 5;
            sub_BB820(v11);
          }
          while ( v7 != v10 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_F0680(*(_QWORD *)a1, (unsigned __int64)v7, -2);
      }
      sub_BBA30(v5, v7);
    }
  }
LABEL_2:
  invalidate_dbgmem_config();
  *(_BYTE *)(a1 + 48) = 1;
  return sub_C33A0(a1, a2);
}

