__int64 __fastcall sub_1BD9C70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r15
  const __m128i *v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // r15
  _QWORD *v19; // r12
  _QWORD *v20; // r14
  _QWORD *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v29[16]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-D8h]
  __int64 v31; // [rsp+20h] [rbp-D0h]
  __int64 v32; // [rsp+28h] [rbp-C8h]
  __int64 v33; // [rsp+38h] [rbp-B8h]
  __int64 v34; // [rsp+40h] [rbp-B0h]
  void *v35[2]; // [rsp+48h] [rbp-A8h]
  __int64 v36; // [rsp+58h] [rbp-98h]
  __int64 v37; // [rsp+60h] [rbp-90h]
  char (__fastcall *v38)(__int64, __int64, __int64, unsigned int, __int64, __int64); // [rsp+68h] [rbp-88h]
  __int16 v39; // [rsp+70h] [rbp-80h]

  v7 = *(_QWORD *)a1;
  v8 = (const __m128i *)v29;
  v38 = sub_19E7200;
  v9 = *(unsigned int *)(a1 + 8);
  v30 = 0;
  v10 = v9 + 1;
  v31 = 0;
  *(_OWORD *)v35 = 0;
  v11 = v7 + 168 * v9;
  v12 = *(unsigned int *)(a1 + 12);
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v39 &= 0xFC03u;
  if ( v10 > v12 )
  {
    if ( v7 > (unsigned __int64)v29 || v11 <= (unsigned __int64)v29 )
    {
      sub_1BD93E0(a1, v10);
      v11 = *(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8);
    }
    else
    {
      sub_1BD93E0(a1, v10);
      v8 = (const __m128i *)&v29[*(_QWORD *)a1 - v7];
      v11 = *(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8);
    }
  }
  *(_QWORD *)v11 = v8->m128i_i64[0];
  *(_QWORD *)(v11 + 8) = v8->m128i_i64[1];
  *(_QWORD *)(v11 + 16) = v8[1].m128i_i64[0];
  *(_QWORD *)(v11 + 24) = v8[1].m128i_i64[1];
  *(_QWORD *)(v11 + 32) = v8[2].m128i_i64[0];
  *(_QWORD *)(v11 + 40) = v8[2].m128i_i64[1];
  v13 = _mm_loadu_si128(v8 + 3);
  *(_QWORD *)(v11 + 72) = 0;
  *(__m128i *)(v11 + 48) = v13;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 64) = v8[4].m128i_i64[0];
  v14 = v8[4].m128i_i64[1];
  v8[4].m128i_i64[0] = 0;
  v15 = *(_QWORD *)(v11 + 72);
  *(_QWORD *)(v11 + 72) = v14;
  v16 = v8[5].m128i_i64[0];
  v8[4].m128i_i64[1] = v15;
  v17 = *(_QWORD *)(v11 + 80);
  *(_QWORD *)(v11 + 80) = v16;
  v8[5].m128i_i64[0] = v17;
  *(_DWORD *)(v11 + 88) = v8[5].m128i_i32[2];
  *(_DWORD *)(v11 + 92) = v8[5].m128i_i32[3];
  *(_QWORD *)(v11 + 96) = v8[6].m128i_i64[0];
  LOBYTE(v17) = v8[6].m128i_i8[8] & 1 | *(_BYTE *)(v11 + 104) & 0xFE;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 2 | v17 & 0xFD;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 4 | v17 & 0xFB;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 8 | v17 & 0xF7;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 0x10 | v17 & 0xEF;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 0x20 | v17 & 0xDF;
  *(_BYTE *)(v11 + 104) = v17;
  LOBYTE(v17) = v8[6].m128i_i8[8] & 0x40 | v17 & 0xBF;
  *(_BYTE *)(v11 + 104) = v17;
  *(_BYTE *)(v11 + 104) = v8[6].m128i_i8[8] & 0x80 | v17 & 0x7F;
  *(_BYTE *)(v11 + 105) = v8[6].m128i_i8[9] & 3 | *(_BYTE *)(v11 + 105) & 0xFC;
  *(_DWORD *)(v11 + 104) = v8[6].m128i_i32[2] & 0x3FC00 | *(_DWORD *)(v11 + 104) & 0xFFFC03FF;
  *(_DWORD *)(v11 + 108) = v8[6].m128i_i32[3];
  *(__m128i *)(v11 + 112) = _mm_loadu_si128(v8 + 7);
  *(__m128i *)(v11 + 128) = _mm_loadu_si128(v8 + 8);
  *(__m128i *)(v11 + 144) = _mm_loadu_si128(v8 + 9);
  v18 = v35[0];
  v19 = v35[1];
  *(_QWORD *)(v11 + 160) = v8[10].m128i_i64[0];
  v20 = v18;
  ++*(_DWORD *)(a1 + 8);
  if ( v19 != v18 )
  {
    do
    {
      while ( 1 )
      {
        v21 = (_QWORD *)v20[3];
        if ( v21 == v20 + 5 )
          break;
        operator delete(v21);
        v20 += 8;
        if ( v19 == v20 )
          goto LABEL_5;
      }
      v20 += 8;
    }
    while ( v19 != v20 );
  }
LABEL_5:
  if ( v18 )
    operator delete(v18);
  v22 = *(_QWORD *)a1 + 168LL * *(unsigned int *)(a1 + 8) - 168;
  v23 = a3;
  if ( !a4 )
  {
    v25 = *(_DWORD *)(a1 + 2988);
    a4 = a2;
    if ( 152 * a2 > 4864 - v25 )
    {
      v23 = sub_9C3B30((__int64 *)(a1 + 2872), 152LL * a2, 3u);
    }
    else
    {
      *(_DWORD *)(a1 + 2988) = v25 + 152 * a2;
      v23 = a1 + v25 + 2992;
    }
    if ( a2 )
    {
      v26 = v23;
      do
      {
        v27 = *(_QWORD *)(v26 + 16);
        *(_DWORD *)v26 = 6;
        v26 += 152;
        *(_QWORD *)(v26 - 144) = 0;
        *(_QWORD *)(v26 - 96) = 0;
        *(_QWORD *)(v26 - 136) = v27 & 0xFFFFF80400000000LL | 0x2000000000LL;
      }
      while ( v23 + 152 * (a2 - 1 + 1LL) != v26 );
    }
  }
  *(_QWORD *)(v22 + 48) = v23;
  *(_QWORD *)(v22 + 56) = a4;
  return v22;
}
