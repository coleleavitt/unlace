unsigned __int64 __fastcall sub_3F5AE0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r13
  void *v7; // r8
  void *v8; // r15
  __m128i v9; // xmm2
  void *v10; // r14
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // r11
  __int64 v14; // r10
  void (__fastcall *v15)(__int128 *, const __m128i *, __int64); // rax
  void *v16; // r14
  void *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-180h]
  void *v20; // [rsp+8h] [rbp-180h]
  __m128i v21; // [rsp+10h] [rbp-178h] BYREF
  __m128i v22; // [rsp+20h] [rbp-168h] BYREF
  __m128i v23; // [rsp+30h] [rbp-158h] BYREF
  void *v24; // [rsp+40h] [rbp-148h]
  __int64 v25; // [rsp+48h] [rbp-140h]
  __int64 v26; // [rsp+50h] [rbp-138h]
  __int64 v27; // [rsp+58h] [rbp-130h]
  __int64 v28; // [rsp+60h] [rbp-128h]
  void *v29; // [rsp+68h] [rbp-120h]
  __m128i v30; // [rsp+70h] [rbp-118h]
  void *v31; // [rsp+80h] [rbp-108h]
  __m128i v32; // [rsp+88h] [rbp-100h]
  void *v33; // [rsp+98h] [rbp-F0h]
  __m128i v34; // [rsp+A0h] [rbp-E8h]
  __int64 v35; // [rsp+B0h] [rbp-D8h]
  __int64 v36; // [rsp+C0h] [rbp-C8h] BYREF
  void *v37; // [rsp+C8h] [rbp-C0h]
  __m128i v38; // [rsp+D0h] [rbp-B8h]
  void *v39; // [rsp+E0h] [rbp-A8h]
  __m128i v40; // [rsp+E8h] [rbp-A0h]
  void *ptr; // [rsp+F8h] [rbp-90h]
  __m128i v42; // [rsp+100h] [rbp-88h]
  __int64 v43; // [rsp+110h] [rbp-78h]
  __int128 v44; // [rsp+120h] [rbp-68h] BYREF
  __m128i v45; // [rsp+130h] [rbp-58h]
  unsigned __int64 v46; // [rsp+148h] [rbp-40h]

  v3 = a2 - a1;
  v26 = a1;
  v46 = __readfsqword(0x28u);
  if ( v3 > 88 )
  {
    v27 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 3);
    v5 = (v27 - 2) / 2;
    v6 = a1 + 88 * v5;
    while ( 1 )
    {
      v7 = *(void **)(v6 + 8);
      v8 = *(void **)(v6 + 32);
      v9 = _mm_loadu_si128((const __m128i *)(v6 + 16));
      v10 = *(void **)(v6 + 56);
      *(_QWORD *)(v6 + 8) = 0;
      v11 = _mm_loadu_si128((const __m128i *)(v6 + 40));
      v12 = _mm_loadu_si128((const __m128i *)(v6 + 64));
      *(_QWORD *)(v6 + 32) = 0;
      v13 = *(_QWORD *)v6;
      v14 = *(_QWORD *)(v6 + 80);
      *(_OWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 56) = 0;
      *(_OWORD *)(v6 + 40) = 0;
      *(_OWORD *)(v6 + 64) = 0;
      v15 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v28 = v13;
      v29 = v7;
      v31 = v8;
      v33 = v10;
      v35 = v14;
      v45 = 0u;
      v30 = v9;
      v32 = v11;
      v34 = v12;
      v44 = 0;
      if ( v15 )
      {
        v25 = v13;
        v24 = v7;
        v19 = v14;
        v23 = v9;
        v22 = v11;
        v21 = v12;
        v15(&v44, a3, 2);
        v13 = v25;
        v9 = _mm_load_si128(&v23);
        v11 = _mm_load_si128(&v22);
        v12 = _mm_load_si128(&v21);
        v7 = v24;
        v45 = _mm_loadu_si128(a3 + 1);
        v14 = v19;
      }
      ptr = v10;
      v37 = v7;
      v36 = v13;
      v29 = nullptr;
      v31 = nullptr;
      v33 = nullptr;
      v43 = v14;
      v39 = v8;
      v38 = v9;
      v30 = 0;
      v40 = v11;
      v32 = 0;
      v42 = v12;
      v34 = 0;
      sub_3F52A0(v26, v5, v27, (__int64)&v36, (__int64)&v44);
      v16 = v37;
      v17 = v39;
      if ( ptr )
      {
        v20 = v39;
        qfree(ptr);
        v17 = v20;
      }
      if ( v17 )
        qfree(v17);
      if ( v16 )
        qfree(v16);
      if ( v45.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v45.m128i_i64[0])(&v44, &v44, 3);
      v6 -= 88;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v46 - __readfsqword(0x28u);
}

