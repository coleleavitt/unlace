__int64 __fastcall sub_2008100(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  int *v8; // r14
  signed __int64 v9; // rax
  int *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r12d
  _BYTE *v14; // rdi
  __int64 v15; // rbx
  __int64 *v17; // rbx
  __int64 *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int8 *v24; // r13
  void *v25; // rdx
  _BYTE *v26; // rsi
  _QWORD *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  void **v30; // rcx
  _BYTE *v31; // rdi
  __int64 v32; // rax
  void **v33; // r13
  unsigned __int64 v34; // rax
  void **v35; // r15
  void **v36; // rbx
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // rbx
  void **v40; // r15
  __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r13
  __int64 v45; // rbp
  char v46; // al
  __int64 v47; // rax
  __int64 v48; // rsi
  int v49; // edx
  size_t v50; // rdx
  unsigned __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rax
  void *v58; // rdi
  int *v59; // [rsp+0h] [rbp-248h]
  char v60; // [rsp+0h] [rbp-248h]
  void **v61; // [rsp+0h] [rbp-248h]
  void *v62; // [rsp+0h] [rbp-248h]
  void *v63; // [rsp+0h] [rbp-248h]
  _BYTE *v64; // [rsp+10h] [rbp-238h]
  __int64 v65; // [rsp+18h] [rbp-230h]
  void *ptr; // [rsp+20h] [rbp-228h] BYREF
  __int64 v67; // [rsp+28h] [rbp-220h]
  _BYTE v68[16]; // [rsp+30h] [rbp-218h] BYREF
  void *src; // [rsp+40h] [rbp-208h] BYREF
  size_t n; // [rsp+48h] [rbp-200h]
  _QWORD v71[2]; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+60h] [rbp-1E8h] BYREF
  int v73; // [rsp+68h] [rbp-1E0h]
  __int128 v74; // [rsp+70h] [rbp-1D8h]
  __int64 v75; // [rsp+80h] [rbp-1C8h]
  char v76; // [rsp+88h] [rbp-1C0h]
  int v77; // [rsp+8Ch] [rbp-1BCh]
  void **v78; // [rsp+90h] [rbp-1B8h]
  void *v79; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned __int64 v80; // [rsp+A8h] [rbp-1A0h]
  __int64 v81; // [rsp+B0h] [rbp-198h]
  void *v82; // [rsp+C0h] [rbp-188h]
  __int64 v83; // [rsp+D0h] [rbp-178h] BYREF
  __int16 v84; // [rsp+E0h] [rbp-168h]
  void *v85; // [rsp+F0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-150h]
  _BYTE v87[320]; // [rsp+108h] [rbp-140h] BYREF

  v3 = *(__int64 **)(a2 + 152);
  ptr = v68;
  v67 = 0x100000000LL;
  v4 = &v3[*(unsigned int *)(a2 + 160)];
  if ( v3 == v4 )
    goto LABEL_36;
  do
  {
    while ( 1 )
    {
      v5 = *v3;
      v6 = *(_QWORD *)(*v3 + 16);
      v7 = *(_QWORD *)(v6 + 8);
      if ( !v7 || strlen(*(const char **)(v6 + 8)) != 5 || *(_DWORD *)v7 != 1851878499 || *(_BYTE *)(v7 + 4) != 103 )
        goto LABEL_3;
      v8 = *(int **)(v5 + 200);
      v59 = *(int **)(v5 + 208);
      v9 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v59 - (char *)v8) >> 3);
      if ( v9 >> 2 <= 0 )
        break;
      v10 = &v8[40 * (v9 >> 2)];
      while ( sub_12CCCF0(v8[6]) )
      {
        if ( !sub_12CCCF0(v8[16]) )
        {
          if ( v59 != v8 + 10 )
            goto LABEL_3;
          goto LABEL_16;
        }
        if ( !sub_12CCCF0(v8[26]) )
        {
          if ( v59 != v8 + 20 )
            goto LABEL_3;
          goto LABEL_16;
        }
        if ( !sub_12CCCF0(v8[36]) )
        {
          if ( v59 != v8 + 30 )
            goto LABEL_3;
          goto LABEL_16;
        }
        v8 += 40;
        if ( v10 == v8 )
        {
          v9 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v59 - (char *)v8) >> 3);
          goto LABEL_67;
        }
      }
LABEL_15:
      if ( v59 == v8 )
        goto LABEL_16;
LABEL_3:
      if ( v4 == ++v3 )
        goto LABEL_19;
    }
LABEL_67:
    if ( v9 != 2 )
    {
      if ( v9 != 3 )
      {
        if ( v9 != 1 || sub_12CCCF0(v8[6]) )
          goto LABEL_16;
LABEL_71:
        if ( v59 != v8 )
          goto LABEL_3;
        goto LABEL_16;
      }
      if ( !sub_12CCCF0(v8[6]) )
        goto LABEL_15;
      v8 += 10;
    }
    if ( !sub_12CCCF0(v8[6]) )
      goto LABEL_15;
    v8 += 10;
    if ( !sub_12CCCF0(v8[6]) )
      goto LABEL_71;
LABEL_16:
    v11 = (unsigned int)v67;
    v12 = (unsigned int)v67 + 1LL;
    if ( v12 > HIDWORD(v67) )
    {
      sub_2237220(&ptr, v68, v12, 8);
      v11 = (unsigned int)v67;
    }
    ++v3;
    *((_QWORD *)ptr + v11) = v5;
    LODWORD(v67) = v67 + 1;
  }
  while ( v4 != v3 );
LABEL_19:
  v13 = v67;
  if ( (_DWORD)v67 )
    goto LABEL_20;
  v17 = *(__int64 **)(a2 + 152);
  v18 = &v17[*(unsigned int *)(a2 + 160)];
  if ( v17 == v18 )
    goto LABEL_36;
  do
  {
    while ( 1 )
    {
      v19 = *v17;
      v20 = *(_QWORD *)(*v17 + 16);
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        if ( strlen(*(const char **)(v20 + 8)) == 5 && *(_DWORD *)v21 == 1851878499 && *(_BYTE *)(v21 + 4) == 103 )
          break;
      }
      if ( v18 == ++v17 )
        goto LABEL_35;
    }
    v22 = v13;
    v23 = v13 + 1LL;
    if ( v23 > HIDWORD(v67) )
    {
      sub_2237220(&ptr, v68, v23, 8);
      v22 = (unsigned int)v67;
    }
    ++v17;
    *((_QWORD *)ptr + v22) = v19;
    v13 = v67 + 1;
    LODWORD(v67) = v67 + 1;
  }
  while ( v18 != v17 );
LABEL_35:
  if ( v13 )
  {
LABEL_20:
    if ( v13 > 1 )
    {
      v41 = *(_QWORD *)(a2 + 152);
      v42 = *(unsigned int *)(a2 + 160);
      v43 = v41 + 8 * v42;
      if ( v41 == v43 )
      {
        if ( v42 > 1 )
        {
          v47 = *(_QWORD *)(a2 + 112);
          v48 = v47 + 8LL * *(unsigned int *)(a2 + 120);
          if ( v48 != v47 )
          {
            v60 = 0;
            goto LABEL_91;
          }
        }
        goto LABEL_36;
      }
      v60 = 0;
      v44 = *(_QWORD *)(a2 + 152);
      do
      {
        v45 = *(_QWORD *)(*(_QWORD *)v44 + 40LL);
        if ( v45
          && strlen(*(const char **)(*(_QWORD *)v44 + 40LL)) == 21
          && !(*(_QWORD *)v45 ^ 0x666F2D676E616C63LL | *(_QWORD *)(v45 + 8) ^ 0x75622D64616F6C66LL)
          && *(_DWORD *)(v45 + 16) == 1701602414 )
        {
          v46 = v60;
          if ( *(_BYTE *)(v45 + 20) == 114 )
            v46 = 1;
          v60 = v46;
        }
        v44 += 8;
      }
      while ( v43 != v44 );
      if ( v42 <= 1 || (v47 = *(_QWORD *)(a2 + 112), v48 = v47 + 8LL * *(unsigned int *)(a2 + 120), v47 == v48) )
      {
LABEL_95:
        if ( !v60 )
          goto LABEL_36;
      }
      else
      {
        while ( 1 )
        {
LABEL_91:
          v49 = *(_DWORD *)(*(_QWORD *)v47 + 8LL);
          if ( v49 == 1 )
            v49 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)v47 + 16LL) + 8LL);
          if ( v49 == 2 )
            break;
          v47 += 8;
          if ( v48 == v47 )
            goto LABEL_95;
        }
      }
    }
    v14 = ptr;
    v15 = *(_QWORD *)ptr + 56LL;
  }
  else
  {
LABEL_36:
    v73 = 2;
    v85 = v87;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v74 = 0;
    v72 = &off_2BEBEE0;
    v76 = 0;
    v77 = 1;
    v75 = 0;
    v78 = &v85;
    sub_227B8B0(&v72, 0, 0, 0);
    sub_11068E0(a2 + 152, (__int64)&v72, (__int64)"; ", 1u, 0);
    sub_FC70B0((__int64)&v79, a1, 0, 723);
    v24 = (unsigned __int8 *)v79;
    v25 = v78[1];
    v26 = *v78;
    if ( !v79 )
    {
      v51 = v80;
      v52 = *(_DWORD *)(v80 + 14976);
      if ( v52 )
      {
        v54 = (unsigned int)(v52 - 1);
        *(_DWORD *)(v80 + 14976) = v54;
        v24 = *(unsigned __int8 **)(v51 + 8 * v54 + 14848);
        v55 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v56 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v57 = v56 + (v55 << 6);
        while ( v56 != v57 )
        {
          while ( 1 )
          {
            v57 -= 64;
            v58 = *(void **)(v57 + 24);
            if ( v58 == (void *)(v57 + 40) )
              break;
            v65 = v57;
            v63 = v25;
            operator delete(v58);
            v57 = v65;
            v25 = v63;
            if ( v56 == v65 )
              goto LABEL_123;
          }
        }
LABEL_123:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v64 = *v78;
        v62 = v78[1];
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        v25 = v62;
        *((_QWORD *)v24 + 66) = v24 + 544;
        v26 = v64;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v79 = v24;
    }
    v24[*v24 + 1] = 0;
    src = v71;
    sub_2007F10(&src, v26, (__int64)v25 + (_QWORD)v26);
    v27 = v79;
    v28 = *(unsigned __int8 *)v79;
    *(_BYTE *)v79 = v28 + 1;
    v29 = 4 * (v28 + 3);
    v30 = (void **)&v27[v29];
    v31 = (_BYTE *)v27[v29];
    if ( src == v71 )
    {
      v50 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *v31 = v71[0];
          v50 = n;
          v31 = *v30;
        }
        else
        {
          v61 = v30;
          memcpy(v31, src, n);
          v30 = v61;
          v50 = n;
          v31 = *v61;
        }
      }
      v30[1] = (void *)v50;
      v31[v50] = 0;
      v31 = src;
    }
    else
    {
      if ( v31 == (_BYTE *)&v27[v29 + 2] )
      {
        *v30 = src;
        v30[1] = (void *)n;
        v30[2] = (void *)v71[0];
      }
      else
      {
        v32 = v27[4 * (int)v28 + 14];
        *v30 = src;
        v30[1] = (void *)n;
        v30[2] = (void *)v71[0];
        if ( v31 )
        {
          src = v31;
          v71[0] = v32;
          goto LABEL_41;
        }
      }
      v31 = v71;
      src = v71;
    }
LABEL_41:
    n = 0;
    *v31 = 0;
    if ( src != v71 )
      operator delete(src);
    if ( (_BYTE)v84 )
    {
      sub_FC7790(v81, (__int64 *)&v79, SHIBYTE(v84));
      v81 = 0;
      v84 = 0;
    }
    if ( v82 != &v83 )
      operator delete(v82);
    v33 = (void **)v79;
    if ( v79 )
    {
      v34 = v80;
      if ( v80 )
      {
        if ( (unsigned __int64)v79 >= v80 && (unsigned __int64)v79 <= v80 + 14848 )
        {
          v53 = *(unsigned int *)(v80 + 14976);
          *(_DWORD *)(v80 + 14976) = v53 + 1;
          *(_QWORD *)(v34 + 8 * v53 + 14848) = v33;
        }
        else
        {
          v35 = *((void ***)v79 + 66);
          v36 = &v35[8 * (unsigned __int64)*((unsigned int *)v79 + 134)];
          if ( v35 != v36 )
          {
            do
            {
              while ( 1 )
              {
                v36 -= 8;
                v37 = (void **)v36[3];
                if ( v37 == v36 + 5 )
                  break;
                operator delete(v37);
                if ( v35 == v36 )
                  goto LABEL_54;
              }
            }
            while ( v35 != v36 );
LABEL_54:
            v36 = (void **)v33[66];
          }
          if ( v36 != v33 + 68 )
            free(v36);
          v38 = (void **)v33[52];
          if ( v38 != v33 + 54 )
            free(v38);
          v39 = v33 + 48;
          v40 = v33 + 8;
          do
          {
            while ( *v39 != v39 + 2 )
            {
              operator delete(*v39);
              v39 -= 4;
              if ( v40 == v39 )
                goto LABEL_62;
            }
            v39 -= 4;
          }
          while ( v39 != v40 );
LABEL_62:
          operator delete(v33, 0x3A0u);
        }
      }
    }
    v72 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v72);
    if ( v85 != v87 )
      free(v85);
    v14 = ptr;
    v15 = 0;
  }
  if ( v14 != v68 )
    free(v14);
  return v15;
}
