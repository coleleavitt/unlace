__int64 __fastcall sub_129D170(__int64 a1, _QWORD *a2)
{
  __m128i si128; // xmm0
  __int64 v5; // r12
  size_t v6; // r13
  const void *v7; // r15
  __int64 v8; // rax
  size_t v9; // rax
  char *v10; // rsi
  _QWORD *v11; // rdx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  _BYTE *v15; // rcx
  __m128i *v16; // rax
  __m128i *v17; // rdx
  _QWORD *v18; // rdi
  void *v19; // rax
  size_t v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  size_t v23; // rax
  char *v24; // rsi
  _QWORD *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  _BYTE *v29; // rcx
  __m128i *v30; // rax
  __m128i *v31; // rdx
  _QWORD *v32; // rdi
  void *v33; // rax
  __int64 v34; // rdi
  size_t v35; // r12
  __int64 v36; // rax
  char *v37; // r14
  _QWORD *v38; // r13
  size_t v39; // rax
  void *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rsi
  _BYTE *v43; // rcx
  __m128i *v44; // rax
  __m128i *v45; // rdx
  _QWORD *v46; // rdi
  _QWORD *v48; // rax
  char *v49; // rdi
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _BYTE *v52; // r12
  void *v53; // [rsp+10h] [rbp-1D8h]
  void *destd; // [rsp+20h] [rbp-1C8h]
  char *dest; // [rsp+20h] [rbp-1C8h]
  void *destf; // [rsp+20h] [rbp-1C8h]
  void *destg; // [rsp+20h] [rbp-1C8h]
  void *destc; // [rsp+20h] [rbp-1C8h]
  void *desth; // [rsp+20h] [rbp-1C8h]
  void *desti; // [rsp+20h] [rbp-1C8h]
  void *deste; // [rsp+20h] [rbp-1C8h]
  _BYTE *desta; // [rsp+20h] [rbp-1C8h]
  _BYTE *destb; // [rsp+20h] [rbp-1C8h]
  char *src; // [rsp+28h] [rbp-1C0h]
  void *srca; // [rsp+28h] [rbp-1C0h]
  char *srcb; // [rsp+28h] [rbp-1C0h]
  void *v67[2]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v68[16]; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD v69[4]; // [rsp+50h] [rbp-198h] BYREF
  __int16 v70; // [rsp+70h] [rbp-178h]
  void *v71[2]; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v72[2]; // [rsp+90h] [rbp-158h] BYREF
  __int16 v73; // [rsp+A0h] [rbp-148h]
  void *v74[2]; // [rsp+B0h] [rbp-138h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int16 v76; // [rsp+D0h] [rbp-118h]
  void *v77[2]; // [rsp+E0h] [rbp-108h] BYREF
  _QWORD v78[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int16 v79; // [rsp+100h] [rbp-E8h]
  char *s; // [rsp+110h] [rbp-D8h] BYREF
  __m128i v81; // [rsp+118h] [rbp-D0h]
  _BYTE v82[192]; // [rsp+128h] [rbp-C0h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  *(_QWORD *)(a1 + 8) = 0x1000000000LL;
  v5 = a2[1];
  v81 = si128;
  v6 = *(_QWORD *)(v5 + 256);
  s = v82;
  v53 = a2 + 2;
  v7 = *(const void **)(v5 + 248);
  if ( v6 > 0x80 )
  {
    sub_2236E10(&s, v82, v6, 1);
    v49 = &s[v81.m128i_i64[0]];
  }
  else
  {
    if ( !v6 )
      goto LABEL_3;
    v49 = v82;
  }
  memcpy(v49, v7, v6);
  v6 += v81.m128i_i64[0];
LABEL_3:
  v81.m128i_i64[0] = v6;
  v76 = 260;
  v74[0] = a2 + 623;
  v79 = 257;
  v67[0] = v68;
  sub_129A5D0(v67, *(_BYTE **)(v5 + 944), *(_QWORD *)(v5 + 944) + *(_QWORD *)(v5 + 952));
  v70 = 259;
  v73 = 260;
  v69[0] = "lib";
  v71[0] = v67;
  sub_228A3B0(&s, v69, v71, v74, v77);
  if ( v67[0] != v68 )
    operator delete(v67[0]);
  v8 = v81.m128i_i64[0];
  if ( (unsigned __int64)(v81.m128i_i64[0] + 1) > v81.m128i_i64[1] )
  {
    sub_2236E10(&s, v82, v81.m128i_i64[0] + 1, 1);
    v8 = v81.m128i_i64[0];
  }
  s[v8] = 0;
  v71[0] = v72;
  if ( !s )
LABEL_84:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  src = s;
  v9 = strlen(s);
  v10 = src;
  v11 = v72;
  v12 = (void *)v9;
  if ( v9 > 0xF )
  {
    destf = (void *)v9;
    v48 = (_QWORD *)operator new(v9 + 1);
    v12 = destf;
    v10 = src;
    v71[0] = v48;
    v72[0] = destf;
    goto LABEL_64;
  }
  if ( v9 == 1 )
  {
    LOBYTE(v72[0]) = *src;
    goto LABEL_11;
  }
  if ( v9 )
  {
    v48 = v72;
LABEL_64:
    destg = v12;
    memcpy(v48, v10, (size_t)v12);
    v11 = v71[0];
    v12 = destg;
  }
LABEL_11:
  v71[1] = v12;
  *((_BYTE *)v12 + (_QWORD)v11) = 0;
  v13 = *(unsigned int *)(a1 + 8);
  v14 = v13 + 1;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( *(_QWORD *)a1 > (unsigned __int64)v71
      || (desta = *(_BYTE **)a1, (unsigned __int64)v71 >= *(_QWORD *)a1 + 32 * v13) )
    {
      sub_A8C1F0(a1, v14);
      v15 = *(_BYTE **)a1;
      v13 = *(unsigned int *)(a1 + 8);
      v16 = (__m128i *)v71;
    }
    else
    {
      sub_A8C1F0(a1, v14);
      v15 = *(_BYTE **)a1;
      v13 = *(unsigned int *)(a1 + 8);
      v16 = (__m128i *)(*(_QWORD *)a1 + (char *)v71 - desta);
    }
  }
  else
  {
    v15 = *(_BYTE **)a1;
    v16 = (__m128i *)v71;
  }
  v17 = (__m128i *)&v15[32 * v13];
  v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
  if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
  {
    v17[1] = _mm_loadu_si128(v16 + 1);
  }
  else
  {
    v17->m128i_i64[0] = v16->m128i_i64[0];
    v17[1].m128i_i64[0] = v16[1].m128i_i64[0];
  }
  v17->m128i_i64[1] = v16->m128i_i64[1];
  v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
  v16->m128i_i64[1] = 0;
  v16[1].m128i_i8[0] = 0;
  v18 = v71[0];
  ++*(_DWORD *)(a1 + 8);
  if ( v18 != v72 )
    operator delete(v18);
  v19 = *(void **)(v5 + 248);
  v20 = *(_QWORD *)(v5 + 256);
  v21 = 0;
  v81.m128i_i64[0] = 0;
  if ( v20 > v81.m128i_i64[1] )
  {
    srca = v19;
    destc = (void *)v20;
    sub_2236E10(&s, v82, v20, 1);
    v19 = srca;
    v20 = (size_t)destc;
    v21 = v81.m128i_i64[0];
  }
  if ( v20 )
  {
    destd = (void *)v20;
    memcpy(&s[v21], v19, v20);
    v21 = v81.m128i_i64[0];
    v20 = (size_t)destd;
  }
  v81.m128i_i64[0] = v21 + v20;
  v74[0] = a2 + 623;
  v76 = 260;
  v79 = 257;
  v71[0] = v53;
  v69[0] = "lib";
  v73 = 260;
  v70 = 259;
  sub_228A3B0(&s, v69, v71, v74, v77);
  v22 = v81.m128i_i64[0];
  if ( (unsigned __int64)(v81.m128i_i64[0] + 1) > v81.m128i_i64[1] )
  {
    sub_2236E10(&s, v82, v81.m128i_i64[0] + 1, 1);
    v22 = v81.m128i_i64[0];
  }
  s[v22] = 0;
  v74[0] = v75;
  if ( !s )
    goto LABEL_84;
  dest = s;
  v23 = strlen(s);
  v24 = dest;
  v25 = v75;
  v26 = (void *)v23;
  if ( v23 > 0xF )
  {
    srcb = dest;
    desth = (void *)v23;
    v50 = (_QWORD *)operator new(v23 + 1);
    v26 = desth;
    v24 = srcb;
    v74[0] = v50;
    v75[0] = desth;
    goto LABEL_66;
  }
  if ( v23 == 1 )
  {
    LOBYTE(v75[0]) = *dest;
    goto LABEL_27;
  }
  if ( v23 )
  {
    v50 = v75;
LABEL_66:
    desti = v26;
    memcpy(v50, v24, (size_t)v26);
    v25 = v74[0];
    v26 = desti;
  }
LABEL_27:
  v74[1] = v26;
  *((_BYTE *)v26 + (_QWORD)v25) = 0;
  v27 = *(unsigned int *)(a1 + 8);
  v28 = v27 + 1;
  if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    if ( *(_QWORD *)a1 > (unsigned __int64)v74
      || (destb = *(_BYTE **)a1, (unsigned __int64)v74 >= *(_QWORD *)a1 + 32 * v27) )
    {
      sub_A8C1F0(a1, v28);
      v29 = *(_BYTE **)a1;
      v27 = *(unsigned int *)(a1 + 8);
      v30 = (__m128i *)v74;
    }
    else
    {
      sub_A8C1F0(a1, v28);
      v29 = *(_BYTE **)a1;
      v27 = *(unsigned int *)(a1 + 8);
      v30 = (__m128i *)(*(_QWORD *)a1 + (char *)v74 - destb);
    }
  }
  else
  {
    v29 = *(_BYTE **)a1;
    v30 = (__m128i *)v74;
  }
  v31 = (__m128i *)&v29[32 * v27];
  v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
  if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
  {
    v31[1] = _mm_loadu_si128(v30 + 1);
  }
  else
  {
    v31->m128i_i64[0] = v30->m128i_i64[0];
    v31[1].m128i_i64[0] = v30[1].m128i_i64[0];
  }
  v31->m128i_i64[1] = v30->m128i_i64[1];
  v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
  v30->m128i_i64[1] = 0;
  v30[1].m128i_i8[0] = 0;
  v32 = v74[0];
  ++*(_DWORD *)(a1 + 8);
  if ( v32 != v75 )
    operator delete(v32);
  v33 = *(void **)(v5 + 248);
  v34 = 0;
  v35 = *(_QWORD *)(v5 + 256);
  v81.m128i_i64[0] = 0;
  if ( v35 > v81.m128i_i64[1] )
  {
    deste = v33;
    sub_2236E10(&s, v82, v35, 1);
    v34 = v81.m128i_i64[0];
    v33 = deste;
  }
  if ( v35 )
  {
    memcpy(&s[v34], v33, v35);
    v34 = v81.m128i_i64[0];
  }
  v79 = 257;
  v76 = 260;
  v74[0] = a2 + 623;
  v81.m128i_i64[0] = v34 + v35;
  sub_129BDF0((char *)v67, (__int64)v53);
  v70 = 259;
  v73 = 260;
  v71[0] = v67;
  v69[0] = "lib";
  sub_228A3B0(&s, v69, v71, v74, v77);
  if ( v67[0] != v68 )
    operator delete(v67[0]);
  v36 = v81.m128i_i64[0];
  if ( (unsigned __int64)(v81.m128i_i64[0] + 1) > v81.m128i_i64[1] )
  {
    sub_2236E10(&s, v82, v81.m128i_i64[0] + 1, 1);
    v36 = v81.m128i_i64[0];
  }
  s[v36] = 0;
  v37 = s;
  v38 = v78;
  v77[0] = v78;
  if ( !s )
    goto LABEL_84;
  v39 = strlen(s);
  v40 = (void *)v39;
  if ( v39 > 0xF )
  {
    v51 = (_QWORD *)operator new(v39 + 1);
    v78[0] = v40;
    v77[0] = v51;
    goto LABEL_68;
  }
  if ( v39 == 1 )
  {
    LOBYTE(v78[0]) = *v37;
    goto LABEL_45;
  }
  if ( v39 )
  {
    v51 = v78;
LABEL_68:
    memcpy(v51, v37, (size_t)v40);
    v38 = v77[0];
  }
LABEL_45:
  v77[1] = v40;
  *((_BYTE *)v40 + (_QWORD)v38) = 0;
  v41 = *(unsigned int *)(a1 + 8);
  v42 = v41 + 1;
  if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v52 = *(_BYTE **)a1;
    if ( *(_QWORD *)a1 > (unsigned __int64)v77 || v77 >= (void **)&v52[32 * v41] )
    {
      sub_A8C1F0(a1, v42);
      v43 = *(_BYTE **)a1;
      v41 = *(unsigned int *)(a1 + 8);
      v44 = (__m128i *)v77;
    }
    else
    {
      sub_A8C1F0(a1, v42);
      v43 = *(_BYTE **)a1;
      v41 = *(unsigned int *)(a1 + 8);
      v44 = (__m128i *)(*(_QWORD *)a1 + (char *)v77 - v52);
    }
  }
  else
  {
    v43 = *(_BYTE **)a1;
    v44 = (__m128i *)v77;
  }
  v45 = (__m128i *)&v43[32 * v41];
  v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
  if ( (__m128i *)v44->m128i_i64[0] == &v44[1] )
  {
    v45[1] = _mm_loadu_si128(v44 + 1);
  }
  else
  {
    v45->m128i_i64[0] = v44->m128i_i64[0];
    v45[1].m128i_i64[0] = v44[1].m128i_i64[0];
  }
  v45->m128i_i64[1] = v44->m128i_i64[1];
  v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
  v44->m128i_i64[1] = 0;
  v44[1].m128i_i8[0] = 0;
  v46 = v77[0];
  ++*(_DWORD *)(a1 + 8);
  if ( v46 != v78 )
    operator delete(v46);
  if ( s != v82 )
    free(s);
  return a1;
}
