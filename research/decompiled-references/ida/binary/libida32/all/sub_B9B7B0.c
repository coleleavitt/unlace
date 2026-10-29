unsigned __int64 __fastcall sub_B9B7B0(_QWORD *a1, __int64 a2, int a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r15
  int v6; // r14d
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int16 v13; // ax
  const __m128i *v14; // rbp
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  char v18; // al
  __int64 v20; // [rsp+8h] [rbp-40h]

  v5 = a4;
  v6 = a5;
  v8 = 24 * a5;
  v9 = sub_B6C590(40, a1, a2, 24 * a5);
  *(_QWORD *)v9 = off_2BD8B30;
  if ( a2
    && (v10 = sub_B68470(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) != 0)
    && (*(char *)(v10 + 29) >= 0 || (v20 = *(_QWORD *)(v10 + 8) & 7LL, v18 = sub_B688D0(v10), v11 = v20, v18)) )
  {
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(v9 + 8) = v12;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v9 + 24) = a3;
  *(_WORD *)(v9 + 28) = 24660;
  v13 = sub_B68380(84);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(84);
  v14 = (const __m128i *)((char *)a4 + v8);
  *(_DWORD *)(v9 + 36) = v6;
  *(_QWORD *)v9 = &off_2BDA3D0;
  v15 = v9 + 40;
  if ( v14 != a4 )
  {
    do
    {
      v16 = _mm_loadu_si128(v5);
      v5 = (const __m128i *)((char *)v5 + 24);
      v15 += 24LL;
      *(__m128i *)(v15 - 24) = v16;
      *(_QWORD *)(v15 - 8) = v5[-1].m128i_i64[1];
    }
    while ( v14 != v5 );
  }
  return v9;
}

