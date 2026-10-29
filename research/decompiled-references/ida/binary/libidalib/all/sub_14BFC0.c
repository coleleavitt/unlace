__int64 sub_14BFC0()
{
  __int64 strlist_api; // r12
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  __int16 v3; // ax
  __int64 v4; // r10
  int v5; // r8d
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  int v8; // edi
  _BYTE *v9; // rax
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // r13
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  size_t v25; // r15
  __int64 v26; // r8
  size_t v27; // r10
  __int64 v28; // rsi
  __int64 v29; // r15
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  size_t v39; // r15
  __int64 v40; // r8
  size_t v41; // r10
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // r8
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __m128i *v55; // r13
  __int64 v56; // rdi
  unsigned int v57; // r13d
  __int64 v59; // r15
  unsigned __int64 v60; // rdx
  __int64 v61; // rsi
  char v62; // al
  unsigned __int64 v63; // r13
  int v64; // r14d
  _BYTE *v65; // rsi
  char v66; // r15
  __int64 v67; // rax
  __int64 v68; // rsi
  const char *v69; // rsi
  void *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+0h] [rbp-E8h]
  __int64 v74; // [rsp+0h] [rbp-E8h]
  __int64 v75; // [rsp+0h] [rbp-E8h]
  __int64 v76; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v77; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v78; // [rsp+0h] [rbp-E8h]
  __int64 v79; // [rsp+0h] [rbp-E8h]
  __int64 v80; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v81; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v82; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v83; // [rsp+0h] [rbp-E8h]
  __int64 v84; // [rsp+8h] [rbp-E0h]
  __int64 v85; // [rsp+8h] [rbp-E0h]
  __int64 v86; // [rsp+8h] [rbp-E0h]
  __int64 v87; // [rsp+8h] [rbp-E0h]
  __int64 v88; // [rsp+8h] [rbp-E0h]
  __int64 v89; // [rsp+8h] [rbp-E0h]
  size_t v90; // [rsp+18h] [rbp-D0h]
  size_t v91; // [rsp+18h] [rbp-D0h]
  __int16 v92; // [rsp+2Ch] [rbp-BCh] BYREF
  unsigned __int16 v93; // [rsp+2Eh] [rbp-BAh] BYREF
  __int64 v94; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v95; // [rsp+38h] [rbp-B0h]
  __int64 v96; // [rsp+50h] [rbp-98h]
  __int128 v97; // [rsp+58h] [rbp-90h]
  void *v98; // [rsp+70h] [rbp-78h]
  __int128 v99; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+90h] [rbp-58h]
  __int128 v101; // [rsp+98h] [rbp-50h]
  unsigned __int64 v102; // [rsp+A8h] [rbp-40h]

  v102 = __readfsqword(0x28u);
  strlist_api = get_strlist_api();
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 24LL))(strlist_api);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 16LL))(strlist_api);
  v3 = *(_BYTE *)(v1 + 32) != 0;
  if ( *(_BYTE *)(v1 + 34) )
    v3 |= 2u;
  if ( *(_BYTE *)(v1 + 33) )
    v3 |= 4u;
  v4 = v2[1];
  v92 = v3;
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (_BYTE *)(*(_QWORD *)v1 + *(_QWORD *)(v1 + 8));
    do
    {
      v8 = 1 << v6;
      if ( *(_BYTE **)v1 == v7 )
        goto LABEL_71;
      v9 = *(_BYTE **)v1;
      while ( *(_BYTE *)(*v2 + v6) != *v9 )
      {
        if ( v7 == ++v9 )
          goto LABEL_71;
      }
      if ( v7 == v9 )
LABEL_71:
        v5 &= ~v8;
      else
        v5 |= v8;
      ++v6;
    }
    while ( v6 != v4 );
  }
  else
  {
    LOWORD(v5) = 0;
  }
  v93 = v5;
  v94 = 0;
  v95 = 0;
  sub_94440(&v94);
  v97 = 0;
  v96 = 0;
  v10 = qvector_reserve();
  v96 = v10;
  *(_QWORD *)&v97 = 153;
  *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_1D3810);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3820);
  v12 = v96;
  *(_QWORD *)(v10 + 144) = 0xA3E3E433A73676ELL;
  *(__m128i *)(v10 + 16) = si128;
  *(__m128i *)(v10 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D3830);
  *(__m128i *)(v10 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D3840);
  *(__m128i *)(v10 + 64) = _mm_load_si128((const __m128i *)&xmmword_1D3850);
  *(__m128i *)(v10 + 80) = _mm_load_si128((const __m128i *)&xmmword_1D3860);
  *(__m128i *)(v10 + 96) = _mm_load_si128((const __m128i *)&xmmword_1D3870);
  *(__m128i *)(v10 + 112) = _mm_load_si128((const __m128i *)&xmmword_1D3880);
  *(__m128i *)(v10 + 128) = _mm_load_si128((const __m128i *)&xmmword_1D3890);
  *(_BYTE *)(v12 + 152) = 0;
  if ( v2[1] )
  {
    v13 = v97;
    if ( (_QWORD)v97 )
    {
      v14 = v97 + 21;
      v15 = v97 + 22;
      v13 = v97 - 1;
      if ( *((_QWORD *)&v97 + 1) >= (unsigned __int64)(v97 + 22) )
      {
LABEL_17:
        v16 = _mm_load_si128((const __m128i *)&xmmword_1D38A0);
        *(_QWORD *)&v97 = v15;
        *(_BYTE *)(v12 + v14) = 0;
        v17 = v96 + v13;
        *(__m128i *)v17 = v16;
        v12 = v96;
        *(_QWORD *)(v17 + 14) = 0xA73657079742067LL;
        v18 = 0;
        while ( 1 )
        {
          v19 = v97;
          v20 = 2;
          if ( (_QWORD)v97 )
          {
            v20 = v97 + 1;
            v19 = v97 - 1;
          }
          if ( *((_QWORD *)&v97 + 1) < v20 )
          {
            v73 = v20;
            v96 = qvector_reserve();
            v20 = v73;
            v12 = v96;
          }
          *(_QWORD *)&v97 = v20;
          *(_BYTE *)(v12 + v19) = 60;
          *(_BYTE *)(v96 + v19 + 1) = 0;
          v98 = nullptr;
          src = nullptr;
          v99 = 0;
          v101 = 0;
          if ( !(unsigned __int8)print_strlit_type() )
          {
            if ( src )
            {
              *(_QWORD *)&v101 = 0;
              qfree();
            }
            if ( v98 )
            {
              *(_QWORD *)&v99 = 0;
              qfree();
            }
            goto LABEL_22;
          }
          v21 = v97;
          v22 = 2;
          if ( (_QWORD)v97 )
          {
            v22 = v97 + 1;
            v21 = v97 - 1;
          }
          v23 = v96;
          if ( *((_QWORD *)&v97 + 1) < v22 )
          {
            v78 = v22;
            v96 = qvector_reserve();
            v22 = v78;
            v23 = v96;
          }
          *(_QWORD *)&v97 = v22;
          *(_BYTE *)(v23 + v21) = 35;
          *(_BYTE *)(v96 + v21 + 1) = 0;
          v24 = v101;
          if ( (_QWORD)v101 )
          {
            v25 = v101 - 1;
            if ( (_QWORD)v101 != 1 )
            {
              v26 = v97;
              v27 = v101 - 1;
              if ( (_QWORD)v97 )
              {
                v26 = v97 - 1;
                v27 = v25 + v97 - 1;
                v24 = v101 + v97 - 1;
              }
              v28 = v96;
              if ( *((_QWORD *)&v97 + 1) < v24 )
              {
                v91 = v27;
                v89 = v26;
                v83 = v24;
                v96 = qvector_reserve();
                v27 = v91;
                v28 = v96;
                v26 = v89;
                v24 = v83;
              }
              *(_QWORD *)&v97 = v24;
              *(_BYTE *)(v28 + v27) = 0;
              memcpy((void *)(v26 + v96), src, v25);
            }
          }
          v29 = v97;
          v30 = 2;
          if ( (_QWORD)v97 )
          {
            v30 = v97 + 1;
            v29 = v97 - 1;
          }
          v31 = v96;
          if ( *((_QWORD *)&v97 + 1) < v30 )
          {
            v77 = v30;
            v96 = qvector_reserve();
            v30 = v77;
            v31 = v96;
          }
          *(_QWORD *)&v97 = v30;
          *(_BYTE *)(v31 + v29) = 35;
          *(_BYTE *)(v96 + v29 + 1) = 0;
          if ( !v18 )
            break;
LABEL_47:
          v38 = v99;
          if ( (_QWORD)v99 )
          {
            v39 = v99 - 1;
            if ( (_QWORD)v99 != 1 )
            {
              v40 = v97;
              v41 = v99 - 1;
              if ( (_QWORD)v97 )
              {
                v40 = v97 - 1;
                v41 = v39 + v97 - 1;
                v38 = v99 + v97 - 1;
              }
              v42 = v96;
              if ( *((_QWORD *)&v97 + 1) < v38 )
              {
                v90 = v41;
                v88 = v40;
                v82 = v38;
                v96 = qvector_reserve();
                v41 = v90;
                v42 = v96;
                v40 = v88;
                v38 = v82;
              }
              *(_QWORD *)&v97 = v38;
              *(_BYTE *)(v42 + v41) = 0;
              memcpy((void *)(v40 + v96), v98, v39);
            }
          }
          v43 = v97;
          if ( (_QWORD)v97 )
          {
            v44 = v97 + 1;
            v45 = v97 + 2;
            v46 = v96;
            v43 = v97 - 1;
            if ( *((_QWORD *)&v97 + 1) >= (unsigned __int64)(v97 + 2) )
              goto LABEL_56;
          }
          else
          {
            v46 = v96;
            v45 = 3;
            v44 = 2;
            if ( *((_QWORD *)&v97 + 1) >= 3u )
              goto LABEL_56;
          }
          v84 = v44;
          v74 = v45;
          v96 = qvector_reserve();
          v44 = v84;
          v46 = v96;
          v45 = v74;
LABEL_56:
          *(_QWORD *)&v97 = v45;
          *(_BYTE *)(v46 + v44) = 0;
          *(_WORD *)(v43 + v96) = 17210;
          if ( v2[1] - 1LL == v18 )
          {
            v59 = v97;
            v60 = 2;
            if ( (_QWORD)v97 )
            {
              v60 = v97 + 1;
              v59 = v97 - 1;
            }
            v61 = v96;
            if ( *((_QWORD *)&v97 + 1) < v60 )
            {
              v81 = v60;
              v96 = qvector_reserve();
              v60 = v81;
              v61 = v96;
            }
            *(_QWORD *)&v97 = v60;
            *(_BYTE *)(v61 + v59) = 62;
            *(_BYTE *)(v96 + v59 + 1) = 0;
          }
          v47 = v97;
          if ( (_QWORD)v97 )
          {
            v48 = v97 + 1;
            v49 = v97 + 2;
            v50 = v96;
            v47 = v97 - 1;
            if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)(v97 + 2) )
              goto LABEL_75;
          }
          else
          {
            v50 = v96;
            v49 = 3;
            v48 = 2;
            if ( *((_QWORD *)&v97 + 1) < 3u )
            {
LABEL_75:
              v85 = v47;
              v75 = v49;
              v96 = qvector_reserve();
              v47 = v85;
              v50 = v96;
              v49 = v75;
            }
          }
          *(_QWORD *)&v97 = v49;
          *(_BYTE *)(v50 + v48) = 0;
          *(_WORD *)(v96 + v47) = 2622;
          if ( src )
          {
            *(_QWORD *)&v101 = 0;
            qfree();
          }
          if ( v98 )
          {
            *(_QWORD *)&v99 = 0;
            ++v18;
            qfree();
            v12 = v96;
            if ( v18 >= v2[1] )
              goto LABEL_63;
          }
          else
          {
LABEL_22:
            v12 = v96;
            if ( ++v18 >= v2[1] )
              goto LABEL_63;
          }
        }
        v32 = v97;
        if ( (_QWORD)v97 )
        {
          v33 = v97 + 20;
          v34 = v97 + 21;
          v35 = v96;
          v32 = v97 - 1;
          if ( *((_QWORD *)&v97 + 1) >= (unsigned __int64)(v97 + 21) )
          {
LABEL_46:
            *(_QWORD *)&v97 = v34;
            v36 = _mm_load_si128((const __m128i *)&xmmword_1D38B0);
            *(_BYTE *)(v35 + v33) = 0;
            v37 = v32 + v96;
            *(__m128i *)v37 = v36;
            *(_QWORD *)(v37 + 13) = 0x2373657079742067LL;
            goto LABEL_47;
          }
        }
        else
        {
          v35 = v96;
          v34 = 22;
          v33 = 21;
          if ( *((_QWORD *)&v97 + 1) >= 0x16u )
            goto LABEL_46;
        }
        v86 = v33;
        v79 = v34;
        v96 = qvector_reserve();
        v33 = v86;
        v35 = v96;
        v34 = v79;
        goto LABEL_46;
      }
    }
    else
    {
      v15 = 23;
      v14 = 22;
      if ( *((_QWORD *)&v97 + 1) >= 0x17u )
        goto LABEL_17;
    }
    v76 = v15;
    v96 = qvector_reserve();
    v15 = v76;
    v12 = v96;
    goto LABEL_17;
  }
LABEL_63:
  v51 = v97;
  if ( (_QWORD)v97 )
  {
    v52 = v97 + 31;
    v53 = v97 + 32;
    v51 = v97 - 1;
    if ( *((_QWORD *)&v97 + 1) >= (unsigned __int64)(v97 + 32) )
      goto LABEL_65;
  }
  else
  {
    v53 = 33;
    v52 = 32;
    if ( *((_QWORD *)&v97 + 1) >= 0x21u )
      goto LABEL_65;
  }
  v87 = v52;
  v80 = v53;
  v96 = qvector_reserve();
  v52 = v87;
  v12 = v96;
  v53 = v80;
LABEL_65:
  v54 = _mm_load_si128((const __m128i *)&xmmword_1D38C0);
  *(_QWORD *)&v97 = v53;
  *(_BYTE *)(v12 + v52) = 0;
  v55 = (__m128i *)(v96 + v51);
  *v55 = v54;
  v56 = v96;
  v55[1] = _mm_load_si128((const __m128i *)&xmmword_1D38D0);
  v57 = sub_8F810(v56, &v92, &v93, &v94);
  if ( !v57 )
  {
    if ( v96 )
    {
      *(_QWORD *)&v97 = 0;
      qfree();
    }
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree();
    }
    return v57;
  }
  v62 = v92;
  v63 = 0;
  *(_QWORD *)(v1 + 8) = 0;
  v64 = v93;
  *(_BYTE *)(v1 + 32) = v62 & 1;
  *(_BYTE *)(v1 + 33) = (v62 & 4) != 0;
  for ( *(_BYTE *)(v1 + 34) = (v62 & 2) != 0; v63 < v2[1]; ++*(_QWORD *)(v1 + 8) )
  {
    while ( !_bittest(&v64, v63) )
    {
      if ( ++v63 >= v2[1] )
        goto LABEL_94;
    }
    v65 = *(_BYTE **)v1;
    v66 = *(_BYTE *)(*v2 + v63);
    v67 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v67 + 1) )
    {
      v72 = qvector_reserve();
      *(_QWORD *)v1 = v72;
      v65 = (_BYTE *)v72;
      v67 = *(_QWORD *)(v1 + 8);
    }
    v65[v67] = v66;
    ++v63;
  }
LABEL_94:
  src = nullptr;
  v101 = 0;
  v68 = xmmword_2528A0;
  if ( (unsigned __int8)eval_expr_long() )
  {
    v70 = v98;
    if ( (__int64)v98 > 0 )
      goto LABEL_99;
    sub_92200((__int64)"The minimal string length is set to 1", v68);
  }
  else
  {
    v69 = s1;
    if ( (_QWORD)v101 )
      v69 = (const char *)src;
    sub_92200((__int64)"%s", v69);
  }
  v98 = &dword_0 + 1;
  v70 = &dword_0 + 1;
LABEL_99:
  if ( src )
  {
    *(_QWORD *)&v101 = 0;
    qfree();
  }
  *(_QWORD *)(v1 + 24) = v70;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 32LL))(strlist_api);
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree();
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  v71 = get_strlist_api();
  v57 = 1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 88LL))(v71);
  sub_1990E0(16, 0, 0);
  return v57;
}

