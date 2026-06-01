unsigned __int64 __fastcall sub_4C2710(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  void *v12; // r15
  int v13; // eax
  __int64 *v14; // rbp
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // r15d
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v21; // [rsp+8h] [rbp-120h] BYREF
  __m128i v22; // [rsp+10h] [rbp-118h] BYREF
  __m128i v23; // [rsp+20h] [rbp-108h] BYREF
  __m128i v24; // [rsp+30h] [rbp-F8h] BYREF
  int v25; // [rsp+40h] [rbp-E8h]
  __int64 *v26; // [rsp+48h] [rbp-E0h]
  __int64 v27; // [rsp+50h] [rbp-D8h]
  __m128i v28; // [rsp+58h] [rbp-D0h]
  __m128i v29; // [rsp+68h] [rbp-C0h] BYREF
  int v30; // [rsp+78h] [rbp-B0h]
  _OWORD v31[2]; // [rsp+80h] [rbp-A8h] BYREF
  int v32; // [rsp+A0h] [rbp-88h]
  void *ptr[2]; // [rsp+A8h] [rbp-80h]
  __m128i v34; // [rsp+B8h] [rbp-70h]
  __m128i v35; // [rsp+C8h] [rbp-60h]
  int v36; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v2 = a2 - a1;
  v37 = __readfsqword(0x28u);
  if ( v2 > 96 )
  {
    v3 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 5);
    v4 = (v3 - 2) / 2;
    for ( i = a1 + 32 * (v4 + ((v3 - 2 + ((unsigned __int64)(v3 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL)); ; i -= 96LL )
    {
      v13 = *(_DWORD *)(i + 32);
      v14 = *(__int64 **)(i + 40);
      v23 = _mm_loadu_si128((const __m128i *)i);
      v15 = _mm_loadu_si128((const __m128i *)(i + 16));
      v25 = v13;
      v24 = v15;
      if ( v14 )
        v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v14 + 16))(v14);
      v16 = _mm_loadu_si128((const __m128i *)(i + 72));
      v8 = _mm_loadl_epi64((const __m128i *)(i + 48));
      *(_QWORD *)(i + 48) = 0;
      v9 = _mm_loadu_si128((const __m128i *)(i + 56));
      v17 = *(_DWORD *)(i + 88);
      *(_OWORD *)(i + 56) = 0;
      v29 = v16;
      v18 = _mm_load_si128(&v23);
      v30 = v17;
      v31[0] = v18;
      v19 = _mm_load_si128(&v24);
      v32 = v25;
      v27 = v8.m128i_i64[0];
      v28 = v9;
      v31[1] = v19;
      if ( v14 )
      {
        v6 = *v14;
        v22 = v9;
        v21 = v8.m128i_i64[0];
        v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 16))(v14);
        v8 = _mm_loadl_epi64((const __m128i *)&v21);
        v9 = _mm_load_si128(&v22);
        v10 = (__m128i)(unsigned __int64)v7;
      }
      else
      {
        v10 = 0;
      }
      v36 = v17;
      v34 = v9;
      v11 = _mm_loadu_si128(&v29);
      v27 = 0;
      v28 = 0;
      v35 = v11;
      *(__m128i *)ptr = _mm_unpacklo_epi64(v10, v8);
      sub_4BF4F0(a1, v4, v3, (__int64)v31);
      v12 = ptr[0];
      if ( ptr[1] )
        qfree(ptr[1]);
      if ( v12 )
        qfree(v12);
      if ( !v4 )
        break;
      --v4;
      if ( v14 )
        qfree(v14);
    }
    v26 = v14;
    sub_4BED10(&v23);
  }
  return v37 - __readfsqword(0x28u);
}
