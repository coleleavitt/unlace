void __fastcall sub_12C8790(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rax
  _BYTE *v9; // r12
  signed __int64 v10; // rbx
  void *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // r12
  size_t v16; // rbx
  void *v17; // r12
  __m128i si128; // xmm3
  size_t v19; // r8
  const void *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  const char **v29; // rax
  char *v30; // r14
  size_t v31; // rax
  size_t v32; // r12
  _BYTE *v33; // rax
  unsigned __int64 v34; // rbx
  size_t v35; // r8
  __int64 *v36; // rax
  __m128i v37; // xmm0
  size_t v38; // rbx
  _BYTE *v39; // rax
  signed __int64 v40; // rax
  char *v41; // rdi
  void *v42; // rdi
  char *v43; // rdi
  char *v44; // rdi
  size_t v45; // [rsp+0h] [rbp-288h]
  size_t v46[2]; // [rsp+10h] [rbp-278h] BYREF
  void **p_src; // [rsp+20h] [rbp-268h]
  size_t n; // [rsp+28h] [rbp-260h]
  void *src; // [rsp+30h] [rbp-258h] BYREF
  size_t v50; // [rsp+38h] [rbp-250h]
  signed __int64 v51; // [rsp+40h] [rbp-248h] BYREF
  char *v52; // [rsp+50h] [rbp-238h] BYREF
  __int16 v53; // [rsp+70h] [rbp-218h]
  _QWORD v54[4]; // [rsp+80h] [rbp-208h] BYREF
  __int16 v55; // [rsp+A0h] [rbp-1E8h]
  _QWORD v56[4]; // [rsp+B0h] [rbp-1D8h] BYREF
  __int16 v57; // [rsp+D0h] [rbp-1B8h]
  _QWORD v58[4]; // [rsp+E0h] [rbp-1A8h] BYREF
  __int16 v59; // [rsp+100h] [rbp-188h]
  void *v60; // [rsp+110h] [rbp-178h] BYREF
  __int128 v61; // [rsp+118h] [rbp-170h] BYREF
  _BYTE v62[8]; // [rsp+128h] [rbp-160h] BYREF
  __int16 v63; // [rsp+130h] [rbp-158h]
  void *ptr; // [rsp+1B0h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+1B8h] [rbp-D0h]
  __int64 v66; // [rsp+1C8h] [rbp-C0h] BYREF
  __int16 v67; // [rsp+1D0h] [rbp-B8h]

  LODWORD(ptr) = 3053;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v8 = *(_QWORD *)(a1 + 8);
    p_src = &src;
    v9 = *(_BYTE **)(v8 + 248);
    v10 = *(_QWORD *)(v8 + 256);
    src = &v51;
    if ( &v9[v10] && !v9 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v10 > 0xF )
    {
      if ( v10 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v11 = (void *)operator new(v10 + 1);
      v51 = v10;
      src = v11;
    }
    else
    {
      if ( v10 == 1 )
      {
        LOBYTE(v51) = *v9;
        v11 = p_src + 2;
LABEL_10:
        v50 = v10;
        *((_BYTE *)v11 + v10) = 0;
        LODWORD(ptr) = 3033;
        v12 = sub_21B6DA0(a2, &ptr, 1);
        v13 = *(_QWORD *)(a2 + 8);
        v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
        v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
        if ( v14 != v15 )
        {
          while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3033) )
          {
            if ( v15 == ++v14 )
              goto LABEL_14;
          }
          if ( v14 != v15 )
          {
            do
            {
              v26 = *v14;
              if ( *(_QWORD *)(*v14 + 16LL) )
                v26 = *(_QWORD *)(*v14 + 16LL);
              ++v14;
              *(_BYTE *)(v26 + 44) |= 1u;
              if ( v14 == v15 )
                break;
              while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3033) )
              {
                if ( v15 == ++v14 )
                  goto LABEL_22;
              }
            }
            while ( v15 != v14 );
            goto LABEL_22;
          }
        }
LABEL_14:
        v16 = v50;
        v17 = src;
        v60 = v62;
        *(__m128i *)v46 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v61 = *(_OWORD *)v46;
        if ( v50 > 0x80 )
        {
          sub_2236E10(&v60, v62, v50, 1);
          v43 = (char *)v60 + v61;
        }
        else
        {
          if ( !v50 )
            goto LABEL_16;
          v43 = v62;
        }
        memcpy(v43, v17, v16);
        v16 += v61;
LABEL_16:
        *(_QWORD *)&v61 = v16;
        v56[0] = "zos_wrappers";
        v67 = 257;
        v57 = 259;
        v55 = 259;
        v59 = 257;
        v54[0] = "include";
        sub_228A3B0(&v60, v54, v56, v58, &ptr);
        v67 = 261;
        ptr = v60;
        v65.m128i_i64[0] = v61;
        sub_112FA80(a2, a3, (__int64)&ptr);
        si128 = _mm_load_si128((const __m128i *)v46);
        v19 = v50;
        v20 = src;
        ptr = &v66;
        v65 = si128;
        if ( v50 > 0x80 )
        {
          n = (size_t)src;
          v46[0] = v50;
          sub_2236E10(&ptr, &v66, v50, 1);
          v19 = v46[0];
          v20 = (const void *)n;
          v44 = (char *)ptr + v65.m128i_i64[0];
        }
        else
        {
          if ( !v50 )
          {
LABEL_18:
            v65.m128i_i64[0] = v19;
            v59 = 257;
            v57 = 257;
            v55 = 257;
            v53 = 259;
            v52 = "include";
            sub_228A3B0(&ptr, &v52, v54, v56, v58);
            v59 = 261;
            v58[0] = ptr;
            v58[1] = v65.m128i_i64[0];
            sub_112FA80(a2, a3, (__int64)v58);
            if ( ptr != &v66 )
              free(ptr);
            if ( v60 != v62 )
              free(v60);
LABEL_22:
            LODWORD(ptr) = 2987;
            v21 = sub_21B6DA0(a2, &ptr, 1);
            v22 = *(_QWORD *)(a2 + 8);
            v23 = (_QWORD *)(v22 + 8LL * (unsigned int)v21);
            v24 = (_QWORD *)(v22 + 8 * HIDWORD(v21));
            if ( v23 == v24 )
              goto LABEL_26;
            while ( !*v23 || !(unsigned __int8)sub_21B9810(*v23, 2987) )
            {
              if ( v24 == ++v23 )
                goto LABEL_26;
            }
            if ( v24 == v23 )
              goto LABEL_26;
            do
            {
              v27 = *v23;
              v28 = *(_QWORD *)(*v23 + 16LL);
              if ( !v28 )
                v28 = *v23;
              ++v23;
              *(_BYTE *)(v28 + 44) |= 1u;
              if ( v23 == v24 )
                break;
              while ( !*v23 || !(unsigned __int8)sub_21B9810(*v23, 2987) )
              {
                if ( v24 == ++v23 )
                  goto LABEL_60;
              }
            }
            while ( v24 != v23 );
LABEL_60:
            v29 = *(const char ***)(v27 + 48);
            v30 = (char *)*v29;
            if ( !*v29 || (v31 = strlen(*v29), v32 = v31, (v45 = v31) == 0) )
            {
LABEL_26:
              v67 = 259;
              ptr = "/usr/include";
              sub_112FA80(a2, a3, (__int64)&ptr);
              goto LABEL_27;
            }
            v33 = memchr(v30, 58, v31);
            if ( !v33 || (v34 = v33 - v30, v33 - v30 == -1) )
            {
              v60 = (char *)&v61 + 8;
              sub_12C84A0(&v60, v30, (__int64)&v30[v45]);
              v67 = 260;
              ptr = &v60;
              sub_112FA80(a2, a3, (__int64)&ptr);
              v42 = v60;
              if ( v60 != (char *)&v61 + 8 )
                goto LABEL_89;
              goto LABEL_27;
            }
            *(__m128i *)v46 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            while ( 1 )
            {
              v35 = v32;
              v36 = &v66;
              v37 = _mm_load_si128((const __m128i *)v46);
              if ( v34 <= v32 )
                v35 = v34;
              ptr = &v66;
              v65 = v37;
              if ( v35 > 0x80 )
                break;
              if ( v35 )
              {
                v41 = (char *)&v66;
                goto LABEL_80;
              }
LABEL_69:
              v38 = v34 + 1;
              v63 = 261;
              v65.m128i_i64[0] = v35;
              v60 = v36;
              *(_QWORD *)&v61 = v35;
              sub_112FA80(a2, a3, (__int64)&v60);
              if ( v38 > v32 || (v32 -= v38, v30 += v38, !v32) )
              {
                if ( ptr != &v66 )
                  free(ptr);
                goto LABEL_27;
              }
              v39 = memchr(v30, 58, v32);
              if ( !v39 )
              {
                if ( ptr != &v66 )
                  free(ptr);
LABEL_88:
                v60 = (char *)&v61 + 8;
                sub_12C84A0(&v60, v30, (__int64)&v30[v32]);
                v67 = 260;
                ptr = &v60;
                sub_112FA80(a2, a3, (__int64)&ptr);
                v42 = v60;
                if ( v60 == (char *)&v61 + 8 )
                  goto LABEL_27;
LABEL_89:
                operator delete(v42);
LABEL_27:
                if ( src != p_src + 2 )
                  operator delete(src);
                return;
              }
              v40 = v39 - v30;
              v34 = v40;
              if ( ptr == &v66 )
              {
                if ( v40 == -1 )
                  goto LABEL_88;
              }
              else
              {
                free(ptr);
                if ( v34 == -1 )
                  goto LABEL_88;
              }
            }
            n = v35;
            sub_2236E10(&ptr, &v66, v35, 1);
            v35 = n;
            v41 = (char *)ptr + v65.m128i_i64[0];
LABEL_80:
            n = v35;
            memcpy(v41, v30, v35);
            v36 = (__int64 *)ptr;
            v35 = v65.m128i_i64[0] + n;
            goto LABEL_69;
          }
          v44 = (char *)&v66;
        }
        v46[0] = v19;
        memcpy(v44, v20, v19);
        v19 = v65.m128i_i64[0] + v46[0];
        goto LABEL_18;
      }
      v11 = p_src + 2;
      if ( !v10 )
        goto LABEL_10;
    }
    memcpy(v11, v9, v10);
    v11 = src;
    goto LABEL_10;
  }
  do
  {
    v25 = *v6;
    if ( *(_QWORD *)(*v6 + 16LL) )
      v25 = *(_QWORD *)(*v6 + 16LL);
    ++v6;
    *(_BYTE *)(v25 + 44) |= 1u;
    if ( v6 == v7 )
      break;
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
    {
      if ( v7 == ++v6 )
        return;
    }
  }
  while ( v7 != v6 );
}
