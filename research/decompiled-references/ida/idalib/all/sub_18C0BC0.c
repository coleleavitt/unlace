__int64 __fastcall sub_18C0BC0(__int64 a1, const __m128i *a2, char a3)
{
  __int64 v3; // rax
  bool v4; // zf
  unsigned int v5; // eax
  __int8 v6; // al
  __int64 result; // rax
  __m128i v8; // xmm0
  char v9; // [rsp+Ch] [rbp-1Ch]

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a2[2].m128i_i32[0];
  v3 = a2[2].m128i_i64[1];
  *(_BYTE *)(a1 + 40) = 0;
  v4 = a2[4].m128i_i8[0] == 0;
  *(_QWORD *)(a1 + 16) = v3;
  if ( !v4 )
  {
    v5 = a2[3].m128i_u32[2];
    *(_DWORD *)(a1 + 32) = v5;
    if ( v5 > 0x40 )
    {
      v9 = a3;
      sub_2205510(a1 + 24);
      a3 = v9;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = a2[3].m128i_i64[0];
    }
    v6 = a2[3].m128i_i8[12];
    *(_BYTE *)(a1 + 40) = 1;
    *(_BYTE *)(a1 + 36) = v6;
  }
  *(_BYTE *)(a1 + 48) = a2[4].m128i_i8[8];
  result = a2[4].m128i_u8[9];
  *(_BYTE *)(a1 + 49) = result;
  v8 = _mm_loadu_si128(a2 + 5);
  *(_BYTE *)(a1 + 72) = a3;
  *(__m128i *)(a1 + 56) = v8;
  return result;
}
