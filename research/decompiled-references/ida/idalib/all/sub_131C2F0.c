__int64 __fastcall sub_131C2F0(
        __int64 a1,
        void (__fastcall *a2)(__int64, void **),
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  void **v7; // r15
  char v8; // al
  void **v9; // rbx
  void **v10; // r12
  void **v11; // r12
  void **v12; // r12
  void **v13; // r15
  __m128i *v14; // r15
  size_t v15; // rdx
  __m128i *v16; // r15
  size_t v17; // rdx
  int v18; // r8d
  __int64 i; // r15
  char v20; // cl
  char *v21; // rax
  _BYTE *v22; // r12
  _BYTE *v23; // rbx
  char v24; // r15
  char v25; // bp
  char *v26; // r12
  char *v27; // rbx
  char v28; // al
  char *v29; // r12
  char *j; // r15
  __int64 v31; // r12
  size_t v32; // rax
  size_t v33; // r9
  unsigned __int64 v34; // rcx
  size_t v35; // r8
  _BYTE *v36; // rdi
  _BYTE *v37; // rcx
  size_t v38; // r9
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  size_t v41; // rax
  __int64 result; // rax
  char *v43; // r12
  char *m; // rbx
  void **v45; // r12
  void *v46; // rax
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  void *v50; // rax
  void *v51; // rax
  void *v52; // rax
  char v54; // [rsp+18h] [rbp-130h]
  size_t v55; // [rsp+18h] [rbp-130h]
  size_t v56; // [rsp+18h] [rbp-130h]
  __int64 k; // [rsp+18h] [rbp-130h]
  size_t v59; // [rsp+20h] [rbp-128h]
  size_t v60; // [rsp+20h] [rbp-128h]
  size_t v61; // [rsp+20h] [rbp-128h]
  void **v62; // [rsp+28h] [rbp-120h]
  void *v63; // [rsp+28h] [rbp-120h]
  void *v66[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v67; // [rsp+50h] [rbp-F8h]
  __int64 v68[4]; // [rsp+60h] [rbp-E8h] BYREF
  void *v69; // [rsp+80h] [rbp-C8h] BYREF
  size_t v70; // [rsp+88h] [rbp-C0h]
  __m128i v71[2]; // [rsp+90h] [rbp-B8h] BYREF
  void *p_si128; // [rsp+B0h] [rbp-98h] BYREF
  size_t v73; // [rsp+B8h] [rbp-90h]
  __m128i si128; // [rsp+C0h] [rbp-88h] BYREF
  __int16 v75; // [rsp+D0h] [rbp-78h]
  void *v76[2]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v77[2]; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v78; // [rsp+100h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 72) )
  {
    v46 = (void *)j__strlen("-fno-modules-check-relocated");
    v78 = 261;
    v76[0] = (void *)"-fno-modules-check-relocated";
    v76[1] = v46;
    a2(a3, v76);
  }
  sub_C23620((__int64)v66, (__int64 *)(a1 + 48));
  v7 = (void **)v66[1];
  v77[0] = 0;
  v62 = (void **)v66[0];
  v68[0] = (__int64)v66[0];
  *(_OWORD *)v66 = 0;
  v68[2] = v67;
  *(_OWORD *)v76 = 0;
  v68[1] = (__int64)v7;
  v67 = 0;
  sub_12FD200((unsigned __int64 **)v76, (__int64)&p_si128, (__int64)&p_si128);
  v8 = sub_130B900(v68, (__int64 *)v76);
  v9 = (void **)v76[1];
  v10 = (void **)v76[0];
  v54 = v8;
  if ( v76[1] != v76[0] )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v9 == v10 )
          goto LABEL_6;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_6:
    v10 = (void **)v76[0];
  }
  if ( v10 )
    operator delete(v10);
  if ( v54 )
  {
    if ( v62 == v7 )
      goto LABEL_14;
  }
  else
  {
    if ( v62 == v7 )
      goto LABEL_14;
    v45 = v62;
    do
    {
      while ( 1 )
      {
        v69 = v71;
        sub_12FAA20(&v69, *v45, (__int64)v45[1] + (_QWORD)*v45);
        v75 = 260;
        v78 = 261;
        v76[0] = "-imacros";
        p_si128 = &v69;
        v76[1] = byte_8;
        a2(a3, v76);
        a2(a3, &p_si128);
        if ( v69 == v71 )
          break;
        operator delete(v69);
        v45 += 4;
        if ( v7 == v45 )
          goto LABEL_11;
      }
      v45 += 4;
    }
    while ( v7 != v45 );
  }
LABEL_11:
  v11 = v62;
  do
  {
    while ( *v11 != v11 + 2 )
    {
      operator delete(*v11);
      v11 += 4;
      if ( v7 == v11 )
        goto LABEL_14;
    }
    v11 += 4;
  }
  while ( v7 != v11 );
LABEL_14:
  if ( v62 )
    operator delete(v62);
  v12 = (void **)v66[1];
  v13 = (void **)v66[0];
  if ( v66[1] != v66[0] )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v13 == v12 )
          goto LABEL_19;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_19:
    v13 = (void **)v66[0];
  }
  if ( v13 )
    operator delete(v13);
  v69 = v71;
  sub_12FAA20(&v69, *(_BYTE **)(a1 + 112), *(_QWORD *)(a1 + 112) + *(_QWORD *)(a1 + 120));
  v14 = (__m128i *)v69;
  p_si128 = &si128;
  if ( v69 == v71 )
  {
    v14 = &si128;
    si128 = _mm_load_si128(v71);
  }
  else
  {
    p_si128 = v69;
    si128.m128i_i64[0] = v71[0].m128i_i64[0];
  }
  v15 = v70;
  v69 = v71;
  v70 = 0;
  v73 = v15;
  v55 = v15;
  v71[0].m128i_i8[0] = 0;
  v76[0] = v77;
  v76[1] = nullptr;
  LOBYTE(v77[0]) = 0;
  if ( sub_1302CC0((__int64)&p_si128, (__int64)v76) )
  {
    sub_12FAA20(v76, v14, (__int64)v14->m128i_i64 + v55);
    sub_12FD520((void (__fastcall *)(__int64, _QWORD *))a2, a3, 43119, (__int64)v76);
    if ( v76[0] != v77 )
      operator delete(v76[0]);
    v14 = (__m128i *)p_si128;
  }
  if ( v14 != &si128 )
    operator delete(v14);
  if ( v69 != v71 )
    operator delete(v69);
  if ( !*(_BYTE *)(a1 + 73) )
  {
    v48 = (void *)j__strlen("-undef");
    v78 = 261;
    v76[0] = (void *)"-undef";
    v76[1] = v48;
    a2(a3, v76);
  }
  v69 = v71;
  sub_12FAA20(&v69, *(_BYTE **)(a1 + 80), *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88));
  v16 = (__m128i *)v69;
  p_si128 = &si128;
  if ( v69 == v71 )
  {
    v16 = &si128;
    si128 = _mm_load_si128(v71);
  }
  else
  {
    p_si128 = v69;
    si128.m128i_i64[0] = v71[0].m128i_i64[0];
  }
  v17 = v70;
  v69 = v71;
  v70 = 0;
  v73 = v17;
  v56 = v17;
  v71[0].m128i_i8[0] = 0;
  v76[0] = v77;
  v76[1] = nullptr;
  LOBYTE(v77[0]) = 0;
  if ( sub_1302CC0((__int64)&p_si128, (__int64)v76) )
  {
    sub_12FAA20(v76, v16, (__int64)v16->m128i_i64 + v56);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 56704, (__int64)v76);
    if ( v76[0] != v77 )
      operator delete(v76[0]);
    v16 = (__m128i *)p_si128;
  }
  if ( v16 != &si128 )
    operator delete(v16);
  if ( v69 != v71 )
    operator delete(v69);
  if ( *(_BYTE *)(a1 + 77) )
  {
    v52 = (void *)j__strlen("-pch-through-hdrstop-create");
    v78 = 261;
    v76[0] = (void *)"-pch-through-hdrstop-create";
    v76[1] = v52;
    a2(a3, v76);
  }
  v18 = *(_DWORD *)(a1 + 316);
  if ( v18 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 30601, 0x33u, v18);
  if ( *(_DWORD *)(a1 + 168) )
  {
    v76[1] = (void *)j__strlen("-fno-validate-pch");
    v78 = 261;
    v76[0] = (void *)"-fno-validate-pch";
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 172) != ((*(_BYTE *)(a5 + 3) & 4) != 0) )
  {
    v76[1] = (void *)j__strlen("-fallow-pch-with-compiler-errors");
    v78 = 261;
    v76[0] = (void *)"-fallow-pch-with-compiler-errors";
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 173) )
  {
    v76[1] = (void *)j__strlen("-fallow-pch-with-different-modules-cache-path");
    v78 = 261;
    v76[0] = (void *)"-fallow-pch-with-different-modules-cache-path";
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 174) )
  {
    v51 = (void *)j__strlen("-dump-deserialized-decls");
    v78 = 261;
    v76[0] = (void *)"-dump-deserialized-decls";
    v76[1] = v51;
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 75) )
  {
    v50 = (void *)j__strlen("-detailed-preprocessing-record");
    v78 = 261;
    v76[0] = (void *)"-detailed-preprocessing-record";
    v76[1] = v50;
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
    v49 = (void *)j__strlen("-setup-static-analyzer");
    v78 = 261;
    v76[0] = (void *)"-setup-static-analyzer";
    v76[1] = v49;
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 321) )
  {
    v47 = (void *)j__strlen("-disable-pragma-debug-crash");
    v78 = 261;
    v76[0] = (void *)"-disable-pragma-debug-crash";
    v76[1] = v47;
    a2(a3, v76);
  }
  if ( *(_BYTE *)(a1 + 76) && !*(_BYTE *)(a1 + 77) )
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0xC33u);
  for ( i = *(_QWORD *)(a1 + 200); a1 + 184 != i; i = std::_Rb_tree_increment(i) )
  {
    v78 = 260;
    v76[0] = (void *)(i + 32);
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x16Fu, (const __m128i *)v76);
  }
  v20 = *(_BYTE *)(a1 + 228);
  if ( *(_DWORD *)(a1 + 224) )
  {
    v21 = "1";
    if ( !v20 )
      v21 = "0";
    goto LABEL_62;
  }
  v21 = "1";
  if ( v20 )
  {
LABEL_62:
    LODWORD(v69) = *(_DWORD *)(a1 + 224);
    si128.m128i_i64[0] = (__int64)",";
    v77[0] = v21;
    p_si128 = v69;
    v76[0] = &p_si128;
    v75 = 777;
    v78 = 770;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xC41u, (const __m128i *)v76);
  }
  v22 = *(_BYTE **)(a1 + 8);
  if ( v22 != *(_BYTE **)a1 )
  {
    v23 = *(_BYTE **)a1;
    while ( !sub_9B4AA0((__int64)v23, "__CET__=1") )
    {
      if ( v23[32] )
      {
        if ( !sub_9B4AA0((__int64)v23, "__CET__=2") )
          goto LABEL_70;
LABEL_75:
        if ( sub_9B4AA0((__int64)v23, "__CET__=3") || v23[32] )
        {
LABEL_70:
          v78 = 260;
          v76[0] = v23;
          sub_12FD7D0(
            (__int64 (__fastcall *)(__int64, __m128i *))a2,
            a3,
            v23[32] == 0 ? 324 : 3363,
            (const __m128i *)v76);
          goto LABEL_71;
        }
        v25 = *(_BYTE *)(a6 + 6) & 0xC;
        goto LABEL_69;
      }
      v24 = *(_BYTE *)(a6 + 6);
      v25 = v24 & 0xC;
      if ( (v24 & 0xC) == 8 )
        goto LABEL_71;
      if ( !sub_9B4AA0((__int64)v23, "__CET__=2") )
        goto LABEL_67;
      if ( sub_9B4AA0((__int64)v23, "__CET__=3") )
        goto LABEL_70;
      v25 = v24 & 0xC;
LABEL_69:
      if ( v25 != 12 )
        goto LABEL_70;
LABEL_71:
      v23 += 40;
      if ( v22 == v23 )
        goto LABEL_87;
    }
    if ( !sub_9B4AA0((__int64)v23, "__CET__=2") )
    {
      if ( v23[32] )
        goto LABEL_70;
      v25 = *(_BYTE *)(a6 + 6) & 0xC;
LABEL_67:
      if ( v25 == 4 )
        goto LABEL_71;
      if ( sub_9B4AA0((__int64)v23, "__CET__=3") )
        goto LABEL_70;
      goto LABEL_69;
    }
    goto LABEL_75;
  }
LABEL_87:
  v26 = *(char **)(a1 + 32);
  if ( v26 != *(char **)(a1 + 24) )
  {
    v27 = *(char **)(a1 + 24);
    do
    {
      if ( (a4[47] & 0x20) == 0
        || (v28 = a4[108], (v28 & 8) == 0)
        || ((v28 & 0x10) == 0 || sub_9B4AA0((__int64)v27, "opencl-c-base.h")) && sub_9B4AA0((__int64)v27, "opencl-c.h") )
      {
        if ( (a4[89] & 1) == 0 || sub_9B4AA0((__int64)v27, "hlsl.h") )
        {
          v76[0] = v27;
          v78 = 260;
          sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x86Cu, (const __m128i *)v76);
        }
      }
      v27 += 32;
    }
    while ( v26 != v27 );
  }
  v29 = *(char **)(a1 + 152);
  for ( j = *(char **)(a1 + 144); v29 != j; j += 32 )
  {
    v76[0] = j;
    v78 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xB5u, (const __m128i *)v76);
  }
  v31 = *(_QWORD *)(a1 + 240);
  for ( k = *(_QWORD *)(a1 + 248); k != v31; v31 += 64 )
  {
    while ( 1 )
    {
      v69 = v71;
      sub_12FAA20(&v69, *(_BYTE **)v31, *(_QWORD *)v31 + *(_QWORD *)(v31 + 8));
      v32 = v70;
      if ( v70 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v33 = v70 + 1;
      v34 = v69 == v71 ? 15LL : v71[0].m128i_i64[0];
      if ( v33 > v34 )
      {
        v63 = (void *)(v70 + 1);
        v61 = v70;
        sub_998B30((__int64)&v69, v70, 0, ";", 1u);
        v33 = (size_t)v63;
        v32 = v61;
      }
      else
      {
        *((_BYTE *)v69 + v70) = 59;
      }
      v70 = v33;
      *((_BYTE *)v69 + v32 + 1) = 0;
      v35 = *(_QWORD *)(v31 + 40);
      v36 = v69;
      v37 = *(_BYTE **)(v31 + 32);
      v38 = v35 + v70;
      v39 = v69 == v71 ? 15LL : v71[0].m128i_i64[0];
      if ( v38 > v39 )
      {
        v60 = v35 + v70;
        sub_998B30((__int64)&v69, v70, 0, v37, v35);
        v36 = v69;
        v38 = v60;
      }
      else if ( v35 )
      {
        v40 = (char *)v69 + v70;
        if ( v35 == 1 )
        {
          *v40 = *v37;
          v36 = v69;
        }
        else
        {
          v59 = v35 + v70;
          memcpy(v40, *(const void **)(v31 + 32), *(_QWORD *)(v31 + 40));
          v36 = v69;
          v38 = v59;
        }
      }
      v70 = v38;
      v36[v38] = 0;
      p_si128 = &si128;
      if ( v69 == v71 )
      {
        si128 = _mm_load_si128(v71);
      }
      else
      {
        p_si128 = v69;
        si128.m128i_i64[0] = v71[0].m128i_i64[0];
      }
      v41 = v70;
      v70 = 0;
      v71[0].m128i_i8[0] = 0;
      v73 = v41;
      v69 = v71;
      v78 = 260;
      v76[0] = &p_si128;
      sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xC8Du, (const __m128i *)v76);
      if ( p_si128 != &si128 )
        operator delete(p_si128);
      if ( v69 == v71 )
        break;
      operator delete(v69);
      v31 += 64;
      if ( k == v31 )
        goto LABEL_118;
    }
  }
LABEL_118:
  if ( *(_BYTE *)(a1 + 336) )
  {
    v78 = 267;
    v76[0] = (void *)(a1 + 328);
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xCCCu, (const __m128i *)v76);
  }
  if ( *(_BYTE *)(a1 + 74) )
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x24Eu);
  result = a1;
  v43 = *(char **)(a1 + 296);
  for ( m = *(char **)(a1 + 288);
        v43 != m;
        result = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x14Cu, (const __m128i *)v76) )
  {
    v78 = 260;
    v76[0] = m;
    m += 32;
  }
  return result;
}
