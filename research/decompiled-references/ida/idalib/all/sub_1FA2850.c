void __fastcall sub_1FA2850(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 *v11; // rdx
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // rdi
  void *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rdi
  void *v19; // rax
  unsigned int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __m128i si128; // xmm1
  unsigned int v27; // ecx
  __int64 v28; // rdi
  volatile signed __int32 *v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rdx
  volatile signed __int32 *v35; // rdi
  __int64 v36; // rdi
  volatile signed __int32 *v37; // rax
  unsigned int v38; // ebp
  __int64 v39; // r13
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rdx
  volatile signed __int32 *v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  __int64 v51; // rbp
  __int64 v52; // rsi
  unsigned __int64 *v53; // r14
  unsigned __int64 *i; // rbp
  unsigned __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r14
  __int64 v66; // [rsp+10h] [rbp-348h]
  __int64 v67; // [rsp+10h] [rbp-348h]
  __int64 v68; // [rsp+10h] [rbp-348h]
  __int64 v69; // [rsp+28h] [rbp-330h]
  __int128 v70; // [rsp+30h] [rbp-328h] BYREF
  __int64 v71; // [rsp+40h] [rbp-318h] BYREF
  volatile signed __int32 *v72; // [rsp+48h] [rbp-310h]
  void *v73[2]; // [rsp+50h] [rbp-308h] BYREF
  _DWORD v74[4]; // [rsp+60h] [rbp-2F8h] BYREF
  void *v75; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v76; // [rsp+78h] [rbp-2E0h]
  __int64 v77; // [rsp+80h] [rbp-2D8h]
  __int128 v78; // [rsp+88h] [rbp-2D0h] BYREF
  int v79; // [rsp+98h] [rbp-2C0h]
  void *ptr; // [rsp+110h] [rbp-248h] BYREF
  __int64 v81; // [rsp+118h] [rbp-240h]
  _BYTE v82[568]; // [rsp+120h] [rbp-238h] BYREF

  v4 = a1[2];
  v5 = *(_QWORD **)(v4 + 24);
  if ( *(_DWORD *)(v4 + 48) )
  {
    LODWORD(ptr) = *(_DWORD *)(v4 + 52);
    sub_A1FE50(v5, &ptr, (_BYTE *)&ptr + 4);
    *(_QWORD *)(v4 + 48) = 0;
    v4 = a1[2];
    v5 = *(_QWORD **)(v4 + 24);
  }
  v6 = v5[1];
  v7 = sub_A1F730(v4);
  v8 = a1[2];
  a1[8] = ((unsigned __int64)*(unsigned int *)(v4 + 48) + 8 * (v6 + v7)) >> 3;
  ptr = v82;
  v81 = 0x4000000000LL;
  sub_A25970(v8, 0x13u, 5u);
  v9 = a1[7];
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 36);
    if ( v10 <= 7 && ((1LL << v10) & 0xBC) != 0
      || (v11 = *(__int64 **)(a2 + 104), v12 = *v11, (*(_BYTE *)(*v11 + 626) & 1) != 0) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      *(_OWORD *)v73 = 0;
      v77 = si128.m128i_i64[1];
      v74[0] = 0;
      v75 = &v78;
      v78 = 0;
      v79 = 0;
      v76 = si128.m128i_i64[0] + 20;
      v27 = *(_DWORD *)(v9 + 36);
      if ( v27 > 7 || ((1LL << v27) & 0xBC) == 0 )
      {
        sub_1F6B880(&v70);
        sub_A1FE00(v70, 2, 1);
        sub_A1FE00(v70, 0, 10);
        v28 = a1[2];
        v29 = *((volatile signed __int32 **)&v70 + 1);
        v71 = v70;
        v70 = 0;
        v72 = v29;
        v30 = sub_A22F90(v28, &v71);
        if ( v72 )
          sub_4343A0(v72);
        sub_9B9C90((__int64)&ptr, 2);
        sub_1F76680(a1[2], v30, (unsigned __int8 *)ptr, (unsigned int)v81, (unsigned __int64)v75, v76);
        v31 = a1[2];
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 24) + 8LL);
        v33 = sub_A1F730(v31);
        v34 = *(unsigned int *)(v31 + 48);
        v35 = *((volatile signed __int32 **)&v70 + 1);
        LODWORD(v81) = 0;
        a1[10] = v34 - 8 * v76 + 8 * (v33 + v32);
        if ( v35 )
          sub_4343A0(v35);
      }
      sub_1F6B880(&v70);
      sub_A1FE00(v70, 1, 1);
      sub_A1FE00(v70, 0, 10);
      v36 = a1[2];
      v37 = *((volatile signed __int32 **)&v70 + 1);
      v71 = v70;
      v70 = 0;
      v72 = v37;
      v38 = sub_A22F90(v36, &v71);
      if ( v72 )
        sub_4343A0(v72);
      sub_9B9C90((__int64)&ptr, 1);
      sub_1F76680(a1[2], v38, (unsigned __int8 *)ptr, (unsigned int)v81, (unsigned __int64)v75, v76);
      v39 = a1[2];
      v40 = *(_QWORD *)(*(_QWORD *)(v39 + 24) + 8LL);
      v41 = sub_A1F730(v39);
      v42 = *(unsigned int *)(v39 + 48);
      v43 = *((volatile signed __int32 **)&v70 + 1);
      LODWORD(v81) = 0;
      a1[11] = v42 - 8 * v76 + 8 * (v41 + v40);
      if ( v43 )
        sub_4343A0(v43);
      if ( v75 != &v78 )
        free(v75);
      v12 = **(_QWORD **)(a2 + 104);
    }
  }
  else
  {
    v12 = **(_QWORD **)(a2 + 104);
  }
  v69 = *(_QWORD *)(a2 + 48);
  v13 = *(_BYTE *)(v12 + 625);
  if ( (v13 & 0x10) == 0 )
  {
    v57 = *(_QWORD *)(v69 + 40);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)v57 & 1);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 2) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 4) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 8) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 0x10) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 0x20) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)v57 & 0x40) != 0);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)v57 >> 7);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 1) & 1);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 2) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 4) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 8) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 0x10) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 0x20) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 1) & 0x40) != 0);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 1) >> 7);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 2) & 3);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 40) >> 1) & 3);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 2) & 4) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 2) & 8) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 40) & 8) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 2) & 0x10) != 0);
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 40) >> 4);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 2) & 0x20) != 0);
    sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v57 + 2) & 0x40) != 0);
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 4));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 8));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 12));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 16));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 20));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 24));
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 28) & 1);
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 32));
    sub_9B9C90((__int64)&ptr, *(unsigned int *)(v57 + 36));
    sub_9B9C90((__int64)&ptr, *(_BYTE *)(v57 + 40) & 1);
    sub_9B9C90((__int64)&ptr, (__int64)(*(_QWORD *)(v57 + 152) - *(_QWORD *)(v57 + 144)) >> 5);
    v58 = *(_QWORD *)(v57 + 144);
    v59 = (*(_QWORD *)(v57 + 152) - v58) >> 5;
    if ( (_DWORD)v59 )
    {
      v60 = 0;
      v61 = 32LL * (unsigned int)(v59 - 1);
      while ( 1 )
      {
        v67 = v60;
        sub_1F740F0(*(_QWORD *)(v60 + v58), *(_QWORD *)(v60 + v58 + 8), (__int64)&ptr);
        if ( v61 == v67 )
          break;
        v58 = *(_QWORD *)(v57 + 144);
        v60 = v67 + 32;
      }
    }
    sub_9B9C90((__int64)&ptr, (__int64)(*(_QWORD *)(v57 + 200) - *(_QWORD *)(v57 + 192)) >> 5);
    v62 = *(_QWORD *)(v57 + 192);
    v63 = (*(_QWORD *)(v57 + 200) - v62) >> 5;
    if ( (_DWORD)v63 )
    {
      v64 = 0;
      v65 = 32LL * (unsigned int)(v63 - 1);
      while ( 1 )
      {
        v68 = v64;
        sub_1F740F0(*(_QWORD *)(v64 + v62), *(_QWORD *)(v64 + v62 + 8), (__int64)&ptr);
        if ( v65 == v68 )
          break;
        v62 = *(_QWORD *)(v57 + 192);
        v64 = v68 + 32;
      }
    }
    sub_1F6EB90(a1[2], 3u, (__int64)&ptr);
    LODWORD(v81) = 0;
    v13 = *(_BYTE *)(v12 + 625);
  }
  if ( (v13 & 0x20) == 0 )
  {
    sub_9B9C90((__int64)&ptr, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(v12 + 40) - *(_QWORD *)(v12 + 32)) >> 3));
    v44 = *(_QWORD *)(v12 + 32);
    v45 = 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(v12 + 40) - v44) >> 3);
    if ( (_DWORD)v45 )
    {
      v46 = 0;
      v66 = 8 * (5LL * (unsigned int)(v45 - 1) + 5);
      while ( 1 )
      {
        v47 = v44 + v46;
        v46 += 40;
        sub_1F740F0(*(_QWORD *)v47, *(_QWORD *)(v47 + 8), (__int64)&ptr);
        sub_9B9C90((__int64)&ptr, *(unsigned int *)(v47 + 32));
        sub_9B9C90((__int64)&ptr, *(_BYTE *)(v47 + 36) & 1);
        sub_9B9C90((__int64)&ptr, (*(_BYTE *)(v47 + 36) & 2) != 0);
        if ( v46 == v66 )
          break;
        v44 = *(_QWORD *)(v12 + 32);
      }
    }
    sub_9B9C90((__int64)&ptr, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(v12 + 64) - *(_QWORD *)(v12 + 56)) >> 3));
    v48 = *(_QWORD *)(v12 + 56);
    v49 = 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD *)(v12 + 64) - v48) >> 3);
    if ( (_DWORD)v49 )
    {
      v50 = 8 * (5LL * (unsigned int)(v49 - 1) + 5);
      v51 = 0;
      while ( 1 )
      {
        sub_1F740F0(*(_QWORD *)(v51 + v48), *(_QWORD *)(v51 + v48 + 8), (__int64)&ptr);
        v52 = *(unsigned __int8 *)(*(_QWORD *)(v12 + 56) + v51 + 32);
        v51 += 40;
        sub_9B9C90((__int64)&ptr, v52);
        if ( v51 == v50 )
          break;
        v48 = *(_QWORD *)(v12 + 56);
      }
    }
    sub_9B9C90((__int64)&ptr, (__int64)(*(_QWORD *)(v12 + 608) - *(_QWORD *)(v12 + 600)) >> 5);
    v53 = *(unsigned __int64 **)(v12 + 608);
    for ( i = *(unsigned __int64 **)(v12 + 600); v53 != i; i += 4 )
    {
      v55 = *i;
      v56 = i[1];
      sub_1F740F0(v55, v56, (__int64)&ptr);
    }
    sub_1F6EB90(a1[2], 4u, (__int64)&ptr);
    v13 = *(_BYTE *)(v12 + 625);
  }
  if ( (v13 & 0x40) == 0 )
    sub_1FA2530(a1, v69, a1[7] != 0);
  sub_13C43E0((__int64)&v75, *(_QWORD *)(a2 + 104));
  sub_1F6B880(&v70);
  sub_A1FE00(v70, 6, 1);
  sub_A1FE00(v70, 32, 2);
  sub_A1FE00(v70, 0, 10);
  v14 = a1[2];
  v15 = *((void **)&v70 + 1);
  v73[0] = (void *)v70;
  v70 = 0;
  v73[1] = v15;
  v16 = sub_A22F90(v14, (__int64 *)v73);
  if ( v73[1] )
    sub_4343A0((volatile signed __int32 *)v73[1]);
  v71 = 6;
  v72 = (volatile signed __int32 *)((unsigned int)v78 + 8 * (v77 - (_QWORD)v75) - (unsigned int)v76);
  v17 = a1[2];
  sub_1F6E5C0((__int64)v73, (__int64)&v75);
  sub_1F759B0(v17, v16, (unsigned __int8 *)&v71, 2, (unsigned __int64)v73[0], (__int64)v73[1], 0);
  if ( v73[0] != v74 )
    operator delete(v73[0]);
  if ( *((_QWORD *)&v70 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v70 + 1));
  if ( v75 )
    operator delete(v75);
  sub_13C1AF0((__int64)&v75, *(_QWORD **)(a2 + 104));
  sub_1F6B880(&v70);
  sub_A1FE00(v70, 7, 1);
  sub_A1FE00(v70, 32, 2);
  sub_A1FE00(v70, 0, 10);
  v18 = a1[2];
  v19 = *((void **)&v70 + 1);
  v73[0] = (void *)v70;
  v70 = 0;
  v73[1] = v19;
  v20 = sub_A22F90(v18, (__int64 *)v73);
  if ( v73[1] )
    sub_4343A0((volatile signed __int32 *)v73[1]);
  v71 = 7;
  v21 = a1[2];
  v72 = (volatile signed __int32 *)((unsigned int)v78 + 8 * (v77 - (_QWORD)v75) - (unsigned int)v76);
  sub_1F6E5C0((__int64)v73, (__int64)&v75);
  sub_1F759B0(v21, v20, (unsigned __int8 *)&v71, 2, (unsigned __int64)v73[0], (__int64)v73[1], 0);
  if ( v73[0] != v74 )
    operator delete(v73[0]);
  if ( *((_QWORD *)&v70 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v70 + 1));
  if ( v75 )
    operator delete(v75);
  sub_A25550(a1[2]);
  v22 = a1[2];
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL);
  v24 = sub_A1F730(v22);
  v25 = ptr;
  a1[9] = ((unsigned __int64)*(unsigned int *)(v22 + 48) + 8 * (v24 + v23)) >> 3;
  if ( v25 != v82 )
    free(v25);
}
