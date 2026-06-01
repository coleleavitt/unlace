__int64 __fastcall sub_11E4900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v7; // r15d
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int32 v11; // edx
  __int32 v12; // edx
  __m128i v14; // xmm3
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __m128i v16; // [rsp+10h] [rbp-58h] BYREF
  __m128i v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  v16 = 0;
  sub_22578D0(&v16, a5, a6, a4, a5, a6);
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)a1 = 4;
  v9 = _mm_load_si128(&v16);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 48) = 1;
  v15 = v9;
  sub_2257830(&v16, &v15);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 80;
  if ( (__m128i *)v16.m128i_i64[0] == v17 )
  {
    *(__m128i *)(a1 + 80) = _mm_load_si128(v17);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = v16.m128i_i64[0];
    *(_QWORD *)(a1 + 80) = v17[0].m128i_i64[0];
  }
  v10 = v16.m128i_i64[1];
  v11 = v15.m128i_i32[3];
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 72) = v10;
  LODWORD(v10) = v15.m128i_i32[2] | v15.m128i_i32[1];
  v12 = v15.m128i_i32[0] | v11 & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 184) = 0;
  if ( v10 & 0x7FFFFFFF | (unsigned int)v12 )
  {
    if ( *(_BYTE *)(a1 + 44) )
    {
      *(__m128i *)(a1 + 28) = _mm_load_si128(&v15);
    }
    else
    {
      v14 = _mm_load_si128(&v15);
      *(_BYTE *)(a1 + 44) = 1;
      *(__m128i *)(a1 + 28) = v14;
    }
  }
  if ( a7 )
    *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = a3;
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}
