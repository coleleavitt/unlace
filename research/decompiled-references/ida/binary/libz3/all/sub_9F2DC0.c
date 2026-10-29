__int64 __fastcall sub_9F2DC0(__m128i *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 *v9; // r12
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 *v14; // rbp
  void *v15; // rdi
  __int64 v16; // r13
  unsigned int v17; // eax
  void *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  bool v24; // al
  bool v25; // al
  __m128d v26; // xmm0
  char *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbp
  void *v34; // r10
  int v35; // eax
  char v36; // al
  __m128i v37; // xmm0
  char v38; // dl
  char v39; // al
  __int64 v40; // rcx
  void *v41; // rdi
  __int64 i; // r13
  __int64 v43; // rbp
  __m128i *v44; // r14
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rsi
  char v49; // al
  unsigned int v50; // eax
  unsigned int v51; // eax
  char v52; // al
  __int64 *v53; // r13
  __int64 v54; // r12
  __int8 *v55; // r13
  __int64 v56; // r14
  __int64 v57; // r15
  unsigned int v58; // eax
  char *v59; // r15
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rbp
  char *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r13
  void *v67; // rcx
  bool v68; // al
  bool v69; // al
  __int64 v70; // rbp
  __int64 v71; // rax
  int v72; // eax
  int v73; // eax
  bool v74; // al
  __int64 v75; // r9
  __int64 v76; // [rsp+0h] [rbp-78h]
  __int64 v77; // [rsp+0h] [rbp-78h]
  __int64 v78; // [rsp+0h] [rbp-78h]
  __int64 v79; // [rsp+0h] [rbp-78h]
  __int64 v80; // [rsp+0h] [rbp-78h]
  void *v81; // [rsp+0h] [rbp-78h]
  __int64 v83; // [rsp+8h] [rbp-70h]
  __int64 v84; // [rsp+8h] [rbp-70h]
  __int64 v85; // [rsp+8h] [rbp-70h]
  __int64 v86; // [rsp+10h] [rbp-68h]
  void *v87; // [rsp+10h] [rbp-68h]
  __int64 v88; // [rsp+18h] [rbp-60h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  char *v90; // [rsp+20h] [rbp-58h]
  __int64 v91; // [rsp+28h] [rbp-50h]
  __int64 v92; // [rsp+30h] [rbp-48h]
  __int64 v93; // [rsp+30h] [rbp-48h]
  char v94; // [rsp+38h] [rbp-40h]
  __int64 v95; // [rsp+38h] [rbp-40h]

  result = a2 - (char *)a1;
  v90 = a2;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  while ( 2 )
  {
    v5 = result;
    v6 = result >> 4;
    v7 = v5 >> 3;
    if ( !a3 )
    {
      v92 = v6 - 1;
      v86 = (v7 - 1) >> 1;
      v39 = ~(_BYTE)v7;
      v40 = v92;
      v94 = v39 & 1;
      v41 = qword_1C7F2C0;
      while ( 1 )
      {
        v88 = a1->m128i_i64[v40];
        if ( v40 >= v86 )
        {
          v53 = &a1->m128i_i64[v40];
          if ( v92 != v40 || !v94 )
          {
LABEL_179:
            *v53 = v88;
            goto LABEL_115;
          }
          v43 = v40;
LABEL_145:
          v70 = 2 * v43 + 2;
          v71 = a1->m128i_i64[v70 - 1];
          v43 = v70 - 1;
          *v53 = v71;
          v53 = &a1->m128i_i64[v43];
          goto LABEL_104;
        }
        v91 = v40;
        for ( i = v40; ; i = v43 )
        {
          v43 = 2 * (i + 1);
          v44 = &a1[i + 1];
          v45 = v44[-1].m128i_i64[1];
          v46 = v44->m128i_i64[0];
          v47 = v45 + 120;
          v48 = v44->m128i_i64[0] + 120;
          if ( (*(_BYTE *)(v44->m128i_i64[0] + 140) & 1) != 0
            || *(_DWORD *)(v46 + 136) != 1
            || (*(_BYTE *)(v45 + 140) & 1) != 0
            || *(_DWORD *)(v45 + 136) != 1 )
          {
            v49 = sub_1848D40(v41, v48, v47);
            v41 = qword_1C7F2C0;
            if ( v49 )
              goto LABEL_85;
            if ( !sub_3ED680((__int64)qword_1C7F2C0, v46 + 120, v45 + 120) )
              goto LABEL_92;
          }
          else
          {
            if ( (*(_BYTE *)(v46 + 124) & 1) != 0 || (*(_BYTE *)(v45 + 124) & 1) != 0 )
            {
              v50 = sub_182C7B0(v41, v48, v47);
              v47 = v45 + 120;
              v51 = v50 >> 31;
              v41 = qword_1C7F2C0;
              v48 = v46 + 120;
            }
            else
            {
              LOBYTE(v51) = *(_DWORD *)(v46 + 120) < *(_DWORD *)(v45 + 120);
            }
            if ( (_BYTE)v51 )
            {
LABEL_85:
              --v43;
              v44 = (__m128i *)((char *)a1 + 8 * v43);
              goto LABEL_86;
            }
            if ( !sub_3ED680((__int64)v41, v48, v47) )
            {
LABEL_92:
              v41 = qword_1C7F2C0;
              goto LABEL_86;
            }
          }
          v52 = sub_927C80(v46 + 152, v45 + 152);
          v41 = qword_1C7F2C0;
          if ( v52 )
            goto LABEL_85;
LABEL_86:
          a1->m128i_i64[i] = v44->m128i_i64[0];
          if ( v43 >= v86 )
            break;
        }
        v40 = v91;
        v53 = (__int64 *)v44;
        if ( v92 == v43 && v94 )
          goto LABEL_145;
LABEL_104:
        v54 = (v43 - 1) >> 1;
        if ( v40 >= v43 )
          goto LABEL_179;
        v84 = v40;
        v79 = v88 + 120;
        while ( 2 )
        {
          v55 = &a1->m128i_i8[8 * v54];
          v56 = *(_QWORD *)v55;
          v57 = *(_QWORD *)v55 + 120LL;
          if ( (*(_BYTE *)(*(_QWORD *)v55 + 140LL) & 1) != 0
            || *(_DWORD *)(v56 + 136) != 1
            || (*(_BYTE *)(v88 + 140) & 1) != 0
            || *(_DWORD *)(v88 + 136) != 1 )
          {
            LOBYTE(v58) = sub_1848D40(v41, *(_QWORD *)v55 + 120LL, v79);
          }
          else if ( (*(_BYTE *)(v56 + 124) & 1) != 0 || (*(_BYTE *)(v88 + 124) & 1) != 0 )
          {
            v58 = (unsigned int)sub_182C7B0(v41, *(_QWORD *)v55 + 120LL, v79) >> 31;
          }
          else
          {
            LOBYTE(v58) = *(_DWORD *)(v56 + 120) < *(_DWORD *)(v88 + 120);
          }
          if ( !(_BYTE)v58 && (!sub_3ED680((__int64)qword_1C7F2C0, v57, v79) || !sub_927C80(v56 + 152, v88 + 152)) )
          {
            v40 = v84;
            a1->m128i_i64[v43] = v88;
            if ( v84 )
              goto LABEL_114;
LABEL_125:
            v59 = (char *)a1;
            result = v90 - (char *)a1;
            if ( v90 - (char *)a1 <= 8 )
              return result;
LABEL_126:
            v90 -= 8;
            v89 = *(_QWORD *)v90;
            *(_QWORD *)v90 = *(_QWORD *)v59;
            v60 = v90 - v59;
            v28 = v90 - v59;
            if ( v90 - v59 <= 16 )
            {
              v27 = v59;
              if ( (((v90 - v59) >> 3) & 1) != 0 || (unsigned __int64)(((v90 - v59) >> 3) - 1) > 2 )
                goto LABEL_75;
              v62 = 0;
LABEL_174:
              v75 = 2 * v62 + 2;
              v62 = 2 * v62 + 1;
              v29 = (v75 >> 1) - 1;
              *(_QWORD *)v27 = *(_QWORD *)&v59[8 * v75 - 8];
              goto LABEL_63;
            }
            v93 = (v60 >> 3) & 1;
            v61 = 0;
            v95 = v60 >> 3;
            while ( 1 )
            {
              v62 = 2 * (v61 + 1);
              v64 = 16 * (v61 + 1);
              v65 = *(_QWORD *)&v59[v64 - 8];
              v63 = &v59[v64];
              v66 = *(_QWORD *)&v59[v64];
              v80 = v65 + 120;
              v85 = v66 + 120;
              if ( (*(_BYTE *)(v66 + 140) & 1) != 0
                || *(_DWORD *)(v66 + 136) != 1
                || (*(_BYTE *)(v65 + 140) & 1) != 0
                || *(_DWORD *)(v65 + 136) != 1 )
              {
                if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v85, v80) )
                  goto LABEL_128;
              }
              else
              {
                v67 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v66 + 124) & 1) == 0 && (*(_BYTE *)(v65 + 124) & 1) == 0 )
                {
                  if ( *(_DWORD *)(v65 + 120) > *(_DWORD *)(v66 + 120) )
                    goto LABEL_128;
                  goto LABEL_136;
                }
                if ( (int)sub_182C7B0(qword_1C7F2C0, v85, v80) < 0 )
                  goto LABEL_128;
              }
              v67 = qword_1C7F2C0;
              if ( (*(_BYTE *)(v66 + 124) & 1) != 0 || (*(_BYTE *)(v65 + 124) & 1) != 0 )
              {
                v81 = qword_1C7F2C0;
                v72 = sub_182C7B0(qword_1C7F2C0, v85, v65 + 120);
                v67 = v81;
                v68 = v72 == 0;
                goto LABEL_137;
              }
LABEL_136:
              v68 = *(_DWORD *)(v66 + 120) == *(_DWORD *)(v65 + 120);
LABEL_137:
              if ( v68 )
              {
                v69 = (*(_BYTE *)(v66 + 140) & 1) != 0 || (*(_BYTE *)(v65 + 140) & 1) != 0
                    ? (unsigned int)sub_182C7B0(v67, v66 + 136, v65 + 136) == 0
                    : *(_DWORD *)(v66 + 136) == *(_DWORD *)(v65 + 136);
                if ( v69 && sub_927C80(v66 + 152, v65 + 152) )
                {
LABEL_128:
                  --v62;
                  v63 = &v59[8 * v62];
                }
              }
              *(_QWORD *)&v59[8 * v61] = *(_QWORD *)v63;
              if ( v62 >= (((v90 - v59) >> 3) - 1) / 2 )
              {
                v27 = v63;
                v28 = v90 - v59;
                if ( !v93 && v62 == (v95 - 2) >> 1 )
                  goto LABEL_174;
                v29 = (v62 - 1) / 2;
                if ( !v62 )
                {
                  *(_QWORD *)v63 = v89;
                  goto LABEL_126;
                }
LABEL_63:
                v83 = v28;
                v30 = v29;
                v31 = v62;
                v78 = v89 + 120;
                while ( 2 )
                {
                  v27 = &v59[8 * v30];
                  v32 = *(_QWORD *)v27;
                  v33 = *(_QWORD *)v27 + 120LL;
                  if ( (*(_BYTE *)(*(_QWORD *)v27 + 140LL) & 1) != 0
                    || *(_DWORD *)(v32 + 136) != 1
                    || (*(_BYTE *)(v89 + 140) & 1) != 0
                    || *(_DWORD *)(v89 + 136) != 1 )
                  {
                    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, *(_QWORD *)v27 + 120LL, v78) )
                      goto LABEL_70;
LABEL_64:
                    v32 = *(_QWORD *)v27;
                    goto LABEL_65;
                  }
                  v34 = qword_1C7F2C0;
                  if ( (*(_BYTE *)(v32 + 124) & 1) == 0 && (*(_BYTE *)(v89 + 124) & 1) == 0 )
                  {
                    v35 = *(_DWORD *)(v32 + 120);
                    if ( v35 >= *(_DWORD *)(v89 + 120) )
                      goto LABEL_73;
LABEL_65:
                    *(_QWORD *)&v59[8 * v31] = v32;
                    v31 = v30;
                    if ( !v30 )
                    {
                      v28 = v83;
                      goto LABEL_75;
                    }
                    v30 = (v30 - 1) / 2;
                    continue;
                  }
                  break;
                }
                if ( (int)sub_182C7B0(qword_1C7F2C0, *(_QWORD *)v27 + 120LL, v78) < 0 )
                  goto LABEL_64;
LABEL_70:
                v34 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v32 + 124) & 1) != 0 || (*(_BYTE *)(v89 + 124) & 1) != 0 )
                {
                  v87 = qword_1C7F2C0;
                  v73 = sub_182C7B0(qword_1C7F2C0, v33, v78);
                  v34 = v87;
                  if ( v73 )
                    goto LABEL_74;
                }
                else
                {
                  v35 = *(_DWORD *)(v32 + 120);
LABEL_73:
                  if ( v35 != *(_DWORD *)(v89 + 120) )
                    goto LABEL_74;
                }
                if ( (*(_BYTE *)(v32 + 140) & 1) != 0 || (*(_BYTE *)(v89 + 140) & 1) != 0 )
                  v74 = (unsigned int)sub_182C7B0(v34, v32 + 136, v89 + 136) == 0;
                else
                  v74 = *(_DWORD *)(v32 + 136) == *(_DWORD *)(v89 + 136);
                if ( v74 && sub_927C80(v32 + 152, v89 + 152) )
                  goto LABEL_64;
LABEL_74:
                v28 = v83;
                v27 = &v59[8 * v31];
LABEL_75:
                result = v89;
                *(_QWORD *)v27 = v89;
                if ( v28 <= 8 )
                  return result;
                goto LABEL_126;
              }
              v61 = v62;
            }
          }
          a1->m128i_i64[v43] = *(_QWORD *)v55;
          if ( v84 < v54 )
          {
            v43 = v54;
            v54 = (v54 - 1) / 2;
            v41 = qword_1C7F2C0;
            continue;
          }
          break;
        }
        v40 = v84;
        *(_QWORD *)v55 = v88;
        if ( !v84 )
          goto LABEL_125;
LABEL_114:
        v41 = qword_1C7F2C0;
LABEL_115:
        --v40;
      }
    }
    v8 = &a1->m128i_i64[v6];
    --a3;
    v9 = &a1->m128i_i64[1];
    v10 = sub_33D280(a1->m128i_i64[1] + 120, *v8 + 120);
    v11 = *((_QWORD *)v90 - 1) + 120LL;
    if ( v10 )
    {
      if ( sub_33D280(*v8 + 120, v11) )
      {
        v12 = a1->m128i_i64[0];
LABEL_6:
        a1->m128i_i64[0] = *v8;
        *v8 = v12;
        v13 = a1->m128i_i64[0];
        goto LABEL_7;
      }
      v36 = sub_33D280(a1->m128i_i64[1] + 120, *((_QWORD *)v90 - 1) + 120LL);
      v37 = _mm_loadl_epi64(a1);
      if ( v36 )
      {
        a1->m128i_i64[0] = *((_QWORD *)v90 - 1);
        *((_QWORD *)v90 - 1) = v37.m128i_i64[0];
        v13 = a1->m128i_i64[0];
      }
      else
      {
        v13 = a1->m128i_i64[1];
        *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, v37);
      }
    }
    else if ( sub_33D280(a1->m128i_i64[1] + 120, v11) )
    {
      v26 = (__m128d)_mm_loadu_si128(a1);
      v13 = a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v26, v26, 1);
    }
    else
    {
      v38 = sub_33D280(*v8 + 120, *((_QWORD *)v90 - 1) + 120LL);
      v12 = a1->m128i_i64[0];
      if ( !v38 )
        goto LABEL_6;
      a1->m128i_i64[0] = *((_QWORD *)v90 - 1);
      *((_QWORD *)v90 - 1) = v12;
      v13 = a1->m128i_i64[0];
    }
LABEL_7:
    v14 = (__int64 *)v90;
    while ( 2 )
    {
      v15 = qword_1C7F2C0;
      while ( 1 )
      {
        v16 = *v9;
        v76 = v13 + 120;
        if ( (*(_BYTE *)(*v9 + 140) & 1) != 0
          || *(_DWORD *)(v16 + 136) != 1
          || (*(_BYTE *)(v13 + 140) & 1) != 0
          || *(_DWORD *)(v13 + 136) != 1 )
        {
          LOBYTE(v17) = sub_1848D40(v15, v16 + 120, v76);
          v15 = qword_1C7F2C0;
        }
        else if ( (*(_BYTE *)(v16 + 124) & 1) != 0 || (*(_BYTE *)(v13 + 124) & 1) != 0 )
        {
          v17 = (unsigned int)sub_182C7B0(v15, v16 + 120, v76) >> 31;
          v15 = qword_1C7F2C0;
        }
        else
        {
          LOBYTE(v17) = *(_DWORD *)(v16 + 120) < *(_DWORD *)(v13 + 120);
        }
        if ( !(_BYTE)v17 )
          break;
LABEL_9:
        v13 = a1->m128i_i64[0];
        ++v9;
      }
      if ( (*(_BYTE *)(v16 + 124) & 1) != 0 || (*(_BYTE *)(v13 + 124) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v15, v16 + 120, v76) )
          goto LABEL_17;
      }
      else if ( *(_DWORD *)(v16 + 120) != *(_DWORD *)(v13 + 120) )
      {
        goto LABEL_17;
      }
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 || (*(_BYTE *)(v13 + 140) & 1) != 0 )
        v24 = (unsigned int)sub_182C7B0(v15, v16 + 136, v13 + 136) == 0;
      else
        v24 = *(_DWORD *)(v16 + 136) == *(_DWORD *)(v13 + 136);
      if ( v24 && sub_927C80(v16 + 152, v13 + 152) )
      {
        v15 = qword_1C7F2C0;
        goto LABEL_9;
      }
LABEL_17:
      --v14;
      v18 = qword_1C7F2C0;
      while ( 2 )
      {
        v19 = *v14;
        v20 = a1->m128i_i64[0];
        v21 = a1->m128i_i64[0] + 120;
        v77 = *v14 + 120;
        if ( (*(_BYTE *)(a1->m128i_i64[0] + 140) & 1) != 0
          || *(_DWORD *)(v20 + 136) != 1
          || (*(_BYTE *)(v19 + 140) & 1) != 0
          || *(_DWORD *)(v19 + 136) != 1 )
        {
          LOBYTE(v22) = sub_1848D40(v18, v21, v77);
          v18 = qword_1C7F2C0;
        }
        else if ( (*(_BYTE *)(v20 + 124) & 1) != 0 || (*(_BYTE *)(v19 + 124) & 1) != 0 )
        {
          v22 = (unsigned int)sub_182C7B0(v18, v21, v77) >> 31;
          v18 = qword_1C7F2C0;
        }
        else
        {
          LOBYTE(v22) = *(_DWORD *)(v20 + 120) < *(_DWORD *)(v19 + 120);
        }
        if ( (_BYTE)v22 )
        {
LABEL_18:
          --v14;
          continue;
        }
        break;
      }
      if ( (*(_BYTE *)(v20 + 124) & 1) != 0 || (*(_BYTE *)(v19 + 124) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v18, v21, v77) )
          goto LABEL_26;
      }
      else if ( *(_DWORD *)(v20 + 120) != *(_DWORD *)(v19 + 120) )
      {
        goto LABEL_26;
      }
      if ( (*(_BYTE *)(v20 + 140) & 1) != 0 || (*(_BYTE *)(v19 + 140) & 1) != 0 )
        v25 = (unsigned int)sub_182C7B0(v18, v20 + 136, v19 + 136) == 0;
      else
        v25 = *(_DWORD *)(v20 + 136) == *(_DWORD *)(v19 + 136);
      if ( v25 && sub_927C80(v20 + 152, v19 + 152) )
      {
        v18 = qword_1C7F2C0;
        goto LABEL_18;
      }
LABEL_26:
      if ( v9 < v14 )
      {
        v23 = *v9++;
        *(v9 - 1) = *v14;
        *v14 = v23;
        v13 = a1->m128i_i64[0];
        continue;
      }
      break;
    }
    sub_9F2DC0(v9, v90, a3);
    result = (char *)v9 - (char *)a1;
    if ( (char *)v9 - (char *)a1 > 128 )
    {
      v90 = (char *)v9;
      continue;
    }
    return result;
  }
}

