void __fastcall sub_1105DD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  const char *v7; // r15
  size_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  const void *v12; // rax
  size_t v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i si128; // xmm1
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  size_t v29; // rsi
  size_t v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  _BYTE *v33; // rax
  size_t v34; // rdx
  _BYTE *v35; // rax
  __m128i *v36; // rdi
  __int64 v37; // rax
  _BYTE *v38; // rdx
  __int64 v39; // rax
  _BYTE *v40; // rdx
  __int64 v41; // rsi
  std::_V2 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  _BYTE *v46; // rdx
  _BYTE *v47; // rcx
  const char **v48; // rax
  void *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rax
  __int64 *v62; // rsi
  __int64 v63; // [rsp+0h] [rbp-168h]
  __int64 v64; // [rsp+8h] [rbp-160h]
  __m128 v65; // [rsp+10h] [rbp-158h] BYREF
  __int64 v66; // [rsp+28h] [rbp-140h] BYREF
  int v67; // [rsp+30h] [rbp-138h]
  __int64 v68; // [rsp+38h] [rbp-130h]
  __int64 v69; // [rsp+40h] [rbp-128h] BYREF
  char v70; // [rsp+48h] [rbp-120h]
  void *v71; // [rsp+50h] [rbp-118h] BYREF
  __int64 v72; // [rsp+58h] [rbp-110h]
  _BYTE v73[16]; // [rsp+60h] [rbp-108h] BYREF
  void *v74[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v75; // [rsp+80h] [rbp-E8h] BYREF
  __m128i v76; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v77; // [rsp+A0h] [rbp-C8h]
  _BYTE *v78; // [rsp+B0h] [rbp-B8h]
  char v79; // [rsp+B8h] [rbp-B0h]
  int v80; // [rsp+BCh] [rbp-ACh]
  void **v81; // [rsp+C0h] [rbp-A8h]
  __m128i v82; // [rsp+D0h] [rbp-98h] BYREF
  double v83; // [rsp+E0h] [rbp-88h]
  __int64 v84; // [rsp+F0h] [rbp-78h]

  v62 = a1 + 1;
  if ( *(_BYTE *)(a2 + 504) )
  {
    v2 = a2;
    v3 = a1 + 1;
    v4 = *(_QWORD *)(a2 + 480);
    v64 = *(_QWORD *)(a2 + 488);
    v63 = *(_QWORD *)(a2 + 496);
    v5 = *a1;
    v6 = *v62;
    if ( v5 )
    {
      v7 = **(const char ***)(v5 + 48);
    }
    else
    {
      v48 = *(const char ***)(a2 + 224);
      if ( *(const char ***)(a2 + 232) == v48 )
      {
        v60 = sub_10DB460(v6);
        v6 = *v62;
        v7 = v60;
      }
      else
      {
        v7 = *v48;
      }
    }
    v8 = *(_QWORD *)(v6 + 720);
    if ( v8 )
    {
      v73[0] = 0;
      v71 = v73;
      v72 = 0;
      v76.m128i_i32[2] = 0;
      v79 = 0;
      v80 = 1;
      v78 = nullptr;
      v77 = 0;
      v76.m128i_i64[0] = (__int64)&off_2BEBE68;
      v81 = &v71;
      sub_227B8B0(&v76, 0, 0, 0);
      v28 = *(_QWORD *)(v2 + 40);
      v29 = 0;
      if ( v28 )
      {
        v65.m128_u64[0] = *(_QWORD *)(v2 + 40);
        v30 = j__strlen((const char *)v65.m128_u64[0]);
        v28 = v65.m128_u64[0];
        v29 = v30;
      }
      v31 = sub_228AA60(v28, v29, 0);
      sub_2290F40(&v76, v31, v32, 1);
      v33 = v78;
      if ( (unsigned __int64)v78 >= *((_QWORD *)&v77 + 1) )
      {
        sub_227BA10(&v76, 44);
      }
      else
      {
        ++v78;
        *v33 = 44;
      }
      v34 = 0;
      if ( v7 )
        v34 = j__strlen(v7);
      sub_2290F40(&v76, v7, v34, 1);
      v35 = v78;
      if ( (unsigned __int64)v78 >= *((_QWORD *)&v77 + 1) )
      {
        v36 = (__m128i *)sub_227BA10(&v76, 44);
      }
      else
      {
        v36 = &v76;
        ++v78;
        *v35 = 44;
      }
      v37 = sub_227B930(v36, v4);
      v38 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
      {
        v37 = sub_227BA10(v37, 44);
      }
      else
      {
        *(_QWORD *)(v37 + 32) = v38 + 1;
        *v38 = 44;
      }
      v39 = sub_227B930(v37, v64);
      v40 = *(_BYTE **)(v39 + 32);
      if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
      {
        v39 = sub_227BA10(v39, 44);
      }
      else
      {
        *(_QWORD *)(v39 + 32) = v40 + 1;
        *v40 = 44;
      }
      v41 = v63;
      v42 = (std::_V2 *)v39;
      v43 = sub_227B910(v39, v63);
      v46 = *(_BYTE **)(v43 + 32);
      if ( (unsigned __int64)v46 >= *(_QWORD *)(v43 + 24) )
      {
        v41 = 10;
        v42 = (std::_V2 *)v43;
        sub_227BA10(v43, 10);
      }
      else
      {
        v47 = v46 + 1;
        *(_QWORD *)(v43 + 32) = v46 + 1;
        *v46 = 10;
      }
      if ( v78 != (_BYTE *)v77 )
      {
        v42 = (std::_V2 *)&v76;
        sub_227B9F0(&v76, v41, v46, v47, v44, v45, v63, v64, v65.m128_u64[0]);
      }
      v67 = 0;
      v68 = std::_V2::system_category(v42);
      sub_227D450((std::_V2 *)&v82);
      sub_227D5A0(&v69, &v82);
      if ( (v70 & 1) != 0 )
      {
        v54 = sub_227D6D0(&v69, &v82);
        v55 = sub_995540(v54, "ERROR: Cannot lock file ");
        v56 = sub_227BF10(v55, *(_QWORD *)(*v3 + 712LL), *(_QWORD *)(*v3 + 720LL));
        v57 = sub_995540(v56, ": ");
        if ( (v70 & 1) != 0 )
        {
          v59 = v69;
          v69 = 0;
          v66 = v59;
        }
        else
        {
          v66 = 0;
        }
        sub_2221210(v74, &v66);
        v58 = sub_227BF10(v57, v74[0], v74[1]);
        sub_995540(v58, "\n");
        if ( v74[0] != &v75 )
          operator delete(v74[0]);
        if ( v66 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
      }
      else
      {
        v49 = v71;
        sub_227BF10(&v82, v71, v72);
        if ( v84 != *(_QWORD *)&v83 )
          sub_227B9F0(&v82, v49, v50, v51, v52, v53, v63, v64, v65.m128_u64[0]);
      }
      sub_10DFEF0(&v69);
      sub_227B600(&v82);
      v76.m128i_i64[0] = (__int64)&off_2BEBE68;
      sub_227B7A0(&v76);
      if ( v71 != v73 )
        operator delete(v71);
    }
    else
    {
      v9 = sub_227D600();
      v10 = *(_QWORD *)(v2 + 40);
      v11 = v9;
      if ( v10 )
        v8 = j__strlen(*(const char **)(v2 + 40));
      v65.m128_u64[0] = (unsigned __int64)"%.3f";
      v65 = _mm_loadh_ps((const double *)v65.m128_u64);
      v12 = (const void *)sub_228AA60(v10, v8, 0);
      v14 = sub_9954E0(v11, v12, v13);
      v15 = sub_995540(v14, ": ");
      v16 = sub_995540(v15, "output=");
      sub_995540(v16, v7);
      v17 = sub_227D600();
      v18 = sub_995540(v17, ", total=");
      si128 = _mm_load_si128((const __m128i *)&v65);
      v83 = (double)(int)v4 / 1000.0;
      v82 = si128;
      v20 = sub_227C560(v18, &v82);
      v21 = sub_995540(v20, " ms");
      v22 = sub_995540(v21, ", user=");
      v23 = _mm_load_si128((const __m128i *)&v65);
      *(double *)&v77 = (double)(int)v64 / 1000.0;
      v76 = v23;
      v24 = sub_227C560(v22, &v76);
      v25 = sub_995540(v24, " ms");
      v26 = sub_995540(v25, ", mem=");
      v27 = sub_227B910(v26, v63);
      sub_995540(v27, " Kb\n");
    }
  }
}
