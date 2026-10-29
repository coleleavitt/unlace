void __fastcall sub_224CA40(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // r13
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rbp
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  __int64 *v13; // rax
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r14
  _QWORD *v21; // r12
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  __int64 v28; // r14
  _QWORD *v29; // rbp
  _QWORD *v30; // r12
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  size_t v38; // r13
  unsigned int v39; // eax
  unsigned int v40; // r9d
  __int64 *v41; // r8
  __int64 *v42; // rax
  unsigned __int64 v43; // r13
  unsigned int v44; // eax
  __int64 v45; // r15
  __int64 v46; // rbx
  unsigned __int64 v47; // r13
  __m128i *v48; // r13
  __int64 v49; // rdx
  const __m128i *v50; // rax
  _QWORD *v51; // r14
  const __m128i *v52; // rbp
  __int64 v53; // r13
  __m128i *v54; // r14
  const __m128i *v55; // rdx
  const __m128i *v56; // rax
  __int64 v57; // rdx
  __int32 v58; // eax
  const __m128i *v59; // rax
  _QWORD *v60; // r13
  unsigned __int64 v61; // rdx
  _QWORD *v62; // rdi
  _QWORD *v63; // rdi
  _QWORD *v64; // rdi
  int v65; // r13d
  __int64 v66; // rax
  unsigned int v67; // r9d
  __int64 *v68; // r8
  _QWORD *v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rax
  __m128i *v72; // r13
  __int64 v73; // rdx
  const __m128i *v74; // rax
  __m128i *v75; // r15
  const __m128i *v76; // r13
  __m128i *v77; // rbx
  const __m128i *v78; // r15
  const __m128i *v79; // rcx
  const __m128i *v80; // rdx
  __int64 v81; // rcx
  __int32 v82; // edx
  const __m128i *v83; // rdx
  __m128i *v84; // r13
  unsigned __int64 v85; // rdx
  __m128i *v86; // rdi
  __m128i *v87; // rdi
  __m128i *v88; // rdi
  int v89; // r13d
  __int64 v90; // [rsp+0h] [rbp-88h]
  __int64 v91; // [rsp+0h] [rbp-88h]
  int v92; // [rsp+10h] [rbp-78h]
  __m128i *v93; // [rsp+10h] [rbp-78h]
  unsigned int v94; // [rsp+10h] [rbp-78h]
  __m128i *v95; // [rsp+10h] [rbp-78h]
  __int64 v96; // [rsp+18h] [rbp-70h]
  __int64 *v97; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+20h] [rbp-68h]
  __int64 *srca; // [rsp+20h] [rbp-68h]
  __m128i *srcb; // [rsp+20h] [rbp-68h]
  __int64 *v101; // [rsp+28h] [rbp-60h]
  _QWORD *v102; // [rsp+28h] [rbp-60h]
  __int64 *v103; // [rsp+28h] [rbp-60h]
  __int64 *v104[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  v5 = *(__int64 **)a1;
  *(_QWORD *)(a2 + 8) = v4;
  v90 = v4 - *(_QWORD *)a2;
  LODWORD(v7) = *(_DWORD *)(a1 + 8);
  v6 = (unsigned int)v7;
  v8 = &v5[v6];
  v9 = (v6 * 8) >> 3;
  if ( !((v6 * 8) >> 5) )
  {
    v11 = v5;
LABEL_14:
    switch ( v9 )
    {
      case 2LL:
        v10 = v11;
        break;
      case 3LL:
        v10 = v11 + 1;
        if ( a2 == *v11 )
          goto LABEL_18;
        break;
      case 1LL:
        goto LABEL_110;
      default:
        goto LABEL_17;
    }
    v11 = v10 + 1;
    if ( a2 == *v10 )
    {
      v11 = v10++;
      goto LABEL_18;
    }
LABEL_110:
    v10 = v11 + 1;
    if ( a2 == *v11 )
      goto LABEL_18;
LABEL_17:
    v10 = v8 + 1;
    v11 = &v5[v6];
    goto LABEL_18;
  }
  v10 = v5 + 1;
  if ( a2 == *v5 )
  {
    v11 = v5;
  }
  else
  {
    v11 = v5 + 1;
    v10 = v5 + 2;
    if ( a2 != v5[1] )
    {
      v11 = v5 + 2;
      v10 = v5 + 3;
      if ( a2 != v5[2] )
      {
        v12 = v5;
        v13 = &v5[4 * ((v6 * 8) >> 5)];
        if ( a2 == v5[3] )
        {
          v11 = v5 + 3;
          v10 = v5 + 4;
        }
        else
        {
          while ( 1 )
          {
            v11 = v12 + 4;
            if ( v12 + 4 == v13 )
            {
              v9 = v8 - v13;
              goto LABEL_14;
            }
            if ( a2 == v12[4] )
            {
              v10 = v12 + 5;
              goto LABEL_18;
            }
            if ( a2 == v12[5] )
            {
              v11 = v12 + 5;
              v10 = v12 + 6;
              goto LABEL_18;
            }
            if ( a2 == v12[6] )
            {
              v11 = v12 + 6;
              v10 = v12 + 7;
              goto LABEL_18;
            }
            if ( a2 == v12[7] )
              break;
            v12 += 4;
          }
          v11 = v12 + 7;
          v10 = v12 + 8;
        }
      }
    }
  }
LABEL_18:
  if ( *(unsigned int *)(a1 + 16656) <= v90 / 1000 )
  {
    v96 = a1 + 144;
    if ( *(_DWORD *)(a1 + 156) <= *(_DWORD *)(a1 + 152) )
    {
      srcb = (__m128i *)(a1 + 160);
      v95 = (__m128i *)sub_2237400(a1 + 144, (void *)(a1 + 160), 0, 128, (unsigned __int64 *)v104);
      v72 = &v95[8 * (unsigned __int64)*(unsigned int *)(a1 + 152)];
      v72->m128i_i64[0] = *(_QWORD *)a2;
      v72->m128i_i64[1] = *(_QWORD *)(a2 + 8);
      v72[1].m128i_i64[0] = (__int64)v72[2].m128i_i64;
      sub_224A7C0((__m128i *)v72[1].m128i_i64, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
      v72[3].m128i_i64[0] = (__int64)v72[4].m128i_i64;
      sub_224A7C0((__m128i *)v72[3].m128i_i64, *(_BYTE **)(a2 + 48), *(_QWORD *)(a2 + 48) + *(_QWORD *)(a2 + 56));
      v72[5].m128i_i64[0] = (__int64)v72[6].m128i_i64;
      sub_224A7C0((__m128i *)v72[5].m128i_i64, *(_BYTE **)(a2 + 80), *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 88));
      v72[7].m128i_i32[0] = *(_DWORD *)(a2 + 112);
      v73 = *(unsigned int *)(a1 + 152);
      v72[7].m128i_i32[2] = *(_DWORD *)(a2 + 120);
      v74 = *(const __m128i **)(a1 + 144);
      v73 <<= 7;
      v75 = (__m128i *)((char *)v74 + v73);
      if ( v74 != (const __m128i *)&v74->m128i_i8[v73] )
      {
        v103 = v11;
        v76 = v74 + 4;
        v77 = v95;
        v78 = v75 + 4;
        do
        {
          v77->m128i_i64[0] = v76[-4].m128i_i64[0];
          v77->m128i_i64[1] = v76[-4].m128i_i64[1];
          v77[1].m128i_i64[0] = (__int64)v77[2].m128i_i64;
          sub_224A7C0(
            (__m128i *)v77[1].m128i_i64,
            (_BYTE *)v76[-3].m128i_i64[0],
            v76[-3].m128i_i64[0] + v76[-3].m128i_i64[1]);
          v77[3].m128i_i64[0] = (__int64)v77[4].m128i_i64;
          v83 = (const __m128i *)v76[-1].m128i_i64[0];
          if ( v76 == v83 )
          {
            v77[4] = _mm_loadu_si128(v76);
          }
          else
          {
            v77[3].m128i_i64[0] = (__int64)v83;
            v77[4].m128i_i64[0] = v76->m128i_i64[0];
          }
          v77[3].m128i_i64[1] = v76[-1].m128i_i64[1];
          v76[-1].m128i_i64[0] = (__int64)v76;
          v76[-1].m128i_i64[1] = 0;
          v76->m128i_i8[0] = 0;
          v77[5].m128i_i64[0] = (__int64)v77[6].m128i_i64;
          v79 = (const __m128i *)v76[1].m128i_i64[0];
          v80 = v76 + 2;
          if ( v79 == &v76[2] )
          {
            v77[6] = _mm_loadu_si128(v76 + 2);
          }
          else
          {
            v77[5].m128i_i64[0] = (__int64)v79;
            v77[6].m128i_i64[0] = v76[2].m128i_i64[0];
          }
          v81 = v76[1].m128i_i64[1];
          v76 += 8;
          v77 += 8;
          v77[-3].m128i_i64[1] = v81;
          v76[-7].m128i_i64[0] = (__int64)v80;
          v82 = v76[-5].m128i_i32[0];
          v76[-7].m128i_i64[1] = 0;
          v76[-6].m128i_i8[0] = 0;
          v77[-1].m128i_i32[0] = v82;
          v77[-1].m128i_i32[2] = v76[-5].m128i_i32[2];
        }
        while ( v78 != v76 );
        v84 = *(__m128i **)(a1 + 144);
        v11 = v103;
        v85 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 7;
        v75 = (__m128i *)((char *)v84 + v85);
        if ( v84 != (__m128i *)&v84->m128i_i8[v85] )
        {
          do
          {
            while ( 1 )
            {
              v75 -= 8;
              v86 = (__m128i *)v75[5].m128i_i64[0];
              if ( v86 != &v75[6] )
                operator delete(v86);
              v87 = (__m128i *)v75[3].m128i_i64[0];
              if ( v87 != &v75[4] )
                operator delete(v87);
              v88 = (__m128i *)v75[1].m128i_i64[0];
              if ( v88 == &v75[2] )
                break;
              operator delete(v88);
              if ( v84 == v75 )
                goto LABEL_131;
            }
          }
          while ( v84 != v75 );
LABEL_131:
          v75 = *(__m128i **)(v3 + 144);
        }
      }
      v89 = (int)v104[0];
      if ( srcb != v75 )
        free(v75);
      *(_DWORD *)(v3 + 156) = v89;
      *(_QWORD *)(v3 + 144) = v95;
      v44 = *(_DWORD *)(v3 + 152) + 1;
      *(_DWORD *)(v3 + 152) = v44;
    }
    else
    {
      v43 = *(_QWORD *)(a1 + 144) + ((unsigned __int64)*(unsigned int *)(a1 + 152) << 7);
      *(_QWORD *)v43 = *(_QWORD *)a2;
      *(_QWORD *)(v43 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(v43 + 16) = v43 + 32;
      sub_224A7C0((_QWORD *)(v43 + 16), *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
      *(_QWORD *)(v43 + 48) = v43 + 64;
      sub_224A7C0((_QWORD *)(v43 + 48), *(_BYTE **)(a2 + 48), *(_QWORD *)(a2 + 48) + *(_QWORD *)(a2 + 56));
      *(_QWORD *)(v43 + 80) = v43 + 96;
      sub_224A7C0((_QWORD *)(v43 + 80), *(_BYTE **)(a2 + 80), *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 88));
      *(_DWORD *)(v43 + 112) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(v43 + 120) = *(_DWORD *)(a2 + 120);
      v44 = *(_DWORD *)(a1 + 152) + 1;
      *(_DWORD *)(a1 + 152) = v44;
    }
    if ( *(_QWORD *)(*v11 + 136) != *(_QWORD *)(*v11 + 128) )
    {
      srca = v10;
      v45 = *(_QWORD *)(*v11 + 136);
      v101 = v11;
      v46 = *(_QWORD *)(*v11 + 128);
      do
      {
        if ( *(_DWORD *)(v3 + 156) <= v44 )
        {
          v93 = (__m128i *)sub_2237400(v96, (void *)(v3 + 160), 0, 128, (unsigned __int64 *)v104);
          v48 = &v93[8 * (unsigned __int64)*(unsigned int *)(v3 + 152)];
          v48->m128i_i64[0] = *(_QWORD *)v46;
          v48->m128i_i64[1] = *(_QWORD *)(v46 + 8);
          v48[1].m128i_i64[0] = (__int64)v48[2].m128i_i64;
          sub_224A7C0((__m128i *)v48[1].m128i_i64, *(_BYTE **)(v46 + 16), *(_QWORD *)(v46 + 16) + *(_QWORD *)(v46 + 24));
          v48[3].m128i_i64[0] = (__int64)v48[4].m128i_i64;
          sub_224A7C0((__m128i *)v48[3].m128i_i64, *(_BYTE **)(v46 + 48), *(_QWORD *)(v46 + 48) + *(_QWORD *)(v46 + 56));
          v48[5].m128i_i64[0] = (__int64)v48[6].m128i_i64;
          sub_224A7C0((__m128i *)v48[5].m128i_i64, *(_BYTE **)(v46 + 80), *(_QWORD *)(v46 + 80) + *(_QWORD *)(v46 + 88));
          v48[7].m128i_i32[0] = *(_DWORD *)(v46 + 112);
          v49 = *(unsigned int *)(v3 + 152);
          v48[7].m128i_i32[2] = *(_DWORD *)(v46 + 120);
          v50 = *(const __m128i **)(v3 + 144);
          v49 <<= 7;
          v51 = (__int64 *)((char *)v50->m128i_i64 + v49);
          if ( v50 != (const __m128i *)&v50->m128i_i8[v49] )
          {
            v52 = v50 + 4;
            v53 = (__int64)(v51 + 8);
            v54 = v93;
            do
            {
              v54->m128i_i64[0] = v52[-4].m128i_i64[0];
              v54->m128i_i64[1] = v52[-4].m128i_i64[1];
              v54[1].m128i_i64[0] = (__int64)v54[2].m128i_i64;
              sub_224A7C0(
                (__m128i *)v54[1].m128i_i64,
                (_BYTE *)v52[-3].m128i_i64[0],
                v52[-3].m128i_i64[0] + v52[-3].m128i_i64[1]);
              v54[3].m128i_i64[0] = (__int64)v54[4].m128i_i64;
              v59 = (const __m128i *)v52[-1].m128i_i64[0];
              if ( v59 == v52 )
              {
                v54[4] = _mm_loadu_si128(v52);
              }
              else
              {
                v54[3].m128i_i64[0] = (__int64)v59;
                v54[4].m128i_i64[0] = v52->m128i_i64[0];
              }
              v54[3].m128i_i64[1] = v52[-1].m128i_i64[1];
              v52[-1].m128i_i64[0] = (__int64)v52;
              v52[-1].m128i_i64[1] = 0;
              v52->m128i_i8[0] = 0;
              v54[5].m128i_i64[0] = (__int64)v54[6].m128i_i64;
              v55 = (const __m128i *)v52[1].m128i_i64[0];
              v56 = v52 + 2;
              if ( v55 == &v52[2] )
              {
                v54[6] = _mm_loadu_si128(v52 + 2);
              }
              else
              {
                v54[5].m128i_i64[0] = (__int64)v55;
                v54[6].m128i_i64[0] = v52[2].m128i_i64[0];
              }
              v57 = v52[1].m128i_i64[1];
              v52 += 8;
              v54 += 8;
              v54[-3].m128i_i64[1] = v57;
              v52[-7].m128i_i64[0] = (__int64)v56;
              v58 = v52[-5].m128i_i32[0];
              v52[-7].m128i_i64[1] = 0;
              v52[-6].m128i_i8[0] = 0;
              v54[-1].m128i_i32[0] = v58;
              v54[-1].m128i_i32[2] = v52[-5].m128i_i32[2];
            }
            while ( (const __m128i *)v53 != v52 );
            v60 = *(_QWORD **)(v3 + 144);
            v61 = (unsigned __int64)*(unsigned int *)(v3 + 152) << 7;
            v51 = (_QWORD *)((char *)v60 + v61);
            if ( v60 != (_QWORD *)((char *)v60 + v61) )
            {
              do
              {
                while ( 1 )
                {
                  v51 -= 16;
                  v62 = (_QWORD *)v51[10];
                  if ( v62 != v51 + 12 )
                    operator delete(v62);
                  v63 = (_QWORD *)v51[6];
                  if ( v63 != v51 + 8 )
                    operator delete(v63);
                  v64 = (_QWORD *)v51[2];
                  if ( v64 == v51 + 4 )
                    break;
                  operator delete(v64);
                  if ( v60 == v51 )
                  {
                    v51 = *(_QWORD **)(v3 + 144);
                    goto LABEL_94;
                  }
                }
              }
              while ( v60 != v51 );
              v51 = *(_QWORD **)(v3 + 144);
            }
          }
LABEL_94:
          v65 = (int)v104[0];
          if ( (_QWORD *)(v3 + 160) != v51 )
            free(v51);
          *(_DWORD *)(v3 + 156) = v65;
          *(_QWORD *)(v3 + 144) = v93;
          v44 = *(_DWORD *)(v3 + 152) + 1;
          *(_DWORD *)(v3 + 152) = v44;
        }
        else
        {
          v47 = *(_QWORD *)(v3 + 144) + ((unsigned __int64)v44 << 7);
          *(_QWORD *)v47 = *(_QWORD *)v46;
          *(_QWORD *)(v47 + 8) = *(_QWORD *)(v46 + 8);
          *(_QWORD *)(v47 + 16) = v47 + 32;
          sub_224A7C0((_QWORD *)(v47 + 16), *(_BYTE **)(v46 + 16), *(_QWORD *)(v46 + 16) + *(_QWORD *)(v46 + 24));
          *(_QWORD *)(v47 + 48) = v47 + 64;
          sub_224A7C0((_QWORD *)(v47 + 48), *(_BYTE **)(v46 + 48), *(_QWORD *)(v46 + 48) + *(_QWORD *)(v46 + 56));
          *(_QWORD *)(v47 + 80) = v47 + 96;
          sub_224A7C0((_QWORD *)(v47 + 80), *(_BYTE **)(v46 + 80), *(_QWORD *)(v46 + 80) + *(_QWORD *)(v46 + 88));
          *(_DWORD *)(v47 + 112) = *(_DWORD *)(v46 + 112);
          *(_DWORD *)(v47 + 120) = *(_DWORD *)(v46 + 120);
          v44 = *(_DWORD *)(v3 + 152) + 1;
          *(_DWORD *)(v3 + 152) = v44;
        }
        v46 += 128;
      }
      while ( v45 != v46 );
      v10 = srca;
      v11 = v101;
      v2 = a2;
    }
    v5 = *(__int64 **)v3;
    v7 = *(unsigned int *)(v3 + 8);
    v6 = v7;
  }
  v92 = v7;
  v104[0] = &v5[v6 - 1];
  v104[1] = v5;
  v14 = sub_224C080((size_t *)v104, v2);
  LODWORD(v15) = v92;
  if ( v14 )
  {
    v38 = *(_QWORD *)(v2 + 24);
    src = *(void **)(v2 + 16);
    v39 = sub_2244B30((__int64)src, v38);
    v40 = sub_2244CB0(v3 + 16544, src, v38, v39);
    v41 = (__int64 *)(*(_QWORD *)(v3 + 16544) + 8LL * v40);
    if ( *v41 )
    {
      if ( *v41 != -8 )
      {
        sub_224CA00(v104, v41, 0);
        v42 = v104[0];
LABEL_103:
        v71 = *v42;
        v5 = *(__int64 **)v3;
        ++*(_QWORD *)(v71 + 8);
        *(_QWORD *)(v71 + 16) += v90;
        v15 = *(unsigned int *)(v3 + 8);
        v6 = v15;
        goto LABEL_20;
      }
      --*(_DWORD *)(v3 + 16560);
    }
    v97 = v41;
    v94 = v40;
    v66 = sub_22300B0(v38 + 25, 8);
    v67 = v94;
    v68 = v97;
    v69 = (_QWORD *)v66;
    if ( v38 )
    {
      v102 = (_QWORD *)v66;
      memcpy((void *)(v66 + 24), src, v38);
      v69 = v102;
      v68 = v97;
      v67 = v94;
    }
    *((_BYTE *)v69 + v38 + 24) = 0;
    *v69 = v38;
    v69[1] = 0;
    v69[2] = 0;
    *v68 = (__int64)v69;
    ++*(_DWORD *)(v3 + 16556);
    v70 = sub_22450D0(v3 + 16544, v67);
    sub_224CA00(v104, (__int64 *)(*(_QWORD *)(v3 + 16544) + 8LL * v70), 0);
    v42 = v104[0];
    goto LABEL_103;
  }
LABEL_20:
  v16 = (char *)&v5[v6] - (char *)v10;
  v17 = v16 >> 3;
  if ( v16 > 0 )
  {
    v91 = v3;
    do
    {
      v18 = *v10;
      *v10 = 0;
      v19 = (_QWORD *)*v11;
      *v11 = v18;
      if ( v19 )
      {
        v20 = (_QWORD *)v19[17];
        v21 = (_QWORD *)v19[16];
        if ( v20 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v22 = (_QWORD *)v21[10];
              if ( v22 != v21 + 12 )
                operator delete(v22);
              v23 = (_QWORD *)v21[6];
              if ( v23 != v21 + 8 )
                operator delete(v23);
              v24 = (_QWORD *)v21[2];
              if ( v24 == v21 + 4 )
                break;
              operator delete(v24);
              v21 += 16;
              if ( v20 == v21 )
                goto LABEL_30;
            }
            v21 += 16;
          }
          while ( v20 != v21 );
LABEL_30:
          v21 = (_QWORD *)v19[16];
        }
        if ( v21 )
          operator delete(v21);
        v25 = (_QWORD *)v19[10];
        if ( v25 != v19 + 12 )
          operator delete(v25);
        v26 = (_QWORD *)v19[6];
        if ( v26 != v19 + 8 )
          operator delete(v26);
        v27 = (_QWORD *)v19[2];
        if ( v27 != v19 + 4 )
          operator delete(v27);
        operator delete(v19, 0x98u);
      }
      ++v10;
      ++v11;
      --v17;
    }
    while ( v17 );
    v3 = v91;
    LODWORD(v15) = *(_DWORD *)(v91 + 8);
    v5 = *(__int64 **)v91;
  }
  v28 = (unsigned int)(v15 - 1);
  v29 = (_QWORD *)v5[v28];
  *(_DWORD *)(v3 + 8) = v28;
  if ( v29 )
  {
    v30 = (_QWORD *)v29[17];
    v31 = (_QWORD *)v29[16];
    if ( v30 != v31 )
    {
      do
      {
        while ( 1 )
        {
          v32 = (_QWORD *)v31[10];
          if ( v32 != v31 + 12 )
            operator delete(v32);
          v33 = (_QWORD *)v31[6];
          if ( v33 != v31 + 8 )
            operator delete(v33);
          v34 = (_QWORD *)v31[2];
          if ( v34 == v31 + 4 )
            break;
          operator delete(v34);
          v31 += 16;
          if ( v30 == v31 )
          {
            v31 = (_QWORD *)v29[16];
            goto LABEL_51;
          }
        }
        v31 += 16;
      }
      while ( v30 != v31 );
      v31 = (_QWORD *)v29[16];
    }
LABEL_51:
    if ( v31 )
      operator delete(v31);
    v35 = (_QWORD *)v29[10];
    if ( v35 != v29 + 12 )
      operator delete(v35);
    v36 = (_QWORD *)v29[6];
    if ( v36 != v29 + 8 )
      operator delete(v36);
    v37 = (_QWORD *)v29[2];
    if ( v37 != v29 + 4 )
      operator delete(v37);
    operator delete(v29, 0x98u);
  }
}
