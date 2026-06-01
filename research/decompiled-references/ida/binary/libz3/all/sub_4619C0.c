_DWORD *__fastcall sub_4619C0(__int64 *a1, _DWORD *a2)
{
  char **exception; // r14
  char **v3; // rbx
  _DWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  char **v16; // rdi
  char *v17; // r15
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 i; // rcx
  signed __int64 v21; // r13
  char *v22; // rax
  char *v23; // rbp
  __int64 v24; // r13
  char *v25; // rbp
  char *v26; // r14
  __int64 v27; // rsi
  _BYTE *v28; // r15
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // r13
  _BYTE *v35; // rax
  char *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  _QWORD *v43; // rdx
  unsigned int v45; // ebp
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  _QWORD *v58; // rcx
  bool v59; // zf
  char *v60; // rbp
  char *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // r13
  char *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r14d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  _QWORD *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // r8
  _QWORD *v77; // rdx
  char *v78; // [rsp+0h] [rbp-128h]
  __int64 v79; // [rsp+8h] [rbp-120h]
  __int64 v80; // [rsp+8h] [rbp-120h]
  __int64 v81; // [rsp+10h] [rbp-118h]
  __int64 v82; // [rsp+18h] [rbp-110h]
  __int64 v83[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v84; // [rsp+50h] [rbp-D8h] BYREF
  void *v85; // [rsp+58h] [rbp-D0h]
  __int64 v86; // [rsp+60h] [rbp-C8h]
  _BYTE v87[192]; // [rsp+68h] [rbp-C0h] BYREF

  v5 = a2;
  v6 = *((unsigned int *)a1 + 24);
  v7 = (_QWORD *)a1[11];
  v8 = a2[3];
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (_QWORD *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 == v6 )
  {
LABEL_9:
    while ( v12 != v7 )
    {
      v15 = (_DWORD *)*v7;
      if ( *v7 > 1u )
      {
        if ( v15[3] == v8 && v5 == v15 )
        {
          v13 = v7;
          goto LABEL_18;
        }
      }
      else if ( !v15 )
      {
        break;
      }
      v7 += 2;
    }
LABEL_111:
    BUG();
  }
  v13 = &v7[(unsigned __int64)v11 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = (_DWORD *)*v13;
      if ( *v13 > 1u )
        break;
      if ( !v14 )
        goto LABEL_111;
      v13 += 2;
      if ( v10 == v13 )
        goto LABEL_9;
    }
    if ( v14[3] == v8 && v5 == v14 )
      break;
    v13 += 2;
    if ( v10 == v13 )
      goto LABEL_9;
  }
LABEL_18:
  v16 = (char **)v13[1];
  if ( *v5 < *((_DWORD *)a1 + 36) && (*(_DWORD *)(a1[19] + 4LL * (*v5 >> 5)) & (1 << *v5)) != 0 )
  {
    v17 = *v16;
    if ( *v16 )
    {
      v18 = 8LL * *((unsigned int *)v17 - 1);
      v78 = &v17[v18];
      if ( v17 != &v17[v18] )
      {
        v19 = ((v18 >> 3) + 1) >> 1;
        for ( i = v19; ; i = (v81 + 1) >> 1 )
        {
          v21 = 8 * i;
          v82 = v18;
          v81 = i;
          v22 = (char *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
          v18 = v82;
          v23 = v22;
          if ( v22 )
            break;
          if ( v81 == 1 )
          {
            v21 = 0;
            sub_45A750(v17, (__int64)v78);
            goto LABEL_26;
          }
        }
        if ( v81 == v19 )
        {
          sub_4592F0(v17, &v17[v21], v22);
          sub_4592F0(&v17[v21], v78, v23);
          sub_459620(v17, &v17[v21], v78, v21 >> 3, (v82 - v21) >> 3, v23);
        }
        else
        {
          sub_45A070(v17, v78, v22, v81);
        }
LABEL_26:
        operator delete(v23, v21);
        v17 = *v16;
      }
    }
    v24 = *a1;
    v84 = *a1;
    v85 = v87;
    v86 = 0x1000000000LL;
    if ( !v17 || (v25 = &v17[8 * *((unsigned int *)v17 - 1)], v25 == v17) )
    {
      v27 = 0;
    }
    else
    {
      v26 = v17;
      LODWORD(v27) = 0;
      v28 = v87;
      do
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)v26 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v26 + 24LL) - 1) + 32);
          if ( *(_WORD *)(v29 + 4) )
            break;
          v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
          if ( !v30 || *v30 || v30[1] != 8 || *(_DWORD *)(v29 + 24) != 1 )
            break;
          v49 = *(_QWORD *)(v29 + 32);
          if ( v49 )
          {
            ++*(_DWORD *)(v49 + 8);
            LODWORD(v27) = v86;
          }
          if ( (unsigned int)v27 >= HIDWORD(v86) )
          {
            v80 = v49;
            v64 = (unsigned int)(2 * HIDWORD(v86));
            LODWORD(v27) = v86;
            v65 = (char *)v85;
            v28 = (_BYTE *)sub_186B270(8 * v64);
            v49 = v80;
            if ( (_DWORD)v86 )
            {
              if ( (unsigned int)(v86 - 1) <= 2 || v28 == (char *)v85 + 8 )
              {
                v75 = 0;
                v76 = 8LL * (unsigned int)v86;
                do
                {
                  *(_QWORD *)&v28[v75] = *(_QWORD *)&v65[v75];
                  v75 += 8;
                }
                while ( v75 != v76 );
              }
              else
              {
                v66 = 0;
                v67 = 16LL * ((unsigned int)v86 >> 1);
                do
                {
                  *(__m128i *)&v28[v66] = _mm_loadu_si128((const __m128i *)&v65[v66]);
                  v66 += 16;
                }
                while ( v66 != v67 );
                if ( (v27 & 1) != 0 )
                  *(_QWORD *)&v28[8 * (v27 & 0xFFFFFFFE)] = *(_QWORD *)&v65[8 * (v27 & 0xFFFFFFFE)];
              }
            }
            if ( v65 && v65 != v87 )
            {
              sub_186B220(v65);
              LODWORD(v27) = v86;
              v49 = v80;
            }
            v85 = v28;
            HIDWORD(v86) = v64;
          }
          v50 = (unsigned int)v27;
          v26 += 8;
          v27 = (unsigned int)(v27 + 1);
          *(_QWORD *)&v28[8 * v50] = v49;
          LODWORD(v86) = v27;
          if ( v25 == v26 )
            goto LABEL_63;
        }
        v31 = sub_15E1A70(*a1);
        v32 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        v33 = v86;
        if ( (unsigned int)v86 < HIDWORD(v86) )
        {
          v28 = v85;
        }
        else
        {
          v79 = v31;
          v34 = (unsigned int)(2 * HIDWORD(v86));
          v35 = (_BYTE *)sub_186B270(8 * v34);
          v33 = v86;
          v36 = (char *)v85;
          v28 = v35;
          v32 = v79;
          if ( (_DWORD)v86 )
          {
            if ( (unsigned int)(v86 - 1) <= 2 || v35 == (char *)v85 + 8 )
            {
              v72 = 0;
              v73 = 8LL * (unsigned int)v86;
              do
              {
                *(_QWORD *)&v28[v72] = *(_QWORD *)&v36[v72];
                v72 += 8;
              }
              while ( v72 != v73 );
            }
            else
            {
              v37 = 0;
              v38 = 16LL * ((unsigned int)v86 >> 1);
              do
              {
                *(__m128i *)&v28[v37] = _mm_loadu_si128((const __m128i *)&v36[v37]);
                v37 += 16;
              }
              while ( v37 != v38 );
              if ( (v33 & 1) != 0 )
                *(_QWORD *)&v28[8 * (v33 & 0xFFFFFFFE)] = *(_QWORD *)&v36[8 * (v33 & 0xFFFFFFFE)];
            }
          }
          if ( v36 != v87 && v36 )
          {
            sub_186B220(v36);
            v33 = v86;
            v32 = v79;
          }
          v85 = v28;
          HIDWORD(v86) = v34;
        }
        v27 = (unsigned int)(v33 + 1);
        v26 += 8;
        *(_QWORD *)&v28[8 * v33] = v32;
        LODWORD(v86) = v33 + 1;
      }
      while ( v25 != v26 );
LABEL_63:
      v24 = *a1;
    }
    v51 = sub_15EC240(v24, v27);
    v52 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v53 = sub_15DFBF0(*a1, v5, v51);
    v5 = (_DWORD *)v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    v54 = (_QWORD *)a1[3];
    if ( v54 )
    {
      v55 = *((_DWORD *)v54 - 1);
      if ( v55 == *((_DWORD *)v54 - 2) )
      {
        v68 = (3 * v55 + 1) >> 1;
        v69 = 8 * v68 + 8;
        if ( 8 * v55 + 8 >= v69 || v55 >= v68 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v70 = (unsigned int *)sub_186B300(v54 - 1, v69);
        v71 = v70[1];
        v54 = v70 + 2;
        *v70 = v68;
        a1[3] = (__int64)(v70 + 2);
        LODWORD(v70) = v71;
        v58 = &v54[v71];
        v57 = (_DWORD)v70 + 1;
      }
      else
      {
        v56 = v55;
        v57 = v55 + 1;
        v58 = &v54[v56];
      }
    }
    else
    {
      v77 = (_QWORD *)sub_186B270(0x18u);
      *v77 = 2;
      v57 = 1;
      v54 = v77 + 1;
      a1[3] = (__int64)v54;
      v58 = v54;
    }
    *v58 = v5;
    *((_DWORD *)v54 - 1) = v57;
    if ( v52 )
    {
      v59 = (*(_DWORD *)(v52 + 8))-- == 1;
      if ( v59 )
        sub_15D7BC0(v24, v52);
    }
    v60 = (char *)v85;
    v61 = (char *)v85 + 8 * (unsigned int)v86;
    if ( v85 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *(_QWORD *)v60;
          if ( *(_QWORD *)v60 )
          {
            v63 = v84;
            v59 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v59 )
              break;
          }
          v60 += 8;
          if ( v60 >= v61 )
            goto LABEL_80;
        }
        sub_15D7BC0(v63, v62);
        v60 += 8;
      }
      while ( v60 < v61 );
LABEL_80:
      v60 = (char *)v85;
    }
    if ( v60 && v60 != v87 )
      sub_186B220(v60);
  }
  else
  {
    v39 = (_QWORD *)a1[3];
    ++v5[2];
    if ( v39 )
    {
      v40 = *((_DWORD *)v39 - 1);
      if ( v40 == *((_DWORD *)v39 - 2) )
      {
        v45 = (3 * v40 + 1) >> 1;
        v46 = 8 * v45 + 8;
        if ( 8 * v40 + 8 >= (unsigned int)v46 || v40 >= v45 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v84, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v84);
          sub_233E40((__int64)&v84);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300(v39 - 1, v46);
        v48 = v47[1];
        v39 = v47 + 2;
        *v47 = v45;
        a1[3] = (__int64)(v47 + 2);
        LODWORD(v47) = v48;
        v43 = &v39[v48];
        v42 = (_DWORD)v47 + 1;
      }
      else
      {
        v41 = v40;
        v42 = v40 + 1;
        v43 = &v39[v41];
      }
    }
    else
    {
      v74 = (_QWORD *)sub_186B270(0x18u);
      *v74 = 2;
      v42 = 1;
      v39 = v74 + 1;
      a1[3] = (__int64)v39;
      v43 = v39;
    }
    *v43 = v5;
    *((_DWORD *)v39 - 1) = v42;
  }
  return v5;
}

