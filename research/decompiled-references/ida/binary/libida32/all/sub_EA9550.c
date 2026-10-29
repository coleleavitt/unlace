__int64 __fastcall sub_EA9550(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __m128i si128; // xmm1
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10[3]; // [rsp+10h] [rbp-38h] BYREF

  v5 = (unsigned int)a2[16];
  if ( (unsigned int)v5 <= 0x26 && (v6 = 0x4001000001LL, _bittest64(&v6, v5)) )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    return a1;
  }
  else
  {
    sub_EA8BB0((__int64)&v9, a2, a3, a4);
    if ( v9.m128i_i32[0] == 1 || a2[21] == 3 )
    {
      si128 = _mm_load_si128(v10);
      *(__m128i *)a1 = _mm_load_si128(&v9);
      *(__m128i *)(a1 + 16) = si128;
      return a1;
    }
    else
    {
      sub_C79AE0(a1, (__int64)&v9, (__int64)a3, a2[22]);
      return a1;
    }
  }
}

