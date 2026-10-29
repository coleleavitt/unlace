unsigned __int64 __fastcall sub_4A7350(__int64 a1, __int64 a2, _QWORD **a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 i; // r14
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  void *v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  _QWORD *v20; // r8
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v24; // [rsp+8h] [rbp-170h]
  __m128i v25; // [rsp+10h] [rbp-168h] BYREF
  void *v26; // [rsp+20h] [rbp-158h]
  __m128i v27; // [rsp+28h] [rbp-150h] BYREF
  void *ptr; // [rsp+38h] [rbp-140h]
  __m128i v29; // [rsp+40h] [rbp-138h] BYREF
  __int64 v30; // [rsp+50h] [rbp-128h] BYREF
  __m128i v31; // [rsp+58h] [rbp-120h] BYREF
  __m128i v32; // [rsp+68h] [rbp-110h] BYREF
  __m128i v33; // [rsp+78h] [rbp-100h] BYREF
  __int64 v34; // [rsp+88h] [rbp-F0h]
  __int64 v35; // [rsp+90h] [rbp-E8h]
  char v36; // [rsp+98h] [rbp-E0h]
  __m128i v37; // [rsp+A0h] [rbp-D8h] BYREF
  void *v38; // [rsp+B0h] [rbp-C8h]
  __m128i v39; // [rsp+B8h] [rbp-C0h]
  void *v40; // [rsp+C8h] [rbp-B0h]
  __m128i v41; // [rsp+D0h] [rbp-A8h]
  __int64 v42; // [rsp+E0h] [rbp-98h] BYREF
  __m128i v43; // [rsp+E8h] [rbp-90h]
  __m128i v44; // [rsp+F8h] [rbp-80h]
  __m128i v45; // [rsp+108h] [rbp-70h]
  __int64 v46; // [rsp+118h] [rbp-60h]
  __int64 v47; // [rsp+120h] [rbp-58h]
  char v48; // [rsp+128h] [rbp-50h]
  unsigned __int64 v49; // [rsp+138h] [rbp-40h]

  v3 = a2 - a1;
  v49 = __readfsqword(0x28u);
  if ( v3 > 144 )
  {
    v24 = 0x8E38E38E38E38E39LL * (v3 >> 4);
    v5 = (v24 - 2) / 2;
    for ( i = a1 + 144 * v5 + 64; ; i -= 144 )
    {
      v7 = _mm_loadu_si128((const __m128i *)(i - 64));
      v8 = *(void **)(i - 48);
      *(_QWORD *)(i - 48) = 0;
      v25 = v7;
      v9 = _mm_loadu_si128((const __m128i *)(i - 40));
      v26 = v8;
      v10 = *(void **)(i - 24);
      *(_QWORD *)(i - 24) = 0;
      v27 = v9;
      v11 = _mm_loadu_si128((const __m128i *)(i - 16));
      *(_OWORD *)(i - 40) = 0;
      *(_OWORD *)(i - 16) = 0;
      ptr = v10;
      v30 = 0;
      v29 = v11;
      copy_tinfo_t(&v30);
      v12 = _mm_loadu_si128((const __m128i *)(i + 8));
      v13 = *(_QWORD *)(i + 56);
      v42 = 0;
      v34 = v13;
      LODWORD(v13) = *(_DWORD *)(i + 64);
      v31 = v12;
      v14 = _mm_loadu_si128((const __m128i *)(i + 24));
      LODWORD(v35) = v13;
      LODWORD(v13) = *(_DWORD *)(i + 68);
      v32 = v14;
      v15 = _mm_loadu_si128((const __m128i *)(i + 40));
      HIDWORD(v35) = v13;
      LOBYTE(v13) = *(_BYTE *)(i + 72);
      v33 = v15;
      v16 = _mm_load_si128(&v25);
      v36 = v13;
      v37 = v16;
      v17 = _mm_loadu_si128(&v27);
      v38 = v26;
      v39 = v17;
      v18 = _mm_load_si128(&v29);
      v26 = nullptr;
      v40 = ptr;
      ptr = nullptr;
      v27 = 0;
      v41 = v18;
      v29 = 0;
      copy_tinfo_t(&v42);
      v19 = _mm_loadu_si128(&v31);
      v20 = *a3;
      v46 = v34;
      v43 = v19;
      v21 = _mm_loadu_si128(&v32);
      v47 = v35;
      v44 = v21;
      v22 = _mm_loadu_si128(&v33);
      v48 = v36;
      v45 = v22;
      sub_4A6D70(a1, v5, v24, (__int64)&v37, v20);
      clear_tinfo_t(&v42);
      if ( v40 )
      {
        v41.m128i_i64[0] = 0;
        qfree(v40);
      }
      if ( v38 )
      {
        v39.m128i_i64[0] = 0;
        qfree(v38);
      }
      if ( !v5 )
        break;
      --v5;
      clear_tinfo_t(&v30);
      if ( ptr )
      {
        v29.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v26 )
      {
        v27.m128i_i64[0] = 0;
        qfree(v26);
      }
    }
    sub_379560(&v25);
  }
  return v49 - __readfsqword(0x28u);
}
