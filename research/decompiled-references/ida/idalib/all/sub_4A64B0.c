unsigned __int64 __fastcall sub_4A64B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  void (__fastcall *v6)(__int128 *, __int64, __int64); // rax
  __m128i v7; // xmm0
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // rax
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm1
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // r15
  __int64 v41; // rax
  __m128i v42; // xmm1
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v48; // [rsp+10h] [rbp-238h] BYREF
  __m128i v49; // [rsp+18h] [rbp-230h]
  __int64 v50; // [rsp+28h] [rbp-220h]
  __m128i v51; // [rsp+30h] [rbp-218h]
  __int64 v52; // [rsp+40h] [rbp-208h]
  __m128i v53; // [rsp+48h] [rbp-200h]
  __int64 v54; // [rsp+58h] [rbp-1F0h]
  __m128i v55; // [rsp+60h] [rbp-1E8h]
  __int64 v56; // [rsp+70h] [rbp-1D8h]
  __m128i v57; // [rsp+78h] [rbp-1D0h]
  int v58; // [rsp+88h] [rbp-1C0h]
  __int64 v59; // [rsp+90h] [rbp-1B8h]
  __m128i v60; // [rsp+98h] [rbp-1B0h]
  __int64 v61; // [rsp+A8h] [rbp-1A0h]
  __m128i v62; // [rsp+B0h] [rbp-198h]
  __int64 v63; // [rsp+C0h] [rbp-188h]
  char v64; // [rsp+C8h] [rbp-180h]
  __int64 v65; // [rsp+D0h] [rbp-178h]
  __m128i v66; // [rsp+D8h] [rbp-170h]
  __int64 v67; // [rsp+E8h] [rbp-160h]
  __m128i v68; // [rsp+F0h] [rbp-158h]
  __int64 v69; // [rsp+100h] [rbp-148h]
  __m128i v70; // [rsp+108h] [rbp-140h]
  __int64 v71; // [rsp+118h] [rbp-130h]
  __int16 v72; // [rsp+120h] [rbp-128h]
  char v73; // [rsp+122h] [rbp-126h]
  __int64 v74; // [rsp+128h] [rbp-120h]
  __m128i v75; // [rsp+130h] [rbp-118h]
  _QWORD *v76; // [rsp+140h] [rbp-108h]
  unsigned __int64 v77; // [rsp+148h] [rbp-100h]
  _QWORD v78[2]; // [rsp+150h] [rbp-F8h] BYREF
  __m128i v79; // [rsp+160h] [rbp-E8h]
  _QWORD v80[2]; // [rsp+170h] [rbp-D8h] BYREF
  __m128i v81; // [rsp+180h] [rbp-C8h]
  __int64 v82; // [rsp+190h] [rbp-B8h]
  __m128i v83; // [rsp+198h] [rbp-B0h]
  int v84; // [rsp+1A8h] [rbp-A0h]
  int v85; // [rsp+1ACh] [rbp-9Ch]
  __int16 v86; // [rsp+1B0h] [rbp-98h]
  __int64 v87; // [rsp+1B8h] [rbp-90h]
  __int128 v88; // [rsp+1C0h] [rbp-88h] BYREF
  __m128i v89; // [rsp+1D0h] [rbp-78h] BYREF
  __int128 v90; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v91; // [rsp+1F0h] [rbp-58h]
  unsigned __int64 v92; // [rsp+208h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 432 )
  {
    v5 = a1 + 432;
    do
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a3 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v5, a1) >= 0 )
          break;
        v9 = *(_QWORD *)v5;
        v10 = _mm_loadu_si128((const __m128i *)(v5 + 32));
        *(_QWORD *)v5 = 0;
        v11 = _mm_loadu_si128((const __m128i *)(v5 + 8));
        v48 = v9;
        v12 = *(_QWORD *)(v5 + 24);
        v51 = v10;
        v13 = _mm_loadu_si128((const __m128i *)(v5 + 56));
        v50 = v12;
        v14 = *(_QWORD *)(v5 + 48);
        v53 = v13;
        v15 = _mm_loadu_si128((const __m128i *)(v5 + 80));
        v52 = v14;
        v16 = *(_QWORD *)(v5 + 72);
        v55 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(v5 + 104));
        v54 = v16;
        v18 = *(_QWORD *)(v5 + 96);
        v49 = v11;
        v56 = v18;
        LODWORD(v18) = *(_DWORD *)(v5 + 120);
        *(_OWORD *)(v5 + 8) = 0;
        *(_OWORD *)(v5 + 32) = 0;
        *(_OWORD *)(v5 + 56) = 0;
        *(_OWORD *)(v5 + 80) = 0;
        v57 = v17;
        *(_OWORD *)(v5 + 104) = 0;
        *(_QWORD *)(v5 + 24) = 0;
        *(_QWORD *)(v5 + 48) = 0;
        *(_QWORD *)(v5 + 72) = 0;
        *(_QWORD *)(v5 + 96) = 0;
        v58 = v18;
        v19 = *(_QWORD *)(v5 + 128);
        v20 = _mm_loadu_si128((const __m128i *)(v5 + 136));
        *(_QWORD *)(v5 + 128) = 0;
        v59 = v19;
        v21 = *(_QWORD *)(v5 + 152);
        v60 = v20;
        v22 = _mm_loadu_si128((const __m128i *)(v5 + 160));
        v61 = v21;
        v23 = *(_QWORD *)(v5 + 176);
        v62 = v22;
        v24 = _mm_loadu_si128((const __m128i *)(v5 + 200));
        v63 = v23;
        LOBYTE(v23) = *(_BYTE *)(v5 + 184);
        v66 = v24;
        v25 = _mm_loadu_si128((const __m128i *)(v5 + 224));
        v64 = v23;
        v26 = *(_QWORD *)(v5 + 192);
        v68 = v25;
        v27 = _mm_loadu_si128((const __m128i *)(v5 + 248));
        v65 = v26;
        v28 = *(_QWORD *)(v5 + 216);
        *(_OWORD *)(v5 + 136) = 0;
        v67 = v28;
        v29 = *(_QWORD *)(v5 + 240);
        *(_OWORD *)(v5 + 160) = 0;
        v69 = v29;
        *(_OWORD *)(v5 + 200) = 0;
        *(_OWORD *)(v5 + 224) = 0;
        *(_QWORD *)(v5 + 152) = 0;
        *(_QWORD *)(v5 + 192) = 0;
        *(_QWORD *)(v5 + 216) = 0;
        *(_QWORD *)(v5 + 240) = 0;
        v70 = v27;
        v30 = *(_QWORD *)(v5 + 264);
        v31 = *(_QWORD *)(v5 + 328);
        v32 = _mm_loadu_si128((const __m128i *)(v5 + 288));
        v33 = *(_QWORD **)(v5 + 304);
        *(_OWORD *)(v5 + 248) = 0;
        v71 = v30;
        LOWORD(v30) = *(_WORD *)(v5 + 272);
        v34 = *(_QWORD *)(v5 + 312);
        *(_OWORD *)(v5 + 288) = 0;
        v35 = _mm_loadu_si128((const __m128i *)(v5 + 336));
        v72 = v30;
        LOBYTE(v30) = *(_BYTE *)(v5 + 274);
        v78[1] = v31;
        v73 = v30;
        v36 = *(_QWORD *)(v5 + 280);
        v76 = v33;
        v74 = v36;
        v37 = *(_QWORD *)(v5 + 320);
        *(_QWORD *)(v5 + 280) = 0;
        v77 = v34;
        v78[0] = v37;
        v80[0] = 0;
        v75 = v32;
        v79 = v35;
        if ( v33 == (_QWORD *)(v5 + 352) )
        {
          v76 = v80;
          v80[0] = *(_QWORD *)(v5 + 352);
        }
        if ( v37 )
          v76[*(_QWORD *)(v37 + 8) % v34] = v78;
        v38 = *(_QWORD *)(v5 + 360);
        v39 = _mm_loadu_si128((const __m128i *)(v5 + 368));
        *(_QWORD *)(v5 + 304) = v5 + 352;
        v40 = v5 + 432;
        v80[1] = v38;
        v41 = *(_QWORD *)(v5 + 384);
        v81 = v39;
        v42 = _mm_loadu_si128((const __m128i *)(v5 + 392));
        v82 = v41;
        LODWORD(v41) = *(_DWORD *)(v5 + 408);
        *(_QWORD *)(v5 + 344) = 0;
        v84 = v41;
        LODWORD(v41) = *(_DWORD *)(v5 + 412);
        *(_QWORD *)(v5 + 312) = 1;
        v85 = v41;
        LOWORD(v41) = *(_WORD *)(v5 + 416);
        *(_QWORD *)(v5 + 320) = 0;
        v86 = v41;
        v43 = *(_QWORD *)(v5 + 424);
        *(_QWORD *)(v5 + 328) = 0;
        v87 = v43;
        *(_OWORD *)(v5 + 352) = 0;
        *(_OWORD *)(v5 + 368) = 0;
        v83 = v42;
        *(_QWORD *)(v5 + 384) = 0;
        v44 = 0x84BDA12F684BDA13LL * ((v5 - a1) >> 4);
        *(_OWORD *)(v5 + 392) = 0;
        if ( v5 - a1 > 0 )
        {
          do
          {
            v45 = v5;
            v5 -= 432;
            sub_494DC0(v45, (__int64 *)v5);
            *(_QWORD *)(v45 + 424) = *(_QWORD *)(v45 - 8);
            --v44;
          }
          while ( v44 );
        }
        v5 = v40;
        sub_494DC0(a1, &v48);
        *(_QWORD *)(a1 + 424) = v87;
        sub_496580((__int64)&v48);
        if ( a2 == v40 )
          return v92 - __readfsqword(0x28u);
      }
      v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
      v89 = 0u;
      v88 = 0;
      if ( v6 )
      {
        v6(&v88, a3, 2);
        v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
        v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
        v91 = 0u;
        v89 = v7;
        v90 = 0;
        if ( v8 )
        {
          v8(&v90, &v88, 2);
          v91 = _mm_load_si128(&v89);
        }
      }
      else
      {
        v90 = 0;
        v91 = 0u;
      }
      sub_4A6390((__int64 *)v5, (__int64)&v90);
      if ( v91.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v91.m128i_i64[0])(&v90, &v90, 3);
      if ( v89.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v89.m128i_i64[0])(&v88, &v88, 3);
      v5 += 432;
    }
    while ( a2 != v5 );
  }
  return v92 - __readfsqword(0x28u);
}
