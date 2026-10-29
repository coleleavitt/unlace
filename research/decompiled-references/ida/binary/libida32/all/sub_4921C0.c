unsigned __int64 __fastcall sub_4921C0(__int64 a1, __int64 a2, _QWORD **a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 i; // r14
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  _QWORD *v19; // r8
  __m128i v20; // xmm0
  __m128i v22; // [rsp+10h] [rbp-148h] BYREF
  void *v23; // [rsp+20h] [rbp-138h]
  __m128i v24; // [rsp+28h] [rbp-130h] BYREF
  void *ptr; // [rsp+38h] [rbp-120h]
  __m128i v26; // [rsp+40h] [rbp-118h] BYREF
  __int64 v27; // [rsp+50h] [rbp-108h] BYREF
  __m128i v28; // [rsp+58h] [rbp-100h] BYREF
  __m128i v29; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-E0h]
  __int64 v31; // [rsp+80h] [rbp-D8h]
  char v32; // [rsp+88h] [rbp-D0h]
  __m128i v33; // [rsp+90h] [rbp-C8h] BYREF
  void *v34; // [rsp+A0h] [rbp-B8h]
  __m128i v35; // [rsp+A8h] [rbp-B0h]
  void *v36; // [rsp+B8h] [rbp-A0h]
  __m128i v37; // [rsp+C0h] [rbp-98h]
  __int64 v38; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v39; // [rsp+D8h] [rbp-80h]
  __m128i v40; // [rsp+E8h] [rbp-70h]
  __int64 v41; // [rsp+F8h] [rbp-60h]
  __int64 v42; // [rsp+100h] [rbp-58h]
  char v43; // [rsp+108h] [rbp-50h]
  unsigned __int64 v44; // [rsp+118h] [rbp-40h]

  v3 = a2 - a1;
  v44 = __readfsqword(0x28u);
  if ( v3 > 128 )
  {
    v5 = ((v3 >> 7) - 2) / 2;
    for ( i = a1 + (v5 << 7) + 64; ; i -= 128 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(i - 64));
      v8 = *(void **)(i - 48);
      *(_QWORD *)(i - 48) = 0;
      v22 = v7;
      v9 = _mm_loadu_si128((const __m128i *)(i - 40));
      v23 = v8;
      v10 = *(void **)(i - 24);
      *(_QWORD *)(i - 24) = 0;
      v24 = v9;
      v11 = _mm_loadu_si128((const __m128i *)(i - 16));
      *(_OWORD *)(i - 40) = 0;
      *(_OWORD *)(i - 16) = 0;
      ptr = v10;
      v27 = 0;
      v26 = v11;
      copy_tinfo_t(&v27);
      v12 = *(_QWORD *)(i + 40);
      v13 = _mm_loadu_si128((const __m128i *)(i + 8));
      v38 = 0;
      v30 = v12;
      LODWORD(v12) = *(_DWORD *)(i + 48);
      v28 = v13;
      v14 = _mm_loadu_si128((const __m128i *)(i + 24));
      LODWORD(v31) = v12;
      LODWORD(v12) = *(_DWORD *)(i + 52);
      v29 = v14;
      v15 = _mm_load_si128(&v22);
      HIDWORD(v31) = v12;
      LOBYTE(v12) = *(_BYTE *)(i + 56);
      v33 = v15;
      v16 = _mm_loadu_si128(&v24);
      v32 = v12;
      v35 = v16;
      v17 = _mm_load_si128(&v26);
      v34 = v23;
      v23 = nullptr;
      v36 = ptr;
      ptr = nullptr;
      v24 = 0;
      v37 = v17;
      v26 = 0;
      copy_tinfo_t(&v38);
      v18 = _mm_loadu_si128(&v28);
      v19 = *a3;
      v41 = v30;
      v39 = v18;
      v20 = _mm_loadu_si128(&v29);
      v42 = v31;
      v40 = v20;
      v43 = v32;
      sub_491C30(a1, v5, v3 >> 7, (__int64)&v33, v19);
      clear_tinfo_t(&v38);
      if ( v36 )
      {
        v37.m128i_i64[0] = 0;
        qfree(v36);
      }
      if ( v34 )
      {
        v35.m128i_i64[0] = 0;
        qfree(v34);
      }
      if ( !v5 )
        break;
      --v5;
      clear_tinfo_t(&v27);
      if ( ptr )
      {
        v26.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v23 )
      {
        v24.m128i_i64[0] = 0;
        qfree(v23);
      }
    }
    sub_375BF0(&v22);
  }
  return v44 - __readfsqword(0x28u);
}

