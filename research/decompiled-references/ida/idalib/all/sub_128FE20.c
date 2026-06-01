void __fastcall sub_128FE20(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r13
  _QWORD *v13; // r12
  size_t v14; // r13
  const void *v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r13
  _QWORD *v19; // r12
  _BYTE *v20; // rsi
  signed __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  size_t v26; // rcx
  size_t v27; // r8
  __int64 v28; // r15
  char *v29; // r9
  __m128i si128; // xmm0
  size_t v31; // r15
  _QWORD *v32; // rax
  unsigned int v33; // eax
  const char *v34; // rax
  void *v35; // rdi
  char *v36; // rdi
  char *v37; // rdi
  signed __int64 v38; // r15
  unsigned __int64 v39; // rdi
  char *v40; // rax
  _QWORD *v41; // r10
  size_t v42; // rdx
  char *v43; // rax
  _QWORD *srca; // [rsp+8h] [rbp-1B0h]
  char *src; // [rsp+8h] [rbp-1B0h]
  _QWORD *srcb; // [rsp+8h] [rbp-1B0h]
  void *srcc; // [rsp+8h] [rbp-1B0h]
  size_t v49; // [rsp+10h] [rbp-1A8h]
  size_t v50; // [rsp+10h] [rbp-1A8h]
  size_t v51; // [rsp+10h] [rbp-1A8h]
  size_t v52; // [rsp+18h] [rbp-1A0h]
  char *v53; // [rsp+18h] [rbp-1A0h]
  _QWORD v54[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v55; // [rsp+40h] [rbp-178h]
  _BYTE v56[32]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v57; // [rsp+70h] [rbp-148h]
  _BYTE v58[32]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v59; // [rsp+A0h] [rbp-118h]
  void *v60; // [rsp+B0h] [rbp-108h] BYREF
  size_t n; // [rsp+B8h] [rbp-100h]
  _QWORD v62[2]; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v63; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+E8h] [rbp-D0h]
  _BYTE v66[192]; // [rsp+F8h] [rbp-C0h] BYREF

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
    LODWORD(ptr) = 3033;
    v10 = sub_21B6DA0(a2, &ptr, 1);
    v11 = *(_QWORD *)(a2 + 8);
    v12 = (_QWORD *)(v11 + 8LL * (unsigned int)v10);
    v13 = (_QWORD *)(v11 + 8 * HIDWORD(v10));
    if ( v12 != v13 )
    {
      while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3033) )
      {
        if ( v13 == ++v12 )
          goto LABEL_9;
      }
      if ( v13 != v12 )
      {
        do
        {
          v23 = *v12;
          if ( *(_QWORD *)(*v12 + 16LL) )
            v23 = *(_QWORD *)(*v12 + 16LL);
          ++v12;
          *(_BYTE *)(v23 + 44) |= 1u;
          if ( v12 == v13 )
            break;
          while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3033) )
          {
            if ( v13 == ++v12 )
              goto LABEL_13;
          }
        }
        while ( v13 != v12 );
LABEL_13:
        LODWORD(ptr) = 3055;
        v16 = sub_21B6DA0(a2, &ptr, 1);
        v17 = *(_QWORD *)(a2 + 8);
        v18 = (_QWORD *)(v17 + 8LL * (unsigned int)v16);
        v19 = (_QWORD *)(v17 + 8 * HIDWORD(v16));
        if ( v18 != v19 )
        {
          while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 3055) )
          {
            if ( v19 == ++v18 )
              goto LABEL_17;
          }
          if ( v18 != v19 )
          {
            do
            {
              v24 = *v18;
              if ( *(_QWORD *)(*v18 + 16LL) )
                v24 = *(_QWORD *)(*v18 + 16LL);
              ++v18;
              *(_BYTE *)(v24 + 44) |= 1u;
              if ( v18 == v19 )
                break;
              while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 3055) )
              {
                if ( v19 == ++v18 )
                  return;
              }
            }
            while ( v19 != v18 );
            return;
          }
        }
LABEL_17:
        v60 = v62;
        v20 = (_BYTE *)v5[13];
        v21 = v5[14];
        if ( &v20[v21] && !v20 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v21 > 0xF )
        {
          if ( v21 < 0 )
            goto LABEL_98;
          v25 = (_QWORD *)operator new(v21 + 1);
          v62[0] = v21;
          v60 = v25;
        }
        else
        {
          if ( v21 == 1 )
          {
            LOBYTE(v62[0]) = *v20;
            v25 = v62;
LABEL_53:
            n = v21;
            *((_BYTE *)v25 + v21) = 0;
            v26 = n;
            if ( 0x7FFFFFFFFFFFFFFFLL - n <= 3 )
              std::__throw_length_error("basic_string::append");
            v27 = n + 4;
            if ( v60 == v62 )
            {
              v28 = 15;
              if ( v27 <= 0xF )
                goto LABEL_56;
            }
            else
            {
              v28 = v62[0];
              if ( v27 <= v62[0] )
              {
LABEL_56:
                *(_DWORD *)((char *)v60 + n) = 791555631;
                v29 = (char *)v60;
                goto LABEL_57;
              }
            }
            if ( (v27 & 0x8000000000000000LL) == 0LL )
            {
              v38 = 2 * v28;
              if ( v27 < v38 )
              {
                v39 = v38 + 1;
                if ( v38 < 0 )
                {
                  v39 = 0x8000000000000000LL;
                  v38 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v39 = n + 5;
                v38 = n + 4;
              }
              v49 = n + 4;
              src = (char *)n;
              v40 = (char *)operator new(v39);
              v26 = (size_t)src;
              v27 = v49;
              v29 = v40;
              v41 = v60;
              if ( src )
              {
                if ( src == (_BYTE *)&dword_0 + 1 )
                {
                  *v40 = *(_BYTE *)v60;
                }
                else
                {
                  v42 = (size_t)src;
                  v52 = v49;
                  v50 = (size_t)src;
                  srcb = v60;
                  v43 = (char *)memcpy(v40, v60, v42);
                  v27 = v52;
                  v26 = v50;
                  v41 = srcb;
                  v29 = v43;
                }
              }
              *(_DWORD *)&v29[v26] = 791555631;
              if ( v41 != v62 )
              {
                v53 = v29;
                v51 = v27;
                srcc = (void *)v26;
                operator delete(v41);
                v29 = v53;
                v27 = v51;
                v26 = (size_t)srcc;
              }
              v60 = v29;
              v62[0] = v38;
LABEL_57:
              n = v27;
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              v29[v26 + 4] = 0;
              v31 = n;
              v32 = v60;
              ptr = v66;
              v65 = si128;
              if ( n > 0x80 )
              {
                srca = v60;
                sub_2236E10(&ptr, v66, n, 1);
                v32 = srca;
                v37 = (char *)ptr + v65.m128i_i64[0];
              }
              else
              {
                if ( !n )
                  goto LABEL_59;
                v37 = v66;
              }
              memcpy(v37, v32, v31);
              v32 = v60;
              v31 += v65.m128i_i64[0];
LABEL_59:
              v65.m128i_i64[0] = v31;
              if ( v32 != v62 )
                operator delete(v32);
              v33 = *(_DWORD *)(a1 + 48);
              if ( v33 == 17 )
              {
                v63 = 257;
                v34 = "mipsel-nacl/usr/include";
                v59 = 257;
                v57 = 257;
              }
              else
              {
                if ( v33 > 0x11 )
                {
                  if ( v33 == 37 )
                  {
                    v63 = 257;
                    v57 = 257;
                    v59 = 257;
                    v54[0] = "i686-nacl/usr/include";
                    v55 = 259;
                    sub_228A3B0(&ptr, v54, v56, v58, &v60);
                    v60 = ptr;
                    v63 = 261;
                    n = v65.m128i_i64[0];
                    sub_112FA80(a2, a3, (__int64)&v60);
                    sub_228A5F0(&ptr, 0);
                    sub_228A5F0(&ptr, 0);
                    sub_228A5F0(&ptr, 0);
                    v63 = 257;
                    v54[0] = "x86_64-nacl/include";
                    v59 = 257;
                    v57 = 257;
                    v55 = 259;
                    sub_228A3B0(&ptr, v54, v56, v58, &v60);
                    v63 = 261;
                    v60 = ptr;
                    n = v65.m128i_i64[0];
                    sub_112FA80(a2, a3, (__int64)&v60);
                  }
                  else if ( v33 == 38 )
                  {
                    v63 = 257;
                    v59 = 257;
                    v57 = 257;
                    v34 = "x86_64-nacl/usr/include";
                    goto LABEL_66;
                  }
LABEL_75:
                  v35 = ptr;
                  if ( ptr == v66 )
                    return;
LABEL_67:
                  free(v35);
                  return;
                }
                if ( v33 != 1 )
                  goto LABEL_75;
                v63 = 257;
                v59 = 257;
                v57 = 257;
                v34 = "arm-nacl/usr/include";
              }
LABEL_66:
              v54[0] = v34;
              v55 = 259;
              sub_228A3B0(&ptr, v54, v56, v58, &v60);
              v60 = ptr;
              v63 = 261;
              n = v65.m128i_i64[0];
              sub_112FA80(a2, a3, (__int64)&v60);
              sub_228A5F0(&ptr, 0);
              sub_228A5F0(&ptr, 0);
              v57 = 257;
              v59 = 257;
              v63 = 257;
              v55 = 259;
              v54[0] = "include";
              sub_228A3B0(&ptr, v54, v56, v58, &v60);
              v63 = 261;
              v60 = ptr;
              n = v65.m128i_i64[0];
              sub_112FA80(a2, a3, (__int64)&v60);
              v35 = ptr;
              if ( ptr == v66 )
                return;
              goto LABEL_67;
            }
LABEL_98:
            std::__throw_length_error("basic_string::_M_create");
          }
          v25 = v62;
          if ( !v21 )
            goto LABEL_53;
        }
        memcpy(v25, v20, v21);
        v25 = v60;
        goto LABEL_53;
      }
    }
LABEL_9:
    v14 = v5[32];
    v15 = (const void *)v5[31];
    ptr = v66;
    v65 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v14 > 0x80 )
    {
      sub_2236E10(&ptr, v66, v14, 1);
      v36 = (char *)ptr + v65.m128i_i64[0];
    }
    else
    {
      if ( !v14 )
        goto LABEL_11;
      v36 = v66;
    }
    memcpy(v36, v15, v14);
    v14 += v65.m128i_i64[0];
LABEL_11:
    v65.m128i_i64[0] = v14;
    v57 = 257;
    v59 = 257;
    v54[0] = "include";
    v55 = 259;
    v63 = 257;
    sub_228A3B0(&ptr, v54, v56, v58, &v60);
    v63 = 261;
    v60 = ptr;
    n = v65.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v60);
    if ( ptr != v66 )
      free(ptr);
    goto LABEL_13;
  }
  do
  {
    v22 = *v8;
    if ( *(_QWORD *)(*v8 + 16LL) )
      v22 = *(_QWORD *)(*v8 + 16LL);
    ++v8;
    *(_BYTE *)(v22 + 44) |= 1u;
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
