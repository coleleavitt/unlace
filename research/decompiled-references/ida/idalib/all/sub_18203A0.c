void __fastcall sub_18203A0(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v5; // rbp
  void *v6; // r15
  size_t v7; // r14
  _QWORD *v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // rsi
  __m128i *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rcx
  __m128i *v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __m128i v18; // xmm2
  __int64 v19; // rax
  __int64 v20; // rcx
  __int32 v21; // edx
  size_t v22; // r15
  __m128i *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void **v28; // r12
  void **v29; // rbx
  int v30; // edx
  __int32 v31; // edx
  __m128i *v32; // rdx
  __int32 v33; // ecx
  __int32 v34; // edx
  __m128i *v35; // r15
  __m128i *v36; // r15
  __int32 v37; // ecx
  __int32 v38; // esi
  __int32 v39; // edx
  __int32 v40; // edx
  __int32 v41; // esi
  const __m128i *s1c; // [rsp+10h] [rbp-178h]
  void *s1; // [rsp+10h] [rbp-178h]
  void *s1a; // [rsp+10h] [rbp-178h]
  void *s1b; // [rsp+10h] [rbp-178h]
  void *v48; // [rsp+18h] [rbp-170h]
  unsigned int v49; // [rsp+28h] [rbp-160h] BYREF
  int v50; // [rsp+2Ch] [rbp-15Ch] BYREF
  void *v51; // [rsp+30h] [rbp-158h] BYREF
  size_t n; // [rsp+38h] [rbp-150h]
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v54; // [rsp+48h] [rbp-140h]
  _QWORD v55[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v56[2]; // [rsp+60h] [rbp-128h] BYREF
  __m128i v57; // [rsp+70h] [rbp-118h]
  __int64 v58; // [rsp+80h] [rbp-108h]
  void *src; // [rsp+C0h] [rbp-C8h] BYREF
  size_t v60; // [rsp+C8h] [rbp-C0h]
  _BYTE v61[16]; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v62; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-98h]

  v51 = nullptr;
  n = 0;
  v49 = 0;
  if ( !(unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v51, &v49, a4, a5) )
    return;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  src = v61;
  sub_18047E0(&src, *(_BYTE **)(v5 + 216), *(_QWORD *)(v5 + 216) + *(_QWORD *)(v5 + 224));
  v6 = src;
  v7 = v60;
  v62 = _mm_loadu_si128((const __m128i *)(v5 + 248));
  v63 = *(_QWORD *)(v5 + 264);
  ptr = v55;
  v54 = 0x200000000LL;
  v55[0] = v56;
  if ( (char *)src + v60 && !src )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( v60 > 0xF )
  {
    if ( (v60 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v8 = (_QWORD *)operator new(v60 + 1);
    v56[0] = v7;
    v55[0] = v8;
LABEL_45:
    memcpy(v8, v6, v7);
    v8 = (_QWORD *)v55[0];
    goto LABEL_8;
  }
  if ( v60 == 1 )
  {
    LOBYTE(v56[0]) = *(_BYTE *)src;
    v8 = v56;
    goto LABEL_8;
  }
  v8 = v56;
  if ( v60 )
    goto LABEL_45;
LABEL_8:
  v55[1] = v7;
  *((_BYTE *)v8 + v7) = 0;
  v9 = _mm_load_si128(&v62);
  v58 = v63;
  v57 = v9;
  v10 = (unsigned int)(v54 + 1);
  LODWORD(v54) = v54 + 1;
  if ( src != v61 )
  {
    operator delete(src);
    v10 = (unsigned int)v54;
  }
  v11 = *(_QWORD *)(a1 + 248);
  v12 = (__m128i *)ptr;
  v13 = *(_QWORD *)(v11 + 17456);
  v14 = 56 * v10;
  v15 = (__m128i *)((char *)ptr + 56 * v10);
  if ( v13 )
  {
    v16 = v10 + 1;
    v17 = v13 + 216;
    if ( v16 > HIDWORD(v54) )
    {
      if ( (unsigned __int64)ptr > v17 || (unsigned __int64)v15 <= v17 )
      {
        s1b = (void *)v17;
        v36 = (__m128i *)sub_2237400(&ptr, v55, v16, 56, &src);
        sub_10FC700((__int64)&ptr, v36);
        v17 = (unsigned __int64)s1b;
        if ( ptr == v55 )
        {
          HIDWORD(v54) = (_DWORD)src;
          ptr = v36;
        }
        else
        {
          v48 = src;
          free(ptr);
          ptr = v36;
          v17 = (unsigned __int64)s1b;
          HIDWORD(v54) = (_DWORD)v48;
        }
        v15 = (__m128i *)((char *)v36 + 56 * (unsigned int)v54);
      }
      else
      {
        s1a = (void *)(v17 - (_QWORD)ptr);
        v35 = (__m128i *)sub_2237400(&ptr, v55, v16, 56, &src);
        sub_10FC700((__int64)&ptr, v35);
        if ( ptr == v55 )
        {
          ptr = v35;
          HIDWORD(v54) = (_DWORD)src;
        }
        else
        {
          v48 = src;
          free(ptr);
          ptr = v35;
          HIDWORD(v54) = (_DWORD)v48;
        }
        v17 = (unsigned __int64)s1a + (_QWORD)v35;
        v15 = (__m128i *)((char *)v35 + 56 * (unsigned int)v54);
      }
    }
    s1c = (const __m128i *)v17;
    v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
    sub_18047E0(v15, *(_BYTE **)v17, *(_QWORD *)v17 + *(_QWORD *)(v17 + 8));
    v12 = (__m128i *)ptr;
    v18 = _mm_loadu_si128(s1c + 2);
    LODWORD(v54) = v54 + 1;
    v19 = (unsigned int)v54;
    v15[2] = v18;
    v14 = 56 * v19;
    v15[3].m128i_i32[0] = s1c[3].m128i_i32[0];
    v15[3].m128i_i32[1] = s1c[3].m128i_i32[1];
    v15 = (__m128i *)((char *)v12 + 56 * v19);
  }
  else
  {
    v30 = *(_DWORD *)(*(_QWORD *)(v11 + 17448) + 248LL);
    if ( ((v30 - 25) & 0xFFFFFFEE) == 0 || (unsigned int)(v30 - 49) <= 2 )
      goto LABEL_35;
  }
  v20 = 0x6DB6DB6DB6DB6DB7LL * (v14 >> 3);
  if ( v20 >> 2 )
  {
    v21 = v12[2].m128i_i32[0];
    if ( (unsigned int)(v21 - 13) > 1 && v21 != 38 )
    {
      v31 = v12[5].m128i_i32[2];
      if ( (unsigned int)(v31 - 13) <= 1 || v31 == 38 )
      {
        v12 = (__m128i *)((char *)v12 + 56);
      }
      else
      {
        v32 = &v12[14 * (v20 >> 2)];
        while ( 1 )
        {
          v33 = v12[9].m128i_i32[0];
          if ( (unsigned int)(v33 - 13) <= 1 || v33 == 38 )
          {
            v12 += 7;
            goto LABEL_16;
          }
          v37 = v12[12].m128i_i32[2];
          if ( (unsigned int)(v37 - 13) <= 1 || v37 == 38 )
          {
            v12 = (__m128i *)((char *)v12 + 168);
            goto LABEL_16;
          }
          if ( &v12[14] == v32 )
          {
            v12 = v32;
            v20 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v15 - (char *)v32) >> 3);
            goto LABEL_70;
          }
          v38 = v12[16].m128i_i32[0];
          if ( (unsigned int)(v38 - 13) <= 1 || v38 == 38 )
          {
            v12 += 14;
            goto LABEL_16;
          }
          v41 = v12[19].m128i_i32[2];
          if ( (unsigned int)(v41 - 13) <= 1 || v41 == 38 )
            break;
          v12 += 14;
        }
        v12 = (__m128i *)((char *)v12 + 280);
      }
    }
    goto LABEL_16;
  }
LABEL_70:
  if ( v20 == 2 )
    goto LABEL_99;
  if ( v20 == 3 )
  {
    v39 = v12[2].m128i_i32[0];
    if ( (unsigned int)(v39 - 13) <= 1 || v39 == 38 )
      goto LABEL_16;
    v12 = (__m128i *)((char *)v12 + 56);
LABEL_99:
    v40 = v12[2].m128i_i32[0];
    if ( (unsigned int)(v40 - 13) <= 1 || v40 == 38 )
      goto LABEL_16;
    v12 = (__m128i *)((char *)v12 + 56);
    goto LABEL_73;
  }
  if ( v20 != 1 )
    goto LABEL_75;
LABEL_73:
  v34 = v12[2].m128i_i32[0];
  if ( (unsigned int)(v34 - 13) > 1 && v34 != 38 )
    goto LABEL_75;
LABEL_16:
  if ( v12 == v15 )
  {
LABEL_75:
    sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), v49, 0x9Fu, 0);
    sub_15DD120((__int64)&src, (__int64)a3);
    goto LABEL_52;
  }
  if ( !(unsigned __int8)sub_B0FD90((__int64)v51, n, &v50) )
    goto LABEL_51;
  v22 = n;
  s1 = v51;
  if ( (unsigned int)(v12[2].m128i_i32[0] - 13) > 1 )
  {
    if ( j__strlen("small") == v22 )
    {
      if ( !v22 || !memcmp(s1, "small", v22) )
        goto LABEL_25;
      if ( j__strlen("large") != v22 )
        goto LABEL_51;
    }
    else
    {
      if ( j__strlen("large") != v22 )
        goto LABEL_51;
      if ( !v22 )
        goto LABEL_25;
    }
    if ( !memcmp(s1, "large", v22) )
      goto LABEL_25;
    goto LABEL_51;
  }
  if ( j__strlen("normal") == v22 )
  {
    if ( !v22 || !memcmp(s1, "normal", v22) )
      goto LABEL_25;
    if ( v22 != j__strlen("medium") )
      goto LABEL_23;
    goto LABEL_62;
  }
  if ( j__strlen("medium") == v22 )
  {
    if ( !v22 )
      goto LABEL_25;
LABEL_62:
    if ( !memcmp(s1, "medium", v22) )
      goto LABEL_25;
LABEL_23:
    if ( j__strlen("extreme") == v22 )
      goto LABEL_24;
    goto LABEL_51;
  }
  if ( j__strlen("extreme") == v22 )
  {
    if ( !v22 )
      goto LABEL_25;
LABEL_24:
    if ( !memcmp(s1, "extreme", v22) )
    {
LABEL_25:
      v23 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B0FD60(v23, *(_QWORD *)(a1 + 248), a3, v50);
      sub_B8CC60(a2, (__int64)v23, v24, v25, v26, v27);
      v28 = (void **)ptr;
      v29 = (void **)((char *)ptr + 56 * (unsigned int)v54);
      if ( ptr != v29 )
      {
        do
        {
          while ( 1 )
          {
            v29 -= 7;
            if ( *v29 == v29 + 2 )
              break;
            operator delete(*v29);
            if ( v28 == v29 )
              goto LABEL_28;
          }
        }
        while ( v28 != v29 );
LABEL_28:
        v29 = (void **)ptr;
      }
      if ( v29 != v55 )
        free(v29);
      return;
    }
  }
LABEL_51:
  sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), v49, 0xC46u, 0);
  sub_1682BA0((__int64)&src, (__int64)&v51);
LABEL_52:
  sub_15F7200(&src);
  v12 = (__m128i *)ptr;
  v15 = (__m128i *)((char *)ptr + 56 * (unsigned int)v54);
LABEL_35:
  if ( v12 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v15 = (__m128i *)((char *)v15 - 56);
        if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
          break;
        operator delete((void *)v15->m128i_i64[0]);
        if ( v15 == v12 )
          goto LABEL_38;
      }
    }
    while ( v15 != v12 );
LABEL_38:
    v15 = (__m128i *)ptr;
  }
  if ( v15 != (__m128i *)v55 )
    free(v15);
}
