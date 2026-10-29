__int64 __fastcall sub_378C20(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  bool v15; // zf
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  const char *v32; // rcx
  const char *v33; // rdx
  const char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r9
  const char *v37; // rdx
  const char *v38; // rdi
  __int64 v39; // rax
  const char *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  _QWORD *v44; // rbp
  size_t v45; // rdx
  const char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r9
  const char *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r9
  const char *v52; // rdx
  void *v54; // rax
  void *v55; // rsi
  __int64 v56; // [rsp+0h] [rbp-218h]
  __int64 v57; // [rsp+0h] [rbp-218h]
  __int64 v58; // [rsp+0h] [rbp-218h]
  __int64 v59; // [rsp+0h] [rbp-218h]
  __int64 v60; // [rsp+8h] [rbp-210h]
  __int64 v61; // [rsp+8h] [rbp-210h]
  __int64 v62; // [rsp+8h] [rbp-210h]
  __int64 v63; // [rsp+8h] [rbp-210h]
  __int64 v64; // [rsp+10h] [rbp-208h]
  __int64 v65; // [rsp+10h] [rbp-208h]
  __int64 v66; // [rsp+10h] [rbp-208h]
  __int64 v67; // [rsp+10h] [rbp-208h]
  size_t n; // [rsp+18h] [rbp-200h]
  size_t na; // [rsp+18h] [rbp-200h]
  size_t nb; // [rsp+18h] [rbp-200h]
  size_t nc; // [rsp+18h] [rbp-200h]
  __int64 v72; // [rsp+20h] [rbp-1F8h]
  __int64 v73; // [rsp+20h] [rbp-1F8h]
  __int64 v74; // [rsp+20h] [rbp-1F8h]
  __int64 v75; // [rsp+20h] [rbp-1F8h]
  __int64 v76; // [rsp+28h] [rbp-1F0h] BYREF
  const char *v77; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v78; // [rsp+38h] [rbp-1E0h]
  const char *v79; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v80; // [rsp+58h] [rbp-1C0h]
  void *src; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v82; // [rsp+78h] [rbp-1A0h]
  const char *v83; // [rsp+90h] [rbp-188h] BYREF
  __int128 v84; // [rsp+98h] [rbp-180h]
  const char *v85; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v86; // [rsp+B8h] [rbp-160h]
  _DWORD v87[9]; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v88; // [rsp+F4h] [rbp-124h]
  int v89; // [rsp+104h] [rbp-114h]
  __int64 v90; // [rsp+108h] [rbp-110h]
  _DWORD v91[9]; // [rsp+110h] [rbp-108h] BYREF
  __int128 v92; // [rsp+134h] [rbp-E4h]
  int v93; // [rsp+144h] [rbp-D4h]
  __int64 v94; // [rsp+148h] [rbp-D0h]
  _DWORD v95[9]; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v96; // [rsp+174h] [rbp-A4h]
  int v97; // [rsp+184h] [rbp-94h]
  __int64 v98; // [rsp+188h] [rbp-90h]
  _DWORD v99[9]; // [rsp+190h] [rbp-88h] BYREF
  __int128 v100; // [rsp+1B4h] [rbp-64h]
  int v101; // [rsp+1C4h] [rbp-54h]
  __int64 v102; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v103; // [rsp+1D8h] [rbp-40h]

  v15 = *(_QWORD *)(a1 + 200) == 0;
  v60 = a2;
  v103 = __readfsqword(0x28u);
  if ( v15 )
  {
    sub_5399B0(a2, unk_8CA490, 0, 1);
    sub_5399B0(a2, unk_8CA498, 0, 1);
  }
  v17 = 0;
  v64 = a3[40];
  if ( v64 )
  {
    do
    {
      v18 = a3[34];
      v19 = a3[39] + 40 * v17;
      v20 = *(_QWORD **)(v19 + 16);
      v21 = v18 + 40LL * a3[35];
      if ( v18 != v21 )
      {
        v22 = (_QWORD *)a3[34];
        do
        {
          if ( *v20 == *v22 )
          {
            v23 = -858993459 * (unsigned int)(((__int64)v22 - v18) >> 3);
            goto LABEL_9;
          }
          v22 += 5;
        }
        while ( (_QWORD *)v21 != v22 );
        v23 = 0xFFFFFFFFLL;
LABEL_9:
        v24 = v20[*(_QWORD *)(v19 + 24) - 1];
        v25 = (_QWORD *)a3[34];
        while ( v24 != *v25 )
        {
          v25 += 5;
          if ( v25 == (_QWORD *)v21 )
            goto LABEL_48;
        }
        v26 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v25 - v18) >> 3);
        if ( (_DWORD)v26 != -1 && (_DWORD)v23 != -1 )
        {
          LODWORD(n) = v26;
          v77 = nullptr;
          v79 = nullptr;
          v78 = 0;
          v80 = 0;
          sub_375E00(a1, (__int64 *)&v77, v23, v21, a13, a14, (__m128)0LL, a5, a6, a7, a8, a9, a10, a11);
          sub_375E00(a1, (__int64 *)&v79, (unsigned int)n, v27, v28, v29, (__m128)0LL, a5, a6, a7, v30, v31, a10, a11);
          v32 = &s1;
          src = nullptr;
          v82 = 0;
          if ( (_QWORD)v80 )
            v32 = v79;
          v33 = &s1;
          if ( (_QWORD)v78 )
            v33 = v77;
          sub_169A50((__int64 *)&src, (__int64)"%s => %s", v33, v32);
          v34 = &s1;
          v83 = nullptr;
          v84 = 0;
          if ( (_QWORD)v82 )
            v34 = (const char *)src;
          sub_169A50((__int64 *)&v83, (__int64)"Paths/%s/", v34);
          v89 = 0;
          memset(&v87[1], 0, 32);
          v87[0] = 64;
          *(_QWORD *)&v87[4] = "Visible";
          v90 = 0x1FFFFFFFFLL;
          v88 = 0;
          v35 = qalloc_or_throw(32);
          *(_QWORD *)(v35 + 16) = a1;
          v37 = &s1;
          *(_QWORD *)v35 = toggle_path_visible_ah_t___vtable;
          *(_DWORD *)(v35 + 8) = 1;
          v15 = (_QWORD)v84 == 0;
          *(_QWORD *)(v35 + 24) = v17;
          v85 = nullptr;
          *(_QWORD *)&v87[6] = v35;
          v86 = 0;
          if ( !v15 )
            v37 = v83;
          sub_539470(v60, v87, v37, 0, &v85, v36, v56, v60, v64, n, v72, v76, v77, v78);
          v38 = &s1;
          if ( (_QWORD)v86 )
            v38 = v85;
          BYTE6(v76) = 1;
          v39 = sub_534430(v38);
          if ( v39 )
            sub_537630(v39, 6, (char *)&v76 + 6);
          v40 = &s1;
          if ( (_QWORD)v86 )
            v40 = v85;
          HIBYTE(v76) = (*(_DWORD *)(v19 + 12) & 1) == 0;
          v41 = sub_534430(v40);
          if ( v41 )
            sub_537630(v41, 7, (char *)&v76 + 7);
          v93 = 0;
          memset(&v91[1], 0, 32);
          v91[0] = 64;
          *(_QWORD *)&v91[4] = "Details";
          v94 = 0x1FFFFFFFFLL;
          v92 = 0;
          v42 = qalloc_or_throw(56);
          *(_DWORD *)(v42 + 8) = 1;
          v44 = (_QWORD *)v42;
          *(_QWORD *)(v42 + 16) = a1;
          *(_QWORD *)(v42 + 24) = v17;
          *(_QWORD *)v42 = path_details_ah_t___vtable;
          v45 = v82;
          *(_QWORD *)(v42 + 32) = 0;
          *(_OWORD *)(v42 + 40) = 0;
          if ( v45 )
          {
            na = v45;
            v54 = (void *)qalloc_or_throw(v45);
            v55 = src;
            v44[4] = v54;
            v44[6] = na;
            memcpy(v54, v55, na);
            v44[5] = na;
          }
          *(_QWORD *)&v91[6] = v44;
          v46 = &s1;
          if ( (_QWORD)v84 )
            v46 = v83;
          sub_539470(v61, v91, v46, 0, 0, v43, v57, v61, v65, na, v73, v76, v77, v78);
          v97 = 0;
          memset(&v95[1], 0, 32);
          v95[0] = 64;
          *(_QWORD *)&v95[4] = "Delete";
          v98 = 0x1FFFFFFFFLL;
          v96 = 0;
          v47 = qalloc_or_throw(32);
          *(_DWORD *)(v47 + 8) = 1;
          v49 = &s1;
          *(_QWORD *)v47 = delete_path_ah_t___vtable;
          v15 = (_QWORD)v84 == 0;
          *(_QWORD *)(v47 + 16) = a1;
          *(_QWORD *)(v47 + 24) = v17;
          *(_QWORD *)&v95[6] = v47;
          if ( !v15 )
            v49 = v83;
          sub_539470(v62, v95, v49, 0, 0, v48, v58, v62, v66, nb, v74, v76, v77, v78);
          v101 = 0;
          memset(&v99[1], 0, 32);
          v99[0] = 64;
          *(_QWORD *)&v99[4] = "Color";
          v102 = 0x1FFFFFFFFLL;
          v100 = 0;
          v50 = qalloc_or_throw(32);
          *(_DWORD *)(v50 + 8) = 1;
          v52 = &s1;
          *(_QWORD *)v50 = path_color_ah_t___vtable;
          v15 = (_QWORD)v84 == 0;
          *(_QWORD *)(v50 + 16) = a1;
          *(_QWORD *)(v50 + 24) = v17;
          *(_QWORD *)&v99[6] = v50;
          if ( !v15 )
            v52 = v83;
          sub_539470(v63, v99, v52, 0, 0, v51, v59, v63, v67, nc, v75, v76, v77, v78);
          if ( v85 )
          {
            *(_QWORD *)&v86 = 0;
            qfree(v85, (const char *)v99);
          }
          if ( v83 )
          {
            *(_QWORD *)&v84 = 0;
            qfree(v83, (const char *)v99);
          }
          if ( src )
          {
            *(_QWORD *)&v82 = 0;
            qfree(src, (const char *)v99);
          }
          if ( v79 )
          {
            *(_QWORD *)&v80 = 0;
            qfree(v79, (const char *)v99);
          }
          if ( v77 )
          {
            *(_QWORD *)&v78 = 0;
            qfree(v77, (const char *)v99);
          }
        }
      }
LABEL_48:
      ++v17;
    }
    while ( v64 != v17 );
  }
  return 1;
}
