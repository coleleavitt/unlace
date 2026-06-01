__int64 __fastcall sub_1ECF9F0(
        size_t *a1,
        size_t *a2,
        _BYTE *a3,
        signed __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        int a9)
{
  size_t *v9; // r13
  size_t *v10; // r12
  size_t v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  const void *v16; // rdi
  size_t v17; // rdx
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v28; // rsi
  __int64 v29; // r13
  _BYTE *v30; // r15
  size_t v31; // rbp
  unsigned int v32; // eax
  __int64 v33; // rax
  char v34; // r12
  unsigned int v35; // eax
  int v36; // eax
  __int64 *v37; // r8
  size_t v38; // rdx
  _BYTE *v39; // rsi
  size_t v40; // rdx
  __int64 v41; // r9
  void *v42; // r8
  __int64 v43; // rcx
  int v44; // eax
  size_t v45; // rdx
  _BYTE *v46; // rsi
  void *v47; // rbp
  signed __int64 *v48; // r12
  signed __int64 v49; // rbp
  unsigned __int8 v50; // [rsp+10h] [rbp-188h]
  void *v52; // [rsp+20h] [rbp-178h]
  _BYTE *s1; // [rsp+48h] [rbp-150h]
  _QWORD *s1a; // [rsp+48h] [rbp-150h]
  size_t n; // [rsp+50h] [rbp-148h]
  __int64 v59; // [rsp+58h] [rbp-140h]
  __int64 *v60; // [rsp+60h] [rbp-138h]
  __int64 v62; // [rsp+78h] [rbp-120h]
  __int64 *v63; // [rsp+80h] [rbp-118h] BYREF
  __m128i si128; // [rsp+88h] [rbp-110h]
  void *v65; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v66; // [rsp+A8h] [rbp-F0h]
  void *v67; // [rsp+C0h] [rbp-D8h] BYREF
  size_t v68; // [rsp+C8h] [rbp-D0h]
  _BYTE v69[64]; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-88h] BYREF
  size_t v71; // [rsp+118h] [rbp-80h]
  _BYTE v72[120]; // [rsp+120h] [rbp-78h] BYREF

  v9 = a2;
  v10 = a1;
  if ( !a5 )
    goto LABEL_2;
  v63 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  sub_1EC2910(a1, (__int64)&v63, 0);
  ptr = v72;
  v71 = 0x400000000LL;
  v66 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  v65 = nullptr;
  sub_1EC2910(a2, (__int64)&v65, (__int64)&ptr);
  sub_9EE7C0(a7, "# 1 \"<command line>\" 1\n");
  if ( (_DWORD)v71 )
  {
    v29 = 0;
    v59 = 16 * ((unsigned int)(v71 - 1) + 1LL);
    while ( 1 )
    {
      v30 = *(_BYTE **)((char *)ptr + v29);
      v31 = *(_QWORD *)((char *)ptr + v29 + 8);
      v32 = sub_2244B30(v30, v31);
      v33 = *sub_1EC2820((__int64)&v65, v30, v31, v32);
      v34 = *(_BYTE *)(v33 + 24);
      s1 = *(_BYTE **)(v33 + 8);
      n = *(_QWORD *)(v33 + 16);
      v35 = sub_2244B30(v30, v31);
      v36 = sub_2244E60(&v63, v30, v31, v35);
      if ( v36 == -1 )
      {
        sub_1EC27E0((__int64 **)&v67, &v63[si128.m128i_u32[0]], 1);
        v37 = (__int64 *)v67;
        if ( !a9 )
          goto LABEL_31;
      }
      else
      {
        sub_1EC27E0((__int64 **)&v67, &v63[v36], 1);
        v37 = (__int64 *)v67;
        if ( !a9 )
          goto LABEL_31;
      }
      v60 = v37;
      sub_1EC27E0((__int64 **)&v67, &v63[si128.m128i_u32[0]], 1);
      v42 = v60;
      if ( v67 == v60 )
        break;
      v43 = *v60;
      if ( v34 != *(_BYTE *)(*v60 + 24) )
      {
        if ( !a6 )
          goto LABEL_56;
        sub_FC70B0((__int64)&v67, a6, 0, 907);
        sub_AEC220((unsigned __int8 **)&v67, v30, v31);
        sub_AE9DF0((unsigned __int8 **)&v67, *(unsigned __int8 *)(*v60 + 24), 2u);
LABEL_55:
        sub_AEC220((unsigned __int8 **)&v67, a3, a4);
        sub_AEA040((__int64)&v67);
        goto LABEL_56;
      }
      if ( !v34 )
      {
        v40 = n;
        if ( n != *(_QWORD *)(v43 + 16)
          || n && (v62 = *v60, v44 = memcmp(s1, *(const void **)(v43 + 8), n), v43 = v62, v42 = v60, v44) )
        {
          if ( !a6 )
            goto LABEL_56;
          v52 = v42;
          sub_FC70B0((__int64)&v67, a6, 0, 906);
          sub_AEC220((unsigned __int8 **)&v67, v30, v31);
          sub_AEC220((unsigned __int8 **)&v67, *(_BYTE **)(*(_QWORD *)v52 + 8LL), *(_QWORD *)(*(_QWORD *)v52 + 16LL));
          sub_AEC220((unsigned __int8 **)&v67, s1, n);
          goto LABEL_55;
        }
      }
      s1a = (_QWORD *)v43;
      sub_2244F90(&v63, v43, v40, v43, v42, v41);
      operator delete(s1a, *s1a + 33LL, 8);
LABEL_37:
      v29 += 16;
      if ( v59 == v29 )
      {
        v10 = a1;
        v9 = a2;
        goto LABEL_39;
      }
    }
    if ( a9 == 2 )
    {
      if ( !a6 )
        goto LABEL_56;
      sub_FC70B0((__int64)&v67, a6, 0, 907);
      sub_AEC220((unsigned __int8 **)&v67, v30, v31);
      sub_AE9DF0((unsigned __int8 **)&v67, 1, 2u);
      goto LABEL_55;
    }
LABEL_31:
    if ( v34 )
    {
      sub_9EE7C0(a7, "#undef ");
      v67 = v69;
      if ( v30 )
      {
        sub_1EA9D80(&v67, v30, (__int64)&v30[v31]);
        v38 = v68;
        v39 = v67;
LABEL_34:
        sub_9EE560(a7, v39, v38);
        if ( v67 != v69 )
          operator delete(v67);
        sub_A6F610(a7, 10);
        goto LABEL_37;
      }
    }
    else
    {
      sub_9EE7C0(a7, "#define ");
      v67 = v69;
      if ( v30 )
      {
        sub_1EA9D80(&v67, v30, (__int64)&v30[v31]);
        v45 = v68;
        v46 = v67;
      }
      else
      {
        v69[0] = 0;
        v46 = v69;
        v45 = 0;
        v68 = 0;
      }
      sub_9EE560(a7, v46, v45);
      if ( v67 != v69 )
        operator delete(v67);
      sub_A6F610(a7, 32);
      v67 = v69;
      if ( s1 )
      {
        sub_1EA9D80(&v67, s1, (__int64)&s1[n]);
        v38 = v68;
        v39 = v67;
        goto LABEL_34;
      }
    }
    v69[0] = 0;
    v39 = v69;
    v38 = 0;
    v68 = 0;
    goto LABEL_34;
  }
LABEL_39:
  sub_9EE7C0(a7, "# 1 \"<built-in>\" 2\n");
  if ( a9 == 2 )
  {
    sub_1ECF9B0((__int64 **)&v67, &v63[si128.m128i_u32[0]], 1);
    v47 = v67;
    sub_1ECF9B0((__int64 **)&v67, v63, si128.m128i_i32[0] == 0);
    if ( v47 != v67 )
    {
      if ( a6 )
      {
        v48 = *(signed __int64 **)v67;
        v49 = **(_QWORD **)v67;
        sub_FC70B0((__int64)&v67, a6, 0, 907);
        sub_AEC220((unsigned __int8 **)&v67, (_BYTE *)v48 + 32, v49);
        sub_AE9DF0((unsigned __int8 **)&v67, 0, 2u);
        goto LABEL_55;
      }
LABEL_56:
      if ( ptr != v72 )
        free(ptr);
      sub_1EAE000(&v65);
      sub_1EAE000((void **)&v63);
      return a5;
    }
  }
  if ( ptr != v72 )
    free(ptr);
  sub_1EAE000(&v65);
  sub_1EAE000((void **)&v63);
LABEL_2:
  v50 = (a9 != 0) & (*((_BYTE *)v9 + 73) ^ *((_BYTE *)v10 + 73));
  if ( v50 )
  {
    if ( a6 )
    {
      sub_FC70B0((__int64)&ptr, a6, 0, 914);
      v28 = *((unsigned __int8 *)v9 + 73);
      goto LABEL_69;
    }
  }
  else if ( (*(_BYTE *)(a8 + 21) & 2) != 0
         && ((unsigned __int8)(*((_BYTE *)v9 + 75) ^ *((_BYTE *)v10 + 75)) & (a9 != 0)) != 0 )
  {
    v50 = (*((_BYTE *)v9 + 75) ^ *((_BYTE *)v10 + 75)) & (a9 != 0);
    if ( a6 )
    {
      sub_FC70B0((__int64)&ptr, a6, 0, 911);
      v28 = *((unsigned __int8 *)v10 + 75);
LABEL_69:
      sub_AE9DF0((unsigned __int8 **)&ptr, v28, 2u);
      sub_AEC220((unsigned __int8 **)&ptr, a3, a4);
      sub_AEA040((__int64)&ptr);
    }
  }
  else
  {
    v11 = v9[3];
    v12 = (__int64)(v9[4] - v11) >> 5;
    if ( (_DWORD)v12 )
    {
      v13 = 0;
      v14 = 32LL * (unsigned int)(v12 - 1);
      while ( 1 )
      {
        v15 = v13 + v11;
        v16 = *(const void **)v15;
        v67 = *(void **)v15;
        v17 = *(_QWORD *)(v15 + 8);
        v18 = v9[15];
        v68 = v17;
        if ( v18 && v9[11]
          || (v17 != v18 || v17 && memcmp(v16, (const void *)v9[14], v17))
          && (v19 = v10[4], v19 == sub_1EA9E40(v10[3], v19, (__int64)&v67)) )
        {
          sub_9EE7C0(a7, "#include \"");
          if ( v68 > 0x7FFFFFFFFFFFFFFFLL - a7[1] )
LABEL_76:
            std::__throw_length_error("basic_string::append");
          sub_9EE560(a7, v67, v68);
          sub_9EE7C0(a7, "\"\n");
          if ( v13 == v14 )
            break;
        }
        else if ( v13 == v14 )
        {
          break;
        }
        v11 = v9[3];
        v13 += 32;
      }
    }
    v20 = v9[6];
    v21 = (__int64)(v9[7] - v20) >> 5;
    if ( (_DWORD)v21 )
    {
      v22 = 0;
      v23 = 32LL * (unsigned int)(v21 - 1);
      while ( 1 )
      {
        v24 = v22 + v20;
        v25 = v10[7];
        v26 = v10[6];
        ptr = *(void **)v24;
        v71 = *(_QWORD *)(v24 + 8);
        if ( v25 == sub_1EA9E40(v26, v25, (__int64)&ptr) )
        {
          sub_9EE7C0(a7, "#__include_macros \"");
          if ( v71 > 0x7FFFFFFFFFFFFFFFLL - a7[1] )
            goto LABEL_76;
          sub_9EE560(a7, ptr, v71);
          sub_9EE7C0(a7, "\"\n##\n");
          if ( v23 == v22 )
            return v50;
        }
        else if ( v23 == v22 )
        {
          return v50;
        }
        v20 = v9[6];
        v22 += 32;
      }
    }
  }
  return v50;
}
