unsigned __int64 __fastcall sub_4AB950(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  void *v11; // r15
  int v12; // eax
  __int64 *v13; // rbp
  __m128i v14; // xmm0
  int v15; // eax
  __m128i v16; // xmm0
  int v17; // r15d
  __m128i v18; // xmm0
  __m128i v20; // [rsp+0h] [rbp-108h] BYREF
  __int64 v21; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v22; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v23; // [rsp+30h] [rbp-D8h] BYREF
  int v24; // [rsp+40h] [rbp-C8h]
  __int64 *v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h]
  __m128i v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+68h] [rbp-A0h]
  int v29; // [rsp+6Ch] [rbp-9Ch]
  _OWORD v30[2]; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+90h] [rbp-78h]
  void *ptr[2]; // [rsp+98h] [rbp-70h]
  __m128i v33; // [rsp+A8h] [rbp-60h]
  int v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]

  v2 = a2 - a1;
  v36 = __readfsqword(0x28u);
  if ( v2 > 80 )
  {
    v3 = 0xCCCCCCCCCCCCCCCDLL * (v2 >> 4);
    v4 = (v3 - 2) / 2;
    for ( i = a1 + 80 * v4; ; i -= 80 )
    {
      v12 = *(_DWORD *)(i + 32);
      v13 = *(__int64 **)(i + 40);
      v22 = _mm_loadu_si128((const __m128i *)i);
      v14 = _mm_loadu_si128((const __m128i *)(i + 16));
      v24 = v12;
      v23 = v14;
      if ( v13 )
        v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v13 + 16))(v13);
      v15 = *(_DWORD *)(i + 72);
      v16 = _mm_load_si128(&v22);
      v9 = _mm_loadl_epi64((const __m128i *)(i + 48));
      v17 = *(_DWORD *)(i + 76);
      *(_QWORD *)(i + 48) = 0;
      v8 = _mm_loadu_si128((const __m128i *)(i + 56));
      v28 = v15;
      v30[0] = v16;
      v18 = _mm_load_si128(&v23);
      v29 = v17;
      v31 = v24;
      v26 = v9.m128i_i64[0];
      v27 = v8;
      *(_OWORD *)(i + 56) = 0;
      v30[1] = v18;
      if ( v13 )
      {
        v6 = *v13;
        v21 = v9.m128i_i64[0];
        v20 = v8;
        v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(v13);
        v8 = _mm_load_si128(&v20);
        v9 = _mm_loadl_epi64((const __m128i *)&v21);
        v10 = (__m128i)(unsigned __int64)v7;
      }
      else
      {
        v10 = 0;
      }
      v35 = v17;
      v34 = v28;
      v26 = 0;
      v33 = v8;
      v27 = 0;
      *(__m128i *)ptr = _mm_unpacklo_epi64(v10, v9);
      sub_4AA170(a1, v4, v3, (__int64)v30);
      v11 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v11 )
        qfree(v11);
      if ( !v4 )
        break;
      --v4;
      if ( v13 )
        qfree(v13);
    }
    v25 = v13;
    sub_4A9B00(&v22);
  }
  return v36 - __readfsqword(0x28u);
}

