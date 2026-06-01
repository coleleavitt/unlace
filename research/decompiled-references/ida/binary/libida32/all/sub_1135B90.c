__int64 *__fastcall sub_1135B90(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  _QWORD *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbp
  _QWORD *v17; // r15
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rbp
  __int64 v24; // r13
  __int64 v25; // rax
  const char **v26; // rax
  char *v27; // r15
  const char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  size_t v32; // r14
  _BYTE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 *v37; // rdi
  size_t v38; // rax
  bool v39; // zf
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // r15
  __int64 *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  char *v47; // rcx
  __m128i *v48; // rsi
  __int64 *v49; // rax
  __int64 v50; // rsi
  void **v51; // r12
  void **i; // rbp
  char *v53; // rax
  __int64 v54; // rbp
  __int64 v55; // r12
  __int64 v56; // rdi
  void *v57; // rdi
  __int64 v58; // rax
  __m128i si128; // xmm0
  __int64 v60; // r12
  __int64 *v61; // rbp
  void **v62; // rbx
  void **v63; // r13
  __int64 v64; // r13
  char *v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdi
  __int64 *v69; // [rsp+8h] [rbp-F0h]
  __int64 *v70; // [rsp+8h] [rbp-F0h]
  char *v71; // [rsp+18h] [rbp-E0h]
  __int64 *v72; // [rsp+20h] [rbp-D8h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v74; // [rsp+38h] [rbp-C0h]
  int v75; // [rsp+3Ch] [rbp-BCh]
  void *v76[2]; // [rsp+50h] [rbp-A8h] BYREF
  void *v77; // [rsp+60h] [rbp-98h]
  __m128i v78; // [rsp+70h] [rbp-88h] BYREF
  __m128i v79; // [rsp+80h] [rbp-78h] BYREF
  __int64 *v80; // [rsp+90h] [rbp-68h] BYREF
  size_t v81; // [rsp+98h] [rbp-60h]
  __int64 v82; // [rsp+A0h] [rbp-58h]
  __int64 v83; // [rsp+A8h] [rbp-50h]
  __int16 v84; // [rsp+B0h] [rbp-48h]

  v3 = a2;
  v4 = a1;
  LODWORD(v80) = 2260;
  v5 = sub_2193060(a2, &v80, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2260) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    LODWORD(v80) = 2323;
    v9 = sub_2193060(a2, &v80, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 != v12 )
    {
      while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2323) )
      {
        if ( v12 == ++v11 )
          goto LABEL_9;
      }
      if ( v12 != v11 )
      {
        do
        {
          v24 = *v11;
          v25 = *(_QWORD *)(*v11 + 16LL);
          if ( !v25 )
            v25 = *v11;
          ++v11;
          *(_BYTE *)(v25 + 44) |= 1u;
          if ( v11 == v12 )
            break;
          while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2323) )
          {
            if ( v12 == ++v11 )
              goto LABEL_38;
          }
        }
        while ( v12 != v11 );
LABEL_38:
        v26 = *(const char ***)(v24 + 48);
        v27 = (char *)*v26;
        if ( *v26 )
        {
          v28 = *v26;
          v32 = strlen(*v26);
          if ( v32 == 6 && *(_DWORD *)v27 == 1769234798 && *((_WORD *)v27 + 2) == 25974 )
          {
            v40 = sub_227F670(v28, 2323, v29, v30, v31);
            v27 = (char *)v40;
            v32 = v41;
            if ( v41 > 6 && *(_DWORD *)v40 == 1701733735 && *(_WORD *)(v40 + 4) == 26994 && *(_BYTE *)(v40 + 6) == 99 )
            {
              sub_2280F80(&ptr);
              if ( v75 )
              {
                *(_OWORD *)v76 = 0;
                v77 = nullptr;
                sub_1005BB0(&v80, (__int64 *)ptr, v74 == 0);
                v69 = v80;
                sub_1005BB0(&v80, (__int64 *)ptr + v74, 1);
                if ( v69 != v80 )
                {
                  v42 = *v69;
                  v71 = v27;
                  v43 = v80;
                  v72 = v4;
                  v44 = v69;
                  do
                  {
                    v39 = *(_BYTE *)(v42 + 8) == 0;
                    v45 = *(_QWORD *)v42;
                    v46 = v42 + 16;
                    v47 = "-";
                    v82 = v46;
                    if ( !v39 )
                      v47 = "+";
                    v84 = 1283;
                    v83 = v45;
                    v80 = (__int64 *)v47;
                    sub_222F820(&v78, &v80);
                    v48 = (__m128i *)v76[1];
                    if ( v76[1] == v77 )
                    {
                      sub_A5EC30((void ***)v76, (const __m128i *)v76[1], &v78);
                      if ( (__m128i *)v78.m128i_i64[0] != &v79 )
                        operator delete((void *)v78.m128i_i64[0]);
                    }
                    else
                    {
                      *(_QWORD *)v76[1] = (char *)v76[1] + 16;
                      if ( (__m128i *)v78.m128i_i64[0] == &v79 )
                      {
                        v48[1] = _mm_load_si128(&v79);
                      }
                      else
                      {
                        v48->m128i_i64[0] = v78.m128i_i64[0];
                        v48[1].m128i_i64[0] = v79.m128i_i64[0];
                      }
                      v48->m128i_i64[1] = v78.m128i_i64[1];
                      v76[1] = (char *)v76[1] + 32;
                    }
                    v42 = v44[1];
                    if ( v42 && v42 != -8 )
                    {
                      ++v44;
                    }
                    else
                    {
                      v49 = v44 + 2;
                      do
                      {
                        do
                        {
                          v42 = *v49;
                          v44 = v49++;
                        }
                        while ( !v42 );
                      }
                      while ( v42 == -8 );
                    }
                  }
                  while ( v43 != v44 );
                  v27 = v71;
                  v4 = v72;
                }
                v50 = 32;
                if ( a3[8] != 27 )
                  v50 = 64;
                sub_22895A0(&v80, v50, v76);
                if ( (v81 & 1) == 0 )
                {
                  sub_2285820(v4, v80);
                  sub_1083470((__int64)&v80);
                  v51 = (void **)v76[1];
                  for ( i = (void **)v76[0]; v51 != i; i += 4 )
                  {
                    while ( *i != i + 2 )
                    {
                      operator delete(*i);
                      i += 4;
                      if ( v51 == i )
                        goto LABEL_101;
                    }
                  }
LABEL_101:
                  if ( v76[0] )
                    operator delete(v76[0]);
                  v53 = (char *)ptr;
                  if ( v75 && v74 )
                  {
                    v54 = 0;
                    v55 = 8LL * (v74 - 1) + 8;
                    do
                    {
                      v56 = *(_QWORD *)&v53[v54];
                      if ( v56 && v56 != -8 )
                      {
                        operator delete();
                        v53 = (char *)ptr;
                      }
                      v54 += 8;
                    }
                    while ( v54 != v55 );
                  }
                  free(v53);
                  return v4;
                }
                sub_1083470((__int64)&v80);
                if ( v76[1] != v76[0] )
                {
                  v60 = v3;
                  v61 = v4;
                  v62 = (void **)v76[1];
                  v63 = (void **)v76[0];
                  do
                  {
                    while ( *v63 != v63 + 2 )
                    {
                      operator delete(*v63);
                      v63 += 4;
                      if ( v63 == v62 )
                        goto LABEL_126;
                    }
                    v63 += 4;
                  }
                  while ( v62 != v63 );
LABEL_126:
                  v4 = v61;
                  v3 = v60;
                }
                if ( v76[0] )
                  operator delete(v76[0]);
                v57 = ptr;
                if ( v75 && v74 )
                {
                  v70 = v4;
                  v64 = 0;
                  v65 = (char *)ptr;
                  v66 = 8LL * (v74 - 1) + 8;
                  do
                  {
                    v67 = *(_QWORD *)&v65[v64];
                    if ( v67 != -8 && v67 )
                    {
                      operator delete();
                      v65 = (char *)ptr;
                    }
                    v64 += 8;
                  }
                  while ( v66 != v64 );
                  v57 = v65;
                  v4 = v70;
                }
              }
              else
              {
                v57 = ptr;
              }
              free(v57);
            }
          }
        }
        else
        {
          v32 = 0;
        }
        v33 = (_BYTE *)sub_228BF20(v27, v32);
        if ( v34 )
        {
          *v4 = (__int64)(v4 + 2);
          if ( v33 )
          {
            sub_1135060(v4, v33, (__int64)&v33[v34]);
          }
          else
          {
            v4[1] = 0;
            *((_BYTE *)v4 + 16) = 0;
          }
          return v4;
        }
      }
    }
LABEL_9:
    v13 = v4 + 2;
    LODWORD(v80) = 2222;
    v14 = sub_2193060(v3, &v80, 1);
    v15 = *(_QWORD *)(v3 + 8);
    v16 = (_QWORD *)(v15 + 8LL * (unsigned int)v14);
    v17 = (_QWORD *)(v15 + 8 * HIDWORD(v14));
    if ( v16 == v17 )
      goto LABEL_13;
    while ( !*v16 || !(unsigned __int8)sub_2195AD0(*v16, 2222) )
    {
      if ( v17 == ++v16 )
        goto LABEL_13;
    }
    if ( v17 == v16 )
      goto LABEL_13;
    do
    {
      v35 = *v16;
      v36 = *(_QWORD *)(*v16 + 16LL);
      if ( !v36 )
        v36 = *v16;
      ++v16;
      *(_BYTE *)(v36 + 44) |= 1u;
      if ( v16 == v17 )
        break;
      while ( !*v16 || !(unsigned __int8)sub_2195AD0(*v16, 2222) )
      {
        if ( v17 == ++v16 )
          goto LABEL_54;
      }
    }
    while ( v17 != v16 );
LABEL_54:
    v37 = **(__int64 ***)(v35 + 48);
    v80 = v37;
    if ( v37 )
    {
      v38 = strlen((const char *)v37);
      v81 = v38;
      if ( v38 == 6 )
      {
        if ( !(unsigned int)sub_2222570(&v80, "ilp32e", 6) )
        {
          *v4 = (__int64)v13;
          *((_DWORD *)v4 + 4) = 842233458;
          *((_BYTE *)v4 + 20) = 101;
          v4[1] = 5;
          *((_BYTE *)v4 + 21) = 0;
          return v4;
        }
        v38 = v81;
      }
      if ( v38 == 5 && !(unsigned int)sub_2222570(&v80, "lp64e", 5) )
      {
        *v4 = (__int64)v13;
        *((_DWORD *)v4 + 4) = 875984498;
        *((_BYTE *)v4 + 20) = 101;
        v4[1] = 5;
        *((_BYTE *)v4 + 21) = 0;
        return v4;
      }
    }
    else
    {
      v81 = 0;
    }
    if ( (unsigned __int8)sub_2222600(&v80, "ilp32", 5) )
    {
      *v4 = (__int64)v13;
      goto LABEL_69;
    }
    if ( !(unsigned __int8)sub_2222600(&v80, "lp64", 4) )
    {
LABEL_13:
      v18 = a3[11];
      if ( a3[8] == 27 )
      {
        *v4 = (__int64)v13;
        if ( !v18 )
        {
          v4[1] = 8;
          strcpy((char *)v4 + 16, "rv32imac");
          return v4;
        }
LABEL_69:
        strcpy((char *)v4 + 16, "rv32imafdc");
        v4[1] = 10;
        return v4;
      }
      if ( !v18 )
      {
        *v4 = (__int64)v13;
        strcpy((char *)v4 + 16, "rv64imac");
        v4[1] = 8;
        return v4;
      }
      if ( a3[12] != 17 )
      {
        *v4 = (__int64)v13;
        if ( v18 == 4 )
        {
LABEL_73:
          strcpy((char *)v4 + 16, "rva22u64_v");
          v4[1] = 10;
          return v4;
        }
LABEL_17:
        strcpy((char *)v4 + 16, "rv64imafdc");
        v4[1] = 10;
        return v4;
      }
    }
    else if ( a3[12] != 17 )
    {
      v39 = a3[11] == 4;
      *v4 = (__int64)v13;
      if ( v39 )
        goto LABEL_73;
      goto LABEL_17;
    }
    *v4 = (__int64)v13;
    v58 = operator new(0x18u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2385950);
    v4[2] = 23;
    *v4 = v58;
    *(__m128i *)v58 = si128;
    *(_DWORD *)(v58 + 16) = 1600283258;
    *(_WORD *)(v58 + 20) = 25210;
    *(_BYTE *)(v58 + 22) = 115;
    v4[1] = 23;
    *(_BYTE *)(v58 + 23) = 0;
    return v4;
  }
  do
  {
    v19 = *v7;
    v20 = *(_QWORD *)(*v7 + 16LL);
    if ( !v20 )
      v20 = *v7;
    ++v7;
    *(_BYTE *)(v20 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2260) )
    {
      if ( v8 == ++v7 )
        goto LABEL_25;
    }
  }
  while ( v8 != v7 );
LABEL_25:
  v21 = -1;
  v22 = **(char ***)(v19 + 48);
  *a1 = (__int64)(a1 + 2);
  if ( v22 )
    v21 = (__int64)&v22[strlen(v22)];
  sub_1135060(a1, v22, v21);
  return v4;
}

