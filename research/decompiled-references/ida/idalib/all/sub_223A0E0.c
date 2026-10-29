void __fastcall sub_223A0E0(__int64 a1, const char *a2, _QWORD *a3, unsigned __int8 a4, char a5, char a6)
{
  _QWORD *v8; // rbp
  int v10; // r13d
  unsigned __int64 v11; // r15
  _BYTE *v12; // rax
  signed __int64 v13; // r15
  __int64 v14; // rsi
  signed __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  size_t v24; // rax
  _QWORD *v25; // rcx
  size_t v26; // r8
  _WORD *v27; // rdi
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  unsigned int *v31; // r14
  unsigned int *i; // r12
  size_t v33; // rdx
  __int64 v34; // rdi
  size_t v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  size_t *v39; // r12
  size_t v40; // r13
  size_t v41; // rbp
  size_t *v42; // r14
  size_t v43; // r10
  size_t v44; // rbx
  unsigned int v45; // r11d
  size_t v46; // rdx
  size_t v47; // rax
  unsigned int v48; // edx
  size_t v49; // rdx
  size_t v50; // rax
  size_t v51; // rbx
  _BYTE *v52; // rcx
  _QWORD *v53; // rdi
  _QWORD *v54; // rdi
  unsigned __int64 v55; // rax
  _BYTE *v56; // rdx
  _BYTE *v57; // rax
  size_t v58; // rcx
  _BYTE *v59; // rax
  size_t v60; // rdx
  size_t v61; // rdx
  __int64 v62; // r12
  unsigned __int64 v63; // r14
  int v64; // r13d
  __int64 v65; // rsi
  _BYTE *v66; // rax
  __int64 v67; // rsi
  _BYTE *v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // r13
  size_t v71; // r12
  size_t v72; // r15
  unsigned __int8 *v73; // rax
  size_t v74; // r14
  __int64 v75; // rsi
  _BYTE *v76; // rax
  __int64 v77; // rsi
  _BYTE *v78; // rax
  _BYTE *v79; // rax
  size_t v80; // r9
  int v81; // eax
  __int64 v82; // rdx
  char *v83; // rdx
  unsigned __int64 v84; // rcx
  char *v85; // rdi
  size_t v87; // [rsp+8h] [rbp-E0h]
  _QWORD *v88; // [rsp+10h] [rbp-D8h]
  __int64 v89; // [rsp+10h] [rbp-D8h]
  const void *v90; // [rsp+10h] [rbp-D8h]
  size_t v91; // [rsp+10h] [rbp-D8h]
  _QWORD *v92; // [rsp+18h] [rbp-D0h]
  int v93; // [rsp+24h] [rbp-C4h]
  __int64 v94; // [rsp+30h] [rbp-B8h]
  _QWORD *v95; // [rsp+38h] [rbp-B0h]
  size_t na; // [rsp+40h] [rbp-A8h]
  size_t n; // [rsp+40h] [rbp-A8h]
  unsigned int v98; // [rsp+48h] [rbp-A0h]
  size_t v99; // [rsp+48h] [rbp-A0h]
  size_t v100; // [rsp+48h] [rbp-A0h]
  unsigned int v101; // [rsp+50h] [rbp-98h]
  size_t v102; // [rsp+50h] [rbp-98h]
  unsigned int v103; // [rsp+58h] [rbp-90h]
  unsigned int v104; // [rsp+58h] [rbp-90h]
  unsigned int v105; // [rsp+5Ch] [rbp-8Ch]
  _QWORD *v106; // [rsp+60h] [rbp-88h] BYREF
  size_t v107; // [rsp+68h] [rbp-80h]
  void *v108; // [rsp+70h] [rbp-78h]
  size_t v109; // [rsp+78h] [rbp-70h]
  _QWORD v110[2]; // [rsp+80h] [rbp-68h] BYREF
  void *v111; // [rsp+90h] [rbp-58h] BYREF
  size_t v112; // [rsp+98h] [rbp-50h]
  _QWORD v113[9]; // [rsp+A0h] [rbp-48h] BYREF

  v8 = a3;
  v111 = a3;
  v10 = 2 * (a4 == 0);
  LODWORD(v112) = v10;
  sub_226DCE0(&v111, 16, 1, 0);
  if ( a2 && *a2 )
  {
    v88 = v111;
    v24 = strlen(a2);
    v25 = v88;
    v26 = v24;
    v27 = (_WORD *)v88[4];
    v28 = v88[3] - (_QWORD)v27;
    if ( v26 > v28 )
    {
      sub_227BF10(v88, a2, v26);
      v25 = v111;
      v27 = *((_WORD **)v111 + 4);
      v28 = *((_QWORD *)v111 + 3) - (_QWORD)v27;
    }
    else if ( v26 )
    {
      v92 = v88;
      v91 = v26;
      memcpy(v27, a2, v26);
      v92[4] += v91;
      v25 = v111;
      v27 = *((_WORD **)v111 + 4);
      v28 = *((_QWORD *)v111 + 3) - (_QWORD)v27;
    }
    if ( v28 > 1 )
    {
      *v27 = 8250;
      v25[4] += 2LL;
    }
    else
    {
      sub_227BF10(v25, ": ", 2);
    }
  }
  if ( a6 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
    {
      v52 = *(_BYTE **)(a1 + 16);
      if ( v11 > 1 )
      {
        v90 = *(const void **)(a1 + 16);
        v81 = memcmp(v90, "-", 1u);
        v53 = v111;
        v52 = v90;
        if ( v81
          || (__int64)(v11 - 1) > 0x7FFFFFFF
          || (__int64)(v11 - 1) < (__int64)0xFFFFFFFF80000000LL
          || (_DWORD)v11 != 1 )
        {
          goto LABEL_64;
        }
      }
      else
      {
        v53 = v111;
        if ( *v52 != 45 )
        {
LABEL_64:
          sub_227BF10(v53, v52, v11);
LABEL_65:
          v54 = v111;
          v55 = *((_QWORD *)v111 + 3);
          v56 = *((_BYTE **)v111 + 4);
          if ( *(_DWORD *)(a1 + 48) != -1 )
          {
            if ( v55 <= (unsigned __int64)v56 )
            {
              sub_227BA10(v111, 58);
            }
            else
            {
              *((_QWORD *)v111 + 4) = v56 + 1;
              *v56 = 58;
            }
            sub_227B930(v111, *(int *)(a1 + 48));
            v54 = v111;
            if ( *(_DWORD *)(a1 + 52) != -1 )
            {
              v57 = *((_BYTE **)v111 + 4);
              if ( (unsigned __int64)v57 >= *((_QWORD *)v111 + 3) )
              {
                sub_227BA10(v111, 58);
              }
              else
              {
                *((_QWORD *)v111 + 4) = v57 + 1;
                *v57 = 58;
              }
              sub_227B930(v111, *(_DWORD *)(a1 + 52) + 1);
              v54 = v111;
            }
            v55 = v54[3];
            v56 = (_BYTE *)v54[4];
          }
          if ( v55 - (unsigned __int64)v56 > 1 )
          {
            *(_WORD *)v56 = 8250;
            v54[4] += 2LL;
          }
          else
          {
            sub_227BF10(v54, ": ", 2);
          }
          goto LABEL_5;
        }
      }
      v82 = v53[4];
      if ( (unsigned __int64)(v53[3] - v82) > 6 )
      {
        *(_DWORD *)v82 = 1685353276;
        *(_WORD *)(v82 + 4) = 28265;
        *(_BYTE *)(v82 + 6) = 62;
        v53[4] += 7LL;
      }
      else
      {
        sub_227BF10(v53, "<stdin>", 7);
      }
      goto LABEL_65;
    }
  }
LABEL_5:
  sub_226DD40(&v111);
  if ( a5 )
  {
    v23 = *(_DWORD *)(a1 + 56);
    if ( v23 == 1 )
    {
      sub_226D880(v8, &byte_22F0C30, 0, a4 ^ 1u);
    }
    else if ( v23 )
    {
      if ( v23 == 2 )
      {
        sub_226DB70(v8, &byte_22F0C30, 0, a4 ^ 1u);
      }
      else if ( v23 == 3 )
      {
        sub_226DA10(v8, &byte_22F0C30, 0, a4 ^ 1u);
      }
    }
    else
    {
      sub_226D710(v8, &byte_22F0C30, 0, a4 ^ 1u);
    }
  }
  v111 = v8;
  LODWORD(v112) = v10;
  sub_226DCE0(&v111, 16, 1, 0);
  sub_227BF10(v111, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72));
  v12 = *((_BYTE **)v111 + 4);
  if ( (unsigned __int64)v12 >= *((_QWORD *)v111 + 3) )
  {
    sub_227BA10(v111, 10);
  }
  else
  {
    *((_QWORD *)v111 + 4) = v12 + 1;
    *v12 = 10;
  }
  sub_226DD40(&v111);
  if ( *(_DWORD *)(a1 + 48) == -1 || *(_DWORD *)(a1 + 52) == -1 )
    return;
  v13 = *(_QWORD *)(a1 + 104);
  v14 = *(_QWORD *)(a1 + 96);
  v15 = v13;
  if ( v13 >> 2 <= 0 )
  {
    v16 = *(unsigned __int8 **)(a1 + 96);
LABEL_32:
    if ( v15 != 2 )
    {
      if ( v15 != 3 )
      {
        if ( v15 != 1 )
          goto LABEL_35;
        goto LABEL_151;
      }
      if ( sub_22374F0(*v16) )
        goto LABEL_17;
      v16 = (unsigned __int8 *)(v22 + 1);
    }
    if ( sub_22374F0(*v16) )
      goto LABEL_17;
    v16 = (unsigned __int8 *)(v22 + 1);
LABEL_151:
    if ( !sub_22374F0(*v16) )
      goto LABEL_35;
    goto LABEL_17;
  }
  v16 = *(unsigned __int8 **)(a1 + 96);
  while ( !sub_22374F0(*v16) )
  {
    if ( sub_22374F0(*(_BYTE *)(v22 + 1)) )
    {
      v22 = v17 + 1;
      break;
    }
    if ( sub_22374F0(*(_BYTE *)(v17 + 2)) )
    {
      v22 = v19 + 2;
      break;
    }
    if ( sub_22374F0(*(_BYTE *)(v19 + 3)) )
    {
      v22 = v20 + 3;
      break;
    }
    v16 = (unsigned __int8 *)(v20 + 4);
    if ( v21 == v16 )
    {
      v15 = v18 - (_QWORD)v16;
      goto LABEL_32;
    }
  }
LABEL_17:
  if ( v22 != v18 )
  {
    sub_2237690((__int64)v8, v14, v13);
    return;
  }
LABEL_35:
  v29 = v110;
  v108 = v110;
  if ( (unsigned __int64)(v13 + 1) > 0xF )
  {
    if ( v13 + 1 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v29 = (_QWORD *)operator new(v13 + 2);
    v110[0] = v13 + 1;
    v108 = v29;
LABEL_77:
    memset(v29, 32, v13 + 1);
    v30 = v108;
    goto LABEL_37;
  }
  v30 = v110;
  if ( v13 != -1 )
  {
    if ( !v13 )
    {
      LOBYTE(v110[0]) = 32;
      goto LABEL_37;
    }
    goto LABEL_77;
  }
LABEL_37:
  v109 = v13 + 1;
  *((_BYTE *)v30 + v13 + 1) = 0;
  v31 = *(unsigned int **)(a1 + 136);
  for ( i = *(unsigned int **)(a1 + 128); v31 != i; i += 2 )
  {
    while ( 1 )
    {
      v33 = i[1];
      v34 = *i;
      if ( v33 > v109 )
        v33 = v109;
      v35 = v33 - v34;
      if ( v35 )
        break;
      i += 2;
      if ( v31 == i )
        goto LABEL_44;
    }
    memset((char *)v108 + v34, 126, v35);
  }
LABEL_44:
  v36 = *(unsigned int *)(a1 + 160);
  v112 = 0;
  LOBYTE(v113[0]) = 0;
  v37 = *(_QWORD *)(a1 + 8);
  v111 = v113;
  v89 = *(_QWORD *)(a1 + 104);
  v38 = *(int *)(a1 + 52);
  if ( v36 )
  {
    v39 = *(size_t **)(a1 + 152);
    v93 = v10;
    v40 = v37 - v38;
    v87 = v37 - v38 + v89;
    v95 = v8;
    v41 = 0;
    v42 = &v39[6 * v36];
    v94 = a1;
    do
    {
      v50 = v39[3];
      v106 = (_QWORD *)v39[2];
      v107 = v50;
      if ( sub_2246EC0(&v106, "\n\r\t", 3, 0) == -1 )
      {
        v80 = v39[1];
        v51 = *v39;
        if ( v40 <= v80 && v87 >= v51 )
        {
          if ( v40 <= v51 )
          {
            v43 = (unsigned int)(v51 - v40);
            v44 = v43;
          }
          else
          {
            v44 = 0;
            v43 = 0;
          }
          v45 = v41 + 1;
          v46 = v39[3];
          v47 = v112;
          if ( v41 <= v44 )
            v45 = v43;
          v41 = v45 + (unsigned int)v46;
          if ( v41 > v112 )
          {
            n = v41 - v112;
            if ( 0x7FFFFFFFFFFFFFFFLL - v112 < v41 - v112 )
              std::__throw_length_error("basic_string::_M_replace_aux");
            v83 = (char *)v111;
            if ( v111 == v113 )
              v84 = 15;
            else
              v84 = v113[0];
            if ( v41 > v84 )
            {
              v105 = v45;
              v104 = v43;
              v102 = v39[1];
              v100 = v112;
              sub_998B30((__int64)&v111, v112, 0, nullptr, n);
              v45 = v105;
              v43 = v104;
              v83 = (char *)v111;
              v80 = v102;
              v47 = v100;
            }
            v85 = &v83[v47];
            if ( n == 1 )
            {
              *v85 = 32;
            }
            else
            {
              v103 = v45;
              v101 = v43;
              v99 = v80;
              memset(v85, 32, n);
              v45 = v103;
              v43 = v101;
              v80 = v99;
            }
            v112 = v41;
            *((_BYTE *)v111 + v41) = 0;
            v46 = v39[3];
          }
          if ( v46 )
          {
            v98 = v43;
            na = v80;
            memmove((char *)v111 + v45, (const void *)v39[2], v46);
            v43 = v98;
            v80 = na;
          }
          v48 = v80 - v40;
          if ( v87 <= v80 )
            v48 = v89;
          v49 = v48 - v43;
          if ( v49 )
            memset((char *)v108 + v44, 126, v49);
        }
      }
      v39 += 6;
    }
    while ( v42 != v39 );
    a1 = v94;
    v10 = v93;
    v8 = v95;
    v38 = *(int *)(v94 + 52);
  }
  if ( (unsigned int)v38 > (unsigned __int64)v13 )
    *((_BYTE *)v108 + v13) = 94;
  else
    *((_BYTE *)v108 + v38) = 94;
  v58 = v109;
  v59 = v108;
  if ( v109 )
  {
    v60 = v109 - 1;
    while ( *((_BYTE *)v108 + v60) == 32 )
    {
      if ( --v60 == -1 )
      {
        v58 = 0;
        goto LABEL_88;
      }
    }
    v61 = v60 + 1;
    if ( v61 > v109 )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::erase",
        v61,
        v109);
    v59 = (char *)v108 + v61;
    v58 = v61;
  }
LABEL_88:
  v109 = v58;
  *v59 = 0;
  sub_2237690((__int64)v8, *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 104));
  v106 = v8;
  LODWORD(v107) = v10;
  sub_226DCE0(&v106, 2, 1, 0);
  if ( (_DWORD)v109 )
  {
    v62 = (unsigned int)(v109 - 1);
    v63 = 0;
    v64 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 104) > v63 && *(_BYTE *)(*(_QWORD *)(a1 + 96) + v63) == 9 )
      {
        do
        {
          v67 = *((unsigned __int8 *)v108 + v63);
          v68 = (_BYTE *)v106[4];
          if ( (unsigned __int64)v68 < v106[3] )
          {
            v106[4] = v68 + 1;
            *v68 = v67;
          }
          else
          {
            sub_227BA10(v106, v67);
          }
          ++v64;
        }
        while ( (v64 & 7) != 0 );
      }
      else
      {
        v65 = *((unsigned __int8 *)v108 + v63);
        v66 = (_BYTE *)v106[4];
        if ( (unsigned __int64)v66 < v106[3] )
        {
          v106[4] = v66 + 1;
          *v66 = v65;
        }
        else
        {
          sub_227BA10(v106, v65);
        }
        ++v64;
      }
      if ( v62 == v63 )
        break;
      ++v63;
    }
  }
  v69 = (_BYTE *)v106[4];
  if ( (unsigned __int64)v69 >= v106[3] )
  {
    sub_227BA10(v106, 10);
  }
  else
  {
    v106[4] = v69 + 1;
    *v69 = 10;
  }
  v70 = 0;
  v71 = 0;
  sub_226DD40(&v106);
  v72 = v112;
  if ( v112 )
  {
    do
    {
      v73 = (unsigned __int8 *)v111;
      v74 = v71 + 1;
      if ( *(_QWORD *)(a1 + 104) > v71 && *(_BYTE *)(*(_QWORD *)(a1 + 96) + v71) == 9 )
      {
        do
        {
          v77 = v73[v71];
          v78 = (_BYTE *)v8[4];
          if ( (unsigned __int64)v78 < v8[3] )
          {
LABEL_116:
            v8[4] = v78 + 1;
            *v78 = v77;
            goto LABEL_117;
          }
          while ( 1 )
          {
            sub_227BA10(v8, v77);
LABEL_117:
            v73 = (unsigned __int8 *)v111;
            if ( *((_BYTE *)v111 + v71) == 32 )
              break;
            ++v70;
            v71 += 2LL;
            if ( (v70 & 7) == 0 || v72 == v74 )
              goto LABEL_108;
            v71 = v74++;
            v77 = *((unsigned __int8 *)v111 + v71);
            v78 = (_BYTE *)v8[4];
            if ( (unsigned __int64)v78 < v8[3] )
              goto LABEL_116;
          }
          ++v70;
        }
        while ( (v70 & 7) != 0 && v71 != v72 );
        v71 = v74;
      }
      else
      {
        v75 = *((unsigned __int8 *)v111 + v71);
        v76 = (_BYTE *)v8[4];
        if ( (unsigned __int64)v76 < v8[3] )
        {
          v8[4] = v76 + 1;
          *v76 = v75;
        }
        else
        {
          sub_227BA10(v8, v75);
        }
        ++v70;
        ++v71;
      }
LABEL_108:
      ;
    }
    while ( v72 > v71 );
    v79 = (_BYTE *)v8[4];
    if ( (unsigned __int64)v79 >= v8[3] )
    {
      sub_227BA10(v8, 10);
    }
    else
    {
      v8[4] = v79 + 1;
      *v79 = 10;
    }
  }
  if ( v111 != v113 )
    operator delete(v111);
  if ( v108 != v110 )
    operator delete(v108);
}
