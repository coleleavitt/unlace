void __fastcall sub_11FFDA0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  char *v5; // rax
  char *v6; // rdx
  char *v7; // r14
  signed __int64 v8; // r13
  unsigned __int8 *v9; // r15
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64 *, void *, __int64); // r14
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  const char **v22; // rax
  size_t v23; // r15
  char *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  void **v30; // rbp
  __int64 v31; // rax
  void **v32; // r12
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r12
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  void *v44; // rdi
  __int64 v45; // rdx
  _DWORD *v46; // [rsp+0h] [rbp-1E8h]
  __int64 *v47; // [rsp+8h] [rbp-1E0h]
  __int64 v48; // [rsp+8h] [rbp-1E0h]
  __int64 v49; // [rsp+8h] [rbp-1E0h]
  __int64 v50; // [rsp+10h] [rbp-1D8h]
  unsigned int v51; // [rsp+18h] [rbp-1D0h]
  __int64 v52; // [rsp+18h] [rbp-1D0h]
  __int64 v53; // [rsp+30h] [rbp-1B8h] BYREF
  char v54; // [rsp+38h] [rbp-1B0h]
  void *v55[2]; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-198h] BYREF
  _QWORD *v57[4]; // [rsp+60h] [rbp-188h] BYREF
  __int16 v58; // [rsp+80h] [rbp-168h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __m128i si128; // [rsp+98h] [rbp-150h]
  __int64 v61; // [rsp+A8h] [rbp-140h] BYREF
  void *v62; // [rsp+B0h] [rbp-138h]
  __int64 v63; // [rsp+C0h] [rbp-128h] BYREF
  __int16 v64; // [rsp+D0h] [rbp-118h]

  v4 = *(_QWORD *)(a1 + 24);
  v46 = (_DWORD *)(v4 + 16);
  v47 = *(__int64 **)(v4 + 8);
  v5 = sub_115A2B0((__int64)a2, (_DWORD *)(v4 + 16));
  v7 = v5;
  v8 = (signed __int64)v6;
  if ( v6 != &byte_4 )
  {
    if ( v6 != &byte_5 || (*(_DWORD *)v5 != 875982956 || v5[4] != 102) && (*(_DWORD *)v5 != 875982956 || v5[4] != 100) )
      goto LABEL_3;
LABEL_9:
    v57[0] = "-mabi=";
    v12 = *a2;
    v58 = 1283;
    v57[3] = v6;
    v57[2] = v7;
    ptr = &v61;
    v13 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v12 + 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_22538C0(v57, &ptr);
    v14 = v13(a2, ptr, si128.m128i_i64[0]);
    if ( ptr != &v61 )
      free(ptr);
    v15 = *(unsigned int *)(a3 + 8);
    if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v15 + 1, 8);
      v15 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v14;
    ++*(_DWORD *)(a3 + 8);
    goto LABEL_14;
  }
  if ( *(_DWORD *)v5 == 875982956 )
    goto LABEL_9;
LABEL_3:
  sub_FC70B0((__int64)&ptr, *v47, 0, 497);
  v9 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v38 = si128.m128i_i64[0];
    v39 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
    if ( v39 )
    {
      v40 = (unsigned int)(v39 - 1);
      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v40;
      v9 = *(unsigned __int8 **)(v38 + 8 * v40 + 14848);
      v41 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v42 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v43 = v42 + (v41 << 6);
      while ( v42 != v43 )
      {
        while ( 1 )
        {
          v43 -= 64;
          v44 = *(void **)(v43 + 24);
          if ( v44 == (void *)(v43 + 40) )
            break;
          v52 = v43;
          v50 = v42;
          operator delete(v44);
          v42 = v50;
          v43 = v52;
          if ( v50 == v52 )
            goto LABEL_87;
        }
      }
LABEL_87:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    ptr = v9;
  }
  v9[*v9 + 1] = 1;
  v10 = ptr;
  v11 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v11 + 1;
  v10[v11 + 2] = "-mabi=";
  sub_AEC220((unsigned __int8 **)&ptr, v7, v8);
  sub_AEA040((__int64)&ptr);
LABEL_14:
  LODWORD(ptr) = 2847;
  v16 = sub_21B6DA0(a2, &ptr, 1);
  v17 = a2[1];
  v18 = (_QWORD *)(v17 + 8LL * (unsigned int)v16);
  v19 = (_QWORD *)(v17 + 8 * HIDWORD(v16));
  if ( v18 != v19 )
  {
    while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 2847) )
    {
      if ( v19 == ++v18 )
        return;
    }
    if ( v19 != v18 )
    {
      do
      {
        v20 = *v18;
        v21 = *(_QWORD *)(*v18 + 16LL);
        if ( !v21 )
          v21 = *v18;
        ++v18;
        *(_BYTE *)(v21 + 44) |= 1u;
        if ( v18 == v19 )
          break;
        while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 2847) )
        {
          if ( v19 == ++v18 )
            goto LABEL_26;
        }
      }
      while ( v19 != v18 );
LABEL_26:
      v22 = *(const char ***)(v20 + 48);
      v23 = 0;
      v24 = (char *)*v22;
      if ( *v22 )
        v23 = strlen(*v22);
      sub_11598D0((__m128i **)v55, (__int64)a2, v46);
      sub_22AE720(&v53, v55[0], v55[1], 1, 1);
      v25 = v53;
      if ( (v54 & 1) != 0 && (v53 = 0, v25) )
      {
        v57[0] = (_QWORD *)v25;
        sub_A05760(&ptr, v57);
        if ( v57[0] )
          (*(void (__fastcall **)(_QWORD *))(*v57[0] + 8LL))(v57[0]);
        v51 = 0;
      }
      else
      {
        v51 = *(_DWORD *)(v25 + 8);
      }
      if ( v23 != 3 || *(_WORD *)v24 != 30330 || v24[2] != 108 || v51 <= 0x3F )
      {
        if ( (unsigned __int8)sub_2247970(v24, v23, 10, &ptr)
          || ptr != (void *)(unsigned int)ptr
          || (unsigned int)((_DWORD)ptr - 64) > 0xFFC0
          || v51 > (unsigned int)ptr
          || ((unsigned int)ptr & ((_DWORD)ptr - 1)) != 0 )
        {
          if ( v23 != 8 || *(_QWORD *)v24 != 0x656C62616C616373LL )
          {
            sub_FC70B0((__int64)&ptr, *v47, 0, 497);
            sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(v20 + 24), *(_QWORD *)(v20 + 32));
            sub_AEC220((unsigned __int8 **)&ptr, v24, v23);
            if ( (_BYTE)v64 )
            {
              sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v64));
              si128.m128i_i64[1] = 0;
              v64 = 0;
            }
            if ( v62 != &v63 )
              operator delete(v62);
            v30 = (void **)ptr;
            if ( ptr )
            {
              v31 = si128.m128i_i64[0];
              if ( si128.m128i_i64[0] )
              {
                if ( (unsigned __int64)ptr >= si128.m128i_i64[0] && (unsigned __int64)ptr <= si128.m128i_i64[0] + 14848 )
                {
                  v45 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
                  *(_DWORD *)(si128.m128i_i64[0] + 14976) = v45 + 1;
                  *(_QWORD *)(v31 + 8 * v45 + 14848) = v30;
                }
                else
                {
                  v32 = *((void ***)ptr + 66);
                  v33 = &v32[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
                  if ( v32 != v33 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v33 -= 8;
                        v34 = (void **)v33[3];
                        if ( v34 == v33 + 5 )
                          break;
                        operator delete(v34);
                        if ( v32 == v33 )
                          goto LABEL_64;
                      }
                    }
                    while ( v32 != v33 );
LABEL_64:
                    v33 = (void **)v30[66];
                  }
                  if ( v33 != v30 + 68 )
                    free(v33);
                  v35 = (void **)v30[52];
                  v36 = v30 + 52;
                  if ( v35 != v30 + 54 )
                    free(v35);
                  v37 = v30 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v36 -= 4;
                      if ( *v36 == v36 + 2 )
                        break;
                      operator delete(*v36);
                      if ( v36 == v37 )
                        goto LABEL_72;
                    }
                  }
                  while ( v36 != v37 );
LABEL_72:
                  operator delete(v30, 0x3A0u);
                }
              }
            }
          }
          goto LABEL_36;
        }
        v51 = (unsigned int)ptr;
      }
      ptr = (void *)"-mvscale-max=";
      LODWORD(v57[0]) = v51 >> 6;
      si128.m128i_i64[1] = (__int64)v57[0];
      LOWORD(v62) = 2307;
      v26 = sub_10DA6C0((__int64)a2, (__int64)&ptr);
      v27 = *(unsigned int *)(a3 + 8);
      if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v49 = v26;
        sub_2237220(a3, a3 + 16, v27 + 1, 8);
        v27 = *(unsigned int *)(a3 + 8);
        v26 = v49;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v27) = v26;
      ++*(_DWORD *)(a3 + 8);
      LODWORD(v57[0]) = v51 >> 6;
      ptr = (void *)"-mvscale-min=";
      LOWORD(v62) = 2307;
      si128.m128i_i64[1] = (__int64)v57[0];
      v28 = sub_10DA6C0((__int64)a2, (__int64)&ptr);
      v29 = *(unsigned int *)(a3 + 8);
      if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v48 = v28;
        sub_2237220(a3, a3 + 16, v29 + 1, 8);
        v29 = *(unsigned int *)(a3 + 8);
        v28 = v48;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v29) = v28;
      ++*(_DWORD *)(a3 + 8);
LABEL_36:
      sub_10A71B0((__int64)&v53);
      if ( v55[0] != &v56 )
        operator delete(v55[0]);
    }
  }
}
