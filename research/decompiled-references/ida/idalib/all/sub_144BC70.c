__int64 __fastcall sub_144BC70(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  __int64 v9; // r12
  unsigned int v10; // esi
  unsigned int v11; // eax
  _QWORD *v12; // r13
  _BYTE *v13; // rdx
  unsigned __int64 *v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  char v20; // al
  int v21; // edx
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  char *v32; // r13
  __int64 v33; // r8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  char *v36; // r8
  size_t v37; // r10
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // rax
  unsigned __int64 v42; // r9
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r11
  char *v46; // r15
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  unsigned __int64 v50; // rdx
  size_t v51; // r10
  unsigned __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  char *v59; // r15
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rsi
  int v63; // ecx
  unsigned int v64; // eax
  _BYTE *v65; // rdx
  char v66; // al
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // r10
  size_t v70; // rax
  char *v71; // r8
  void *v72; // rdi
  __int64 v73; // r11
  unsigned __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  bool v77; // zf
  __int64 i; // rax
  int v79; // edx
  _BYTE *v80; // rdi
  char *dest; // [rsp+0h] [rbp-88h]
  char *desta; // [rsp+0h] [rbp-88h]
  _DWORD *destd; // [rsp+0h] [rbp-88h]
  char *deste; // [rsp+0h] [rbp-88h]
  unsigned int *destb; // [rsp+0h] [rbp-88h]
  void *destc; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  __int64 na; // [rsp+8h] [rbp-80h]
  size_t nb; // [rsp+8h] [rbp-80h]
  size_t nc; // [rsp+8h] [rbp-80h]
  char *v91; // [rsp+10h] [rbp-78h]
  char *v92; // [rsp+10h] [rbp-78h]
  int v93; // [rsp+10h] [rbp-78h]
  int v94; // [rsp+10h] [rbp-78h]
  __int64 v95; // [rsp+18h] [rbp-70h]
  char *v96; // [rsp+18h] [rbp-70h]
  char *v97; // [rsp+18h] [rbp-70h]
  unsigned __int64 v98; // [rsp+18h] [rbp-70h]
  __int64 v99; // [rsp+20h] [rbp-68h]
  unsigned __int64 v100; // [rsp+20h] [rbp-68h]
  __int64 v101; // [rsp+20h] [rbp-68h]
  __int64 v102; // [rsp+28h] [rbp-60h]
  char *v103; // [rsp+28h] [rbp-60h]
  int v104; // [rsp+30h] [rbp-58h]
  _BYTE *v105; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v106; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  v9 = *(_QWORD *)(a1 + 1704);
  v105 = a2;
  v10 = *(_DWORD *)(v9 + 16);
  if ( !v10 )
  {
    v106 = nullptr;
    goto LABEL_105;
  }
  v11 = (v10 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v11);
  v13 = (_BYTE *)*v12;
  if ( a2 == (_BYTE *)*v12 )
    goto LABEL_3;
  a5 = 1;
  a6 = 0;
  if ( v13 == (_BYTE *)-4096LL )
  {
LABEL_99:
    v75 = *(_DWORD *)(v9 + 8);
    a3 = 3 * v10;
    v106 = v12;
    v76 = v75 + 1;
    a4 = (unsigned int)(4 * v76);
    if ( (unsigned int)a4 < (unsigned int)a3 )
    {
      a4 = (__int64)a2;
      a3 = v10 - *(_DWORD *)(v9 + 12) - v76;
      if ( (unsigned int)a3 > v10 >> 3 )
      {
LABEL_101:
        v77 = *v12 == -4096;
        *(_DWORD *)(v9 + 8) = v76;
        if ( !v77 )
          --*(_DWORD *)(v9 + 12);
        *v12 = a4;
        v12[1] = 0;
        goto LABEL_3;
      }
LABEL_106:
      sub_12F12D0(v9, v10, a3, a4, a5, a6);
      sub_12EC520((__int64 *)v9, (__int64 *)&v105, &v106);
      a4 = (__int64)v105;
      v12 = v106;
      v76 = *(_DWORD *)(v9 + 8) + 1;
      goto LABEL_101;
    }
LABEL_105:
    v10 *= 2;
    goto LABEL_106;
  }
  while ( 1 )
  {
    if ( !a6 && v13 == (_BYTE *)-8192LL )
      a6 = (__int64)v12;
    v11 = (v10 - 1) & (a5 + v11);
    v12 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v11);
    v13 = (_BYTE *)*v12;
    if ( a2 == (_BYTE *)*v12 )
      break;
    if ( v13 == (_BYTE *)-4096LL )
    {
      if ( a6 )
        v12 = (_QWORD *)a6;
      goto LABEL_99;
    }
    a5 = (unsigned int)(a5 + 1);
  }
LABEL_3:
  v14 = v12 + 1;
  v15 = *v14;
  v16 = 0;
  if ( *v14 )
  {
    v17 = (unsigned __int64 *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 4) != 0 )
    {
      v16 = 0;
      if ( v17 )
        v16 = *v17;
    }
  }
  *(_QWORD *)v6 = v16;
  v18 = *v14;
  if ( *v14 )
  {
    if ( (v18 & 4) != 0 )
    {
      v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v19 )
      {
        *v19 = v6;
        if ( (a2[4] & 0x10) != 0 )
          goto LABEL_11;
LABEL_22:
        if ( (a2[3] & 2) == 0 )
          goto LABEL_12;
        goto LABEL_23;
      }
    }
  }
  *v14 = v6 & 0xFFFFFFFFFFFFFFFBLL;
  if ( (a2[4] & 0x10) == 0 )
    goto LABEL_22;
LABEL_11:
  sub_145CD30(a1, a2);
  if ( (a2[3] & 2) == 0 )
    goto LABEL_12;
LABEL_23:
  v23 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v23 + 21) & 2) != 0 || *(char *)(v23 + 22) < 0 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
    if ( v24 )
    {
      v25 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*v14 || (*v14 & 4) == 0 || (v26 = *v14 & 0xFFFFFFFFFFFFFFF8LL, !v25) )
      {
        v27 = *(_QWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 208) += 32LL;
        v28 = (v27 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(a1 + 136) >= v28 + 32 && v27 )
        {
          *(_QWORD *)(a1 + 128) = v28 + 32;
          v26 = (v27 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v26 = sub_986170(a1 + 128, 32, 32, 4, a5, a6);
          v28 = v26 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v26 = v25;
        *(_QWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 16) = 0;
        *(_QWORD *)(v26 + 24) = 0;
        *(_BYTE *)(v26 + 20) = 0;
        *v14 = v28 | 4;
        v24 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
      }
      if ( *(_DWORD *)(v26 + 16) != v24 )
        sub_14476F0(a1, (__int64)a2, v26);
      v29 = *(_QWORD *)(v26 + 8);
      v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = (v29 >> 2) & 1;
      if ( ((v29 >> 2) & 1) != 0 )
      {
        v32 = *(char **)v30;
        v33 = *(_QWORD *)v30 + 8LL * *(unsigned int *)(v30 + 8);
      }
      else
      {
        v32 = (char *)(v26 + 8);
        v33 = v26 + 16;
        if ( !v30 )
          v33 = v26 + 8;
      }
      v34 = *(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v26 + 24) & 4) != 0 )
      {
        v67 = *(unsigned int *)(v34 + 8);
        v42 = *(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v32 == (char *)v33 )
          goto LABEL_62;
        if ( v34 )
        {
          v47 = *(unsigned int *)(v34 + 12);
          na = v33 - (_QWORD)v32;
          v49 = (v33 - (__int64)v32) >> 3;
          v50 = v49 + v67;
          goto LABEL_80;
        }
        v34 = 8 * v67;
      }
      else
      {
        if ( v34 )
        {
          if ( v32 == (char *)v33 )
            goto LABEL_62;
          n = *(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          dest = (char *)v33;
          v35 = operator new(0x30u);
          v36 = dest;
          v37 = n;
          *(_QWORD *)(v35 + 8) = 0x400000000LL;
          *(_QWORD *)v35 = v35 + 16;
          v38 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(v26 + 24) = v35 | 4;
          v39 = *(unsigned int *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v38 + 12) )
          {
            sub_2237220(v38, v38 + 16, v39 + 1, 8);
            v39 = *(unsigned int *)(v38 + 8);
            v37 = n;
            v36 = dest;
          }
          *(_QWORD *)(*(_QWORD *)v38 + 8 * v39) = v37;
          v40 = 8;
          ++*(_DWORD *)(v38 + 8);
          v41 = *(_QWORD *)(v26 + 24);
          goto LABEL_43;
        }
        if ( v32 == (char *)v33 )
          goto LABEL_62;
      }
      if ( (char *)v33 == v32 + 8 )
      {
        *(_QWORD *)(v26 + 24) = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFBLL;
        goto LABEL_62;
      }
      nc = v34;
      deste = (char *)v33;
      v68 = operator new(0x30u);
      v36 = deste;
      v40 = nc;
      *(_QWORD *)(v68 + 8) = 0x400000000LL;
      *(_QWORD *)v68 = v68 + 16;
      v41 = v68 | 4;
      *(_QWORD *)(v26 + 24) = v41;
LABEL_43:
      v42 = v41 & 0xFFFFFFFFFFFFFFF8LL;
      v43 = *(unsigned int *)((v41 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v44 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      v45 = 8 * v43;
      desta = (char *)(v44 + 8 * v43);
      if ( (v41 & 4) != 0 )
      {
        v46 = (char *)(v44 + v40);
        v91 = (char *)v40;
      }
      else
      {
        v46 = (char *)(v26 + v40 + 24);
        v91 = &v46[-v44];
      }
      v47 = *(unsigned int *)(v42 + 12);
      na = v36 - v32;
      v48 = (v36 - v32) >> 3;
      LODWORD(v49) = v48;
      v50 = v48 + v43;
      if ( desta != v46 )
      {
        if ( v50 > v47 )
        {
          destb = (unsigned int *)v42;
          v99 = (v36 - v32) >> 3;
          v96 = v36;
          sub_2237220(v42, v42 + 16, v50, 8);
          v42 = (unsigned __int64)destb;
          v36 = v96;
          v43 = destb[2];
          v44 = *(_QWORD *)destb;
          v45 = 8 * v43;
          v46 = &v91[*(_QWORD *)destb];
          desta = (char *)(*(_QWORD *)destb + 8 * v43);
          v48 = v99;
        }
        v51 = v45 - (_QWORD)v91;
        v52 = (v45 - (__int64)v91) >> 3;
        if ( v52 >= v48 )
        {
          v69 = v45 - na;
          v70 = na;
          v71 = (char *)(v44 + v45 - na);
          v72 = desta;
          v73 = na >> 3;
          v74 = (na >> 3) + v43;
          if ( v74 > *(unsigned int *)(v42 + 12) )
          {
            v103 = v71;
            v101 = v69;
            v98 = v42;
            sub_2237220(v42, v42 + 16, v74, 8);
            v42 = v98;
            v73 = na >> 3;
            v70 = na;
            v71 = v103;
            v43 = *(unsigned int *)(v98 + 8);
            v69 = v101;
            v72 = (void *)(*(_QWORD *)v98 + 8 * v43);
          }
          if ( v71 != desta )
          {
            v104 = v73;
            v102 = v69;
            v100 = v42;
            v97 = v71;
            memmove(v72, v71, v70);
            v42 = v100;
            LODWORD(v73) = v104;
            v69 = v102;
            v71 = v97;
            LODWORD(v43) = *(_DWORD *)(v100 + 8);
          }
          *(_DWORD *)(v42 + 8) = v73 + v43;
          if ( v71 != v46 )
            memmove(&desta[-(v69 - (_QWORD)v91)], v46, v69 - (_QWORD)v91);
          memmove(v46, v32, na);
          v29 = *(_QWORD *)(v26 + 8);
          v31 = (v29 >> 2) & 1;
        }
        else
        {
          v53 = v43 + v48;
          *(_DWORD *)(v42 + 8) = v53;
          if ( v46 != desta )
          {
            v95 = (v45 - (__int64)v91) >> 3;
            v92 = v36;
            nb = v51;
            memcpy((void *)(v44 + 8LL * v53 - v51), v46, v51);
            v52 = v95;
            v36 = v92;
            v51 = nb;
          }
          if ( v52 )
          {
            if ( (v46 >= v32 + 16 || v32 >= v46 + 16) && v52 - 1 > 3 )
            {
              v54 = 0;
              v55 = 0;
              v56 = ((v52 - 2) >> 1) + 1;
              do
              {
                ++v55;
                *(__m128i *)&v46[v54] = _mm_loadu_si128((const __m128i *)&v32[v54]);
                v54 += 16;
              }
              while ( v55 < v56 );
              v57 = 2 * v56;
              v58 = 16 * v56;
              v59 = &v46[v58];
              if ( v52 != v57 )
                *(_QWORD *)v59 = *(_QWORD *)&v32[v58];
            }
            else
            {
              for ( i = 0; i != v52; ++i )
                *(_QWORD *)&v46[8 * i] = *(_QWORD *)&v32[8 * i];
            }
            v32 += v51;
          }
          if ( v32 != v36 )
            memcpy(desta, v32, v36 - v32);
          v29 = *(_QWORD *)(v26 + 8);
          v31 = (v29 >> 2) & 1;
        }
        goto LABEL_62;
      }
LABEL_80:
      if ( v47 < v50 )
      {
        destc = (void *)v42;
        v94 = v49;
        sub_2237220(v42, v42 + 16, v50, 8);
        LODWORD(v49) = v94;
        v42 = (unsigned __int64)destc;
      }
      v93 = v49;
      destd = (_DWORD *)v42;
      memcpy((void *)(*(_QWORD *)v42 + 8LL * *(unsigned int *)(v42 + 8)), v32, na);
      destd[2] += v93;
      v29 = *(_QWORD *)(v26 + 8);
      v31 = (v29 >> 2) & 1;
LABEL_62:
      if ( v31 )
        *(_DWORD *)((v29 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
      else
        *(_QWORD *)(v26 + 8) = 0;
      *(_BYTE *)(v26 + 20) = 0;
      if ( !sub_1436880(a1) )
        goto LABEL_13;
      goto LABEL_65;
    }
  }
LABEL_12:
  if ( !sub_1436880(a1) )
    goto LABEL_13;
LABEL_65:
  v60 = *(unsigned int *)(a1 + 1816);
  if ( v60 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1820) )
  {
    sub_2237220(a1 + 1808, a1 + 1824, v60 + 1, 8);
    v60 = *(unsigned int *)(a1 + 1816);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 8 * v60) = a2;
  ++*(_DWORD *)(a1 + 1816);
LABEL_13:
  v20 = a2[3];
  if ( (v20 & 2) == 0 )
    a2[3] = v20 | 0x86;
  if ( sub_13F1C60((__int64 *)v6) && !v21 )
    goto LABEL_17;
  v61 = *(_DWORD *)(a1 + 2096);
  v62 = *(_QWORD *)(a1 + 2080);
  if ( v61 )
  {
    v63 = v61 - 1;
    v64 = (v61 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v65 = *(_BYTE **)(v62 + 16LL * v64);
    if ( a2 == v65 )
    {
LABEL_17:
      result = (unsigned __int8)a2[4];
      goto LABEL_18;
    }
    if ( v65 != (_BYTE *)-4096LL )
    {
      v79 = 1;
      do
      {
        v64 = v63 & (v79 + v64);
        v80 = *(_BYTE **)(v62 + 16LL * v64);
        if ( a2 == v80 )
          goto LABEL_17;
        ++v79;
      }
      while ( v80 != (_BYTE *)-4096LL );
    }
  }
  v66 = a2[3];
  if ( (v66 & 2) == 0 )
    goto LABEL_17;
  a2[3] = v66 & 0xFD;
  if ( (a2[5] & 2) == 0 )
    *((_WORD *)a2 + 2) &= 0xFE7Fu;
  result = (unsigned __int8)a2[4];
  a2[3] = (((a2[4] & 0x30 | a2[3] & 0x3A) != 0) << 7) | a2[3] & 0x7F;
LABEL_18:
  if ( (result & 1) != 0 )
    a2[4] |= 2u;
  return result;
}
