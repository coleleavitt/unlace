void __fastcall sub_4E5390(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // edi
  char *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // r8
  char *v10; // rsi
  char *v11; // rbx
  int v12; // edx
  size_t v13; // r13
  __int8 *v14; // rsi
  size_t *v15; // rax
  size_t *v16; // rax
  int v17; // esi
  char *v18; // r10
  char *v19; // rbx
  int v20; // edx
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  _BYTE *v23; // r8
  size_t v24; // r10
  _BYTE *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128i *v31; // r8
  char *v32; // r15
  size_t v33; // rdx
  char *v34; // r10
  char *v35; // rdx
  _BYTE *v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rdx
  char *v39; // rdi
  __int64 *v40; // rax
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __m128i v45; // xmm0
  size_t v46; // r15
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  char *v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rsi
  unsigned int *v54; // [rsp+8h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-98h]
  size_t na; // [rsp+10h] [rbp-98h]
  size_t nb; // [rsp+10h] [rbp-98h]
  __m128i *nc; // [rsp+10h] [rbp-98h]
  size_t *nd; // [rsp+10h] [rbp-98h]
  char *v60; // [rsp+18h] [rbp-90h]
  size_t v61; // [rsp+18h] [rbp-90h]
  size_t v62; // [rsp+18h] [rbp-90h]
  __int64 v63; // [rsp+18h] [rbp-90h]
  void *v64; // [rsp+20h] [rbp-88h]
  char *v65; // [rsp+20h] [rbp-88h]
  void *v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+28h] [rbp-80h]
  void *v68; // [rsp+30h] [rbp-78h] BYREF
  __m128 dest; // [rsp+38h] [rbp-70h] BYREF
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __m128i v71[5]; // [rsp+58h] [rbp-50h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_DWORD *)(a1 + 76);
  v54 = (unsigned int *)(a2 + 16);
  v5 = *(char **)(a2 + 16);
  v6 = v3 - 1;
  v68 = &dest.m128_u16[4];
  v3 *= 48;
  v7 = 3LL * (v4 & v6);
  v8 = &v5[v3];
  v9 = 16 * v7;
  strcpy(&dest.m128_i8[8], "union");
  dest.m128_u64[0] = 5;
  v10 = &v5[v9];
  if ( v9 == v3 )
  {
LABEL_18:
    while ( v10 != v5 )
    {
      v20 = *((_DWORD *)v5 + 1);
      if ( v20 == 2 )
      {
        if ( v4 == *(_DWORD *)v5 && v4 == *((_DWORD *)v5 + 2) )
        {
          v11 = v5;
          goto LABEL_8;
        }
      }
      else if ( !v20 )
      {
        break;
      }
      v5 += 48;
    }
LABEL_26:
    sub_4D9940((__int64 *)&src, "union");
    sub_4DC570(v54, *(_DWORD *)(a1 + 76), src, (char *)v71[0].m128i_i64[0]);
    sub_233E40((__int64)&src);
    v17 = *(_DWORD *)(a1 + 80);
    v18 = (char *)v68;
    v19 = (char *)dest.m128_u64[0];
    if ( v17 == -1 )
      goto LABEL_15;
LABEL_27:
    v21 = (__int64)(v19 + 9);
    v71[0].m128i_i8[8] = 0;
    src = &v71[0].m128i_u64[1];
    v71[0].m128i_i64[0] = 0;
    if ( (unsigned __int64)(v19 + 9) <= 0xF )
    {
      v27 = &v71[0].m128i_i64[1];
      v26 = 9;
    }
    else
    {
      if ( v21 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( (unsigned __int64)v21 <= 0x1D )
      {
        v21 = 30;
        v22 = 31;
      }
      else
      {
        v22 = (unsigned __int64)(v19 + 10);
        if ( (__int64)(v19 + 10) < 0 )
          std::__throw_bad_alloc();
      }
      n = (size_t)v18;
      v23 = (_BYTE *)operator new(v22);
      v24 = n;
      if ( v71[0].m128i_i64[0] )
      {
        if ( v71[0].m128i_i64[0] != -1 )
        {
          v25 = memcpy(v23, src, v71[0].m128i_i64[0] + 1);
          v24 = n;
          v23 = v25;
        }
      }
      else
      {
        *v23 = *(_BYTE *)src;
      }
      v60 = v23;
      na = v24;
      sub_233E40((__int64)&src);
      v71[0].m128i_i64[1] = v21;
      v18 = (char *)na;
      src = v60;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v71[0].m128i_i64[0]) <= 8 )
        std::__throw_length_error("basic_string::append");
      v26 = v71[0].m128i_i64[0] + 9;
      v27 = (__int64 *)&v60[v71[0].m128i_i64[0]];
      if ( v21 < (unsigned __int64)(v71[0].m128i_i64[0] + 9) )
      {
        if ( v26 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v28 = 2 * v21;
        if ( v26 < (unsigned __int64)v28 )
        {
          if ( v28 >= 0 )
          {
            v66 = (void *)(v71[0].m128i_i64[0] + 9);
            v63 = v71[0].m128i_i64[0];
            v48 = operator new(v28 + 1);
            v31 = (__m128i *)src;
            v34 = (char *)na;
            v32 = (char *)v48;
            v33 = v63;
            v30 = (__int64)v66;
            goto LABEL_40;
          }
        }
        else
        {
          v64 = (void *)(v71[0].m128i_i64[0] + 9);
          v61 = na;
          nb = v71[0].m128i_i64[0];
          if ( v71[0].m128i_i64[0] + 10 >= 0 )
          {
            v29 = operator new(v71[0].m128i_i64[0] + 10);
            v30 = (__int64)v64;
            v31 = (__m128i *)src;
            v32 = (char *)v29;
            v33 = nb;
            v34 = (char *)v61;
            v28 = (__int64)v64;
LABEL_40:
            v67 = v30;
            v65 = v34;
            v62 = v33;
            nc = v31;
            memcpy(v32, v31, v33);
            v18 = v65;
            v26 = v67;
            v35 = &v32[v62];
            *(_QWORD *)v35 = 0x666F2061746C6564LL;
            v35[8] = 32;
            if ( nc != (__m128i *)&v71[0].m128i_u64[1] )
            {
              operator delete(nc, v71[0].m128i_i64[1] + 1);
              v26 = v67;
              v18 = v65;
            }
            src = v32;
            v71[0].m128i_i64[1] = v28;
LABEL_45:
            v71[0].m128i_i64[0] = v26;
            v32[v26] = 0;
            if ( 0x7FFFFFFFFFFFFFFFLL - v71[0].m128i_i64[0] < (unsigned __int64)v19 )
              std::__throw_length_error("basic_string::append");
            v36 = src;
            v37 = (unsigned __int64)&v19[v71[0].m128i_i64[0]];
            if ( src == &v71[0].m128i_u64[1] )
              v38 = 15;
            else
              v38 = v71[0].m128i_u64[1];
            if ( v38 < v37 )
            {
              sub_23A830(&src, v71[0].m128i_u64[0], 0, v18, (size_t)v19);
              v36 = src;
            }
            else if ( v19 )
            {
              v39 = (char *)src + v71[0].m128i_i64[0];
              if ( v19 == (_BYTE *)&dword_0 + 1 )
                *v39 = *v18;
              else
                memcpy(v39, v18, (size_t)v19);
              v36 = src;
            }
            v71[0].m128i_i64[0] = v37;
            v36[v37] = 0;
            v40 = (__int64 *)v68;
            v41 = (__int64 *)v68;
            if ( v68 == &dest.m128_u16[4] )
            {
              if ( src != &v71[0].m128i_u64[1] )
              {
                v45 = _mm_loadu_si128(v71);
                v68 = src;
                dest = (__m128)v45;
                goto LABEL_68;
              }
              v42 = v71[0].m128i_i64[0];
              v43 = v71[0].m128i_i64[0];
            }
            else
            {
              v42 = v71[0].m128i_i64[0];
              v43 = v71[0].m128i_i64[0];
              if ( src != &v71[0].m128i_u64[1] )
              {
                v68 = src;
                v44 = dest.m128_i64[1];
                dest = _mm_loadh_ps((const double *)&v71[0].m128i_i64[1]);
                if ( v40 )
                {
                  src = v40;
                  v71[0].m128i_i64[1] = v44;
LABEL_57:
                  v71[0].m128i_i64[0] = 0;
                  *(_BYTE *)v40 = 0;
                  if ( src != &v71[0].m128i_u64[1] )
                    operator delete(src, v71[0].m128i_i64[1] + 1);
                  v17 = *(_DWORD *)(a1 + 80);
                  v18 = (char *)v68;
                  v19 = (char *)dest.m128_u64[0];
                  goto LABEL_15;
                }
LABEL_68:
                src = &v71[0].m128i_u64[1];
                v40 = &v71[0].m128i_i64[1];
                goto LABEL_57;
              }
            }
            if ( !v42 )
            {
LABEL_83:
              dest.m128_u64[0] = v43;
              *((_BYTE *)v40 + v43) = 0;
              v40 = (__int64 *)src;
              goto LABEL_57;
            }
            if ( v42 == 1 )
            {
              *(_BYTE *)v68 = v71[0].m128i_i8[8];
              v43 = v71[0].m128i_i64[0];
              v40 = (__int64 *)v68;
              goto LABEL_83;
            }
            if ( (unsigned int)v42 >= 8 )
            {
              *(_QWORD *)v68 = v71[0].m128i_i64[1];
              *(__int64 *)((char *)v41 + (unsigned int)v42 - 8) = *(__int64 *)((char *)v71[0].m128i_i64
                                                                             + (unsigned int)v42);
              v49 = (unsigned __int64)(v41 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v50 = (char *)((char *)&v71[0].m128i_u64[1] - ((char *)v41 - v49));
              if ( (((_DWORD)v42 + (_DWORD)v41 - (_DWORD)v49) & 0xFFFFFFF8) >= 8 )
              {
                v51 = (v42 + (_DWORD)v41 - v49) & 0xFFFFFFF8;
                v52 = 0;
                do
                {
                  v53 = v52;
                  v52 += 8;
                  *(_QWORD *)(v49 + v53) = *(_QWORD *)&v50[v53];
                }
                while ( v52 < v51 );
              }
            }
            else
            {
              if ( (v42 & 4) != 0 )
              {
                *(_DWORD *)v68 = v71[0].m128i_i32[2];
                *(_DWORD *)((char *)v41 + (unsigned int)v42 - 4) = *(__int32 *)((char *)&v71[0].m128i_i32[1]
                                                                              + (unsigned int)v42);
                v41 = (__int64 *)v68;
                v42 = v71[0].m128i_i64[0];
                goto LABEL_82;
              }
              if ( !(_DWORD)v42 )
              {
LABEL_82:
                v43 = v42;
                v40 = v41;
                goto LABEL_83;
              }
              *(_BYTE *)v68 = v71[0].m128i_i8[8];
              if ( (v42 & 2) != 0 )
              {
                *(_WORD *)((char *)v41 + (unsigned int)v42 - 2) = *(__int16 *)((char *)&v71[0].m128i_i16[3]
                                                                             + (unsigned int)v42);
                v41 = (__int64 *)v68;
                v42 = v71[0].m128i_i64[0];
                goto LABEL_82;
              }
            }
            v41 = (__int64 *)v68;
            v42 = v71[0].m128i_i64[0];
            goto LABEL_82;
          }
        }
        std::__throw_bad_alloc();
      }
    }
LABEL_44:
    *((_BYTE *)v27 + 8) = 32;
    *v27 = 0x666F2061746C6564LL;
    v32 = (char *)src;
    goto LABEL_45;
  }
  v11 = &v5[v9];
  while ( 1 )
  {
    v12 = *((_DWORD *)v11 + 1);
    if ( v12 != 2 )
    {
      if ( !v12 )
        goto LABEL_26;
      goto LABEL_4;
    }
    if ( v4 == *(_DWORD *)v11 && v4 == *((_DWORD *)v11 + 2) )
      break;
LABEL_4:
    v11 += 48;
    if ( v8 == v11 )
      goto LABEL_18;
  }
LABEL_8:
  if ( &v68 == (void **)(v11 + 16) )
  {
    v17 = *(_DWORD *)(a1 + 80);
    if ( v17 == -1 )
    {
      v19 = &byte_5;
      v18 = &dest.m128_i8[8];
      goto LABEL_15;
    }
    v71[0].m128i_i8[8] = 0;
    v19 = &byte_5;
    v18 = &dest.m128_i8[8];
    src = &v71[0].m128i_u64[1];
    v27 = &v71[0].m128i_i64[1];
    v26 = 9;
    goto LABEL_44;
  }
  v13 = *((_QWORD *)v11 + 3);
  if ( v13 > 0xF )
  {
    if ( (v13 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v13 <= 0x1D )
    {
      v46 = 30;
      v47 = 31;
    }
    else
    {
      v46 = *((_QWORD *)v11 + 3);
      v47 = v13 + 1;
      if ( (__int64)(v13 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    nd = (size_t *)operator new(v47);
    sub_233E40((__int64)&v68);
    v15 = nd;
    dest.m128_u64[1] = v46;
    v14 = *((__int8 **)v11 + 2);
    v68 = nd;
LABEL_73:
    memcpy(v15, v14, v13);
    v16 = (size_t *)v68;
    goto LABEL_14;
  }
  if ( !v13 )
    goto LABEL_13;
  v14 = *((__int8 **)v11 + 2);
  v15 = &dest.m128_u64[1];
  if ( v13 != 1 )
    goto LABEL_73;
  dest.m128_i8[8] = *v14;
LABEL_13:
  v16 = &dest.m128_u64[1];
LABEL_14:
  dest.m128_u64[0] = v13;
  *((_BYTE *)v16 + v13) = 0;
  v17 = *(_DWORD *)(a1 + 80);
  v18 = (char *)v68;
  v19 = (char *)dest.m128_u64[0];
  if ( v17 != -1 )
    goto LABEL_27;
LABEL_15:
  sub_4DC570(v54, v17, v18, v19);
  if ( v68 != &dest.m128_u16[4] )
    operator delete(v68, dest.m128_u64[1] + 1);
}

