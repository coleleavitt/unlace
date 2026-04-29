unsigned __int64 __fastcall sub_2DA790(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r15
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // r10
  int v10; // ecx
  char v11; // r8
  __int64 v12; // r14
  __m128i v13; // xmm0
  void (__fastcall *v14)(__int128 *, const __m128i *, __int64); // rax
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v18; // [rsp+0h] [rbp-158h] BYREF
  __int64 v19; // [rsp+10h] [rbp-148h]
  char v20; // [rsp+1Bh] [rbp-13Dh]
  int v21; // [rsp+1Ch] [rbp-13Ch]
  __int64 v22; // [rsp+20h] [rbp-138h]
  __int64 v23; // [rsp+28h] [rbp-130h]
  __int64 (__fastcall **v24)(); // [rsp+30h] [rbp-128h]
  __m128i v25; // [rsp+38h] [rbp-120h] BYREF
  __int64 v26; // [rsp+48h] [rbp-110h]
  __m128i v27; // [rsp+50h] [rbp-108h]
  char v28; // [rsp+60h] [rbp-F8h]
  __m128i v29; // [rsp+68h] [rbp-F0h] BYREF
  int v30; // [rsp+78h] [rbp-E0h]
  __int64 v31; // [rsp+80h] [rbp-D8h]
  __int64 (__fastcall **v32)(); // [rsp+90h] [rbp-C8h] BYREF
  __m128i v33; // [rsp+98h] [rbp-C0h]
  __int64 v34; // [rsp+A8h] [rbp-B0h]
  __m128i v35; // [rsp+B0h] [rbp-A8h]
  char v36; // [rsp+C0h] [rbp-98h]
  __m128i v37; // [rsp+C8h] [rbp-90h]
  int v38; // [rsp+D8h] [rbp-80h]
  __int64 v39; // [rsp+E0h] [rbp-78h]
  __int128 v40; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v41; // [rsp+100h] [rbp-58h]
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v3 = a2 - a1;
  v22 = a1;
  v42 = __readfsqword(0x28u);
  if ( v3 > 88 )
  {
    v23 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 3);
    v5 = (v23 - 2) / 2;
    v6 = a1 + 88 * v5;
    while ( 1 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(v6 + 8));
      v8 = _mm_loadu_si128((const __m128i *)(v6 + 56));
      v24 = off_4AF3C0;
      v9 = *(_QWORD *)(v6 + 24);
      v10 = *(_DWORD *)(v6 + 72);
      *(_QWORD *)(v6 + 24) = 0;
      v11 = *(_BYTE *)(v6 + 48);
      v12 = *(_QWORD *)(v6 + 80);
      v25 = v7;
      v13 = _mm_loadu_si128((const __m128i *)(v6 + 32));
      *(_OWORD *)(v6 + 32) = 0;
      v14 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v29 = v8;
      v26 = v9;
      v28 = v11;
      v30 = v10;
      v31 = v12;
      v41 = 0u;
      v27 = v13;
      v40 = 0;
      if ( v14 )
      {
        v21 = v10;
        v20 = v11;
        v19 = v9;
        v18 = v13;
        v14(&v40, a3, 2);
        v10 = v21;
        v11 = v20;
        v9 = v19;
        v13 = _mm_load_si128(&v18);
        v41 = _mm_loadu_si128(a3 + 1);
      }
      v39 = v12;
      v15 = _mm_loadu_si128(&v25);
      v35 = v13;
      v16 = _mm_loadu_si128(&v29);
      v36 = v11;
      v38 = v10;
      v34 = v9;
      v26 = 0;
      v32 = off_4AF3C0;
      v33 = v15;
      v27 = 0;
      v37 = v16;
      sub_2DA200(v22, v5, v23, (__int64)&v32, (__int64)&v40);
      if ( v34 )
        qfree(v34);
      if ( v41.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v41.m128i_i64[0])(&v40, &v40, 3);
      v6 -= 88;
      if ( !v5 )
        break;
      --v5;
    }
  }
  return v42 - __readfsqword(0x28u);
}
