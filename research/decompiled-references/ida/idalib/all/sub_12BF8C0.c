void __fastcall sub_12BF8C0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  size_t v4; // r13
  _QWORD *v5; // rax
  size_t v6; // r13
  size_t v7; // rdx
  int v8; // r15d
  __int8 *v9; // rsi
  __int64 v10; // rcx
  bool v11; // dl
  __m128i *v12; // rax
  size_t v13; // r15
  size_t v14; // r9
  unsigned __int64 v15; // rdx
  char *v16; // rax
  _BYTE *v17; // rdi
  size_t v18; // r15
  unsigned __int64 v19; // rax
  _BYTE *v20; // rdi
  __m128i *v21; // rax
  size_t v22; // rbp
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rdi
  size_t v25; // rbp
  unsigned __int64 v26; // rax
  _BYTE *v27; // rdi
  __m128i *v28; // rax
  size_t v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  size_t v32; // rbp
  __int8 *v33; // rsi
  __m128i *v34; // rdi
  size_t v35; // rsi
  unsigned __int64 v36; // rax
  size_t v37; // r8
  size_t v38; // rbp
  __int8 *v39; // rcx
  __int8 *v40; // rdi
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  size_t v45; // [rsp+18h] [rbp-160h]
  size_t v46; // [rsp+18h] [rbp-160h]
  size_t v47; // [rsp+18h] [rbp-160h]
  __int64 v48; // [rsp+18h] [rbp-160h]
  size_t v49; // [rsp+18h] [rbp-160h]
  __int8 *v50; // [rsp+20h] [rbp-158h]
  void *v51; // [rsp+30h] [rbp-148h] BYREF
  size_t v52; // [rsp+38h] [rbp-140h]
  __int64 v53; // [rsp+40h] [rbp-138h] BYREF
  void *v54; // [rsp+50h] [rbp-128h] BYREF
  size_t v55; // [rsp+58h] [rbp-120h]
  _QWORD v56[2]; // [rsp+60h] [rbp-118h] BYREF
  void *v57; // [rsp+70h] [rbp-108h] BYREF
  size_t v58; // [rsp+78h] [rbp-100h]
  __int64 v59; // [rsp+80h] [rbp-F8h] BYREF
  __m128i src; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-D8h] BYREF
  void *v62; // [rsp+B0h] [rbp-C8h] BYREF
  size_t v63; // [rsp+B8h] [rbp-C0h]
  __m128i v64; // [rsp+C0h] [rbp-B8h] BYREF
  void *v65; // [rsp+D0h] [rbp-A8h] BYREF
  size_t v66; // [rsp+D8h] [rbp-A0h]
  __m128i v67; // [rsp+E0h] [rbp-98h] BYREF
  void *v68; // [rsp+F0h] [rbp-88h] BYREF
  size_t v69; // [rsp+F8h] [rbp-80h]
  __m128i v70; // [rsp+100h] [rbp-78h] BYREF
  __m128i *v71; // [rsp+110h] [rbp-68h] BYREF
  size_t v72; // [rsp+118h] [rbp-60h]
  __m128i v73; // [rsp+120h] [rbp-58h] BYREF
  __int16 v74; // [rsp+130h] [rbp-48h]

  sub_112B6F0(&v51, a1);
  v3 = v51;
  v4 = v52;
  v54 = v56;
  if ( (char *)v51 + v52 && !v51 )
    goto LABEL_118;
  if ( v52 > 0xF )
  {
    if ( (v52 & 0x8000000000000000LL) != 0LL )
      goto LABEL_121;
    v5 = (_QWORD *)operator new(v52 + 1);
    v56[0] = v4;
    v54 = v5;
LABEL_48:
    memcpy(v5, v3, v4);
    v5 = v54;
    goto LABEL_6;
  }
  if ( v52 == 1 )
  {
    LOBYTE(v56[0]) = *(_BYTE *)v51;
    v5 = v56;
    goto LABEL_6;
  }
  v5 = v56;
  if ( v52 )
    goto LABEL_48;
LABEL_6:
  v55 = v4;
  *((_BYTE *)v5 + v4) = 0;
  v6 = v55;
  if ( 0x7FFFFFFFFFFFFFFFLL - v55 <= 7 )
    goto LABEL_117;
  if ( v54 == v56 )
    v7 = 15;
  else
    v7 = v56[0];
  if ( v55 + 8 > v7 )
    sub_998B30((__int64)&v54, v55, 0, "/include", 8u);
  else
    *(_QWORD *)((char *)v54 + v55) = 0x6564756C636E692FLL;
  v55 = v6 + 8;
  *((_BYTE *)v54 + v6 + 8) = 0;
  sub_12B8E90((__int64)&v57, a1 + 16);
  v8 = *(_DWORD *)(a1 + 60);
  sub_11302C0(&src, a1, v54, v55);
  if ( !src.m128i_i64[1] )
    goto LABEL_35;
  v9 = (__int8 *)v54;
  v10 = v55;
  v11 = v54 == nullptr && (char *)v54 + v55 != nullptr;
  if ( v8 )
  {
    v21 = &v64;
    v62 = &v64;
    if ( !v11 )
    {
      if ( v55 > 0xF )
      {
        v50 = (__int8 *)v54;
        if ( (v55 & 0x8000000000000000LL) != 0LL )
          goto LABEL_121;
        v48 = v55;
        v21 = (__m128i *)operator new(v55 + 1);
        v10 = v48;
        v9 = v50;
        v62 = v21;
        v64.m128i_i64[0] = v48;
      }
      else
      {
        if ( v55 == 1 )
        {
          v64.m128i_i8[0] = *(_BYTE *)v54;
          goto LABEL_56;
        }
        if ( !v55 )
        {
LABEL_56:
          v63 = v10;
          v21->m128i_i8[v10] = 0;
          v22 = v63;
          if ( v63 != 0x7FFFFFFFFFFFFFFFLL )
          {
            if ( v62 == &v64 )
              v23 = 15;
            else
              v23 = v64.m128i_i64[0];
            if ( v63 + 1 > v23 )
              sub_998B30((__int64)&v62, v63, 0, "/", 1u);
            else
              *((_BYTE *)v62 + v63) = 47;
            v63 = v22 + 1;
            *((_BYTE *)v62 + v22 + 1) = 0;
            v24 = v62;
            v25 = v58 + v63;
            if ( v62 == &v64 )
              v26 = 15;
            else
              v26 = v64.m128i_i64[0];
            if ( v25 > v26 )
            {
              sub_998B30((__int64)&v62, v63, 0, v57, v58);
              v24 = v62;
            }
            else if ( v58 )
            {
              v27 = (char *)v62 + v63;
              if ( v58 == 1 )
                *v27 = *(_BYTE *)v57;
              else
                memcpy(v27, v57, v58);
              v24 = v62;
            }
            v63 = v25;
            v24[v25] = 0;
            v28 = (__m128i *)v62;
            v68 = &v70;
            if ( v62 == &v64 )
            {
              v29 = v63;
              v41 = _mm_load_si128(&v64);
              v63 = 0;
              v64.m128i_i8[0] = 0;
              v70 = v41;
              v69 = v29;
              if ( 0x7FFFFFFFFFFFFFFFLL - v29 > 4 )
              {
                v32 = v29 + 5;
                v28 = &v70;
                v30 = 15;
LABEL_72:
                if ( v32 > v30 )
                {
                  sub_998B30((__int64)&v68, v29, 0, "/c++/", 5u);
                }
                else
                {
                  v33 = &v28->m128i_i8[v29];
                  *(_DWORD *)v33 = 724263727;
                  v33[4] = 47;
                }
                v69 = v32;
                *((_BYTE *)v68 + v32) = 0;
                v34 = (__m128i *)v68;
                v71 = &v73;
                if ( v68 == &v70 )
                {
                  v35 = v69;
                  v34 = &v73;
                  v42 = _mm_load_si128(&v70);
                  v69 = 0;
                  v37 = src.m128i_u64[1];
                  v70.m128i_i8[0] = 0;
                  v36 = 15;
                  v73 = v42;
                  v39 = (__int8 *)src.m128i_i64[0];
                  v72 = v35;
                  v38 = src.m128i_i64[1] + v35;
                }
                else
                {
                  v35 = v69;
                  v36 = v70.m128i_i64[0];
                  v71 = (__m128i *)v68;
                  v37 = src.m128i_u64[1];
                  v69 = 0;
                  v72 = v35;
                  v70.m128i_i8[0] = 0;
                  v38 = src.m128i_i64[1] + v35;
                  v73.m128i_i64[0] = v36;
                  if ( v68 == &v73 )
                    v36 = 15;
                  v68 = &v70;
                  v39 = (__int8 *)src.m128i_i64[0];
                }
                if ( v38 > v36 )
                {
                  sub_998B30((__int64)&v71, v35, 0, v39, v37);
                  v34 = v71;
                }
                else if ( v37 )
                {
                  v40 = &v34->m128i_i8[v35];
                  if ( v37 == 1 )
                    *v40 = *v39;
                  else
                    memcpy(v40, v39, v37);
                  v34 = v71;
                }
                v72 = v38;
                v34->m128i_i8[v38] = 0;
                v65 = &v67;
                if ( v71 == &v73 )
                {
                  v67 = _mm_load_si128(&v73);
                }
                else
                {
                  v65 = v71;
                  v67.m128i_i64[0] = v73.m128i_i64[0];
                }
                v66 = v72;
                if ( v68 != &v70 )
                  operator delete(v68);
                if ( v62 != &v64 )
                  operator delete(v62);
                v71 = (__m128i *)&v65;
                v74 = 260;
                sub_112FA80(a2, a3, (__int64)&v71);
                if ( v65 != &v67 )
                  operator delete(v65);
                v9 = (__int8 *)v54;
                v10 = v55;
                v11 = v54 == nullptr && (char *)v54 + v55 != nullptr;
                goto LABEL_13;
              }
            }
            else
            {
              v29 = v63;
              v30 = v64.m128i_i64[0];
              v62 = &v64;
              v68 = v28;
              v31 = 0x7FFFFFFFFFFFFFFFLL - v63;
              v70.m128i_i64[0] = v64.m128i_i64[0];
              v69 = v63;
              v63 = 0;
              v64.m128i_i8[0] = 0;
              if ( v31 > 4 )
              {
                v32 = v29 + 5;
                if ( v28 == &v70 )
                  v30 = 15;
                goto LABEL_72;
              }
            }
          }
LABEL_117:
          std::__throw_length_error("basic_string::append");
        }
      }
      v49 = v10;
      memcpy(v21, v9, v10);
      v10 = v49;
      v21 = (__m128i *)v62;
      goto LABEL_56;
    }
LABEL_118:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_13:
  v12 = &v67;
  v65 = &v67;
  if ( v11 )
    goto LABEL_118;
  if ( (unsigned __int64)v10 > 0xF )
  {
    if ( v10 >= 0 )
    {
      v45 = v10;
      v12 = (__m128i *)operator new(v10 + 1);
      v10 = v45;
      v65 = v12;
      v67.m128i_i64[0] = v45;
LABEL_94:
      v46 = v10;
      memcpy(v12, v9, v10);
      v12 = (__m128i *)v65;
      v10 = v46;
      goto LABEL_17;
    }
LABEL_121:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v10 == 1 )
  {
    v67.m128i_i8[0] = *v9;
    goto LABEL_17;
  }
  if ( v10 )
    goto LABEL_94;
LABEL_17:
  v66 = v10;
  v12->m128i_i8[v10] = 0;
  v13 = v66;
  if ( 0x7FFFFFFFFFFFFFFFLL - v66 <= 4 )
    goto LABEL_117;
  v14 = v66 + 5;
  if ( v65 == &v67 )
    v15 = 15;
  else
    v15 = v67.m128i_i64[0];
  if ( v14 > v15 )
  {
    v47 = v66 + 5;
    sub_998B30((__int64)&v65, v66, 0, "/c++/", 5u);
    v14 = v47;
  }
  else
  {
    v16 = (char *)v65 + v66;
    *(_DWORD *)v16 = 724263727;
    v16[4] = 47;
  }
  v66 = v14;
  *((_BYTE *)v65 + v13 + 5) = 0;
  v17 = v65;
  v18 = src.m128i_i64[1] + v66;
  if ( v65 == &v67 )
    v19 = 15;
  else
    v19 = v67.m128i_i64[0];
  if ( v18 > v19 )
  {
    sub_998B30((__int64)&v65, v66, 0, src.m128i_i64[0], src.m128i_u64[1]);
    v17 = v65;
  }
  else if ( src.m128i_i64[1] )
  {
    v20 = (char *)v65 + v66;
    if ( src.m128i_i64[1] == 1 )
      *v20 = *(_BYTE *)src.m128i_i64[0];
    else
      memcpy(v20, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
    v17 = v65;
  }
  v66 = v18;
  v17[v18] = 0;
  v68 = &v70;
  if ( v65 == &v67 )
  {
    v70 = _mm_load_si128(&v67);
  }
  else
  {
    v68 = v65;
    v70.m128i_i64[0] = v67.m128i_i64[0];
  }
  v71 = (__m128i *)&v68;
  v67.m128i_i8[0] = 0;
  v69 = v66;
  v65 = &v67;
  v66 = 0;
  v74 = 260;
  sub_112FA80(a2, a3, (__int64)&v71);
  if ( v68 != &v70 )
    operator delete(v68);
  if ( v65 != &v67 )
    operator delete(v65);
LABEL_35:
  if ( (__int64 *)src.m128i_i64[0] != &v61 )
    operator delete((void *)src.m128i_i64[0]);
  if ( v57 != &v59 )
    operator delete(v57);
  if ( v54 != v56 )
    operator delete(v54);
  if ( v51 != &v53 )
    operator delete(v51);
}
