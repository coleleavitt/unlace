__int64 __fastcall sub_11E3F60(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int32 v8; // edx
  __int32 v9; // edx
  __int64 result; // rax
  __m128i v11; // xmm1
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128i v14[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 48) = 1;
  v12.m128i_i64[0] = a4;
  v12.m128i_i64[1] = a5;
  sub_2257830(v13, &v12);
  *(_QWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  if ( (__m128i *)v13[0] == v14 )
  {
    *(__m128i *)(a1 + 80) = _mm_load_si128(v14);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = v13[0];
    *(_QWORD *)(a1 + 80) = v14[0].m128i_i64[0];
  }
  v7 = v13[1];
  v8 = v12.m128i_i32[3];
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 72) = v7;
  LODWORD(v7) = v12.m128i_i32[2] | v12.m128i_i32[1];
  v9 = v12.m128i_i32[0] | v8 & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 112) = 0;
  result = v7 & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 184) = 0;
  if ( (unsigned int)result | v9 )
  {
    if ( *(_BYTE *)(a1 + 44) )
    {
      *(__m128i *)(a1 + 28) = _mm_load_si128(&v12);
    }
    else
    {
      v11 = _mm_load_si128(&v12);
      *(_BYTE *)(a1 + 44) = 1;
      *(__m128i *)(a1 + 28) = v11;
    }
  }
  return result;
}
