void __fastcall sub_1390CD0(__int64 a1)
{
  _BYTE *v2; // r15
  size_t v3; // rbp
  size_t *v4; // rax
  size_t *v5; // rax
  size_t *v6; // rdi
  size_t v7; // rax
  size_t v8; // rax
  std::_V2 *v9; // r10
  __int64 v10; // rsi
  std::_V2 *v11; // r9
  std::_V2 *v12; // r8
  __int64 v13; // rcx
  char v14; // al
  int v15; // eax
  _BYTE *v16; // rcx
  std::_V2 *v17; // rdi
  char v18; // al
  size_t v19; // rdx
  void *v20; // rdi
  int v21; // eax
  char *v22; // rdi
  char *v23; // rdi
  void **v24; // [rsp+0h] [rbp-440h] BYREF
  void *s1; // [rsp+8h] [rbp-438h]
  char v26; // [rsp+17h] [rbp-429h]
  std::_V2 *v27; // [rsp+18h] [rbp-428h]
  std::_V2 *v28; // [rsp+20h] [rbp-420h]
  std::_V2 *v29; // [rsp+28h] [rbp-418h]
  size_t n; // [rsp+30h] [rbp-410h]
  int v31; // [rsp+38h] [rbp-408h]
  __int64 v32; // [rsp+40h] [rbp-400h]
  const char *v33; // [rsp+48h] [rbp-3F8h] BYREF
  __int16 v34; // [rsp+68h] [rbp-3D8h]
  void *v35; // [rsp+78h] [rbp-3C8h] BYREF
  size_t v36; // [rsp+80h] [rbp-3C0h]
  __int16 v37; // [rsp+98h] [rbp-3A8h]
  std::_V2 *v38; // [rsp+A8h] [rbp-398h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-390h]
  _WORD v40[132]; // [rsp+C0h] [rbp-380h] BYREF
  void *v41; // [rsp+1C8h] [rbp-278h] BYREF
  __m128i v42; // [rsp+1D0h] [rbp-270h]
  _WORD v43[132]; // [rsp+1E0h] [rbp-260h] BYREF
  void *ptr; // [rsp+2E8h] [rbp-158h] BYREF
  size_t v45[2]; // [rsp+2F0h] [rbp-150h] BYREF
  _BYTE v46[320]; // [rsp+300h] [rbp-140h] BYREF

  if ( !*(_DWORD *)(a1 + 108) )
    return;
  v2 = *(_BYTE **)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 64);
  *(_WORD *)(a1 + 146) = 257;
  v4 = &v45[1];
  ptr = &v45[1];
  if ( !v2 )
  {
    LOBYTE(v45[1]) = 0;
    v6 = *(size_t **)(a1 + 152);
    v19 = 0;
LABEL_38:
    *(_QWORD *)(a1 + 160) = v19;
    *((_BYTE *)v6 + v19) = 0;
    v6 = (size_t *)ptr;
    goto LABEL_10;
  }
  if ( v3 > 0xF )
  {
    if ( (v3 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v4 = (size_t *)operator new(v3 + 1);
    v45[1] = v3;
    ptr = v4;
LABEL_45:
    memcpy(v4, v2, v3);
    v4 = (size_t *)ptr;
    goto LABEL_6;
  }
  if ( v3 == 1 )
  {
    LOBYTE(v45[1]) = *v2;
    goto LABEL_6;
  }
  if ( v3 )
    goto LABEL_45;
LABEL_6:
  v45[0] = v3;
  *((_BYTE *)v4 + v3) = 0;
  v5 = (size_t *)(a1 + 168);
  v6 = *(size_t **)(a1 + 152);
  if ( ptr == &v45[1] )
  {
    v19 = v45[0];
    if ( v45[0] )
    {
      if ( v45[0] == 1 )
        *(_BYTE *)v6 = v45[1];
      else
        memcpy(v6, ptr, v45[0]);
      v19 = v45[0];
      v6 = *(size_t **)(a1 + 152);
    }
    goto LABEL_38;
  }
  if ( v6 == v5 )
  {
    v24 = (void **)v45[1];
    *(_QWORD *)(a1 + 152) = ptr;
    *(__m128 *)(a1 + 160) = _mm_loadh_ps((const double *)&v24);
  }
  else
  {
    v24 = (void **)v45[1];
    v7 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 152) = ptr;
    *(__m128 *)(a1 + 160) = _mm_loadh_ps((const double *)&v24);
    if ( v6 )
    {
      ptr = v6;
      v45[1] = v7;
      goto LABEL_10;
    }
  }
  v6 = &v45[1];
  ptr = &v45[1];
LABEL_10:
  v45[0] = 0;
  *(_BYTE *)v6 = 0;
  if ( ptr != &v45[1] )
    operator delete(ptr);
  v38 = (std::_V2 *)v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v3 > 0x100 )
  {
    sub_2236E10(&v38, v40, v3, 1);
    v22 = (char *)v38 + si128.m128i_i64[0];
  }
  else
  {
    v8 = 0;
    if ( !v3 )
      goto LABEL_14;
    v22 = (char *)v40;
  }
  memcpy(v22, v2, v3);
  v8 = v3 + si128.m128i_i64[0];
LABEL_14:
  si128.m128i_i64[0] = v8;
  ptr = v46;
  v35 = v2;
  v41 = v43;
  s1 = v43;
  v42 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(__m128i *)v45 = v42;
  v37 = 261;
  v36 = v3;
  v24 = &v35;
  if ( (unsigned int)sub_228E700(&v35, &v38, 0) )
  {
    v16 = ptr;
    LOBYTE(s1) = 1;
  }
  else
  {
    v9 = v38;
    v10 = v42.m128i_i64[0];
    v11 = (std::_V2 *)((char *)v38 + si128.m128i_i64[0]);
    n = si128.m128i_i64[0];
    if ( v38 != (std::_V2 *)((char *)v38 + si128.m128i_i64[0]) )
    {
      v12 = v38;
      do
      {
        while ( 1 )
        {
          v13 = *(unsigned __int8 *)v12;
          v14 = *(_BYTE *)v12;
          if ( (byte_2411740[2 * v13] & 0x40) != 0 )
            v14 = v13 - 32;
          if ( (unsigned __int64)(v10 + 1) > v42.m128i_i64[1] )
            break;
          v12 = (std::_V2 *)((char *)v12 + 1);
          *((_BYTE *)v41 + v10) = v14;
          v10 = ++v42.m128i_i64[0];
          if ( v12 == v11 )
            goto LABEL_22;
        }
        v29 = v11;
        v28 = v9;
        v27 = v12;
        v26 = v14;
        sub_2236E10(&v41, s1, v10 + 1, 1);
        v11 = v29;
        v12 = (std::_V2 *)((char *)v27 + 1);
        v9 = v28;
        *((_BYTE *)v41 + v42.m128i_i64[0]) = v26;
        v10 = ++v42.m128i_i64[0];
      }
      while ( v12 != v11 );
    }
LABEL_22:
    v36 = v10;
    s1 = v9;
    v37 = 261;
    v35 = v41;
    v15 = sub_228E700(v24, &ptr, 0);
    v16 = ptr;
    LOBYTE(s1) = v15 || n != v45[0] || n && (v20 = s1, s1 = ptr, v21 = memcmp(v20, ptr, n), v16 = s1, v21);
  }
  if ( v16 != v46 )
    free(v16);
  if ( v41 != v43 )
    free(v41);
  v17 = v38;
  if ( v38 != (std::_V2 *)v40 )
    free(v38);
  v18 = (char)s1;
  *(_BYTE *)(a1 + 145) = 1;
  *(_WORD *)(a1 + 148) = 256;
  *(_BYTE *)(a1 + 144) = v18;
  v31 = 0;
  v32 = std::_V2::system_category(v17);
  ptr = v46;
  *(__m128i *)v45 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v3 > 0x100 )
  {
    sub_2236E10(&ptr, v46, v3, 1);
    v23 = (char *)ptr + v45[0];
LABEL_51:
    memcpy(v23, v2, v3);
    v3 += v45[0];
    goto LABEL_32;
  }
  if ( v3 )
  {
    v23 = v46;
    goto LABEL_51;
  }
LABEL_32:
  v40[4] = 257;
  v43[4] = 257;
  v37 = 257;
  v34 = 259;
  v33 = "vfs.yaml";
  v45[0] = v3;
  sub_228A3B0(&ptr, &v33, v24, &v38, &v41);
  sub_227D450((std::_V2 *)&v41);
  if ( v31 )
    *(_BYTE *)(a1 + 88) = 1;
  else
    sub_226CC60(a1 + 120, &v41);
  sub_227B600(&v41);
  if ( ptr != v46 )
    free(ptr);
}
