__int64 __fastcall sub_D13AA0(size_t a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edx
  _QWORD *v8; // rbx
  _DWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int16 v11; // dx
  _QWORD *v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbx
  size_t v15; // rdx
  signed __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  size_t v19; // rdx
  signed __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  char *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  int *v26; // r15
  unsigned int v27; // r12d
  _DWORD *v28; // rsi
  __int16 v29; // ax
  _DWORD *v30; // rsi
  _QWORD *v31; // r10
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // r13
  size_t v35; // rdx
  signed __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rbp
  size_t v39; // rdx
  signed __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rdi
  char *v43; // rax
  _DWORD *v44; // rsi
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned int *v48; // r12
  unsigned int v49; // r14d
  __int64 v50; // rsi
  __int64 v51; // rdx
  unsigned int **v52; // rdx
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  _QWORD *v56; // rdx
  __int64 v57; // rdi
  _DWORD *v58; // rcx
  __int64 v59; // rbp
  char *v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbp
  char *v64; // rdi
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  unsigned int v67; // edx
  _QWORD *v68; // rax
  __int64 v69; // rbp
  char *v70; // rdi
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  _DWORD *v73; // [rsp+8h] [rbp-1C0h]
  unsigned int v75; // [rsp+18h] [rbp-1B0h]
  __int64 v76; // [rsp+20h] [rbp-1A8h]
  _QWORD *v77; // [rsp+28h] [rbp-1A0h]
  _QWORD *v78; // [rsp+28h] [rbp-1A0h]
  _QWORD *v79; // [rsp+30h] [rbp-198h]
  __int64 v80; // [rsp+30h] [rbp-198h]
  _QWORD *v81; // [rsp+38h] [rbp-190h]
  __int64 v82; // [rsp+40h] [rbp-188h]
  char **v83; // [rsp+50h] [rbp-178h] BYREF
  char **v84; // [rsp+58h] [rbp-170h] BYREF
  void *v85; // [rsp+60h] [rbp-168h] BYREF
  __int64 v86; // [rsp+68h] [rbp-160h]
  _QWORD s2[2]; // [rsp+70h] [rbp-158h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h]
  __int64 v89; // [rsp+88h] [rbp-140h]
  _DWORD *v90; // [rsp+90h] [rbp-138h] BYREF
  int v91; // [rsp+98h] [rbp-130h]

  v3 = a2;
  v73 = a3;
  v4 = 1 << *a3;
  v5 = 4LL * (*a3 >> 5);
  if ( *a3 < *(_DWORD *)(a2 + 8) )
  {
    result = v5 + *(_QWORD *)(a2 + 16);
    v7 = *(_DWORD *)result;
    if ( (v4 & *(_DWORD *)result) != 0 )
      return result;
  }
  else
  {
    sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
    result = v5 + *(_QWORD *)(a2 + 16);
    v7 = *(_DWORD *)result;
  }
  v8 = &v90;
  v9 = v73;
  *(_DWORD *)result = v4 | v7;
  v90 = v73;
  ptr = &v90;
  v91 = 0;
  v89 = 0x1000000001LL;
  LODWORD(result) = 0;
LABEL_4:
  while ( 2 )
  {
    v10 = &v8[2 * (unsigned int)result];
    v11 = *((_WORD *)v9 + 2);
    if ( v11 != 1 )
    {
      if ( v11 == 2 )
      {
        v44 = v9;
        v45 = v9[18];
        v46 = *((_DWORD *)v10 + 2);
        v47 = v45 + v44[19] + 1;
        if ( v46 < v47 )
        {
          if ( !v46 )
          {
            v48 = *((unsigned int **)v44 + 3);
            goto LABEL_74;
          }
          while ( 1 )
          {
            v57 = v46 - 1;
            if ( v45 < v46 )
              v58 = &v73[2 * ((unsigned int)v57 - v45)];
            else
              v58 = &v73[2 * v57];
            v48 = *(unsigned int **)&v58[4 * v73[5] + 20];
LABEL_74:
            ++v46;
            v49 = *v48;
            *((_DWORD *)v10 + 2) = v46;
            if ( v49 >= *(_DWORD *)(v3 + 8) )
            {
              sub_186B510(v3 + 8, v49 + 1, 0);
              v50 = *(_QWORD *)(v3 + 16);
LABEL_76:
              *(_DWORD *)(v50 + 4LL * (v49 >> 5)) |= 1 << v49;
              v51 = (unsigned int)v89;
              if ( (unsigned int)v89 >= HIDWORD(v89) )
              {
                v59 = (unsigned int)(2 * HIDWORD(v89));
                v8 = (_QWORD *)sub_186B270(16 * v59);
                v60 = (char *)ptr;
                v61 = 0;
                v51 = (unsigned int)v89;
                v62 = 16LL * (unsigned int)v89;
                if ( (_DWORD)v89 )
                {
                  do
                  {
                    *(__m128i *)&v8[v61 / 8] = _mm_loadu_si128((const __m128i *)&v60[v61]);
                    v61 += 16LL;
                  }
                  while ( v61 != v62 );
                }
                if ( v60 != (char *)&v90 && v60 )
                {
                  sub_186B220(v60);
                  v51 = (unsigned int)v89;
                }
                ptr = v8;
                HIDWORD(v89) = v59;
              }
              else
              {
                v8 = ptr;
              }
              v52 = (unsigned int **)&v8[2 * v51];
              *v52 = v48;
              *((_DWORD *)v52 + 2) = 0;
              v53 = (unsigned int)v89;
              v54 = v89 + 1;
              goto LABEL_79;
            }
            v50 = *(_QWORD *)(v3 + 16);
            if ( (*(_DWORD *)(v50 + 4LL * (v49 >> 5)) & (1 << v49)) == 0 )
              goto LABEL_76;
            if ( v46 >= v47 )
              break;
            v45 = v73[18];
          }
        }
        LODWORD(v89) = v89 - 1;
        sub_D0F600(a1, v73);
      }
      else
      {
        if ( v11 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v24 = *((_DWORD *)v10 + 2);
        v75 = v9[6];
        if ( v24 < v75 )
        {
          v76 = v3 + 8;
          while ( 1 )
          {
            v25 = v24++;
            v26 = *(int **)&v73[2 * v25 + 8];
            *((_DWORD *)v10 + 2) = v24;
            v27 = *v26;
            if ( (unsigned int)*v26 < *(_DWORD *)(v3 + 8) )
            {
              v30 = (_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL * (v27 >> 5));
              if ( ((1 << v27) & *v30) != 0 )
                goto LABEL_44;
              *v30 |= 1 << v27;
              v29 = *((_WORD *)v26 + 2);
              if ( v29 != 1 )
              {
LABEL_40:
                if ( v29 == 2 )
                {
                  v55 = (unsigned int)v89;
                  if ( (unsigned int)v89 >= HIDWORD(v89) )
                  {
                    v63 = (unsigned int)(2 * HIDWORD(v89));
                    v8 = (_QWORD *)sub_186B270(16 * v63);
                    v64 = (char *)ptr;
                    v65 = 0;
                    v55 = (unsigned int)v89;
                    v66 = 16LL * (unsigned int)v89;
                    if ( (_DWORD)v89 )
                    {
                      do
                      {
                        *(__m128i *)&v8[v65 / 8] = _mm_loadu_si128((const __m128i *)&v64[v65]);
                        v65 += 16LL;
                      }
                      while ( v65 != v66 );
                    }
                    if ( v64 != (char *)&v90 && v64 )
                    {
                      sub_186B220(v64);
                      v55 = (unsigned int)v89;
                    }
                    ptr = v8;
                    HIDWORD(v89) = v63;
                  }
                  else
                  {
                    v8 = ptr;
                  }
                  v56 = &v8[2 * v55];
                  *v56 = v26;
                  *((_DWORD *)v56 + 2) = 0;
                  v53 = (unsigned int)v89;
                  v54 = v89 + 1;
                }
                else
                {
                  if ( v29 )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 73);
                  }
                  if ( !v26[6] )
                  {
                    sub_D11C80(a1, *((_QWORD *)v26 + 2));
                    goto LABEL_43;
                  }
                  v67 = v89;
                  if ( (unsigned int)v89 >= HIDWORD(v89) )
                  {
                    v69 = (unsigned int)(2 * HIDWORD(v89));
                    v8 = (_QWORD *)sub_186B270(16 * v69);
                    v70 = (char *)ptr;
                    v71 = 0;
                    v67 = v89;
                    v72 = 16LL * (unsigned int)v89;
                    if ( (_DWORD)v89 )
                    {
                      do
                      {
                        *(__m128i *)&v8[v71 / 8] = _mm_loadu_si128((const __m128i *)&v70[v71]);
                        v71 += 16LL;
                      }
                      while ( v71 != v72 );
                    }
                    if ( v70 != (char *)&v90 && v70 )
                    {
                      sub_186B220(v70);
                      v67 = v89;
                    }
                    ptr = v8;
                    HIDWORD(v89) = v69;
                  }
                  else
                  {
                    v8 = ptr;
                  }
                  v68 = &v8[2 * v67];
                  *((_DWORD *)v68 + 2) = 0;
                  v53 = (unsigned int)v89;
                  *v68 = v26;
                  v54 = v53 + 1;
                }
LABEL_79:
                LODWORD(v89) = v54;
                LODWORD(result) = v54 - 1;
                v9 = (_DWORD *)v8[2 * v53];
                v73 = v9;
                goto LABEL_4;
              }
            }
            else
            {
              sub_186B510(v76, v27 + 1, 0);
              v28 = (_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL * (v27 >> 5));
              *v28 |= 1 << v27;
              v29 = *((_WORD *)v26 + 2);
              if ( v29 != 1 )
                goto LABEL_40;
            }
            v85 = s2;
            v86 = 15;
            v31 = *(_QWORD **)(a1 + 8);
            strcpy((char *)s2, "bound-variables");
            v32 = (__int64)(v31 + 1);
            if ( !v31[2] )
              goto LABEL_68;
            v77 = v10;
            v33 = v31 + 1;
            v82 = v3;
            v34 = v31[2];
            v79 = v31;
            v81 = v31 + 1;
            do
            {
              while ( 1 )
              {
                v37 = *(_QWORD *)(v34 + 40);
                if ( !v37 )
                  break;
                v35 = 15;
                if ( v37 <= 0xF )
                  v35 = *(_QWORD *)(v34 + 40);
                LODWORD(v36) = memcmp(*(const void **)(v34 + 32), s2, v35);
                if ( !(_DWORD)v36 )
                {
                  v36 = v37 - 15;
                  if ( (__int64)(v37 - 15) >= 0x80000000LL )
                    goto LABEL_57;
                  if ( v36 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
                    break;
                }
                if ( (int)v36 < 0 )
                  break;
LABEL_57:
                v33 = (_QWORD *)v34;
                v34 = *(_QWORD *)(v34 + 16);
                if ( !v34 )
                  goto LABEL_60;
              }
              v34 = *(_QWORD *)(v34 + 24);
            }
            while ( v34 );
LABEL_60:
            v32 = (__int64)v33;
            v31 = v79;
            v10 = v77;
            v3 = v82;
            if ( (_QWORD *)v32 == v81 )
              goto LABEL_68;
            v38 = *(_QWORD *)(v32 + 40);
            v78 = v79;
            if ( !v38 )
              goto LABEL_105;
            v39 = 15;
            v80 = v32;
            if ( v38 <= 0xF )
              v39 = *(_QWORD *)(v32 + 40);
            LODWORD(v40) = memcmp(s2, *(const void **)(v32 + 32), v39);
            v32 = v80;
            v31 = v78;
            if ( (_DWORD)v40 )
            {
LABEL_67:
              if ( (int)v40 < 0 )
                goto LABEL_68;
LABEL_105:
              ++*(_QWORD *)(v32 + 64);
              goto LABEL_70;
            }
            v40 = 15 - v38;
            if ( (__int64)(15 - v38) > 0x7FFFFFFF )
              goto LABEL_105;
            if ( v40 >= (__int64)0xFFFFFFFF80000000LL )
              goto LABEL_67;
LABEL_68:
            v84 = (char **)&v85;
            v41 = sub_D0DD30(v31, v32, &v84);
            v42 = v85;
            ++v41[8];
            if ( v42 != s2 )
              operator delete(v42, s2[0] + 1LL);
LABEL_70:
            v43 = (char *)sub_15D1F10(v26);
            sub_D10320(a1, v43);
LABEL_43:
            v24 = *((_DWORD *)v10 + 2);
LABEL_44:
            if ( v24 >= v75 )
            {
              LODWORD(result) = v89 - 1;
              break;
            }
          }
        }
        LODWORD(v89) = result;
        sub_D11C80(a1, *((_QWORD *)v73 + 2));
      }
      result = (unsigned int)v89;
      v8 = ptr;
      if ( !(_DWORD)v89 )
        goto LABEL_32;
LABEL_9:
      result = (unsigned int)(result - 1);
      v73 = (_DWORD *)v8[2 * result];
      v9 = v73;
      continue;
    }
    break;
  }
  v85 = s2;
  v86 = 15;
  v12 = *(_QWORD **)(a1 + 8);
  strcpy((char *)s2, "bound-variables");
  v13 = v12[2];
  v14 = (__int64)(v12 + 1);
  if ( !v13 )
    goto LABEL_29;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v13 + 40);
      if ( !v17 )
        break;
      v15 = 15;
      if ( v17 <= 0xF )
        v15 = *(_QWORD *)(v13 + 40);
      LODWORD(v16) = memcmp(*(const void **)(v13 + 32), s2, v15);
      if ( !(_DWORD)v16 )
      {
        v16 = v17 - 15;
        if ( (__int64)(v17 - 15) >= 0x80000000LL )
          goto LABEL_18;
        if ( v16 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          break;
      }
      if ( (int)v16 < 0 )
        break;
LABEL_18:
      v14 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        goto LABEL_21;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v13 );
LABEL_21:
  if ( v12 + 1 == (_QWORD *)v14 )
    goto LABEL_29;
  v18 = *(_QWORD *)(v14 + 40);
  if ( !v18 )
    goto LABEL_104;
  v19 = 15;
  if ( v18 <= 0xF )
    v19 = *(_QWORD *)(v14 + 40);
  LODWORD(v20) = memcmp(s2, *(const void **)(v14 + 32), v19);
  if ( (_DWORD)v20 )
  {
LABEL_28:
    if ( (int)v20 < 0 )
      goto LABEL_29;
    goto LABEL_104;
  }
  v20 = 15 - v18;
  if ( (__int64)(15 - v18) > 0x7FFFFFFF )
  {
LABEL_104:
    ++*(_QWORD *)(v14 + 64);
    goto LABEL_31;
  }
  if ( v20 >= (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_28;
LABEL_29:
  v83 = (char **)&v85;
  v21 = sub_D0DD30(v12, v14, &v83);
  v22 = v85;
  ++v21[8];
  if ( v22 != s2 )
    operator delete(v22, s2[0] + 1LL);
LABEL_31:
  v23 = (char *)sub_15D1F10(v73);
  sub_D10320(a1, v23);
  v8 = ptr;
  result = (unsigned int)(v89 - 1);
  LODWORD(v89) = result;
  if ( (_DWORD)result )
    goto LABEL_9;
LABEL_32:
  if ( v8 )
  {
    result = (__int64)&v90;
    if ( v8 != &v90 )
      return sub_186B220(v8);
  }
  return result;
}

