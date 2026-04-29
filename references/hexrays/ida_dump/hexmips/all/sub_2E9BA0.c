unsigned __int64 __fastcall sub_2E9BA0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r13
  __int64 v6; // r14
  const __m128i *v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // r14
  __int64 v10; // rcx
  __m128i v11; // xmm3
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i v19; // xmm4
  const __m128i *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r9
  __m128i v23; // xmm0
  __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rdi
  const __m128i *v31; // rsi
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v35; // r15
  __int64 v36; // [rsp+0h] [rbp-178h]
  __int64 v37; // [rsp+0h] [rbp-178h]
  __int64 v38; // [rsp+0h] [rbp-178h]
  int v39; // [rsp+8h] [rbp-170h]
  __int64 v40; // [rsp+8h] [rbp-170h]
  __int64 v41; // [rsp+8h] [rbp-170h]
  __m128i v42; // [rsp+10h] [rbp-168h] BYREF
  __m128i v43; // [rsp+20h] [rbp-158h] BYREF
  __m128i v44; // [rsp+30h] [rbp-148h] BYREF
  __m128i v45; // [rsp+40h] [rbp-138h] BYREF
  __int64 v46; // [rsp+50h] [rbp-128h]
  const __m128i *v47; // [rsp+58h] [rbp-120h]
  __int64 v48; // [rsp+60h] [rbp-118h]
  const __m128i *v49; // [rsp+68h] [rbp-110h]
  __int64 (__fastcall **v50)(); // [rsp+70h] [rbp-108h]
  __int64 v51; // [rsp+78h] [rbp-100h]
  __int64 v52; // [rsp+80h] [rbp-F8h]
  __m128i v53; // [rsp+88h] [rbp-F0h]
  __int64 v54; // [rsp+98h] [rbp-E0h]
  int v55; // [rsp+A0h] [rbp-D8h]
  __int64 v56; // [rsp+A8h] [rbp-D0h]
  _QWORD v57[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-B8h]
  __m128i v59; // [rsp+C8h] [rbp-B0h]
  __int64 v60; // [rsp+D8h] [rbp-A0h]
  int v61; // [rsp+E0h] [rbp-98h]
  __int64 v62; // [rsp+E8h] [rbp-90h]
  char v63; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v64; // [rsp+110h] [rbp-68h] BYREF
  __int64 v65; // [rsp+120h] [rbp-58h]
  int (__fastcall *v66)(__m128i *, unsigned __int64, __int64); // [rsp+128h] [rbp-50h]
  unsigned __int64 v67; // [rsp+138h] [rbp-40h]

  v4 = a2;
  v48 = a3;
  v49 = a4;
  v67 = __readfsqword(0x28u);
  v47 = (const __m128i *)&v63;
  v6 = a2 - a1;
  if ( a2 - a1 > 1024 )
  {
    while ( v48 )
    {
      v7 = v47;
      sub_2C9850((__int64)v47, v49);
      sub_2C9850((__int64)&v64, v7);
      v8 = a1 + 64;
      sub_2E9AC0(a1, a1 + 64, a1 + (v6 >> 7 << 6), v4 - 64, (__int64)&v64);
      sub_62A50((__int64)&v64);
      sub_2C9850((__int64)&v64, v7);
      for ( i = v4; ; *(_QWORD *)(i + 56) = v42.m128i_i64[0] )
      {
        if ( !v65 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v66(&v64, v8, a1) < 0 )
        {
          v8 += 64LL;
          if ( !v65 )
            goto LABEL_29;
        }
        i -= 64LL;
        if ( !v65 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v66(&v64, a1, i) < 0 )
        {
          i -= 64LL;
          if ( !v65 )
            goto LABEL_28;
        }
        if ( v8 >= i )
          break;
        v10 = *(_QWORD *)(v8 + 40);
        v11 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v12 = *(_QWORD *)(v8 + 16);
        *(_OWORD *)(v8 + 24) = 0;
        v13 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)(v8 + 16) = 0;
        v36 = v10;
        LODWORD(v10) = *(_DWORD *)(v8 + 48);
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(i + 8);
        v14 = *(_QWORD *)(i + 16);
        v39 = v10;
        v15 = _mm_loadu_si128((const __m128i *)(i + 24));
        v16 = *(_QWORD *)(v8 + 56);
        *(_QWORD *)(i + 16) = 0;
        *(_OWORD *)(i + 24) = 0;
        v17 = *(_QWORD *)(v8 + 16);
        v42.m128i_i64[0] = v16;
        v43 = v11;
        if ( v17 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v46 = v14;
          v44.m128i_i64[0] = v13;
          v45 = v15;
          qfree(v17);
          v15 = _mm_load_si128(&v45);
          v14 = v46;
          v13 = v44.m128i_i64[0];
        }
        *(_QWORD *)(v8 + 16) = v14;
        *(__m128i *)(v8 + 24) = v15;
        *(_QWORD *)(v8 + 40) = *(_QWORD *)(i + 40);
        *(_DWORD *)(v8 + 48) = *(_DWORD *)(i + 48);
        *(_QWORD *)(v8 + 56) = *(_QWORD *)(i + 56);
        v18 = *(_QWORD *)(i + 16);
        *(_QWORD *)(i + 8) = v13;
        if ( v18 )
        {
          *(_QWORD *)(i + 24) = 0;
          qfree(v18);
        }
        v19 = _mm_load_si128(&v43);
        *(_QWORD *)(i + 16) = v12;
        v8 += 64LL;
        *(_QWORD *)(i + 40) = v36;
        *(__m128i *)(i + 24) = v19;
        *(_DWORD *)(i + 48) = v39;
      }
      v35 = --v48;
      sub_62A50((__int64)&v64);
      sub_62A50((__int64)v47);
      sub_2C9850((__int64)&v64, v49);
      sub_2E9BA0(v8, v4, v35, &v64);
      sub_62A50((__int64)&v64);
      v6 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1024 )
        return v67 - __readfsqword(0x28u);
      v4 = v8;
    }
    v20 = v47;
    sub_2C9850((__int64)v47, v49);
    sub_2C9850((__int64)&v64, v20);
    sub_2E9750(a1, v4, &v64);
    sub_62A50((__int64)&v64);
    while ( v4 - a1 > 64 )
    {
      v21 = *(_QWORD *)(v4 - 48);
      v22 = *(_QWORD *)(v4 - 56);
      v4 -= 64;
      *(_QWORD *)(v4 + 16) = 0;
      v23 = _mm_loadu_si128((const __m128i *)(v4 + 24));
      *(_OWORD *)(v4 + 24) = 0;
      v24 = *(_QWORD *)(v4 + 40);
      v25 = *(_DWORD *)(v4 + 48);
      v50 = off_4C33A0;
      v26 = *(_QWORD *)(a1 + 8);
      v27 = *(_QWORD *)(v4 + 56);
      v51 = v22;
      *(_QWORD *)(v4 + 8) = v26;
      v28 = *(_QWORD *)(a1 + 16);
      v29 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v30 = *(_QWORD *)(v4 + 16);
      v52 = v21;
      v54 = v24;
      v55 = v25;
      v56 = v27;
      v53 = v23;
      if ( v30 )
      {
        *(_QWORD *)(v4 + 24) = 0;
        v42.m128i_i64[0] = v28;
        v40 = v24;
        v37 = v22;
        v44 = v29;
        v43 = v23;
        qfree(v30);
        v29 = _mm_load_si128(&v44);
        v23 = _mm_load_si128(&v43);
        v28 = v42.m128i_i64[0];
        v24 = v40;
        v22 = v37;
      }
      *(_QWORD *)(v4 + 16) = v28;
      v31 = v47;
      *(__m128i *)(v4 + 24) = v29;
      v41 = v24;
      *(_QWORD *)(v4 + 40) = *(_QWORD *)(a1 + 40);
      v38 = v22;
      *(_DWORD *)(v4 + 48) = *(_DWORD *)(a1 + 48);
      v32 = *(_QWORD *)(a1 + 56);
      v42 = v23;
      *(_QWORD *)(v4 + 56) = v32;
      sub_2C9850((__int64)&v64, v31);
      v33 = _mm_load_si128(&v42);
      v62 = v27;
      v58 = v21;
      v60 = v41;
      v57[1] = v38;
      v52 = 0;
      v61 = v25;
      v57[0] = off_4C33A0;
      v59 = v33;
      v53 = 0;
      sub_2E9230(a1, 0, (v4 - a1) >> 6, (__int64)v57, (__int64)&v64);
      if ( v58 )
        qfree(v58);
      sub_62A50((__int64)&v64);
    }
    sub_62A50((__int64)v47);
  }
  return v67 - __readfsqword(0x28u);
}
