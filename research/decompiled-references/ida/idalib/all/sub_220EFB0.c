_QWORD *__fastcall sub_220EFB0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r14d
  unsigned __int16 *v7; // rdi
  __m128i *v9; // rax
  char v10; // cl
  __int8 *v11; // rsi
  unsigned __int64 i; // rcx
  char v13; // al
  void **v14; // rcx
  _QWORD *v15; // rdx
  __m128i *v16; // rax
  void *v17; // r10
  char *v18; // rsi
  void *v19; // rcx
  size_t v20; // r11
  void **v21; // rax
  char *v22; // r10
  size_t v23; // rcx
  __m128i *v24; // rdi
  _BYTE *v25; // r11
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __m128i *v28; // rax
  unsigned __int16 *v29; // rdi
  unsigned __int64 v30; // rax
  char *v31; // rsi
  __m128i *v32; // r15
  size_t v33; // rax
  void **v34; // rcx
  size_t v35; // r14
  __m128i *v36; // rdi
  unsigned __int64 v37; // rdx
  __m128i *v38; // rax
  _QWORD *v39; // rax
  __int8 *v40; // rdi
  size_t v41; // rdx
  size_t v42; // rdx
  void *v44; // [rsp+8h] [rbp-120h] BYREF
  void **v45; // [rsp+10h] [rbp-118h]
  void *v46; // [rsp+18h] [rbp-110h] BYREF
  void **v47; // [rsp+20h] [rbp-108h]
  size_t v48; // [rsp+28h] [rbp-100h]
  void *dest; // [rsp+30h] [rbp-F8h] BYREF
  __m128 v50; // [rsp+38h] [rbp-F0h] BYREF
  void *v51; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-D0h]
  __int64 v53; // [rsp+60h] [rbp-C8h] BYREF
  void *v54; // [rsp+70h] [rbp-B8h] BYREF
  size_t v55; // [rsp+78h] [rbp-B0h]
  _QWORD v56[2]; // [rsp+80h] [rbp-A8h] BYREF
  void *v57; // [rsp+90h] [rbp-98h] BYREF
  size_t v58; // [rsp+98h] [rbp-90h]
  __m128i v59; // [rsp+A0h] [rbp-88h] BYREF
  void *src; // [rsp+B0h] [rbp-78h] BYREF
  size_t n; // [rsp+B8h] [rbp-70h]
  _QWORD v62[2]; // [rsp+C0h] [rbp-68h] BYREF
  void *v63; // [rsp+D0h] [rbp-58h]
  size_t v64; // [rsp+D8h] [rbp-50h]
  __m128i v65; // [rsp+E0h] [rbp-48h] BYREF

  v50.m128_i8[8] = 0;
  v50.m128_u64[0] = 0;
  v5 = sub_2219FE0(a2 + 160, a2 + 184, a2 + 192);
  dest = &v50.m128_u16[4];
  if ( v5 > 3 )
  {
    v6 = v5;
    v44 = (void *)v5;
    if ( v5 > 0xC )
    {
      sub_99BDC0(&dest, 0, 0, "Invalid", 7u);
      goto LABEL_4;
    }
    src = v62;
    v9 = (__m128i *)operator new(0x15u);
    v10 = (char)v44;
    v11 = &v65.m128i_i8[5];
    src = v9;
    *v9 = _mm_load_si128((const __m128i *)&xmmword_23AB940);
    strcpy(v9[1].m128i_i8, "ment");
    v62[0] = 20;
    n = 20;
    for ( i = 1LL << v10; ; i /= 0xAu )
    {
      --v11;
      v13 = i % 0xA + 48;
      *v11 = v13;
      if ( i <= 9 )
        break;
    }
    v44 = &v54;
    v14 = (void **)(&v65.m128i_u8[5] - (unsigned __int8 *)v11);
    v15 = v56;
    v54 = v56;
    if ( (unsigned __int64)(&v65.m128i_u8[5] - (unsigned __int8 *)v11) > 0xF )
    {
      v46 = v11;
      if ( (__int64)v14 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v39 = (_QWORD *)operator new((unsigned __int64)v14 + 1);
      v14 = (void **)(&v65.m128i_u8[5] - (unsigned __int8 *)v11);
      v11 = (__int8 *)v46;
      v54 = v39;
      v56[0] = v14;
    }
    else
    {
      if ( v14 == (void **)((char *)&dword_0 + 1) )
      {
        LOBYTE(v56[0]) = v13;
        goto LABEL_13;
      }
      if ( !v14 )
      {
LABEL_13:
        v55 = (size_t)v14;
        *((_BYTE *)v14 + (_QWORD)v15) = 0;
        v45 = &v51;
        v51 = &v53;
        v16 = (__m128i *)operator new(0x19u);
        v17 = (void *)v55;
        v18 = (char *)v54;
        v53 = 24;
        v19 = v16;
        v51 = v16;
        v52 = 24;
        v20 = v55 + 24;
        *v16 = _mm_load_si128((const __m128i *)&xmmword_23AB950);
        strcpy(v16[1].m128i_i8, "gnment, ");
        if ( v20 <= 0x18 )
        {
          if ( v17 )
          {
            v48 = v20;
            v47 = (void **)v16;
            v46 = v17;
            memcpy(&v16[1].m128i_u64[1], v18, (size_t)v17);
            v20 = v48;
            v19 = v47;
            v17 = v46;
          }
        }
        else
        {
          if ( v18 != (char *)v44 + 16 && v20 <= v56[0] )
          {
            v21 = (void **)sub_99BDC0(v44, 0, 0, v16, 0x18u);
LABEL_18:
            v22 = (char *)&v57;
            v57 = &v59;
            if ( *v21 == v21 + 2 )
            {
              v59 = _mm_loadu_si128((const __m128i *)v21 + 1);
            }
            else
            {
              v57 = *v21;
              v59.m128i_i64[0] = (__int64)v21[2];
            }
            v23 = (size_t)v21[1];
            *((_BYTE *)v21 + 16) = 0;
            v58 = v23;
            *v21 = v21 + 2;
            v24 = (__m128i *)v57;
            v21[1] = nullptr;
            v25 = (_BYTE *)(v58 + n);
            if ( v24 == &v59 )
              v26 = 15;
            else
              v26 = v59.m128i_i64[0];
            if ( (unsigned __int64)v25 <= v26 )
            {
              if ( n )
              {
                v40 = &v24->m128i_i8[v58];
                if ( n == 1 )
                {
                  *v40 = *(_BYTE *)src;
                }
                else
                {
                  v47 = &v57;
                  v46 = (void *)(v58 + n);
                  memcpy(v40, src, n);
                  v22 = (char *)&v57;
                  v25 = v46;
                }
                v24 = (__m128i *)v57;
              }
            }
            else
            {
              if ( src == v62 )
                v27 = 15;
              else
                v27 = v62[0];
              if ( (unsigned __int64)v25 <= v27 )
              {
                v46 = &v57;
                v28 = (__m128i *)sub_99BDC0(&src, 0, 0, v24, v58);
                v22 = (char *)&v57;
LABEL_28:
                v63 = &v65;
                if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
                {
                  v65 = _mm_loadu_si128(v28 + 1);
                }
                else
                {
                  v63 = (void *)v28->m128i_i64[0];
                  v65.m128i_i64[0] = v28[1].m128i_i64[0];
                }
                v64 = v28->m128i_u64[1];
                v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
                v29 = (unsigned __int16 *)dest;
                v28->m128i_i64[1] = 0;
                v28[1].m128i_i8[0] = 0;
                if ( v63 == &v65 )
                {
                  v42 = v64;
                  if ( v64 )
                  {
                    if ( v64 == 1 )
                    {
                      *(_BYTE *)v29 = v65.m128i_i8[0];
                      v42 = v64;
                      v29 = (unsigned __int16 *)dest;
                    }
                    else
                    {
                      v46 = &v57;
                      memcpy(v29, v63, v64);
                      v29 = (unsigned __int16 *)dest;
                      v22 = (char *)&v57;
                      v42 = v64;
                    }
                  }
                  v50.m128_u64[0] = v42;
                  *((_BYTE *)v29 + v42) = 0;
                  v29 = (unsigned __int16 *)v63;
                  goto LABEL_34;
                }
                if ( v29 == &v50.m128_u16[4] )
                {
                  v46 = (void *)v65.m128i_i64[0];
                  dest = v63;
                  v50 = _mm_loadh_ps((const double *)&v46);
                }
                else
                {
                  v46 = (void *)v65.m128i_i64[0];
                  v30 = v50.m128_u64[1];
                  dest = v63;
                  v50 = _mm_loadh_ps((const double *)&v46);
                  if ( v29 )
                  {
                    v63 = v29;
                    v65.m128i_i64[0] = v30;
LABEL_34:
                    v64 = 0;
                    *(_BYTE *)v29 = 0;
                    if ( v63 != &v65 )
                    {
                      v46 = &v57;
                      operator delete(v63);
                      v22 = (char *)v46;
                    }
                    if ( v57 != v22 + 16 )
                      operator delete(v57);
                    if ( v51 != v45 + 2 )
                      operator delete(v51);
                    if ( v54 != (char *)v44 + 16 )
                      operator delete(v54);
                    if ( src != v62 )
                      operator delete(src);
                    goto LABEL_4;
                  }
                }
                v29 = (unsigned __int16 *)&v65;
                v63 = &v65;
                goto LABEL_34;
              }
              v47 = (void **)(v58 + n);
              v46 = &v57;
              sub_998B30((__int64)&v57, v58, 0, src, n);
              v22 = (char *)&v57;
              v25 = v47;
              v24 = (__m128i *)v57;
            }
            v58 = (size_t)v25;
            v28 = (__m128i *)&v57;
            v25[(_QWORD)v24] = 0;
            goto LABEL_28;
          }
          v47 = (void **)v20;
          v46 = v17;
          sub_998B30((__int64)v45, 0x18u, 0, v18, (size_t)v17);
          v19 = v51;
          v17 = v46;
          v20 = (size_t)v47;
        }
        v52 = v20;
        v21 = v45;
        *((_BYTE *)v17 + (_QWORD)v19 + 24) = 0;
        goto LABEL_18;
      }
      v39 = v56;
    }
    v45 = v14;
    memcpy(v39, v11, (size_t)v14);
    v15 = v54;
    v14 = v45;
    goto LABEL_13;
  }
  v45 = (void **)v5;
  v31 = off_2BEA720[v5];
  v32 = &v65;
  v63 = &v65;
  if ( !v31 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v44 = v31;
  v33 = strlen(v31);
  v34 = v45;
  v35 = v33;
  if ( v33 > 0xF )
  {
    v38 = (__m128i *)operator new(v33 + 1);
    v31 = (char *)v44;
    v34 = v45;
    v65.m128i_i64[0] = v35;
    v63 = v38;
    goto LABEL_66;
  }
  if ( v33 == 1 )
  {
    v65.m128i_i8[0] = *(_BYTE *)v44;
    goto LABEL_48;
  }
  if ( v33 )
  {
    v38 = &v65;
LABEL_66:
    v44 = v34;
    memcpy(v38, v31, v35);
    v32 = (__m128i *)v63;
    v34 = (void **)v44;
  }
LABEL_48:
  v64 = v35;
  v32->m128i_i8[v35] = 0;
  v36 = (__m128i *)dest;
  if ( v63 == &v65 )
  {
    v41 = v64;
    if ( v64 )
    {
      if ( v64 == 1 )
      {
        *(_BYTE *)dest = v65.m128i_i8[0];
        v41 = v64;
        v36 = (__m128i *)dest;
      }
      else
      {
        v44 = v34;
        memcpy(dest, v63, v64);
        v36 = (__m128i *)dest;
        v34 = (void **)v44;
        v41 = v64;
      }
    }
    v50.m128_u64[0] = v41;
    v36->m128i_i8[v41] = 0;
    v36 = (__m128i *)v63;
    goto LABEL_52;
  }
  if ( dest == &v50.m128_u16[4] )
  {
    v44 = (void *)v65.m128i_i64[0];
    dest = v63;
    v50 = _mm_loadh_ps((const double *)&v44);
    goto LABEL_81;
  }
  v44 = (void *)v65.m128i_i64[0];
  v37 = v50.m128_u64[1];
  dest = v63;
  v50 = _mm_loadh_ps((const double *)&v44);
  if ( !v36 )
  {
LABEL_81:
    v36 = &v65;
    v63 = &v65;
    goto LABEL_52;
  }
  v63 = v36;
  v65.m128i_i64[0] = v37;
LABEL_52:
  v64 = 0;
  v36->m128i_i8[0] = 0;
  if ( v63 != &v65 )
  {
    v44 = v34;
    operator delete(v63);
    LODWORD(v34) = (_DWORD)v44;
  }
  v6 = (unsigned int)v34;
LABEL_4:
  sub_221F830(a2, a3, v6, dest, v50.m128_u64[0]);
  v7 = (unsigned __int16 *)dest;
  *a1 = 0;
  if ( v7 != &v50.m128_u16[4] )
    operator delete(v7);
  return a1;
}
