unsigned __int64 __fastcall sub_47C8A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rbp
  __int64 v7; // r15
  void *v8; // rcx
  void *v9; // rdx
  int v10; // edi
  __int16 v11; // si
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __int64 v14; // r9
  void *v15; // r12
  unsigned int v16; // edx
  void *v17; // r12
  void *v18; // rbp
  __m128i v19; // xmm3
  __m128i v20; // xmm6
  __m128i v21; // xmm7
  int v22; // eax
  __m128i v23; // xmm5
  __int16 v24; // r15
  __int64 v25; // rdx
  __m128i v26; // xmm0
  void *v27; // rdi
  __int64 v28; // rdx
  __m128i v29; // xmm0
  void *v30; // rdi
  int v31; // edx
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  void *v34; // rbp
  unsigned __int64 v36; // [rsp+0h] [rbp-D8h]
  int v37; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+8h] [rbp-D0h]
  __m128i v39; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v40; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-A8h]
  __int64 v42; // [rsp+38h] [rbp-A0h]
  __m128i v43; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  void *v45; // [rsp+58h] [rbp-80h]
  __m128i v46; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+70h] [rbp-68h]
  __m128i v48; // [rsp+78h] [rbp-60h]
  int v49; // [rsp+88h] [rbp-50h]
  __int16 v50; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v3 = a2;
  v51 = __readfsqword(0x28u);
  v39.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 64 )
  {
    v36 = (__int64)(a2 - a1) >> 6;
    v6 = (__int64)(v36 - 2) / 2;
    v7 = a1 + (v6 << 6);
    while ( 1 )
    {
      v8 = *(void **)(v7 + 8);
      v9 = *(void **)(v7 + 32);
      *(_QWORD *)(v7 + 8) = 0;
      v10 = *(_DWORD *)(v7 + 56);
      v11 = *(_WORD *)(v7 + 60);
      *(_QWORD *)(v7 + 32) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 16));
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 40));
      v45 = v8;
      v14 = *(_QWORD *)v7;
      ptr = v9;
      v49 = v10;
      v50 = v11;
      *(_OWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 40) = 0;
      v44 = v14;
      v46 = v12;
      v48 = v13;
      sub_46F3D0(a1, v6, v36, (__int64 *)&v44);
      v15 = v45;
      if ( ptr )
        qfree(ptr);
      if ( v15 )
        qfree(v15);
      v7 -= 64;
      if ( !v6 )
        break;
      --v6;
    }
  }
  v41 = v39.m128i_i64[0] >> 6;
  while ( v3 < a3 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)v3;
      if ( *(_DWORD *)a1 >= *(_DWORD *)v3 && (v16 != *(_DWORD *)a1 || *(_DWORD *)(v3 + 4) < *(_DWORD *)(a1 + 4)) )
      {
        v17 = *(void **)(v3 + 8);
        v18 = *(void **)(v3 + 32);
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
        v37 = v22;
        *(_QWORD *)v3 = *(_QWORD *)a1;
        v25 = *(_QWORD *)(a1 + 8);
        v26 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        v27 = *(void **)(v3 + 8);
        v38 = _mm_unpacklo_epi32(v19, v23).m128i_u64[0];
        v39 = v20;
        v40 = v21;
        if ( v27 )
        {
          *(_QWORD *)(v3 + 16) = 0;
          v42 = v25;
          v43 = v26;
          qfree(v27);
          v26 = _mm_load_si128(&v43);
          v25 = v42;
        }
        *(_QWORD *)(v3 + 8) = v25;
        *(__m128i *)(v3 + 16) = v26;
        v28 = *(_QWORD *)(a1 + 32);
        v29 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        v30 = *(void **)(v3 + 32);
        if ( v30 )
        {
          *(_QWORD *)(v3 + 40) = 0;
          v42 = v28;
          v43 = v29;
          qfree(v30);
          v29 = _mm_load_si128(&v43);
          v28 = v42;
        }
        *(_QWORD *)(v3 + 32) = v28;
        *(__m128i *)(v3 + 40) = v29;
        v31 = *(_DWORD *)(a1 + 56);
        v32 = _mm_load_si128(&v39);
        v44 = v38;
        v33 = _mm_load_si128(&v40);
        *(_DWORD *)(v3 + 56) = v31;
        LOBYTE(v31) = *(_BYTE *)(a1 + 60);
        ptr = v18;
        *(_BYTE *)(v3 + 60) = v31;
        LOBYTE(v31) = *(_BYTE *)(a1 + 61);
        v49 = v37;
        *(_BYTE *)(v3 + 61) = v31;
        v50 = v24;
        v45 = v17;
        v46 = v32;
        v48 = v33;
        sub_46F3D0(a1, 0, v41, (__int64 *)&v44);
        v34 = v45;
        if ( ptr )
          qfree(ptr);
        if ( v34 )
          break;
      }
      v3 += 64LL;
      if ( v3 >= a3 )
        return v51 - __readfsqword(0x28u);
    }
    v3 += 64LL;
    qfree(v34);
  }
  return v51 - __readfsqword(0x28u);
}

