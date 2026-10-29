__int64 __fastcall sub_14E2610(__int64 a1, char a2, __m128i a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  int v9; // eax
  unsigned __int8 *v10; // rsi
  char *v11; // r9
  __int64 v12; // r13
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // r12
  char v18; // al
  _QWORD *v19; // rax
  __int64 v20; // r14
  int v21; // eax
  unsigned __int8 *v22; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  void **v25; // r13
  unsigned __int64 v26; // rax
  void **v27; // r14
  void **v28; // rbx
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // rbx
  void **v32; // r14
  _QWORD *v33; // rax
  __int64 v34; // r14
  int v35; // eax
  unsigned __int8 *v36; // rbx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  void **v39; // r14
  void **v40; // rbx
  void **v41; // rdi
  void **v42; // rdi
  void **v43; // rbx
  void **v44; // r14
  _QWORD *v45; // rax
  __int64 v46; // r14
  int v47; // eax
  void **v48; // r14
  void **v49; // rbx
  void **v50; // rdi
  void **v51; // rdi
  void **v52; // rbx
  void **v53; // r14
  void *v54; // rdi
  void **v55; // rbx
  __int64 v56; // rsi
  void **v57; // r14
  __int64 v58; // rdi
  void *v59; // r14
  __int64 v60; // rdx
  void *v61; // rax
  unsigned __int64 v62; // rdx
  int v63; // eax
  unsigned __int64 v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // r14
  __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  int v69; // eax
  void **v70; // rax
  __int64 v71; // rdi
  void **i; // r14
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rdx
  __int64 v76; // r14
  void *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // r14
  void *v82; // rdi
  void **v84; // [rsp+10h] [rbp-140h]
  __int64 v85; // [rsp+10h] [rbp-140h]
  __int64 v86; // [rsp+10h] [rbp-140h]
  void *v87; // [rsp+18h] [rbp-138h] BYREF
  void **v88; // [rsp+20h] [rbp-130h]
  void *v89; // [rsp+38h] [rbp-118h] BYREF
  unsigned __int64 v90; // [rsp+40h] [rbp-110h]
  __int64 v91; // [rsp+48h] [rbp-108h]
  void *v92; // [rsp+58h] [rbp-F8h]
  _BYTE v93[16]; // [rsp+68h] [rbp-E8h] BYREF
  __int16 v94; // [rsp+78h] [rbp-D8h]
  __m128 v95[4]; // [rsp+88h] [rbp-C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-80h]
  _BYTE v97[104]; // [rsp+E8h] [rbp-68h] BYREF

  v4 = *(_QWORD **)(a1 + 80);
  v5 = v4[7];
  v6 = v4[8];
  v7 = v4[11];
  v8 = v4[6];
  v9 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v7, v5, v6, nullptr, nullptr);
  v10 = *(unsigned __int8 **)(a1 + 96);
  v11 = (char *)v5;
  v12 = 0;
  sub_13E2260(v95, v10, *(_QWORD *)(a1 + 104), v9, v7, v11, v6, v8);
  if ( (v97[32] & 1) != 0 )
    goto LABEL_2;
  v14 = sub_21F8CF0(3);
  v16 = sub_21F90D0(3, v10, v15);
  v17 = (void *)v16;
  if ( v14 == v16 )
    sub_21FFBD0(&v87, v16);
  else
    sub_21FBA00(&v87, v14);
  v18 = sub_13E4440(v95, (__int64)&v87, 1u);
  if ( (v18 & 8) != 0 )
  {
    v45 = *(_QWORD **)(a1 + 80);
    v46 = v45[6];
    v47 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v45[11], v45[7], v45[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v89, v46, v47, 1690);
    if ( (_BYTE)v94 )
    {
      sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
      v91 = 0;
      v94 = 0;
    }
    if ( v92 != v93 )
      operator delete(v92);
    v25 = (void **)v89;
    if ( !v89 )
      goto LABEL_33;
    v26 = v90;
    if ( !v90 )
      goto LABEL_33;
    if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
    {
      v48 = *((void ***)v89 + 66);
      v49 = &v48[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
      if ( v48 != v49 )
      {
        do
        {
          while ( 1 )
          {
            v49 -= 8;
            v50 = (void **)v49[3];
            if ( v50 == v49 + 5 )
              break;
            operator delete(v50);
            if ( v48 == v49 )
              goto LABEL_67;
          }
        }
        while ( v48 != v49 );
LABEL_67:
        v49 = (void **)v25[66];
      }
      if ( v49 != v25 + 68 )
        free(v49);
      v51 = (void **)v25[52];
      if ( v51 != v25 + 54 )
        free(v51);
      v52 = v25 + 48;
      v53 = v25 + 8;
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 != v52 + 2 )
          break;
LABEL_76:
        v52 -= 4;
        if ( v52 == v53 )
          goto LABEL_32;
      }
      while ( 1 )
      {
        operator delete(v54);
        v52 -= 4;
        if ( v52 == v53 )
          goto LABEL_32;
        v54 = *v52;
        if ( *v52 == v52 + 2 )
          goto LABEL_76;
      }
    }
    goto LABEL_109;
  }
  if ( (v18 & 4) != 0 )
  {
    v33 = *(_QWORD **)(a1 + 80);
    v34 = v33[6];
    v35 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v33[11], v33[7], v33[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v89, v34, v35, 1689);
    v36 = (unsigned __int8 *)v89;
    if ( !v89 )
    {
      v68 = v90;
      v69 = *(_DWORD *)(v90 + 14976);
      if ( v69 )
      {
        v78 = (unsigned int)(v69 - 1);
        *(_DWORD *)(v90 + 14976) = v78;
        v36 = *(unsigned __int8 **)(v68 + 8 * v78 + 14848);
        v79 = *((unsigned int *)v36 + 134);
        *v36 = 0;
        v80 = *((_QWORD *)v36 + 66);
        *((_DWORD *)v36 + 106) = 0;
        v81 = v80 + (v79 << 6);
        while ( v80 != v81 )
        {
          while ( 1 )
          {
            v81 -= 64;
            v82 = *(void **)(v81 + 24);
            if ( v82 == (void *)(v81 + 40) )
              break;
            v86 = v80;
            operator delete(v82);
            v80 = v86;
            if ( v86 == v81 )
              goto LABEL_153;
          }
        }
LABEL_153:
        *((_DWORD *)v36 + 134) = 0;
      }
      else
      {
        v36 = (unsigned __int8 *)operator new(0x3A0u);
        *v36 = 0;
        *((_QWORD *)v36 + 12) = v36 + 112;
        *((_QWORD *)v36 + 16) = v36 + 144;
        *((_QWORD *)v36 + 20) = v36 + 176;
        *((_QWORD *)v36 + 24) = v36 + 208;
        *((_QWORD *)v36 + 28) = v36 + 240;
        *((_QWORD *)v36 + 32) = v36 + 272;
        *((_QWORD *)v36 + 36) = v36 + 304;
        *((_QWORD *)v36 + 40) = v36 + 336;
        *((_QWORD *)v36 + 44) = v36 + 368;
        *((_QWORD *)v36 + 48) = v36 + 400;
        *((_QWORD *)v36 + 52) = v36 + 432;
        *((_QWORD *)v36 + 13) = 0;
        v36[112] = 0;
        *((_QWORD *)v36 + 17) = 0;
        v36[144] = 0;
        *((_QWORD *)v36 + 21) = 0;
        v36[176] = 0;
        *((_QWORD *)v36 + 25) = 0;
        v36[208] = 0;
        *((_QWORD *)v36 + 29) = 0;
        v36[240] = 0;
        *((_QWORD *)v36 + 33) = 0;
        v36[272] = 0;
        *((_QWORD *)v36 + 37) = 0;
        v36[304] = 0;
        *((_QWORD *)v36 + 41) = 0;
        v36[336] = 0;
        *((_QWORD *)v36 + 45) = 0;
        v36[368] = 0;
        *((_QWORD *)v36 + 49) = 0;
        v36[400] = 0;
        *((_QWORD *)v36 + 53) = 0x800000000LL;
        *((_QWORD *)v36 + 66) = v36 + 544;
        *((_QWORD *)v36 + 67) = 0x600000000LL;
      }
      v89 = v36;
    }
    v36[*v36 + 1] = 2;
    v37 = v89;
    v38 = *(unsigned __int8 *)v89;
    *(_BYTE *)v89 = v38 + 1;
    v37[v38 + 2] = 1;
    if ( (_BYTE)v94 )
    {
      sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
      v91 = 0;
      v94 = 0;
    }
    if ( v92 != v93 )
      operator delete(v92);
    v25 = (void **)v89;
    if ( !v89 )
      goto LABEL_33;
    v26 = v90;
    if ( !v90 )
      goto LABEL_33;
    if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
    {
      v39 = *((void ***)v89 + 66);
      v40 = &v39[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
      if ( v39 != v40 )
      {
        do
        {
          while ( 1 )
          {
            v40 -= 8;
            v41 = (void **)v40[3];
            if ( v41 == v40 + 5 )
              break;
            operator delete(v41);
            if ( v39 == v40 )
              goto LABEL_47;
          }
        }
        while ( v39 != v40 );
LABEL_47:
        v40 = (void **)v25[66];
      }
      if ( v40 != v25 + 68 )
        free(v40);
      v42 = (void **)v25[52];
      if ( v42 != v25 + 54 )
        free(v42);
      v43 = v25 + 48;
      v44 = v25 + 8;
      do
      {
        while ( *v43 != v43 + 2 )
        {
          operator delete(*v43);
          v43 -= 4;
          if ( v44 == v43 )
            goto LABEL_32;
        }
        v43 -= 4;
      }
      while ( v44 != v43 );
      goto LABEL_32;
    }
LABEL_109:
    v60 = *(unsigned int *)(v26 + 14976);
    *(_DWORD *)(v26 + 14976) = v60 + 1;
    *(_QWORD *)(v26 + 8 * v60 + 14848) = v25;
    goto LABEL_33;
  }
  if ( a2 )
  {
    if ( v17 == v87 )
      sub_21FFE60(&v89, &v87);
    else
      sub_21F97A0(&v89, &v87);
    if ( v17 == v89 )
      sub_21FFF70(&v89);
    else
      sub_21FA410(&v89);
    v59 = v89;
    if ( v17 == v87 )
    {
      if ( v17 == v89 )
      {
        if ( v88 )
        {
          v70 = &v88[3 * (_QWORD)*(v88 - 1)];
          if ( v70 != v88 )
          {
            do
            {
              while ( 1 )
              {
                v71 = (__int64)(v70 - 3);
                v84 = v70 - 3;
                if ( *(v70 - 3) == v59 )
                  break;
                sub_21F9830(v71);
                v70 = v84;
                if ( v84 == v88 )
                  goto LABEL_134;
              }
              sub_A4F010(v71);
              v70 = v84;
            }
            while ( v88 != v84 );
          }
LABEL_134:
          operator delete[](v70 - 1, 24LL * (_QWORD)*(v70 - 1) + 8);
        }
        goto LABEL_135;
      }
      if ( !v88 )
        goto LABEL_112;
      for ( i = &v88[3 * (_QWORD)*(v88 - 1)]; v88 != i; sub_A4F010((__int64)i) )
      {
        while ( 1 )
        {
          i -= 3;
          if ( v17 == *i )
            break;
          sub_21F9830(i);
          if ( v88 == i )
            goto LABEL_141;
        }
      }
LABEL_141:
      operator delete[](i - 1, 24LL * (_QWORD)*(i - 1) + 8);
      v61 = v89;
    }
    else
    {
      if ( v17 != v89 )
      {
        sub_21F9590(&v87, &v89);
        goto LABEL_106;
      }
      sub_21F9830(&v87);
      v61 = v89;
    }
    if ( v17 != v61 )
    {
LABEL_112:
      sub_21F97D0(&v87, &v89);
      goto LABEL_106;
    }
LABEL_135:
    sub_21FFED0(&v87, &v89);
LABEL_106:
    if ( v17 == v89 )
    {
      v64 = v90;
      if ( v90 )
      {
        v65 = 24LL * *(_QWORD *)(v90 - 8);
        v66 = v90 + v65;
        if ( v90 != v90 + v65 )
        {
          while ( 1 )
          {
            v64 = v66 - 24;
            v67 = v66 - 24;
            if ( v17 == *(void **)(v66 - 24) )
            {
              sub_A4F010(v67);
              if ( v90 == v64 )
              {
LABEL_123:
                v65 = 24LL * *(_QWORD *)(v66 - 32);
                break;
              }
            }
            else
            {
              sub_21F9830(v67);
              if ( v64 == v90 )
                goto LABEL_123;
            }
            v66 -= 24LL;
          }
        }
        operator delete[]((void *)(v64 - 8), v65 + 8);
      }
    }
    else
    {
      sub_21F9830(&v89);
    }
  }
  *(double *)a3.m128i_i64 = sub_2202D40(&v87);
  if ( *(double *)a3.m128i_i64 > 3.402823466385289e38 || *(double *)a3.m128i_i64 < -3.402823466385289e38 )
  {
    v19 = *(_QWORD **)(a1 + 80);
    v20 = v19[6];
    v21 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v19[11], v19[7], v19[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v89, v20, v21, 1689);
    v22 = (unsigned __int8 *)v89;
    if ( !v89 )
    {
      v62 = v90;
      v63 = *(_DWORD *)(v90 + 14976);
      if ( v63 )
      {
        v73 = (unsigned int)(v63 - 1);
        *(_DWORD *)(v90 + 14976) = v73;
        v22 = *(unsigned __int8 **)(v62 + 8 * v73 + 14848);
        v74 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v75 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v76 = v75 + (v74 << 6);
        while ( v75 != v76 )
        {
          while ( 1 )
          {
            v76 -= 64;
            v77 = *(void **)(v76 + 24);
            if ( v77 == (void *)(v76 + 40) )
              break;
            v85 = v75;
            operator delete(v77);
            v75 = v85;
            if ( v85 == v76 )
              goto LABEL_148;
          }
        }
LABEL_148:
        *((_DWORD *)v22 + 134) = 0;
      }
      else
      {
        v22 = (unsigned __int8 *)operator new(0x3A0u);
        *v22 = 0;
        *((_QWORD *)v22 + 12) = v22 + 112;
        *((_QWORD *)v22 + 16) = v22 + 144;
        *((_QWORD *)v22 + 20) = v22 + 176;
        *((_QWORD *)v22 + 24) = v22 + 208;
        *((_QWORD *)v22 + 28) = v22 + 240;
        *((_QWORD *)v22 + 32) = v22 + 272;
        *((_QWORD *)v22 + 36) = v22 + 304;
        *((_QWORD *)v22 + 40) = v22 + 336;
        *((_QWORD *)v22 + 44) = v22 + 368;
        *((_QWORD *)v22 + 48) = v22 + 400;
        *((_QWORD *)v22 + 52) = v22 + 432;
        *((_QWORD *)v22 + 13) = 0;
        v22[112] = 0;
        *((_QWORD *)v22 + 17) = 0;
        v22[144] = 0;
        *((_QWORD *)v22 + 21) = 0;
        v22[176] = 0;
        *((_QWORD *)v22 + 25) = 0;
        v22[208] = 0;
        *((_QWORD *)v22 + 29) = 0;
        v22[240] = 0;
        *((_QWORD *)v22 + 33) = 0;
        v22[272] = 0;
        *((_QWORD *)v22 + 37) = 0;
        v22[304] = 0;
        *((_QWORD *)v22 + 41) = 0;
        v22[336] = 0;
        *((_QWORD *)v22 + 45) = 0;
        v22[368] = 0;
        *((_QWORD *)v22 + 49) = 0;
        v22[400] = 0;
        *((_QWORD *)v22 + 53) = 0x800000000LL;
        *((_QWORD *)v22 + 66) = v22 + 544;
        *((_QWORD *)v22 + 67) = 0x600000000LL;
      }
      v89 = v22;
    }
    v22[*v22 + 1] = 2;
    v23 = v89;
    v24 = *(unsigned __int8 *)v89;
    *(_BYTE *)v89 = v24 + 1;
    v23[v24 + 2] = 1;
    if ( (_BYTE)v94 )
    {
      sub_FC7790(v91, (__int64 *)&v89, SHIBYTE(v94));
      v91 = 0;
      v94 = 0;
    }
    if ( v92 != v93 )
      operator delete(v92);
    v25 = (void **)v89;
    if ( !v89 )
      goto LABEL_33;
    v26 = v90;
    if ( !v90 )
      goto LABEL_33;
    if ( (unsigned __int64)v89 < v90 || (unsigned __int64)v89 > v90 + 14848 )
    {
      v27 = *((void ***)v89 + 66);
      v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
      if ( v27 != v28 )
      {
        do
        {
          while ( 1 )
          {
            v28 -= 8;
            v29 = (void **)v28[3];
            if ( v29 == v28 + 5 )
              break;
            operator delete(v29);
            if ( v27 == v28 )
              goto LABEL_24;
          }
        }
        while ( v27 != v28 );
LABEL_24:
        v28 = (void **)v25[66];
      }
      if ( v28 != v25 + 68 )
        free(v28);
      v30 = (void **)v25[52];
      if ( v30 != v25 + 54 )
        free(v30);
      v31 = v25 + 48;
      v32 = v25 + 8;
      do
      {
        while ( *v31 != v31 + 2 )
        {
          operator delete(*v31);
          v31 -= 4;
          if ( v32 == v31 )
            goto LABEL_32;
        }
        v31 -= 4;
      }
      while ( v31 != v32 );
LABEL_32:
      operator delete(v25, 0x3A0u);
LABEL_33:
      v12 = 0;
      goto LABEL_34;
    }
    goto LABEL_109;
  }
  *(float *)a3.m128i_i32 = *(double *)a3.m128i_i64;
  v12 = (unsigned int)_mm_cvtsi128_si32(a3) | 0x100000000LL;
LABEL_34:
  if ( v17 == v87 )
  {
    v55 = v88;
    if ( v88 )
    {
      v56 = 3LL * (_QWORD)*(v88 - 1);
      v57 = &v88[v56];
      if ( v88 != &v88[v56] )
      {
        while ( 1 )
        {
          v55 = v57 - 3;
          v58 = (__int64)(v57 - 3);
          if ( v17 == *(v57 - 3) )
          {
            sub_A4F010(v58);
            if ( v88 == v55 )
            {
LABEL_86:
              v56 = 3LL * (_QWORD)*(v57 - 4);
              break;
            }
          }
          else
          {
            sub_21F9830(v58);
            if ( v55 == v88 )
              goto LABEL_86;
          }
          v57 -= 3;
        }
      }
      operator delete[](v55 - 1, v56 * 8 + 8);
    }
  }
  else
  {
    sub_21F9830(&v87);
  }
LABEL_2:
  if ( ptr != v97 )
    free(ptr);
  return v12;
}
