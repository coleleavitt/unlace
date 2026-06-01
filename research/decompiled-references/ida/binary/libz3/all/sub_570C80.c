__int64 __fastcall sub_570C80(char **a1, _DWORD **a2, __int64 *a3)
{
  char **v4; // rbp
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rbx
  size_t v7; // r14
  unsigned __int64 *v8; // rax
  _DWORD *v9; // rsi
  unsigned __int64 *v10; // r13
  char *v11; // rax
  size_t v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // rdx
  unsigned int v17; // r13d
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  __int64 v20; // rax
  _DWORD *v21; // r15
  _DWORD *v22; // rcx
  size_t v23; // rdx
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  int v32; // edx
  unsigned int v33; // r14d
  __int64 v34; // r15
  unsigned int v35; // r12d
  __int64 v36; // r12
  char *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rsi
  int v41; // edx
  _DWORD *v42; // rdx
  __int64 v43; // rcx
  _DWORD *v44; // r9
  _DWORD *v45; // rcx
  int v47; // edx
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  _DWORD *v50; // r8
  _DWORD *v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  __int64 v54; // rdx
  char *v55; // r9
  _QWORD *v56; // r10
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  int v59; // edi
  __int64 v60; // rdx
  _QWORD *v61; // rsi
  _QWORD *v62; // rdx
  __int64 v63; // rsi
  char **v64; // r15
  _DWORD *v65; // r12
  char *v66; // rbx
  char *v67; // rbp
  char *v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rax
  int v71; // eax
  unsigned int v72; // edx
  unsigned int v73; // esi
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int v76; // edx
  int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // edx
  int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // esi
  unsigned int v83; // eax
  unsigned int v84; // edi
  int v85; // esi
  unsigned int v86; // edi
  int v87; // esi
  unsigned int v88; // eax
  int v89; // esi
  unsigned int v90; // edx
  unsigned int v91; // eax
  int v92; // esi
  unsigned int v93; // edx
  unsigned int v94; // eax
  int v95; // ecx
  unsigned int v96; // edx
  unsigned int v97; // eax
  int v98; // ecx
  unsigned int v99; // edx
  unsigned int v100; // eax
  int v101; // ecx
  unsigned int v102; // ecx
  int v103; // eax
  char *src; // [rsp+0h] [rbp-78h]
  unsigned int v105; // [rsp+8h] [rbp-70h]
  _QWORD *v106; // [rsp+8h] [rbp-70h]
  __int64 v107; // [rsp+10h] [rbp-68h]
  size_t v108; // [rsp+18h] [rbp-60h]
  _QWORD *v109; // [rsp+20h] [rbp-58h]
  _QWORD *v110; // [rsp+28h] [rbp-50h]
  char *v111; // [rsp+30h] [rbp-48h]
  _QWORD *v112; // [rsp+38h] [rbp-40h]

  v4 = a1;
  v5 = *a2;
  if ( !*a2 )
  {
    v17 = *((_DWORD *)a1 + 2);
    src = nullptr;
    v107 = *a3;
    v18 = 2 * v17;
    if ( 3 * v17 >= 4 * (*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 3)) )
      goto LABEL_20;
    goto LABEL_56;
  }
  v6 = *((_QWORD *)v5 - 1);
  v7 = 4LL * (unsigned int)_mm_cvtsi128_si32((__m128i)v6) + 8;
  v8 = (unsigned __int64 *)sub_186B270(v7);
  v9 = *a2;
  *v8 = v6;
  v10 = v8;
  v11 = (char *)(v8 + 1);
  src = v11;
  if ( !v9 )
    goto LABEL_5;
  v12 = 4LL * (unsigned int)*(v9 - 1);
  if ( v12 > 4 )
  {
    memmove(v11, v9, v12);
LABEL_5:
    v13 = *a3;
LABEL_6:
    v107 = v13;
    goto LABEL_7;
  }
  v13 = *a3;
  v107 = *a3;
  if ( v12 == 4 )
  {
    *((_DWORD *)v10 + 2) = *v9;
    goto LABEL_6;
  }
LABEL_7:
  v14 = sub_186B270(v7);
  v15 = *((unsigned int *)v10 + 1);
  *(_QWORD *)v14 = v6;
  v5 = (_DWORD *)(v14 + 8);
  v16 = 4 * v15;
  if ( v16 <= 4 )
  {
    if ( v16 == 4 )
      *(_DWORD *)(v14 + 8) = *((_DWORD *)v10 + 2);
  }
  else
  {
    memcpy((void *)(v14 + 8), src, v16);
  }
  v17 = *((_DWORD *)a1 + 2);
  v18 = 2 * v17;
  if ( 3 * v17 >= 4 * (*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 3)) )
    goto LABEL_10;
LABEL_56:
  v34 = v18;
  v17 = v18;
  v108 = 24LL * v18;
  v52 = (_QWORD *)sub_186B270(v108);
  v106 = v52;
  if ( v18 )
  {
    v53 = &v52[3 * v18];
    do
    {
      *v52 = 0;
      v52 += 3;
      *(v52 - 2) = 0;
    }
    while ( v52 != v53 );
  }
  v35 = v18 - 1;
  v54 = *((unsigned int *)a1 + 2);
  v55 = &(*a1)[24 * v54];
  v56 = &v106[v108 / 8];
  v57 = *a1 + 8;
  if ( *a1 != v55 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v57 - 1) != 2 )
      {
        v58 = v57 + 3;
        if ( v55 == (char *)(v57 + 2) )
          goto LABEL_73;
        goto LABEL_62;
      }
      v59 = *((_DWORD *)v57 - 2);
      v60 = 24LL * (v59 & v35);
      v61 = &v106[(unsigned __int64)v60 / 8];
      if ( v108 == v60 )
      {
LABEL_96:
        if ( v106 == v61 )
        {
LABEL_115:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v62 = v106;
        while ( *((_DWORD *)v62 + 1) )
        {
          v62 += 3;
          if ( v61 == v62 )
            goto LABEL_115;
        }
        *(_DWORD *)v62 = v59;
        *((_DWORD *)v62 + 1) = 2;
        if ( v57 != v62 + 1 )
        {
          v63 = v62[1];
          if ( v63 )
          {
LABEL_70:
            v112 = v57;
            v111 = v55;
            v110 = v62;
            v109 = v56;
            sub_186B220((void *)(v63 - 8));
            v57 = v112;
            v55 = v111;
            v62 = v110;
            v56 = v109;
          }
LABEL_71:
          v62[1] = 0;
          v62[1] = *v57;
          *v57 = 0;
        }
      }
      else
      {
        v62 = &v106[(unsigned __int64)v60 / 8];
        while ( *((_DWORD *)v62 + 1) )
        {
          v62 += 3;
          if ( v56 == v62 )
            goto LABEL_96;
        }
        *(_DWORD *)v62 = v59;
        *((_DWORD *)v62 + 1) = 2;
        if ( v57 != v62 + 1 )
        {
          v63 = v62[1];
          if ( v63 )
            goto LABEL_70;
          goto LABEL_71;
        }
      }
      v62[2] = v57[1];
      v58 = v57 + 3;
      if ( v55 == (char *)(v57 + 2) )
      {
LABEL_73:
        v54 = *((unsigned int *)v4 + 2);
        v55 = *v4;
        break;
      }
LABEL_62:
      v57 = v58;
    }
  }
  if ( v55 )
  {
    if ( (_DWORD)v54 )
    {
      v64 = v4;
      v65 = v5;
      v66 = v55;
      v67 = &v55[24 * v54];
      v68 = v55;
      do
      {
        while ( 1 )
        {
          v69 = *((_QWORD *)v66 + 1);
          if ( !v69 )
            break;
          v66 += 24;
          sub_186B220((void *)(v69 - 8));
          if ( v66 == v67 )
            goto LABEL_79;
        }
        v66 += 24;
      }
      while ( v66 != v67 );
LABEL_79:
      v5 = v65;
      v55 = v68;
      v4 = v64;
      v17 = v18;
      v34 = v18;
      v35 = v18 - 1;
    }
    sub_186B220(v55);
  }
  *((_DWORD *)v4 + 2) = v18;
  *((_DWORD *)v4 + 4) = 0;
  *v4 = (char *)v106;
  if ( !v5 )
    goto LABEL_21;
LABEL_10:
  v19 = *(v5 - 1);
  if ( !v19 )
  {
LABEL_20:
    v34 = v17;
    v35 = v17 - 1;
LABEL_21:
    v33 = 778;
    goto LABEL_22;
  }
  v105 = *(v5 - 2);
  v20 = sub_186B270(4LL * v105 + 8);
  v21 = (_DWORD *)v20;
  v22 = (_DWORD *)(v20 + 8);
  v23 = 4LL * (unsigned int)*(v5 - 1);
  *(_QWORD *)v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v105), _mm_cvtsi32_si128(v19)).m128i_u64[0];
  if ( v23 <= 4 )
  {
    if ( v23 == 4 )
      *(_DWORD *)(v20 + 8) = *v5;
  }
  else
  {
    v22 = memcpy((void *)(v20 + 8), v5, v23);
  }
  if ( v19 == 2 )
  {
    v102 = v21[3] + 11;
    v103 = v21[2] - 1640531527;
    v25 = (-1640531510 - (v103 + v102)) ^ (v102 >> 13);
    v26 = (v103 - v102 - v25) ^ (v25 << 8);
    v27 = v102 - v25 - v26;
    goto LABEL_17;
  }
  if ( v19 == 3 )
  {
    v71 = v21[3];
    v72 = v21[4] + 11;
    v73 = v71 - 1640531527 - v72;
    v74 = (v21[2] - v71 - v72) ^ (v72 >> 13);
    v75 = (v73 - v74) ^ (v74 << 8);
    v76 = (v72 - v74 - v75) ^ (v75 >> 13);
    v77 = (v74 - v75 - v76) ^ (v76 >> 12);
    v78 = (v75 - v76 - v77) ^ (v77 << 16);
    v79 = (v76 - v77 - v78) ^ (v78 >> 5);
    v80 = (v77 - v78 - v79) ^ (v79 >> 3);
    v81 = (v78 - v79 - v80) ^ (v80 << 10);
    v82 = (v79 - v80 - v81) ^ (v81 >> 15);
    v25 = (v80 + 17 - v81 - v82) ^ (v82 >> 13);
    v26 = (v81 - v82 - v25) ^ (v25 << 8);
    v27 = v82 - v25 - v26;
    goto LABEL_17;
  }
  if ( v19 != 1 )
  {
    v83 = 11;
    v84 = -1640531527;
    v85 = -1640531527;
    do
    {
      v86 = v22[v19 - 2] + v84;
      v87 = v22[v19 - 1] + v85;
      v88 = v22[v19 - 3] + v83;
      v19 -= 3;
      v89 = (v87 - (v86 + v88)) ^ (v88 >> 13);
      v90 = (v86 - v88 - v89) ^ (v89 << 8);
      v91 = (v90 >> 13) ^ (v88 - v89 - v90);
      v92 = (v89 - v90 - v91) ^ (v91 >> 12);
      v93 = (v90 - v91 - v92) ^ (v92 << 16);
      v94 = (v91 - v92 - v93) ^ (v93 >> 5);
      v85 = (v92 - v93 - v94) ^ (v94 >> 3);
      v84 = (v93 - v94 - v85) ^ (v85 << 10);
      v83 = (v94 - v85 - v84) ^ (v84 >> 15);
    }
    while ( v19 > 2 );
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
LABEL_122:
        v95 = (v85 + 17 - v84 - v83) ^ (v83 >> 13);
        v96 = (v84 - v83 - v95) ^ (v95 << 8);
        v97 = (v96 >> 13) ^ (v83 - v95 - v96);
        v98 = (v95 - v96 - v97) ^ (v97 >> 12);
        v99 = (v96 - v97 - v98) ^ (v98 << 16);
        v100 = (v97 - v98 - v99) ^ (v99 >> 5);
        v101 = (v100 >> 3) ^ (v98 - v99 - v100);
        v33 = (v100 - v101 - ((v99 - v100 - v101) ^ (v101 << 10))) ^ (((v99 - v100 - v101) ^ (v101 << 10)) >> 15);
        goto LABEL_18;
      }
      v84 += v21[3];
    }
    v83 += v21[2];
    goto LABEL_122;
  }
  v24 = v21[2];
  v25 = -1640531521 - v24;
  v26 = (2 * v24 + 1640531510) ^ ((-1640531521 - v24) << 8);
  v27 = v24 + 1640531532 - v26;
LABEL_17:
  v28 = v27 ^ (v26 >> 13);
  v29 = (v25 - v26 - v28) ^ (v28 >> 12);
  v30 = (v26 - v28 - v29) ^ (v29 << 16);
  v31 = (v28 - v29 - v30) ^ (v30 >> 5);
  v32 = (v31 >> 3) ^ (v29 - v30 - v31);
  v33 = (v31 - v32 - ((v30 - v31 - v32) ^ (v32 << 10))) ^ (((v30 - v31 - v32) ^ (v32 << 10)) >> 15);
LABEL_18:
  sub_186B220(v21);
  v34 = *((unsigned int *)v4 + 2);
  v35 = v34 - 1;
LABEL_22:
  v36 = v33 & v35;
  v37 = *v4;
  v38 = (__int64)&(*v4)[24 * v36];
  if ( 24 * v36 == 24 * v34 )
  {
    v40 = 0;
LABEL_41:
    if ( v37 == (char *)v38 )
    {
LABEL_90:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v47 = *((_DWORD *)v37 + 1);
      if ( v47 == 2 )
      {
        if ( *(_DWORD *)v37 == v33 )
        {
          v48 = *((_DWORD **)v37 + 1);
          if ( v48 )
          {
            v49 = (unsigned int)*(v48 - 1);
            if ( v5 )
            {
              if ( (_DWORD)v49 == *(v5 - 1) )
              {
                v50 = &v48[v49];
                if ( v48 == v50 )
                  goto LABEL_55;
                v51 = v5;
                while ( *v48 == *v51 )
                {
                  ++v48;
                  ++v51;
                  if ( v50 == v48 )
                    goto LABEL_55;
                }
              }
            }
            else if ( !(_DWORD)v49 )
            {
LABEL_114:
              v39 = (__int64)v37;
              goto LABEL_37;
            }
          }
          else
          {
            if ( !v5 )
              goto LABEL_114;
            if ( !*(v5 - 1) )
            {
LABEL_55:
              v39 = (__int64)v37;
              goto LABEL_36;
            }
          }
        }
      }
      else
      {
        if ( !v47 )
        {
          v39 = (__int64)v37;
          if ( v40 )
          {
            --*((_DWORD *)v4 + 4);
            v39 = v40;
          }
          v70 = *(_QWORD *)(v39 + 8);
          if ( v70 )
            goto LABEL_86;
          goto LABEL_87;
        }
        v40 = (__int64)v37;
      }
      v37 += 24;
      if ( (char *)v38 == v37 )
        goto LABEL_90;
    }
  }
  v39 = (__int64)&(*v4)[24 * v36];
  v40 = 0;
  while ( 1 )
  {
    v41 = *(_DWORD *)(v39 + 4);
    if ( v41 != 2 )
      break;
    if ( *(_DWORD *)v39 == v33 )
    {
      v42 = *(_DWORD **)(v39 + 8);
      if ( v42 )
      {
        v43 = (unsigned int)*(v42 - 1);
        if ( v5 )
        {
          if ( (_DWORD)v43 == *(v5 - 1) )
          {
            v44 = &v42[v43];
            if ( v42 == v44 )
              goto LABEL_36;
            v45 = v5;
            while ( *v42 == *v45 )
            {
              ++v42;
              ++v45;
              if ( v44 == v42 )
                goto LABEL_36;
            }
          }
        }
        else if ( !(_DWORD)v43 )
        {
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v5 )
          goto LABEL_37;
        if ( !*(v5 - 1) )
        {
LABEL_36:
          sub_186B220(v5 - 2);
          goto LABEL_37;
        }
      }
    }
LABEL_26:
    v39 += 24;
    if ( &(*v4)[24 * v34] == (char *)v39 )
      goto LABEL_41;
  }
  if ( v41 )
  {
    v40 = v39;
    goto LABEL_26;
  }
  if ( v40 )
  {
    --*((_DWORD *)v4 + 4);
    v39 = v40;
  }
  v70 = *(_QWORD *)(v39 + 8);
  if ( v70 )
LABEL_86:
    sub_186B220((void *)(v70 - 8));
LABEL_87:
  *(_QWORD *)(v39 + 8) = v5;
  *(_DWORD *)(v39 + 4) = 2;
  *(_QWORD *)(v39 + 16) = v107;
  *(_DWORD *)v39 = v33;
  ++*((_DWORD *)v4 + 3);
LABEL_37:
  if ( src )
    sub_186B220(src - 8);
  return v39;
}

