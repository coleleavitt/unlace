unsigned __int64 __fastcall sub_EF4A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // edi
  __int16 v11; // si
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __int64 v14; // r9
  __int64 v15; // r12
  unsigned int v16; // edx
  __int64 v17; // r12
  __int64 v18; // rbp
  __m128i v19; // xmm3
  __m128i v20; // xmm6
  __m128i v21; // xmm7
  int v22; // eax
  __m128i v23; // xmm5
  __int16 v24; // r15
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rdx
  __m128i v29; // xmm0
  int v30; // edx
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __int64 v33; // rbp
  unsigned __int64 v35; // [rsp+0h] [rbp-D8h]
  int v36; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v37; // [rsp+8h] [rbp-D0h]
  __m128i v38; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  __m128i v42; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-88h] BYREF
  __int64 v44; // [rsp+58h] [rbp-80h]
  __m128i v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+70h] [rbp-68h]
  __m128i v47; // [rsp+78h] [rbp-60h]
  int v48; // [rsp+88h] [rbp-50h]
  __int16 v49; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+98h] [rbp-40h]

  v3 = a2;
  v50 = __readfsqword(0x28u);
  v38.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 64 )
  {
    v35 = (__int64)(a2 - a1) >> 6;
    v6 = (__int64)(v35 - 2) / 2;
    v7 = a1 + (v6 << 6);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 32);
      *(_QWORD *)(v7 + 8) = 0;
      v10 = *(_DWORD *)(v7 + 56);
      v11 = *(_WORD *)(v7 + 60);
      *(_QWORD *)(v7 + 32) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 16));
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 40));
      v44 = v8;
      v14 = *(_QWORD *)v7;
      v46 = v9;
      v48 = v10;
      v49 = v11;
      *(_OWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 40) = 0;
      v43 = v14;
      v45 = v12;
      v47 = v13;
      sub_BC160(a1, v6, v35, (__int64 *)&v43);
      v15 = v44;
      if ( v46 )
        qfree();
      if ( v15 )
        qfree();
      v7 -= 64;
      if ( !v6 )
        break;
      --v6;
    }
  }
  v40 = v38.m128i_i64[0] >> 6;
  while ( v3 < a3 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)v3;
      if ( *(_DWORD *)a1 >= *(_DWORD *)v3 && (v16 != *(_DWORD *)a1 || *(_DWORD *)(v3 + 4) < *(_DWORD *)(a1 + 4)) )
      {
        v17 = *(_QWORD *)(v3 + 8);
        v18 = *(_QWORD *)(v3 + 32);
        v19 = _mm_cvtsi32_si128(v16);
        *(_QWORD *)(v3 + 8) = 0;
        v20 = _mm_loadu_si128((const __m128i *)(v3 + 16));
        v21 = _mm_loadu_si128((const __m128i *)(v3 + 40));
        *(_OWORD *)(v3 + 16) = 0;
        v22 = *(_DWORD *)(v3 + 56);
        *(_OWORD *)(v3 + 40) = 0;
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(v3 + 4));
        v24 = *(_WORD *)(v3 + 60);
        *(_QWORD *)(v3 + 32) = 0;
        v36 = v22;
        *(_QWORD *)v3 = *(_QWORD *)a1;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v27 = *(_QWORD *)(v3 + 8);
        v37 = _mm_unpacklo_epi32(v19, v23).m128i_u64[0];
        v38 = v20;
        v39 = v21;
        if ( v27 )
        {
          *(_QWORD *)(v3 + 16) = 0;
          v41 = v25;
          v42 = v26;
          qfree();
          v26 = _mm_load_si128(&v42);
          v25 = v41;
        }
        *(_QWORD *)(v3 + 8) = v25;
        *(__m128i *)(v3 + 16) = v26;
        v28 = *(_QWORD *)(a1 + 32);
        v29 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        if ( *(_QWORD *)(v3 + 32) )
        {
          *(_QWORD *)(v3 + 40) = 0;
          v41 = v28;
          v42 = v29;
          qfree();
          v29 = _mm_load_si128(&v42);
          v28 = v41;
        }
        *(_QWORD *)(v3 + 32) = v28;
        *(__m128i *)(v3 + 40) = v29;
        v30 = *(_DWORD *)(a1 + 56);
        v31 = _mm_load_si128(&v38);
        v43 = v37;
        v32 = _mm_load_si128(&v39);
        *(_DWORD *)(v3 + 56) = v30;
        LOBYTE(v30) = *(_BYTE *)(a1 + 60);
        v46 = v18;
        *(_BYTE *)(v3 + 60) = v30;
        LOBYTE(v30) = *(_BYTE *)(a1 + 61);
        v48 = v36;
        *(_BYTE *)(v3 + 61) = v30;
        v49 = v24;
        v44 = v17;
        v45 = v31;
        v47 = v32;
        sub_BC160(a1, 0, v40, (__int64 *)&v43);
        v33 = v44;
        if ( v46 )
          qfree();
        if ( v33 )
          break;
      }
      v3 += 64LL;
      if ( v3 >= a3 )
        return v50 - __readfsqword(0x28u);
    }
    v3 += 64LL;
    qfree();
  }
  return v50 - __readfsqword(0x28u);
}

