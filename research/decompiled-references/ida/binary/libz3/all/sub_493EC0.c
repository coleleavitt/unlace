char __fastcall sub_493EC0(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rax
  __int64 v8; // r14
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r11
  char *v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // rcx
  char *v16; // r13
  char *v17; // r8
  _DWORD *v18; // rsi
  __int16 v19; // r9
  _DWORD *v20; // r15
  _DWORD *v21; // r9
  _DWORD *v22; // r9
  bool v23; // si
  __int64 v24; // r8
  char *v25; // r15
  _DWORD *v26; // rdx
  __int16 v27; // cx
  _DWORD *v28; // rsi
  _DWORD *v29; // rcx
  _DWORD *v30; // rsi
  _DWORD *v31; // rcx
  bool v32; // cl
  __int64 v33; // rax
  _DWORD *v34; // rcx
  char *v35; // r9
  _DWORD *v36; // rsi
  __int16 v37; // r11
  _DWORD *v38; // r15
  _DWORD *v39; // r11
  _DWORD *v40; // r15
  bool v41; // si
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  signed __int64 v44; // rdx
  _QWORD *v45; // rbx
  __int64 v46; // r15
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rsi
  __m128i v51; // xmm0
  unsigned __int64 v52; // rdx
  __int64 *v53; // rdi
  __int64 *v54; // rdx
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  _QWORD *v58; // r9
  __int64 v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rdi
  char *v62; // rdi
  __int64 v63; // rsi
  char *v64; // rbx
  __int64 v65; // rdx
  __m128i v66; // xmm0
  unsigned __int64 v67; // rdx
  __int64 *v68; // rcx
  __int64 *v69; // rdx
  __int64 v70; // rsi
  __int64 i; // rdx
  __int64 v72; // rsi
  _QWORD *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // r11
  _DWORD *v77; // r15
  _DWORD *v78; // r9
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __m128i v82; // xmm0
  unsigned __int64 v83; // rax
  char *v84; // rdx
  char *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r9
  signed __int64 v89; // rdx
  __int64 v90; // rcx
  _DWORD *v91; // rdi
  _DWORD *v92; // rcx
  char *v93; // rax
  char *v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdi
  _DWORD *v97; // rsi
  _DWORD *v98; // rcx
  _DWORD *v99; // r11
  _QWORD *v101; // [rsp+0h] [rbp-78h]
  _DWORD *v102; // [rsp+0h] [rbp-78h]
  __int64 v103; // [rsp+0h] [rbp-78h]
  __int64 v104; // [rsp+0h] [rbp-78h]
  bool v105; // [rsp+Eh] [rbp-6Ah]
  bool v106; // [rsp+Fh] [rbp-69h]
  __int64 v109; // [rsp+20h] [rbp-58h]
  char *v110; // [rsp+28h] [rbp-50h]
  __int64 v111; // [rsp+28h] [rbp-50h]
  __int64 v112; // [rsp+28h] [rbp-50h]
  char *v113; // [rsp+30h] [rbp-48h]
  __int64 v114; // [rsp+30h] [rbp-48h]
  char *v115; // [rsp+30h] [rbp-48h]
  char *v116; // [rsp+38h] [rbp-40h]

  LOBYTE(v6) = a4 == 0 || a5 == 0;
  if ( (_BYTE)v6 )
    return (char)v6;
  v8 = a4;
  v10 = a5;
LABEL_3:
  if ( v8 + v10 != 2 )
  {
    if ( v8 <= v10 )
    {
      v33 = (a2 - a1) >> 3;
      v24 = v10 / 2;
      v16 = &a2[8 * (v10 / 2)];
      if ( a2 - a1 <= 0 )
      {
        v106 = 0;
        v13 = a1;
        v12 = 0;
LABEL_49:
        v10 -= v10 / 2;
        v105 = v10 == 0;
        if ( v13 == a2 )
          goto LABEL_21;
        goto LABEL_50;
      }
      v34 = *(_DWORD **)v16;
      v13 = a1;
      while ( 2 )
      {
        v35 = &v13[8 * (v33 >> 1)];
        v36 = *(_DWORD **)v35;
        if ( *(_DWORD **)v35 == v34 )
          goto LABEL_78;
        v37 = *((_WORD *)v36 + 2);
        if ( !*((_WORD *)v34 + 2)
          && (v38 = *(_DWORD **)(*((_QWORD *)v34 + 2) + 24LL)) != nullptr
          && *v38 == 5
          && v38[1] == 9
          && v34[6] == 2 )
        {
          v102 = *((_DWORD **)v34 + 4);
          v40 = *((_DWORD **)v34 + 5);
          if ( !v37 && (v99 = *(_DWORD **)(*((_QWORD *)v36 + 2) + 24LL)) != nullptr && *v99 == 5 && v99[1] == 9 )
          {
LABEL_109:
            if ( v36[6] == 2 )
            {
              if ( v40 == *((_DWORD **)v36 + 5) )
              {
                if ( !v102 )
                  goto LABEL_46;
                v36 = *((_DWORD **)v36 + 4);
                if ( !v36 )
                  goto LABEL_78;
                v40 = v102;
              }
              else
              {
                v36 = *((_DWORD **)v36 + 5);
              }
            }
            else if ( v40 == v36 )
            {
LABEL_96:
              v41 = v102 == nullptr;
LABEL_45:
              if ( v41 )
              {
LABEL_46:
                v33 >>= 1;
                goto LABEL_47;
              }
LABEL_78:
              v13 = v35 + 8;
              v33 = v33 - (v33 >> 1) - 1;
LABEL_47:
              if ( v33 <= 0 )
              {
                v8 -= (v13 - a1) >> 3;
                v12 = (v13 - a1) >> 3;
                v106 = v8 == 0;
                goto LABEL_49;
              }
              continue;
            }
          }
          else if ( v36 == v40 )
          {
            goto LABEL_96;
          }
        }
        else if ( !v37 && (v39 = *(_DWORD **)(*((_QWORD *)v36 + 2) + 24LL)) != nullptr && *v39 == 5 )
        {
          v40 = *(_DWORD **)v16;
          if ( v39[1] == 9 )
          {
            v102 = nullptr;
            goto LABEL_109;
          }
        }
        else
        {
          v40 = *(_DWORD **)v16;
        }
        break;
      }
      v41 = *v40 < *v36;
      goto LABEL_45;
    }
    v11 = v8 / 2;
    v12 = v8 / 2;
    v13 = &a1[8 * (v8 / 2)];
    v14 = (a3 - (__int64)a2) >> 3;
    if ( a3 - (__int64)a2 <= 0 )
    {
      v8 -= v11;
      v105 = 0;
      v25 = v13;
      v106 = v8 == 0;
      v24 = 0;
      goto LABEL_85;
    }
    v15 = *(_DWORD **)v13;
    v16 = a2;
    while ( 1 )
    {
      v17 = &v16[8 * (v14 >> 1)];
      v18 = *(_DWORD **)v17;
      if ( v15 == *(_DWORD **)v17 )
        goto LABEL_18;
      v19 = *((_WORD *)v15 + 2);
      if ( *((_WORD *)v18 + 2) )
        break;
      v20 = *(_DWORD **)(*((_QWORD *)v18 + 2) + 24LL);
      if ( !v20 || *v20 != 5 || v20[1] != 9 || v18[6] != 2 )
        break;
      v77 = *((_DWORD **)v18 + 4);
      v18 = *((_DWORD **)v18 + 5);
      if ( v19 )
        goto LABEL_144;
      v78 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
      if ( !v78 )
        goto LABEL_105;
      if ( *v78 != 5 )
        goto LABEL_144;
      if ( v78[1] != 9 )
      {
LABEL_105:
        if ( v15 == v18 )
          goto LABEL_106;
LABEL_15:
        v22 = *(_DWORD **)v13;
        goto LABEL_16;
      }
      if ( v15[6] == 2 )
      {
        v22 = *((_DWORD **)v15 + 5);
        if ( v18 != v22 )
          goto LABEL_16;
        if ( !v77 )
          goto LABEL_7;
        v97 = *((_DWORD **)v15 + 4);
        if ( !v97 )
          goto LABEL_18;
        v23 = *v77 < *v97;
LABEL_17:
        if ( v23 )
          goto LABEL_7;
LABEL_18:
        v14 >>= 1;
LABEL_19:
        if ( v14 <= 0 )
        {
LABEL_20:
          v10 -= (v16 - a2) >> 3;
          v24 = (v16 - a2) >> 3;
          v105 = v10 == 0;
          v8 -= v11;
          v106 = v8 == 0;
          if ( v13 == a2 )
          {
LABEL_21:
            a2 = v16;
            v25 = v16;
            goto LABEL_85;
          }
LABEL_50:
          if ( v16 == a2 )
          {
            v25 = v13;
            goto LABEL_85;
          }
          v42 = (v16 - v13) >> 3;
          v43 = (a2 - v13) >> 3;
          if ( v43 == v42 - v43 )
          {
            v79 = a2 - 8 - v13;
            if ( v79 <= 8 || (unsigned __int64)(v13 + 15 - a2) <= 0x1E )
            {
              v93 = a2;
              v94 = v13;
              do
              {
                v95 = *(_QWORD *)v94;
                v96 = *(_QWORD *)v93;
                v93 += 8;
                v94 += 8;
                *((_QWORD *)v94 - 1) = v96;
                *((_QWORD *)v93 - 1) = v95;
              }
              while ( &a2[a2 - v13] != v93 );
            }
            else
            {
              v80 = 0;
              v81 = (v79 >> 3) + 1;
              do
              {
                v82 = _mm_loadu_si128((const __m128i *)&v13[v80]);
                *(__m128i *)&v13[v80] = _mm_loadu_si128((const __m128i *)&a2[v80]);
                *(__m128i *)&a2[v80] = v82;
                v80 += 16;
              }
              while ( 16 * (v81 >> 1) != v80 );
              if ( (v81 & 1) != 0 )
              {
                v83 = 8 * (v81 & 0xFFFFFFFFFFFFFFFELL);
                v84 = &a2[v83];
                v85 = &v13[v83];
                v86 = *(_QWORD *)v85;
                *(_QWORD *)v85 = *(_QWORD *)v84;
                *(_QWORD *)v84 = v86;
              }
            }
            v25 = a2;
            a2 = v16;
            goto LABEL_85;
          }
          v109 = v24;
          v44 = v16 - a2;
          v110 = v13;
          v45 = v13;
          v113 = &v13[v44];
          v46 = v12;
          while ( 2 )
          {
            v47 = v42 - v43;
            if ( v43 >= (__int64)(v42 - v43) )
            {
LABEL_66:
              v57 = 8 * v42;
              v58 = &v45[v42];
              if ( v47 == 1 )
              {
                v12 = v46;
                v24 = v109;
                v13 = v110;
                v25 = v113;
                v90 = v45[(unsigned __int64)v57 / 8 - 1];
                if ( v57 - 8 <= 8 )
                {
                  if ( v57 == 16 )
                    *(v58 - 1) = *v45;
                }
                else
                {
                  v115 = a1;
                  v112 = v45[(unsigned __int64)v57 / 8 - 1];
                  v104 = v12;
                  memmove(v45 + 1, v45, v57 - 8);
                  v12 = v104;
                  v24 = v109;
                  v90 = v112;
                  a1 = v115;
                }
                *v45 = v90;
                goto LABEL_84;
              }
              v59 = 8 * v43;
              v101 = &v45[v43];
              if ( v43 <= 0 )
              {
                v45 += v43;
                v43 = v42 % v47;
                if ( !(v42 % v47) )
                {
LABEL_83:
                  v12 = v46;
                  v24 = v109;
                  v13 = v110;
                  v25 = v113;
                  goto LABEL_84;
                }
              }
              else
              {
                if ( (unsigned __int64)(v43 - 1) <= 1 )
                {
                  v73 = &v45[v43];
                  v74 = 0;
                }
                else
                {
                  v60 = v57 - 16;
                  v61 = v59 - 16;
                  if ( v57 - 16 >= v59 || v57 <= v61 )
                  {
                    v62 = (char *)v45 + v61;
                    v63 = 0;
                    v64 = (char *)v45 + v60;
                    v65 = 0;
                    do
                    {
                      v66 = _mm_loadu_si128((const __m128i *)&v62[v65]);
                      ++v63;
                      *(__m128i *)&v62[v65] = _mm_loadu_si128((const __m128i *)&v64[v65]);
                      *(__m128i *)&v64[v65] = v66;
                      v65 -= 16;
                    }
                    while ( (unsigned __int64)v43 >> 1 != v63 );
                    if ( (v43 & 1) != 0 )
                    {
                      v67 = -8LL * (v43 & 0xFFFFFFFFFFFFFFFELL) - 8;
                      v68 = (_QWORD *)((char *)v101 + v67);
                      v69 = (_QWORD *)((char *)v58 + v67);
                      v70 = *v68;
                      *v68 = *v69;
                      *v69 = v70;
                    }
                    goto LABEL_75;
                  }
                  v73 = &v45[v43];
                  v74 = 0;
                }
                do
                {
                  v75 = *(v73 - 1);
                  v76 = *(v58 - 1);
                  ++v74;
                  --v73;
                  --v58;
                  *v73 = v76;
                  *v58 = v75;
                }
                while ( v43 != v74 );
LABEL_75:
                v45 = &v101[v59 / 0xFFFFFFFFFFFFFFF8LL];
                v43 = v42 % v47;
                if ( !(v42 % v47) )
                  goto LABEL_83;
              }
              v42 = v47;
              continue;
            }
            break;
          }
          while ( v43 != 1 )
          {
            v48 = (unsigned __int64)&v45[v43];
            if ( (__int64)v47 > 0 )
            {
              if ( v47 - 1 <= 1 || v48 < (unsigned __int64)(v45 + 2) && 8 * v43 + 16 > 0 )
              {
                for ( i = 0; i != v47; ++i )
                {
                  v72 = v45[i];
                  v45[i] = *(_QWORD *)(v48 + 8 * i);
                  *(_QWORD *)(v48 + 8 * i) = v72;
                }
              }
              else
              {
                v49 = 0;
                v50 = 0;
                do
                {
                  v51 = _mm_loadu_si128((const __m128i *)&v45[v49]);
                  ++v50;
                  *(__m128i *)&v45[v49] = _mm_loadu_si128((const __m128i *)(v48 + v49 * 8));
                  *(__m128i *)(v48 + v49 * 8) = v51;
                  v49 += 2;
                }
                while ( v47 >> 1 != v50 );
                if ( (v47 & 1) != 0 )
                {
                  v52 = v47 & 0xFFFFFFFFFFFFFFFELL;
                  v53 = (__int64 *)(v52 * 8 + v48);
                  v54 = &v45[v52];
                  v55 = *v54;
                  *v54 = *v53;
                  *v53 = v55;
                }
              }
              v45 += v47;
            }
            v56 = v42 % v43;
            if ( !(v42 % v43) )
              goto LABEL_83;
            v42 = v43;
            v43 -= v56;
            v47 = v42 - v43;
            if ( v43 >= (__int64)(v42 - v43) )
              goto LABEL_66;
          }
          v12 = v46;
          v24 = v109;
          v87 = *v45;
          v88 = 8 * v42;
          v13 = v110;
          v25 = v113;
          v89 = 8 * v42 - 8;
          if ( v89 <= 8 )
          {
            if ( 8 * v42 == 16 )
              *v45 = v45[1];
          }
          else
          {
            v116 = a1;
            v114 = 8 * v42;
            v111 = *v45;
            v103 = v12;
            memmove(v45, v45 + 1, v89);
            v12 = v103;
            v24 = v109;
            v87 = v111;
            v88 = v114;
            a1 = v116;
          }
          *(_QWORD *)((char *)v45 + v88 - 8) = v87;
LABEL_84:
          a2 = v16;
LABEL_85:
          LOBYTE(v6) = sub_493EC0(a1, v13, v25, v12, v24, a6);
          if ( v105 || v106 )
            return (char)v6;
          a1 = v25;
          goto LABEL_3;
        }
      }
      else
      {
LABEL_144:
        v22 = *(_DWORD **)v13;
        if ( v15 != v18 )
          goto LABEL_16;
LABEL_106:
        if ( v77 )
        {
          v14 >>= 1;
          goto LABEL_19;
        }
LABEL_7:
        v16 = v17 + 8;
        v14 = v14 - (v14 >> 1) - 1;
        if ( v14 <= 0 )
          goto LABEL_20;
      }
    }
    if ( v19 )
      goto LABEL_15;
    v21 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
    if ( !v21 || *v21 != 5 || v21[1] != 9 )
      goto LABEL_15;
    v22 = *(_DWORD **)v13;
    if ( v15[6] == 2 )
    {
      v22 = *((_DWORD **)v15 + 5);
      if ( v18 == v22 )
        goto LABEL_7;
    }
LABEL_16:
    v23 = *v18 < *v22;
    goto LABEL_17;
  }
  v6 = *(_DWORD **)a1;
  v26 = *(_DWORD **)a2;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
    return (char)v6;
  v27 = *((_WORD *)v6 + 2);
  if ( *((_WORD *)v26 + 2)
    || (v28 = *(_DWORD **)(*((_QWORD *)v26 + 2) + 24LL)) == nullptr
    || *v28 != 5
    || v28[1] != 9
    || v26[6] != 2 )
  {
    if ( !v27 && (v29 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL)) != nullptr && *v29 == 5 && v29[1] == 9 && v6[6] == 2 )
    {
      v31 = *((_DWORD **)v6 + 5);
      v30 = *(_DWORD **)a2;
      if ( v26 == v31 )
        goto LABEL_32;
    }
    else
    {
      v30 = *(_DWORD **)a2;
      v31 = *(_DWORD **)a1;
    }
    goto LABEL_30;
  }
  v91 = *((_DWORD **)v26 + 4);
  v30 = *((_DWORD **)v26 + 5);
  if ( !v27 )
  {
    v92 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
    if ( !v92 )
      goto LABEL_136;
    if ( *v92 == 5 )
    {
      if ( v92[1] == 9 )
      {
        if ( v6[6] != 2 )
          goto LABEL_161;
        v31 = *((_DWORD **)v6 + 5);
        if ( v30 == v31 )
        {
          if ( !v91 )
            goto LABEL_32;
          v98 = *((_DWORD **)v6 + 4);
          if ( !v98 )
            return (char)v6;
          v32 = *v91 < *v98;
LABEL_31:
          if ( v32 )
            goto LABEL_32;
          return (char)v6;
        }
      }
      else
      {
LABEL_136:
        if ( v6 == v30 )
          goto LABEL_137;
        v31 = *(_DWORD **)a1;
      }
LABEL_30:
      v32 = *v30 < *v31;
      goto LABEL_31;
    }
  }
LABEL_161:
  v31 = *(_DWORD **)a1;
  if ( v6 != v30 )
    goto LABEL_30;
LABEL_137:
  if ( !v91 )
  {
LABEL_32:
    *(_QWORD *)a1 = v26;
    *(_QWORD *)a2 = v6;
  }
  return (char)v6;
}

