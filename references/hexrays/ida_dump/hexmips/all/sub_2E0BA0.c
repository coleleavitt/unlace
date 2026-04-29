unsigned __int64 __fastcall sub_2E0BA0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 v6; // r13
  const __m128i *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 i; // r13
  __m128i v10; // xmm4
  __int64 v11; // r15
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm5
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // r13
  int v28; // r11d
  __m128i v29; // xmm0
  __m128i v30; // xmm2
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // rax
  __int16 v34; // r10
  char v35; // r9
  char v36; // r8
  __int64 v37; // r14
  __int64 v38; // rax
  __m128i v39; // xmm2
  __int64 v40; // rdi
  const __m128i *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __m128i v46; // xmm0
  __int64 v48; // r15
  __int64 v49; // [rsp+0h] [rbp-1B8h]
  int v50; // [rsp+0h] [rbp-1B8h]
  int v51; // [rsp+0h] [rbp-1B8h]
  int v52; // [rsp+Ch] [rbp-1ACh]
  char v53; // [rsp+Ch] [rbp-1ACh]
  char v54; // [rsp+Ch] [rbp-1ACh]
  __m128i v55; // [rsp+10h] [rbp-1A8h] BYREF
  __m128i v56; // [rsp+20h] [rbp-198h] BYREF
  __m128i v57; // [rsp+30h] [rbp-188h] BYREF
  __m128i v58; // [rsp+40h] [rbp-178h] BYREF
  __int64 v59; // [rsp+50h] [rbp-168h]
  const __m128i *v60; // [rsp+58h] [rbp-160h]
  __int64 v61; // [rsp+60h] [rbp-158h]
  const __m128i *v62; // [rsp+68h] [rbp-150h]
  __int64 (__fastcall **v63)(); // [rsp+70h] [rbp-148h]
  __m128i v64; // [rsp+78h] [rbp-140h] BYREF
  int v65; // [rsp+88h] [rbp-130h]
  __int16 v66; // [rsp+8Ch] [rbp-12Ch]
  char v67; // [rsp+8Eh] [rbp-12Ah]
  char v68; // [rsp+8Fh] [rbp-129h]
  __int64 v69; // [rsp+90h] [rbp-128h]
  __m128i v70; // [rsp+98h] [rbp-120h]
  __int64 v71; // [rsp+A8h] [rbp-110h]
  __m128i v72; // [rsp+B0h] [rbp-108h] BYREF
  int v73; // [rsp+C0h] [rbp-F8h]
  __int64 v74; // [rsp+C8h] [rbp-F0h]
  __int64 (__fastcall **v75)(); // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v76; // [rsp+D8h] [rbp-E0h]
  int v77; // [rsp+E8h] [rbp-D0h]
  __int16 v78; // [rsp+ECh] [rbp-CCh]
  char v79; // [rsp+EEh] [rbp-CAh]
  char v80; // [rsp+EFh] [rbp-C9h]
  __int64 v81; // [rsp+F0h] [rbp-C8h]
  __m128i v82; // [rsp+F8h] [rbp-C0h]
  __int64 v83; // [rsp+108h] [rbp-B0h]
  __m128i v84; // [rsp+110h] [rbp-A8h]
  int v85; // [rsp+120h] [rbp-98h]
  __int64 v86; // [rsp+128h] [rbp-90h]
  char v87; // [rsp+130h] [rbp-88h] BYREF
  __m128i v88; // [rsp+150h] [rbp-68h] BYREF
  __int64 v89; // [rsp+160h] [rbp-58h]
  int (__fastcall *v90)(__m128i *, unsigned __int64, __int64); // [rsp+168h] [rbp-50h]
  unsigned __int64 v91; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v61 = a3;
  v62 = a4;
  v91 = __readfsqword(0x28u);
  v60 = (const __m128i *)&v87;
  v6 = a2 - a1;
  if ( a2 - a1 > 1536 )
  {
    while ( 1 )
    {
      v7 = v60;
      if ( !v61 )
        break;
      sub_2C96A0((__int64)v60, v62);
      sub_2C96A0((__int64)&v88, v7);
      v8 = a1 + 96;
      sub_2E0AC0(
        a1,
        a1 + 96,
        a1
      + 32
      * (((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1) + ((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)),
        v4 - 96,
        (__int64)&v88);
      sub_62A50((__int64)&v88);
      sub_2C96A0((__int64)&v88, v7);
      for ( i = v4; ; *(_QWORD *)(i + 88) = v49 )
      {
        if ( !v89 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v90(&v88, v8, a1) < 0 )
        {
          v8 += 96LL;
          if ( !v89 )
            goto LABEL_29;
        }
        i -= 96LL;
        if ( !v89 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v90(&v88, a1, i) < 0 )
        {
          i -= 96LL;
          if ( !v89 )
            goto LABEL_28;
        }
        if ( v8 >= i )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 40));
        v11 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 32) = 0;
        *(_OWORD *)(v8 + 40) = 0;
        v12 = *(_QWORD *)(i + 8);
        v13 = _mm_loadu_si128((const __m128i *)(v8 + 8));
        v14 = *(_QWORD *)(v8 + 24);
        v15 = *(_QWORD *)(v8 + 56);
        v55 = v10;
        *(_QWORD *)(v8 + 8) = v12;
        LODWORD(v12) = *(_DWORD *)(i + 16);
        v59 = v15;
        LODWORD(v15) = *(_DWORD *)(v8 + 80);
        *(_DWORD *)(v8 + 16) = v12;
        v52 = v15;
        v16 = *(_QWORD *)(v8 + 88);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(i + 24);
        LOBYTE(v12) = *(_BYTE *)(i + 28);
        v76 = v13;
        v17 = _mm_loadu_si128((const __m128i *)(v8 + 64));
        *(_BYTE *)(v8 + 28) = v12;
        v49 = v16;
        *(_BYTE *)(v8 + 29) = *(_BYTE *)(i + 29);
        LOBYTE(v12) = *(_BYTE *)(i + 30);
        v84 = v17;
        *(_BYTE *)(v8 + 30) = v12;
        *(_BYTE *)(v8 + 31) = *(_BYTE *)(i + 31);
        v18 = *(_QWORD *)(i + 32);
        *(_QWORD *)(i + 32) = 0;
        v19 = _mm_loadu_si128((const __m128i *)(i + 40));
        *(_OWORD *)(i + 40) = 0;
        v20 = *(_QWORD *)(v8 + 32);
        if ( v20 )
        {
          *(_QWORD *)(v8 + 40) = 0;
          v58.m128i_i64[0] = v14;
          v57.m128i_i64[0] = v18;
          v56 = v19;
          qfree(v20);
          v14 = v58.m128i_i64[0];
          v18 = v57.m128i_i64[0];
          v19 = _mm_load_si128(&v56);
        }
        *(_QWORD *)(v8 + 32) = v18;
        *(__m128i *)(v8 + 40) = v19;
        *(_QWORD *)(v8 + 56) = *(_QWORD *)(i + 56);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(i + 64);
        *(_DWORD *)(v8 + 72) = *(_DWORD *)(i + 72);
        *(_DWORD *)(v8 + 80) = *(_DWORD *)(i + 80);
        *(_QWORD *)(v8 + 88) = *(_QWORD *)(i + 88);
        v21 = v76.m128i_i64[0];
        v22 = *(_QWORD *)(i + 32);
        *(_QWORD *)(i + 24) = v14;
        *(_QWORD *)(i + 8) = v21;
        *(_DWORD *)(i + 16) = v76.m128i_i32[2];
        if ( v22 )
        {
          *(_QWORD *)(i + 40) = 0;
          qfree(v22);
        }
        v23 = v59;
        v24 = _mm_load_si128(&v55);
        *(_QWORD *)(i + 32) = v11;
        v8 += 96LL;
        *(_QWORD *)(i + 56) = v23;
        v25 = v84.m128i_i64[0];
        *(__m128i *)(i + 40) = v24;
        *(_QWORD *)(i + 64) = v25;
        *(_DWORD *)(i + 72) = v84.m128i_i32[2];
        *(_DWORD *)(i + 80) = v52;
      }
      v48 = --v61;
      sub_62A50((__int64)&v88);
      sub_62A50((__int64)v60);
      sub_2C96A0((__int64)&v88, v62);
      sub_2E0BA0(v8, v4, v48, &v88);
      sub_62A50((__int64)&v88);
      v6 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1536 )
        return v91 - __readfsqword(0x28u);
      v4 = v8;
    }
    sub_2C96A0((__int64)v60, v62);
    sub_2C96A0((__int64)&v88, v7);
    sub_2E0630(a1, v4, &v88);
    sub_62A50((__int64)&v88);
    while ( v4 - a1 > 96 )
    {
      v26 = _mm_loadu_si128((const __m128i *)(v4 - 88));
      v27 = *(_QWORD *)(v4 - 64);
      v63 = off_4C3328;
      v28 = *(_DWORD *)(v4 - 72);
      v4 -= 96;
      v64 = v26;
      v29 = _mm_loadu_si128((const __m128i *)(v4 + 40));
      v30 = _mm_loadu_si128((const __m128i *)(v4 + 64));
      *(_OWORD *)(v4 + 40) = 0;
      v31 = *(_QWORD *)(v4 + 56);
      v32 = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 32) = 0;
      v33 = *(_QWORD *)(a1 + 8);
      v34 = *(_WORD *)(v4 + 28);
      v35 = *(_BYTE *)(v4 + 30);
      v72 = v30;
      v36 = *(_BYTE *)(v4 + 31);
      *(_QWORD *)(v4 + 8) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 16);
      v37 = *(_QWORD *)(v4 + 88);
      v65 = v28;
      v66 = v34;
      *(_DWORD *)(v4 + 16) = v33;
      LODWORD(v33) = *(_DWORD *)(a1 + 24);
      v67 = v35;
      *(_DWORD *)(v4 + 24) = v33;
      LOBYTE(v33) = *(_BYTE *)(a1 + 28);
      v68 = v36;
      v69 = v27;
      v71 = v31;
      v73 = v32;
      v74 = v37;
      v70 = v29;
      *(_BYTE *)(v4 + 28) = v33;
      *(_BYTE *)(v4 + 29) = *(_BYTE *)(a1 + 29);
      *(_BYTE *)(v4 + 30) = *(_BYTE *)(a1 + 30);
      *(_BYTE *)(v4 + 31) = *(_BYTE *)(a1 + 31);
      v38 = *(_QWORD *)(a1 + 32);
      v39 = _mm_loadu_si128((const __m128i *)(a1 + 40));
      *(_QWORD *)(a1 + 32) = 0;
      *(_OWORD *)(a1 + 40) = 0;
      v40 = *(_QWORD *)(v4 + 32);
      if ( v40 )
      {
        *(_QWORD *)(v4 + 40) = 0;
        LOWORD(v61) = v34;
        v56.m128i_i64[0] = v38;
        v55.m128i_i64[0] = v31;
        LOBYTE(v59) = v36;
        v53 = v35;
        v50 = v28;
        v58 = v39;
        v57 = v29;
        qfree(v40);
        v34 = v61;
        v39 = _mm_load_si128(&v58);
        v29 = _mm_load_si128(&v57);
        v38 = v56.m128i_i64[0];
        v31 = v55.m128i_i64[0];
        v36 = v59;
        v35 = v53;
        v28 = v50;
      }
      *(_QWORD *)(v4 + 32) = v38;
      v41 = v60;
      *(__m128i *)(v4 + 40) = v39;
      v42 = *(_QWORD *)(a1 + 56);
      v57.m128i_i16[0] = v34;
      *(_QWORD *)(v4 + 56) = v42;
      v43 = *(_QWORD *)(a1 + 64);
      v55.m128i_i64[0] = v31;
      *(_QWORD *)(v4 + 64) = v43;
      LODWORD(v43) = *(_DWORD *)(a1 + 72);
      LOBYTE(v59) = v36;
      *(_DWORD *)(v4 + 72) = v43;
      v54 = v35;
      *(_DWORD *)(v4 + 80) = *(_DWORD *)(a1 + 80);
      v51 = v28;
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(a1 + 88);
      v56 = v29;
      sub_2C96A0((__int64)&v88, v41);
      v44 = _mm_load_si128(&v56);
      v86 = v37;
      v75 = off_4C3328;
      v45 = _mm_loadu_si128(&v64);
      v82 = v44;
      v81 = v27;
      v70 = 0;
      v46 = _mm_load_si128(&v72);
      v80 = v59;
      v83 = v55.m128i_i64[0];
      v77 = v51;
      v78 = v57.m128i_i16[0];
      v79 = v54;
      v69 = 0;
      v85 = v32;
      v76 = v45;
      v84 = v46;
      sub_2DFFB0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v4 - a1) >> 5), (__int64)&v75, (__int64)&v88);
      if ( v81 )
        qfree(v81);
      sub_62A50((__int64)&v88);
    }
    sub_62A50((__int64)v60);
  }
  return v91 - __readfsqword(0x28u);
}
