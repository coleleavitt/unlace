unsigned __int64 __fastcall sub_491370(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v30; // rdi
  __m128i v31; // xmm1
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // r15
  __int64 v40; // rax
  __m128i v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r13
  __int64 v47; // [rsp+10h] [rbp-238h] BYREF
  __m128i v48; // [rsp+18h] [rbp-230h]
  __int64 v49; // [rsp+28h] [rbp-220h]
  __m128i v50; // [rsp+30h] [rbp-218h]
  __int64 v51; // [rsp+40h] [rbp-208h]
  __m128i v52; // [rsp+48h] [rbp-200h]
  __int64 v53; // [rsp+58h] [rbp-1F0h]
  __m128i v54; // [rsp+60h] [rbp-1E8h]
  __int64 v55; // [rsp+70h] [rbp-1D8h]
  __m128i v56; // [rsp+78h] [rbp-1D0h]
  int v57; // [rsp+88h] [rbp-1C0h]
  __int64 v58; // [rsp+90h] [rbp-1B8h]
  __m128i v59; // [rsp+98h] [rbp-1B0h]
  __int64 v60; // [rsp+A8h] [rbp-1A0h]
  __m128i v61; // [rsp+B0h] [rbp-198h]
  __int64 v62; // [rsp+C0h] [rbp-188h]
  char v63; // [rsp+C8h] [rbp-180h]
  __int64 v64; // [rsp+D0h] [rbp-178h]
  __m128i v65; // [rsp+D8h] [rbp-170h]
  __int64 v66; // [rsp+E8h] [rbp-160h]
  __m128i v67; // [rsp+F0h] [rbp-158h]
  __int64 v68; // [rsp+100h] [rbp-148h]
  __m128i v69; // [rsp+108h] [rbp-140h]
  int v70; // [rsp+118h] [rbp-130h]
  __int16 v71; // [rsp+11Ch] [rbp-12Ch]
  char v72; // [rsp+11Eh] [rbp-12Ah]
  __int64 v73; // [rsp+120h] [rbp-128h]
  __m128i v74; // [rsp+128h] [rbp-120h]
  _QWORD *v75; // [rsp+138h] [rbp-110h]
  unsigned __int64 v76; // [rsp+140h] [rbp-108h]
  _QWORD v77[2]; // [rsp+148h] [rbp-100h] BYREF
  __m128i v78; // [rsp+158h] [rbp-F0h]
  _QWORD v79[2]; // [rsp+168h] [rbp-E0h] BYREF
  __m128i v80; // [rsp+178h] [rbp-D0h]
  __int64 v81; // [rsp+188h] [rbp-C0h]
  __m128i v82; // [rsp+190h] [rbp-B8h]
  int v83; // [rsp+1A0h] [rbp-A8h]
  int v84; // [rsp+1A4h] [rbp-A4h]
  __int16 v85; // [rsp+1A8h] [rbp-A0h]
  __int64 v86; // [rsp+1B0h] [rbp-98h]
  __int128 v87; // [rsp+1C0h] [rbp-88h] BYREF
  __m128i v88; // [rsp+1D0h] [rbp-78h] BYREF
  __int128 v89; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v90; // [rsp+1F0h] [rbp-58h]
  unsigned __int64 v91; // [rsp+208h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 424 )
  {
    v5 = a1 + 424;
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
        v47 = v9;
        v12 = *(_QWORD *)(v5 + 24);
        v50 = v10;
        v13 = _mm_loadu_si128((const __m128i *)(v5 + 56));
        v49 = v12;
        v14 = *(_QWORD *)(v5 + 48);
        v52 = v13;
        v15 = _mm_loadu_si128((const __m128i *)(v5 + 80));
        v51 = v14;
        v16 = *(_QWORD *)(v5 + 72);
        v54 = v15;
        v17 = _mm_loadu_si128((const __m128i *)(v5 + 104));
        v53 = v16;
        v18 = *(_QWORD *)(v5 + 96);
        v48 = v11;
        v55 = v18;
        LODWORD(v18) = *(_DWORD *)(v5 + 120);
        *(_OWORD *)(v5 + 8) = 0;
        *(_OWORD *)(v5 + 32) = 0;
        *(_OWORD *)(v5 + 56) = 0;
        *(_OWORD *)(v5 + 80) = 0;
        v56 = v17;
        *(_OWORD *)(v5 + 104) = 0;
        *(_QWORD *)(v5 + 24) = 0;
        *(_QWORD *)(v5 + 48) = 0;
        *(_QWORD *)(v5 + 72) = 0;
        *(_QWORD *)(v5 + 96) = 0;
        v57 = v18;
        v19 = *(_QWORD *)(v5 + 128);
        v20 = _mm_loadu_si128((const __m128i *)(v5 + 136));
        *(_QWORD *)(v5 + 128) = 0;
        v58 = v19;
        v21 = *(_QWORD *)(v5 + 152);
        v59 = v20;
        v22 = _mm_loadu_si128((const __m128i *)(v5 + 160));
        v60 = v21;
        v23 = *(_QWORD *)(v5 + 176);
        v61 = v22;
        v24 = _mm_loadu_si128((const __m128i *)(v5 + 200));
        v62 = v23;
        LOBYTE(v23) = *(_BYTE *)(v5 + 184);
        v65 = v24;
        v25 = _mm_loadu_si128((const __m128i *)(v5 + 224));
        v63 = v23;
        v26 = *(_QWORD *)(v5 + 192);
        v67 = v25;
        v27 = _mm_loadu_si128((const __m128i *)(v5 + 248));
        v64 = v26;
        v28 = *(_QWORD *)(v5 + 216);
        *(_OWORD *)(v5 + 136) = 0;
        v66 = v28;
        v29 = *(_QWORD *)(v5 + 240);
        *(_OWORD *)(v5 + 160) = 0;
        v68 = v29;
        *(_OWORD *)(v5 + 200) = 0;
        *(_OWORD *)(v5 + 224) = 0;
        *(_QWORD *)(v5 + 152) = 0;
        *(_QWORD *)(v5 + 192) = 0;
        *(_QWORD *)(v5 + 216) = 0;
        *(_QWORD *)(v5 + 240) = 0;
        v69 = v27;
        LODWORD(v29) = *(_DWORD *)(v5 + 264);
        v30 = *(_QWORD *)(v5 + 320);
        v31 = _mm_loadu_si128((const __m128i *)(v5 + 280));
        v32 = *(_QWORD **)(v5 + 296);
        *(_OWORD *)(v5 + 248) = 0;
        v70 = v29;
        LOWORD(v29) = *(_WORD *)(v5 + 268);
        v33 = *(_QWORD *)(v5 + 304);
        *(_OWORD *)(v5 + 280) = 0;
        v34 = _mm_loadu_si128((const __m128i *)(v5 + 328));
        v71 = v29;
        LOBYTE(v29) = *(_BYTE *)(v5 + 270);
        v77[1] = v30;
        v72 = v29;
        v35 = *(_QWORD *)(v5 + 272);
        v75 = v32;
        v73 = v35;
        v36 = *(_QWORD *)(v5 + 312);
        *(_QWORD *)(v5 + 272) = 0;
        v76 = v33;
        v77[0] = v36;
        v79[0] = 0;
        v74 = v31;
        v78 = v34;
        if ( v32 == (_QWORD *)(v5 + 344) )
        {
          v75 = v79;
          v79[0] = *(_QWORD *)(v5 + 344);
        }
        if ( v36 )
          v75[*(unsigned int *)(v36 + 8) % v33] = v77;
        v37 = *(_QWORD *)(v5 + 352);
        v38 = _mm_loadu_si128((const __m128i *)(v5 + 360));
        *(_QWORD *)(v5 + 296) = v5 + 344;
        v39 = v5 + 424;
        v79[1] = v37;
        v40 = *(_QWORD *)(v5 + 376);
        v80 = v38;
        v41 = _mm_loadu_si128((const __m128i *)(v5 + 384));
        v81 = v40;
        LODWORD(v40) = *(_DWORD *)(v5 + 400);
        *(_QWORD *)(v5 + 336) = 0;
        v83 = v40;
        LODWORD(v40) = *(_DWORD *)(v5 + 404);
        *(_QWORD *)(v5 + 304) = 1;
        v84 = v40;
        LOWORD(v40) = *(_WORD *)(v5 + 408);
        *(_QWORD *)(v5 + 312) = 0;
        v85 = v40;
        v42 = *(_QWORD *)(v5 + 416);
        *(_QWORD *)(v5 + 320) = 0;
        v86 = v42;
        *(_OWORD *)(v5 + 344) = 0;
        *(_OWORD *)(v5 + 360) = 0;
        v82 = v41;
        *(_QWORD *)(v5 + 376) = 0;
        v43 = 0x21CFB2B78C13521DLL * ((v5 - a1) >> 3);
        *(_OWORD *)(v5 + 384) = 0;
        if ( v5 - a1 > 0 )
        {
          do
          {
            v44 = v5;
            v5 -= 424;
            sub_480260(v44, (__int64 *)v5);
            *(_QWORD *)(v44 + 416) = *(_QWORD *)(v44 - 8);
            --v43;
          }
          while ( v43 );
        }
        v5 = v39;
        sub_480260(a1, &v47);
        *(_QWORD *)(a1 + 416) = v86;
        sub_481890((__int64)&v47);
        if ( a2 == v39 )
          return v91 - __readfsqword(0x28u);
      }
      v6 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a3 + 16);
      v88 = 0u;
      v87 = 0;
      if ( v6 )
      {
        v6(&v87, a3, 2);
        v7 = _mm_loadu_si128((const __m128i *)(a3 + 16));
        v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a3 + 16);
        v90 = 0u;
        v88 = v7;
        v89 = 0;
        if ( v8 )
        {
          v8(&v89, &v87, 2);
          v90 = _mm_load_si128(&v88);
        }
      }
      else
      {
        v89 = 0;
        v90 = 0u;
      }
      sub_491250((__int64 *)v5, (__int64)&v89);
      if ( v90.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v90.m128i_i64[0])(&v89, &v89, 3);
      if ( v88.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v88.m128i_i64[0])(&v87, &v87, 3);
      v5 += 424;
    }
    while ( a2 != v5 );
  }
  return v91 - __readfsqword(0x28u);
}

