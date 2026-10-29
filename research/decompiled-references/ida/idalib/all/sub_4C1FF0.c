unsigned __int64 __fastcall sub_4C1FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  void *v11; // r15
  int v12; // eax
  __int64 *v13; // rbp
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  int v17; // r15d
  __m128i v18; // xmm0
  __int64 v20; // [rsp+8h] [rbp-110h] BYREF
  __m128i v21; // [rsp+10h] [rbp-108h] BYREF
  __m128i v22; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v23; // [rsp+30h] [rbp-E8h] BYREF
  int v24; // [rsp+40h] [rbp-D8h]
  __int64 *v25; // [rsp+48h] [rbp-D0h]
  __int64 v26; // [rsp+50h] [rbp-C8h]
  __m128i v27; // [rsp+58h] [rbp-C0h]
  __int64 v28; // [rsp+68h] [rbp-B0h]
  int v29; // [rsp+70h] [rbp-A8h]
  _OWORD v30[2]; // [rsp+80h] [rbp-98h] BYREF
  int v31; // [rsp+A0h] [rbp-78h]
  void *ptr[2]; // [rsp+A8h] [rbp-70h]
  __m128i v33; // [rsp+B8h] [rbp-60h]
  __int64 v34; // [rsp+C8h] [rbp-50h]
  int v35; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-40h]

  v2 = a2 - a1;
  v36 = __readfsqword(0x28u);
  if ( v2 > 88 )
  {
    v3 = 0x2E8BA2E8BA2E8BA3LL * (v2 >> 3);
    v4 = (v3 - 2) / 2;
    for ( i = a1 + 88 * v4; ; i -= 88 )
    {
      v12 = *(_DWORD *)(i + 32);
      v13 = *(__int64 **)(i + 40);
      v22 = _mm_loadu_si128((const __m128i *)i);
      v14 = _mm_loadu_si128((const __m128i *)(i + 16));
      v24 = v12;
      v23 = v14;
      if ( v13 )
        v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v13 + 16))(v13);
      v15 = *(_QWORD *)(i + 72);
      v16 = _mm_load_si128(&v22);
      v8 = _mm_loadl_epi64((const __m128i *)(i + 48));
      v17 = *(_DWORD *)(i + 80);
      *(_QWORD *)(i + 48) = 0;
      v9 = _mm_loadu_si128((const __m128i *)(i + 56));
      v28 = v15;
      v30[0] = v16;
      v18 = _mm_load_si128(&v23);
      v29 = v17;
      v31 = v24;
      v26 = v8.m128i_i64[0];
      v27 = v9;
      *(_OWORD *)(i + 56) = 0;
      v30[1] = v18;
      if ( v13 )
      {
        v6 = *v13;
        v21 = v9;
        v20 = v8.m128i_i64[0];
        v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(v13);
        v8 = _mm_loadl_epi64((const __m128i *)&v20);
        v9 = _mm_load_si128(&v21);
        v10 = (__m128i)(unsigned __int64)v7;
      }
      else
      {
        v10 = 0;
      }
      v35 = v17;
      v34 = v28;
      v26 = 0;
      v33 = v9;
      v27 = 0;
      *(__m128i *)ptr = _mm_unpacklo_epi64(v10, v8);
      sub_4C0C60(a1, v4, v3, (__int64)v30);
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
    sub_4C0590(&v22);
  }
  return v36 - __readfsqword(0x28u);
}
