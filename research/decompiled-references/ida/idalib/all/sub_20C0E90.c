__int64 __fastcall sub_20C0E90(__int64 a1, _BYTE **a2, _DWORD *a3, __int64 *a4, const __m128i *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(_BYTE *, const __m128i *, __int64); // rax
  __m128i v11; // xmm2
  void (__fastcall *v12)(__m128i *, _BYTE *, __int64); // rax
  __m128i v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v17; // rsi
  _BYTE *v18; // rax
  _BYTE v20[16]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v21; // [rsp+10h] [rbp-68h]
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int16 v25; // [rsp+40h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 120) )
  {
    v8 = sub_227D6D0(a1, a2);
    v22.m128i_i64[0] = (__int64)"cl::location(x) specified more than once!";
    v25 = 259;
    sub_22116C0(a1, &v22, 0, 0, v8);
  }
  else
  {
    v18 = *a2;
    *(_BYTE *)(a1 + 137) = 1;
    *(_QWORD *)(a1 + 120) = v18;
    *(_BYTE *)(a1 + 136) = *v18;
  }
  v21.m128i_i64[0] = 0;
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v9 = *a4;
  *(_QWORD *)(a1 + 40) = a4[1];
  *(_QWORD *)(a1 + 32) = v9;
  v10 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))a5[1].m128i_i64[0];
  if ( v10
    && (v10(v20, a5, 2),
        v11 = _mm_loadu_si128(a5 + 1),
        v12 = (void (__fastcall *)(__m128i *, _BYTE *, __int64))a5[1].m128i_i64[0],
        v23 = nullptr,
        v21 = v11,
        v12) )
  {
    v12(&v22, v20, 2);
    v13 = v21;
  }
  else
  {
    v13.m128i_i64[1] = v24;
    v13.m128i_i64[0] = 0;
  }
  v14 = _mm_load_si128(&v22);
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  v16 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 168);
  v17 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 168) = v13.m128i_i64[0];
  v22 = v15;
  *(__m128i *)(a1 + 152) = v14;
  v23 = v16;
  v24 = v17;
  *(_QWORD *)(a1 + 176) = v13.m128i_i64[1];
  if ( v16 )
  {
    v16(&v22, &v22, 3);
    v13.m128i_i64[0] = v21.m128i_i64[0];
  }
  if ( v13.m128i_i64[0] )
    v13.m128i_i64[0] = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v13.m128i_i64[0])(v20, v20, 3);
  return v13.m128i_i64[0];
}
