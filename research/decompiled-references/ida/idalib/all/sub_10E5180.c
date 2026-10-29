__int64 __fastcall sub_10E5180(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  size_t v4; // rax
  bool v5; // zf
  size_t v6; // rax
  __int64 v7; // r9
  __int32 v8; // eax
  unsigned __int64 v9; // rax
  __m128i *v10; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // rcx
  _BYTE *v15; // r8
  unsigned int v16; // r15d
  size_t v18; // rax
  __int64 v19; // r12
  size_t v20; // r15
  size_t v21; // rax
  __int64 v22; // r9
  int v23; // eax
  unsigned __int64 *v24; // rdi
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __m128i v27; // xmm5
  unsigned __int64 v28; // rax
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  int v32; // eax
  char v34; // [rsp+10h] [rbp-238h]
  char v35; // [rsp+10h] [rbp-238h]
  _BYTE *v36; // [rsp+20h] [rbp-228h]
  size_t v37; // [rsp+28h] [rbp-220h]
  void *v38; // [rsp+30h] [rbp-218h] BYREF
  size_t v39; // [rsp+38h] [rbp-210h]
  _BYTE v40[16]; // [rsp+40h] [rbp-208h] BYREF
  void *v41; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-1F0h]
  _BYTE v43[16]; // [rsp+60h] [rbp-1E8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v45[16]; // [rsp+80h] [rbp-1C8h] BYREF
  __m128i v46; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v47; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v48; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-190h]
  _BYTE v50[16]; // [rsp+C0h] [rbp-188h] BYREF
  __m128i v51; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-168h]
  void *v53[2]; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v54; // [rsp+100h] [rbp-148h] BYREF
  __m128i v55; // [rsp+110h] [rbp-138h] BYREF
  __int64 v56; // [rsp+120h] [rbp-128h]
  __m128i v57; // [rsp+130h] [rbp-118h] BYREF
  _BYTE v58[16]; // [rsp+140h] [rbp-108h] BYREF
  __m128i v59; // [rsp+150h] [rbp-F8h]
  __int64 v60; // [rsp+160h] [rbp-E8h]
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+188h] [rbp-C0h] BYREF
  __m128i v64; // [rsp+190h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+1A0h] [rbp-A8h]

  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 0:
      v3 = "clang";
      v38 = v40;
      goto LABEL_3;
    case 1:
      v3 = "clang++";
      goto LABEL_72;
    case 2:
      v3 = "clang-cpp";
      goto LABEL_72;
    case 3:
      v3 = "clang-cl";
      goto LABEL_72;
    case 4:
      v3 = "flang";
      goto LABEL_72;
    case 5:
      v3 = "clang-dxc";
LABEL_72:
      v38 = v40;
LABEL_3:
      v4 = j__strlen(v3);
      sub_10D8DB0(&v38, v3, (__int64)&v3[v4]);
      v5 = *(_QWORD *)(a1 + 176) == 0;
      v48 = v50;
      v49 = 0;
      v50[0] = 0;
      v51 = 0;
      v52 = 0;
      if ( !v5 )
      {
        v18 = j__strlen(&byte_22F0C30);
        v19 = *(_QWORD *)(a1 + 1152);
        v20 = v18;
        v21 = j__strlen("/invalid/");
        sub_10E2B00((__int64)&ptr, a1, "/invalid/", v21, v19, v22, (__int64)&byte_22F0C30, v20);
        v23 = sub_9B4AA0((__int64)&ptr, "/invalid/");
        v24 = (unsigned __int64 *)ptr;
        if ( !v23 )
        {
          if ( ptr != &si128.m128i_u64[1] )
            operator delete(ptr);
          v25 = *(_BYTE **)(a1 + 168);
          v26 = *(_QWORD *)(a1 + 176);
          v57.m128i_i64[0] = (__int64)v58;
          sub_10D8CD0(&v57, v25, (__int64)&v25[v26]);
          sub_22B9ED0(&ptr, &v57);
          if ( (_BYTE *)v57.m128i_i64[0] != v58 )
            operator delete((void *)v57.m128i_i64[0]);
          if ( !v64.m128i_i32[0] || !v64.m128i_i32[3] )
          {
            sub_9EE8A0((__int64)&v48, (__int64)&ptr);
            v27 = _mm_load_si128(&v64);
            v52 = v65;
            v51 = v27;
          }
          v24 = (unsigned __int64 *)ptr;
        }
        if ( v24 != &si128.m128i_u64[1] )
          operator delete(v24);
      }
      v6 = j__strlen(&byte_22F0C30);
      sub_10E2B00(
        (__int64)v53,
        a1,
        *(const char **)(a1 + 944),
        *(_QWORD *)(a1 + 952),
        *(_QWORD *)(a1 + 1152),
        v7,
        (__int64)&byte_22F0C30,
        v6);
      if ( v49 )
      {
        v8 = v55.m128i_i32[3];
      }
      else
      {
        sub_9EE8A0((__int64)&v48, (__int64)v53);
        v8 = v55.m128i_i32[3];
        v51 = _mm_load_si128(&v55);
        v52 = v56;
      }
      if ( v8 == 16 && (unsigned int)(*(_DWORD *)(a1 + 16) - 3) > 2 )
      {
        v16 = sub_10E4A20((__int64 *)a1, a2);
        if ( (_BYTE)v16 )
          goto LABEL_31;
      }
      ptr = &v63;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_C05100((__int64)&v44, "-", (__int64)&v38);
      v9 = j__strlen(".cfg");
      if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v44.m128i_i64[1] )
        goto LABEL_79;
      v10 = (__m128i *)sub_9EE560(&v44, ".cfg", v9);
      v46.m128i_i64[0] = (__int64)&v47;
      if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
      {
        v47 = _mm_loadu_si128(v10 + 1);
      }
      else
      {
        v46.m128i_i64[0] = v10->m128i_i64[0];
        v47.m128i_i64[0] = v10[1].m128i_i64[0];
      }
      v46.m128i_i64[1] = v10->m128i_i64[1];
      v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
      v11 = v48;
      v10->m128i_i64[1] = 0;
      v12 = v49;
      v10[1].m128i_i8[0] = 0;
      v57.m128i_i64[0] = (__int64)v58;
      sub_10D8CD0(&v57, v11, (__int64)&v11[v12]);
      v59 = _mm_load_si128(&v51);
      v60 = v52;
      v34 = sub_10E4E80(a2, (__int64)&ptr, (__int64)&v57, &v46);
      if ( (_BYTE *)v57.m128i_i64[0] != v58 )
        operator delete((void *)v57.m128i_i64[0]);
      if ( (__m128i *)v46.m128i_i64[0] != &v47 )
        operator delete((void *)v46.m128i_i64[0]);
      if ( (_BYTE *)v44.m128i_i64[0] != v45 )
        operator delete((void *)v44.m128i_i64[0]);
      if ( v34 )
        goto LABEL_28;
      v13 = *(_QWORD *)(a1 + 208);
      v14 = v39;
      if ( !v13 )
      {
        v15 = v38;
        goto LABEL_54;
      }
      if ( v13 == v39 )
      {
        v37 = v39;
        v36 = v38;
        v32 = sub_9B48C0(*(const void **)(a1 + 200), v38, v39);
        v15 = v36;
        v14 = v37;
        if ( !v32 )
        {
LABEL_54:
          v41 = v43;
          sub_10D8CD0(&v41, v15, (__int64)&v15[v14]);
          v28 = j__strlen(".cfg");
          if ( v28 <= 0x7FFFFFFFFFFFFFFFLL - v42 )
          {
            sub_9EE560(&v41, ".cfg", v28);
            if ( (unsigned __int8)sub_2214730(a2, v41, v42, &ptr) )
            {
LABEL_69:
              v16 = sub_10E40E0((__int64 *)a1, ptr, (void *)si128.m128i_i64[0], a2);
              if ( (_BYTE)v16 )
              {
LABEL_63:
                if ( v41 != v43 )
                  operator delete(v41);
                goto LABEL_29;
              }
LABEL_57:
              v46.m128i_i64[0] = (__int64)&v47;
              sub_10D8DB0(&v46, ".cfg", (__int64)"");
              v57.m128i_i64[0] = (__int64)v58;
              sub_10D8CD0(&v57, v48, (__int64)v48 + v49);
              v59 = _mm_load_si128(&v51);
              v60 = v52;
              v16 = sub_10E4E80(a2, (__int64)&ptr, (__int64)&v57, &v46);
              if ( (_BYTE *)v57.m128i_i64[0] != v58 )
                operator delete((void *)v57.m128i_i64[0]);
              if ( (__m128i *)v46.m128i_i64[0] != &v47 )
                operator delete((void *)v46.m128i_i64[0]);
              if ( (_BYTE)v16 )
                v16 = sub_10E40E0((__int64 *)a1, ptr, (void *)si128.m128i_i64[0], a2);
              goto LABEL_63;
            }
            if ( !v34 )
              goto LABEL_57;
            v29 = *(_BYTE **)(a1 + 200);
            v30 = (__int64)&v29[*(_QWORD *)(a1 + 208)];
            v57.m128i_i64[0] = (__int64)v58;
            sub_10D8CD0(&v57, v29, v30);
            v31 = j__strlen(".cfg");
            if ( v31 <= 0x7FFFFFFFFFFFFFFFLL - v57.m128i_i64[1] )
            {
              sub_9EE560(&v57, ".cfg", v31);
              sub_A0AAD0((__int64)&v41, &v57);
              if ( (_BYTE *)v57.m128i_i64[0] != v58 )
                operator delete((void *)v57.m128i_i64[0]);
              if ( !(unsigned __int8)sub_2214730(a2, v41, v42, &ptr) )
                goto LABEL_57;
              goto LABEL_69;
            }
          }
LABEL_79:
          std::__throw_length_error("basic_string::append");
        }
      }
      sub_C05100((__int64)&v44, "-", a1 + 200);
      sub_10E1980(&v46, &v44, ".cfg");
      sub_10DB210(&v57, (__int64)&v48);
      v35 = sub_10E4E80(a2, (__int64)&ptr, (__int64)&v57, &v46);
      if ( (_BYTE *)v57.m128i_i64[0] != v58 )
        operator delete((void *)v57.m128i_i64[0]);
      if ( (__m128i *)v46.m128i_i64[0] != &v47 )
        operator delete((void *)v46.m128i_i64[0]);
      if ( (_BYTE *)v44.m128i_i64[0] != v45 )
        operator delete((void *)v44.m128i_i64[0]);
      if ( !v35 )
      {
        v15 = v38;
        v14 = v39;
        v34 = 1;
        goto LABEL_54;
      }
LABEL_28:
      v16 = sub_10E40E0((__int64 *)a1, ptr, (void *)si128.m128i_i64[0], a2);
LABEL_29:
      if ( ptr != &v63 )
        free(ptr);
LABEL_31:
      if ( v53[0] != &v54 )
        operator delete(v53[0]);
      if ( v48 != v50 )
        operator delete(v48);
      if ( v38 != v40 )
        operator delete(v38);
      return v16;
  }
}
