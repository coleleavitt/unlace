unsigned __int64 __fastcall sub_2E3E50(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r13
  __int64 v6; // r14
  const __m128i *v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // r14
  __m128i v10; // xmm4
  __int64 v11; // rcx
  __int64 v12; // r15
  __int32 v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm5
  const __m128i *v22; // rbx
  __int64 v23; // r15
  int v24; // r8d
  __m128i v25; // xmm0
  __int64 v26; // r14
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v31; // rdi
  const __m128i *v32; // rsi
  int v33; // eax
  __m128i v34; // xmm0
  __int64 v36; // r15
  __int64 v37; // [rsp+8h] [rbp-170h]
  int v38; // [rsp+8h] [rbp-170h]
  int v39; // [rsp+8h] [rbp-170h]
  __m128i v40; // [rsp+10h] [rbp-168h] BYREF
  __m128i v41; // [rsp+20h] [rbp-158h] BYREF
  __m128i v42; // [rsp+30h] [rbp-148h] BYREF
  __m128i v43; // [rsp+40h] [rbp-138h] BYREF
  __int64 v44; // [rsp+50h] [rbp-128h]
  const __m128i *v45; // [rsp+58h] [rbp-120h]
  __int64 v46; // [rsp+60h] [rbp-118h]
  const __m128i *v47; // [rsp+68h] [rbp-110h]
  __int64 (__fastcall **v48)(); // [rsp+70h] [rbp-108h]
  int v49; // [rsp+78h] [rbp-100h]
  __int64 v50; // [rsp+80h] [rbp-F8h]
  __m128i v51; // [rsp+88h] [rbp-F0h]
  __int64 v52; // [rsp+98h] [rbp-E0h]
  __int64 v53; // [rsp+A0h] [rbp-D8h]
  __int64 (__fastcall **v54)(); // [rsp+B0h] [rbp-C8h] BYREF
  int v55; // [rsp+B8h] [rbp-C0h]
  __int64 v56; // [rsp+C0h] [rbp-B8h]
  __m128i v57; // [rsp+C8h] [rbp-B0h]
  __int64 v58; // [rsp+D8h] [rbp-A0h]
  __int64 v59; // [rsp+E0h] [rbp-98h]
  char v60; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v61; // [rsp+110h] [rbp-68h] BYREF
  __int64 v62; // [rsp+120h] [rbp-58h]
  int (__fastcall *v63)(__m128i *, unsigned __int64, __int64); // [rsp+128h] [rbp-50h]
  unsigned __int64 v64; // [rsp+138h] [rbp-40h]

  v4 = a2;
  v46 = a3;
  v47 = a4;
  v64 = __readfsqword(0x28u);
  v45 = (const __m128i *)&v60;
  v6 = a2 - a1;
  if ( a2 - a1 > 896 )
  {
    while ( v46 )
    {
      v7 = v45;
      sub_2C6CC0((__int64)v45, v47);
      sub_2C6CC0((__int64)&v61, v7);
      v8 = a1 + 56;
      sub_2E3D70(a1, a1 + 56, a1 + 56 * ((0x6DB6DB6DB6DB6DB7LL * (v6 >> 3)) >> 1), v4 - 56, (__int64)&v61);
      sub_606D0((__int64)&v61);
      sub_2C6CC0((__int64)&v61, v7);
      for ( i = v4; ; *(_QWORD *)(i + 48) = v37 )
      {
        if ( !v62 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v63(&v61, v8, a1) < 0 )
        {
          v8 += 56LL;
          if ( !v62 )
            goto LABEL_29;
        }
        i -= 56LL;
        if ( !v62 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v63(&v61, a1, i) < 0 )
        {
          i -= 56LL;
          if ( !v62 )
            goto LABEL_28;
        }
        if ( v8 >= i )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v11 = *(_QWORD *)(v8 + 40);
        *(_OWORD *)(v8 + 24) = 0;
        v12 = *(_QWORD *)(v8 + 16);
        v13 = *(_DWORD *)(v8 + 8);
        *(_QWORD *)(v8 + 16) = 0;
        v14 = *(_DWORD *)(i + 8);
        v41.m128i_i64[0] = v11;
        v15 = *(_QWORD *)(v8 + 48);
        *(_DWORD *)(v8 + 8) = v14;
        v16 = *(_QWORD *)(i + 16);
        v17 = _mm_loadu_si128((const __m128i *)(i + 24));
        *(_QWORD *)(i + 16) = 0;
        *(_OWORD *)(i + 24) = 0;
        v18 = *(_QWORD *)(v8 + 16);
        v37 = v15;
        v40 = v10;
        if ( v18 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v44 = v16;
          v42.m128i_i32[0] = v13;
          v43 = v17;
          qfree(v18);
          v17 = _mm_load_si128(&v43);
          v16 = v44;
          v13 = v42.m128i_i32[0];
        }
        *(_QWORD *)(v8 + 16) = v16;
        *(__m128i *)(v8 + 24) = v17;
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(i + 40);
        *(_DWORD *)(v8 + 44) = *(_DWORD *)(i + 44);
        *(_QWORD *)(v8 + 48) = *(_QWORD *)(i + 48);
        v19 = *(_QWORD *)(i + 16);
        *(_DWORD *)(i + 8) = v13;
        if ( v19 )
        {
          *(_QWORD *)(i + 24) = 0;
          qfree(v19);
        }
        v20 = v41.m128i_i64[0];
        v21 = _mm_load_si128(&v40);
        *(_QWORD *)(i + 16) = v12;
        v8 += 56LL;
        *(_QWORD *)(i + 40) = v20;
        *(__m128i *)(i + 24) = v21;
      }
      v36 = --v46;
      sub_606D0((__int64)&v61);
      sub_606D0((__int64)v45);
      sub_2C6CC0((__int64)&v61, v47);
      sub_2E3E50(v8, v4, v36, &v61);
      sub_606D0((__int64)&v61);
      v6 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 896 )
        return v64 - __readfsqword(0x28u);
      v4 = v8;
    }
    v22 = v45;
    sub_2C6CC0((__int64)v45, v47);
    sub_2C6CC0((__int64)&v61, v22);
    sub_2E3A20(a1, v4, &v61);
    sub_606D0((__int64)&v61);
    while ( v4 - a1 > 56 )
    {
      v23 = *(_QWORD *)(v4 - 40);
      v24 = *(_DWORD *)(v4 - 48);
      v4 -= 56;
      *(_QWORD *)(v4 + 16) = 0;
      v25 = _mm_loadu_si128((const __m128i *)(v4 + 24));
      *(_OWORD *)(v4 + 24) = 0;
      v26 = *(_QWORD *)(v4 + 40);
      v27 = *(_QWORD *)(v4 + 48);
      v48 = off_4AF438;
      v28 = *(_DWORD *)(a1 + 8);
      v49 = v24;
      *(_DWORD *)(v4 + 8) = v28;
      v29 = *(_QWORD *)(a1 + 16);
      v30 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v31 = *(_QWORD *)(v4 + 16);
      v50 = v23;
      v52 = v26;
      v53 = v27;
      v51 = v25;
      if ( v31 )
      {
        *(_QWORD *)(v4 + 24) = 0;
        v40.m128i_i64[0] = v29;
        v38 = v24;
        v42 = v30;
        v41 = v25;
        qfree(v31);
        v30 = _mm_load_si128(&v42);
        v25 = _mm_load_si128(&v41);
        v29 = v40.m128i_i64[0];
        v24 = v38;
      }
      *(_QWORD *)(v4 + 16) = v29;
      v32 = v45;
      *(__m128i *)(v4 + 24) = v30;
      v39 = v24;
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(a1 + 40);
      v33 = *(_DWORD *)(a1 + 44);
      v40 = v25;
      *(_DWORD *)(v4 + 44) = v33;
      *(_QWORD *)(v4 + 48) = *(_QWORD *)(a1 + 48);
      sub_2C6CC0((__int64)&v61, v32);
      v34 = _mm_load_si128(&v40);
      v59 = v27;
      v54 = off_4AF438;
      v56 = v23;
      v55 = v39;
      v57 = v34;
      v50 = 0;
      v58 = v26;
      v51 = 0;
      sub_2E3500(a1, 0, 0x6DB6DB6DB6DB6DB7LL * ((v4 - a1) >> 3), (__int64)&v54, (__int64)&v61);
      if ( v56 )
        qfree(v56);
      sub_606D0((__int64)&v61);
    }
    sub_606D0((__int64)v45);
  }
  return v64 - __readfsqword(0x28u);
}
