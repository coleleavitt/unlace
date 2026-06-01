void __fastcall sub_12AF350(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  _BYTE *v14; // r14
  signed __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  size_t v22; // r15
  const void *v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r15
  _QWORD *v27; // r14
  _BYTE *v28; // rsi
  signed __int64 v29; // r12
  _QWORD *v30; // rax
  size_t v31; // r12
  size_t v32; // rcx
  __int64 v33; // r13
  _BYTE *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  size_t v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // r15
  __m128i v41; // xmm0
  char *v42; // rax
  _BYTE *v43; // r14
  void **v44; // rax
  size_t v45; // r14
  __int64 v46; // rdx
  void *v47; // rcx
  size_t v48; // r12
  char *v49; // rdi
  __int64 v50; // r15
  unsigned __int64 v51; // rdi
  _BYTE *v52; // rax
  _QWORD *v53; // r11
  __m128i v54; // xmm0
  __m128i *v55; // rax
  signed __int64 v56; // r13
  unsigned __int64 v57; // rdi
  _BYTE *v58; // rax
  _QWORD *v59; // r9
  _BYTE *v60; // rax
  size_t nb; // [rsp+10h] [rbp-1B8h]
  size_t nc; // [rsp+10h] [rbp-1B8h]
  size_t nd; // [rsp+10h] [rbp-1B8h]
  size_t n; // [rsp+10h] [rbp-1B8h]
  size_t na; // [rsp+10h] [rbp-1B8h]
  _QWORD *ne; // [rsp+10h] [rbp-1B8h]
  size_t nf; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v69; // [rsp+18h] [rbp-1B0h]
  size_t v70; // [rsp+18h] [rbp-1B0h]
  _BYTE *v71; // [rsp+18h] [rbp-1B0h]
  char *v72; // [rsp+30h] [rbp-198h] BYREF
  __int16 v73; // [rsp+50h] [rbp-178h]
  char v74[32]; // [rsp+60h] [rbp-168h] BYREF
  __int16 v75; // [rsp+80h] [rbp-148h]
  void *src; // [rsp+90h] [rbp-138h] BYREF
  size_t v77; // [rsp+98h] [rbp-130h]
  _QWORD v78[2]; // [rsp+A0h] [rbp-128h] BYREF
  __int16 v79; // [rsp+B0h] [rbp-118h]
  void *v80; // [rsp+C0h] [rbp-108h] BYREF
  size_t v81; // [rsp+C8h] [rbp-100h]
  _QWORD v82[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int16 v83; // [rsp+E0h] [rbp-E8h]
  void *ptr; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-D0h]
  __int64 v86; // [rsp+108h] [rbp-C0h] BYREF
  __int16 v87; // [rsp+110h] [rbp-B8h]

  v5 = *(_QWORD **)(a1 + 8);
  LODWORD(ptr) = 3053;
  v6 = sub_21B6DA0(a2, &ptr, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v9 == v8 )
  {
LABEL_5:
    LODWORD(ptr) = 3055;
    v10 = sub_21B6DA0(a2, &ptr, 1);
    v11 = *(_QWORD *)(a2 + 8);
    v12 = (_QWORD *)(v11 + 8LL * (unsigned int)v10);
    v13 = (_QWORD *)(v11 + 8 * HIDWORD(v10));
    if ( v12 != v13 )
    {
      while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3055) )
      {
        if ( v13 == ++v12 )
          goto LABEL_9;
      }
      if ( v12 != v13 )
      {
        do
        {
          v17 = *v12;
          if ( *(_QWORD *)(*v12 + 16LL) )
            v17 = *(_QWORD *)(*v12 + 16LL);
          ++v12;
          *(_BYTE *)(v17 + 44) |= 1u;
          if ( v12 == v13 )
            break;
          while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3055) )
          {
            if ( v13 == ++v12 )
              goto LABEL_29;
          }
        }
        while ( v13 != v12 );
LABEL_29:
        LODWORD(ptr) = 3033;
        v18 = sub_21B6DA0(a2, &ptr, 1);
        v19 = *(_QWORD *)(a2 + 8);
        v20 = (_QWORD *)(v19 + 8LL * (unsigned int)v18);
        v21 = (_QWORD *)(v19 + 8 * HIDWORD(v18));
        if ( v20 != v21 )
        {
          while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 3033) )
          {
            if ( v21 == ++v20 )
              goto LABEL_33;
          }
          if ( v21 != v20 )
          {
            do
            {
              v35 = *v20;
              if ( *(_QWORD *)(*v20 + 16LL) )
                v35 = *(_QWORD *)(*v20 + 16LL);
              ++v20;
              *(_BYTE *)(v35 + 44) |= 1u;
              if ( v20 == v21 )
                break;
              while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 3033) )
              {
                if ( v21 == ++v20 )
                  goto LABEL_37;
              }
            }
            while ( v20 != v21 );
LABEL_37:
            LODWORD(ptr) = 3055;
            v24 = sub_21B6DA0(a2, &ptr, 1);
            v25 = *(_QWORD *)(a2 + 8);
            v26 = (_QWORD *)(v25 + 8LL * (unsigned int)v24);
            v27 = (_QWORD *)(v25 + 8 * HIDWORD(v24));
            if ( v26 != v27 )
            {
              while ( !*v26 || !(unsigned __int8)sub_21B9810(*v26, 3055) )
              {
                if ( v27 == ++v26 )
                  goto LABEL_41;
              }
              if ( v26 != v27 )
              {
                do
                {
                  v36 = *v26;
                  if ( *(_QWORD *)(*v26 + 16LL) )
                    v36 = *(_QWORD *)(*v26 + 16LL);
                  ++v26;
                  *(_BYTE *)(v36 + 44) |= 1u;
                  if ( v26 == v27 )
                    break;
                  while ( !*v26 || !(unsigned __int8)sub_21B9810(*v26, 3055) )
                  {
                    if ( v27 == ++v26 )
                      return;
                  }
                }
                while ( v26 != v27 );
                return;
              }
            }
LABEL_41:
            if ( *(_BYTE *)(a1 + 2384) && *(_QWORD *)(a1 + 2128) )
            {
              (*(void (__fastcall **)(void **, __int64, __int64))(a1 + 2136))(&v80, a1 + 2112, a1 + 2520);
              v44 = (void **)v80;
              v45 = v81;
              if ( (void *)v81 != v80 )
              {
                do
                {
                  v46 = *(_QWORD *)(a1 + 2464);
                  nb = (size_t)v44;
                  v47 = *(void **)(a1 + 2456);
                  si128.m128i_i64[1] = (__int64)v44;
                  si128.m128i_i64[0] = v46;
                  v87 = 1029;
                  ptr = v47;
                  sub_112FB90(a2, a3, (__int64)&ptr);
                  v44 = (void **)(nb + 32);
                }
                while ( v45 != nb + 32 );
                v48 = v81;
                v44 = (void **)v80;
                if ( (void *)v81 != v80 )
                {
                  do
                  {
                    while ( *v44 != v44 + 2 )
                    {
                      nc = (size_t)v44;
                      operator delete(*v44);
                      v44 = (void **)(nc + 32);
                      if ( v48 == nc + 32 )
                        goto LABEL_90;
                    }
                    v44 += 4;
                  }
                  while ( (void **)v48 != v44 );
LABEL_90:
                  v44 = (void **)v80;
                }
              }
              if ( v44 )
                operator delete(v44);
            }
            v80 = v82;
            v28 = (_BYTE *)v5[61];
            v29 = v5[62];
            if ( !&v28[v29] || v28 )
            {
              if ( (unsigned __int64)v29 > 0xF )
              {
                n = v5[61];
                if ( v29 < 0 )
                  goto LABEL_133;
                v30 = (_QWORD *)operator new(v29 + 1);
                v82[0] = v29;
                v28 = (_BYTE *)n;
                v80 = v30;
              }
              else
              {
                if ( v29 == 1 )
                {
                  LOBYTE(v82[0]) = *v28;
                  v30 = v82;
                  goto LABEL_47;
                }
                v30 = v82;
                if ( !v29 )
                {
LABEL_47:
                  v81 = v29;
                  *((_BYTE *)v30 + v29) = 0;
                  v31 = v81;
                  if ( 0x7FFFFFFFFFFFFFFFLL - v81 > 0xB )
                  {
                    v32 = v81 + 12;
                    if ( v80 == v82 )
                    {
                      v33 = 15;
                      if ( v32 <= 0xF )
                        goto LABEL_50;
                    }
                    else
                    {
                      v33 = v82[0];
                      if ( v32 <= v82[0] )
                      {
LABEL_50:
                        qmemcpy((char *)v80 + v81, "/usr/include", 12);
                        v34 = v80;
LABEL_51:
                        v81 = v32;
                        v34[v31 + 12] = 0;
                        ptr = &v80;
                        v87 = 260;
                        sub_112FAC0(a2, a3, (__int64)&ptr);
                        if ( v80 != v82 )
                          operator delete(v80);
                        return;
                      }
                    }
                    if ( (v32 & 0x8000000000000000LL) == 0LL )
                    {
                      v56 = 2 * v33;
                      if ( v32 < v56 )
                      {
                        v57 = v56 + 1;
                        if ( v56 < 0 )
                        {
                          v57 = 0x8000000000000000LL;
                          v56 = 0x7FFFFFFFFFFFFFFFLL;
                        }
                      }
                      else
                      {
                        v57 = v81 + 13;
                        v56 = v81 + 12;
                      }
                      na = v81 + 12;
                      v58 = (_BYTE *)operator new(v57);
                      v32 = v31 + 12;
                      v59 = v80;
                      v34 = v58;
                      if ( v31 )
                      {
                        if ( v31 == 1 )
                        {
                          *v58 = *(_BYTE *)v80;
                        }
                        else
                        {
                          v70 = na;
                          ne = v80;
                          v60 = memcpy(v58, v80, v31);
                          v32 = v70;
                          v59 = ne;
                          v34 = v60;
                        }
                      }
                      qmemcpy(&v34[v31], "/usr/include", 12);
                      if ( v59 != v82 )
                      {
                        v71 = v34;
                        nf = v32;
                        operator delete(v59);
                        v34 = v71;
                        v32 = nf;
                      }
                      v80 = v34;
                      v82[0] = v56;
                      goto LABEL_51;
                    }
LABEL_133:
                    std::__throw_length_error("basic_string::_M_create");
                  }
LABEL_134:
                  std::__throw_length_error("basic_string::append");
                }
              }
              memcpy(v30, v28, v29);
              v30 = v80;
              goto LABEL_47;
            }
LABEL_11:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
        }
LABEL_33:
        v22 = v5[32];
        v23 = (const void *)v5[31];
        ptr = &v86;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( v22 > 0x80 )
        {
          sub_2236E10(&ptr, &v86, v22, 1);
          v49 = (char *)ptr + si128.m128i_i64[0];
        }
        else
        {
          if ( !v22 )
            goto LABEL_35;
          v49 = (char *)&v86;
        }
        memcpy(v49, v23, v22);
        v22 += si128.m128i_i64[0];
LABEL_35:
        si128.m128i_i64[0] = v22;
        v83 = 257;
        v79 = 257;
        v75 = 257;
        v73 = 259;
        v72 = "include";
        sub_228A3B0(&ptr, &v72, v74, &src, &v80);
        v83 = 261;
        v80 = ptr;
        v81 = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v80);
        if ( ptr != &v86 )
          free(ptr);
        goto LABEL_37;
      }
    }
LABEL_9:
    src = v78;
    v14 = (_BYTE *)v5[61];
    v15 = v5[62];
    if ( &v14[v15] && !v14 )
      goto LABEL_11;
    if ( (unsigned __int64)v15 > 0xF )
    {
      if ( v15 < 0 )
        goto LABEL_133;
      v37 = (_QWORD *)operator new(v15 + 1);
      v78[0] = v15;
      src = v37;
    }
    else
    {
      if ( v15 == 1 )
      {
        LOBYTE(v78[0]) = *v14;
        v37 = v78;
        goto LABEL_78;
      }
      v37 = v78;
      if ( !v15 )
      {
LABEL_78:
        v77 = v15;
        *((_BYTE *)v37 + v15) = 0;
        v38 = v77;
        if ( 0x7FFFFFFFFFFFFFFFLL - v77 <= 0x11 )
          goto LABEL_134;
        v39 = v77 + 18;
        if ( src == v78 )
        {
          v40 = 15;
          if ( v39 <= 0xF )
            goto LABEL_81;
        }
        else
        {
          v40 = v78[0];
          if ( v39 <= v78[0] )
          {
LABEL_81:
            v41 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
            v42 = (char *)src + v77;
            *((_WORD *)v42 + 8) = 25956;
            *(__m128i *)v42 = v41;
            v43 = src;
LABEL_82:
            v77 = v39;
            v43[v38 + 18] = 0;
            ptr = &src;
            v87 = 260;
            sub_112FA80(a2, a3, (__int64)&ptr);
            if ( src != v78 )
              operator delete(src);
            goto LABEL_29;
          }
        }
        if ( (v39 & 0x8000000000000000LL) != 0LL )
          goto LABEL_133;
        v50 = 2 * v40;
        if ( v39 < v50 )
        {
          v51 = v50 + 1;
          if ( v50 < 0 )
          {
            v51 = 0x8000000000000000LL;
            v50 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v51 = v77 + 19;
          v50 = v77 + 18;
        }
        v52 = (_BYTE *)operator new(v51);
        v38 = v77;
        v39 = v77 + 18;
        v43 = v52;
        v53 = src;
        if ( v77 )
        {
          if ( v77 == 1 )
          {
            *v52 = *(_BYTE *)src;
          }
          else
          {
            memcpy(v52, src, v77);
            v39 = v77 + 18;
            v38 = v77;
            v53 = src;
          }
        }
        v54 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
        v55 = (__m128i *)&v43[v38];
        v55[1].m128i_i16[0] = 25956;
        *v55 = v54;
        if ( v53 != v78 )
        {
          v69 = v39;
          nd = v38;
          operator delete(v53);
          v39 = v69;
          v38 = nd;
        }
        src = v43;
        v78[0] = v50;
        goto LABEL_82;
      }
    }
    memcpy(v37, v14, v15);
    v37 = src;
    goto LABEL_78;
  }
  do
  {
    v16 = *v8;
    if ( *(_QWORD *)(*v8 + 16LL) )
      v16 = *(_QWORD *)(*v8 + 16LL);
    ++v8;
    *(_BYTE *)(v16 + 44) |= 1u;
    if ( v8 == v9 )
      break;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
    {
      if ( v9 == ++v8 )
        return;
    }
  }
  while ( v9 != v8 );
}
