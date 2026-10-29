void __fastcall sub_BB400(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned int v4; // eax
  __int64 *v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm3
  __int64 v8; // rdi
  __m128i v9; // xmm5
  __m128i v10; // xmm6
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __m128i v14; // xmm7
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r13
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // r13
  __m128i v21; // xmm0
  int v22; // ecx
  __int64 v23; // rdi
  __m128i v24; // xmm5
  __int64 v25; // rdi
  __m128i v26; // xmm6
  int v27; // eax
  __m128i v28; // [rsp+0h] [rbp-98h] BYREF
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+28h] [rbp-70h]
  __m128i v32; // [rsp+30h] [rbp-68h] BYREF
  __m128i v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+58h] [rbp-40h]
  __int16 v36; // [rsp+5Eh] [rbp-3Ah]

  v29 = a2;
  if ( a1 != a2 && a2 != a1 + 64 )
  {
    v3 = a1 + 128;
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 - 64);
        v5 = (__int64 *)(v3 - 64);
        v6 = v3;
        if ( *(_DWORD *)a1 >= v4 && (v4 != *(_DWORD *)a1 || *(_DWORD *)(v3 - 60) < *(_DWORD *)(a1 + 4)) )
          break;
        sub_BB200(v5);
        v3 += 64;
        if ( v29 == v6 )
          return;
      }
      v7 = _mm_cvtsi32_si128(v4);
      v8 = (__int64)v5 - a1;
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(v3 - 60));
      v10 = _mm_loadu_si128((const __m128i *)(v3 - 48));
      v11 = v3;
      v30 = *(_QWORD *)(v3 - 56);
      v12 = *(_QWORD *)(v3 - 32);
      v13 = v8 >> 6;
      v14 = _mm_loadu_si128((const __m128i *)(v3 - 24));
      *(_QWORD *)(v3 - 56) = 0;
      v31 = v12;
      LODWORD(v12) = *(_DWORD *)(v3 - 8);
      *(_QWORD *)(v3 - 32) = 0;
      v35 = v12;
      LOWORD(v12) = *(_WORD *)(v3 - 4);
      v34 = _mm_unpacklo_epi32(v7, v9).m128i_u64[0];
      v36 = v12;
      v32 = v10;
      *(_OWORD *)(v3 - 48) = 0;
      v33 = v14;
      *(_OWORD *)(v3 - 24) = 0;
      if ( v8 > 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v11 - 128);
          v16 = *(_QWORD *)(v11 - 56);
          v11 -= 64;
          v17 = *(_QWORD *)(v11 - 56);
          v18 = _mm_loadu_si128((const __m128i *)(v11 - 48));
          *(_QWORD *)(v11 - 56) = 0;
          *(_OWORD *)(v11 - 48) = 0;
          *(_QWORD *)v11 = v15;
          if ( v16 )
          {
            *(_QWORD *)(v11 + 16) = 0;
            v28 = v18;
            qfree();
            v18 = _mm_load_si128(&v28);
          }
          v19 = *(_QWORD *)(v11 + 32);
          *(_QWORD *)(v11 + 8) = v17;
          *(__m128i *)(v11 + 16) = v18;
          v20 = *(_QWORD *)(v11 - 32);
          v21 = _mm_loadu_si128((const __m128i *)(v11 - 24));
          *(_QWORD *)(v11 - 32) = 0;
          *(_OWORD *)(v11 - 24) = 0;
          if ( v19 )
          {
            *(_QWORD *)(v11 + 40) = 0;
            v28 = v21;
            qfree();
            v21 = _mm_load_si128(&v28);
          }
          v22 = *(_DWORD *)(v11 - 8);
          *(_QWORD *)(v11 + 32) = v20;
          *(__m128i *)(v11 + 40) = v21;
          *(_DWORD *)(v11 + 56) = v22;
          *(_BYTE *)(v11 + 60) = *(_BYTE *)(v11 - 4);
          *(_BYTE *)(v11 + 61) = *(_BYTE *)(v11 - 3);
          --v13;
        }
        while ( v13 );
      }
      v23 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v34;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 16) = 0;
        qfree();
      }
      v24 = _mm_load_si128(&v32);
      v25 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 8) = v30;
      *(__m128i *)(a1 + 16) = v24;
      if ( v25 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree();
      }
      v26 = _mm_load_si128(&v33);
      v3 += 64;
      *(_QWORD *)(a1 + 32) = v31;
      v27 = v35;
      *(__m128i *)(a1 + 40) = v26;
      *(_DWORD *)(a1 + 56) = v27;
      *(_WORD *)(a1 + 60) = v36;
    }
    while ( v29 != v6 );
  }
}

