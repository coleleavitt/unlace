__int64 __fastcall sub_14CC110(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // r12
  __int64 v14; // rsi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  int v22; // eax
  __int16 v23; // ax
  char v24; // dl
  void *v25; // rdi
  __int64 v26; // rax
  int v27; // r13d
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  bool v34; // zf
  unsigned int v35; // r13d
  __int64 v36; // rax
  __int64 *v37; // rdi
  unsigned __int8 v38; // al
  unsigned __int8 v39; // r8
  __int16 v40; // ax
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r13d
  int v44; // eax
  __int64 *v45; // rdi
  __int64 v46; // rax
  unsigned __int8 v47; // r8
  __int64 v48; // rdx
  unsigned int v49; // eax
  char v50; // al
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int16 v53; // [rsp+2h] [rbp-CC6h]
  int v54; // [rsp+4h] [rbp-CC4h]
  int v55[2]; // [rsp+8h] [rbp-CC0h]
  int v57[2]; // [rsp+10h] [rbp-CB8h]
  __int64 v58; // [rsp+18h] [rbp-CB0h]
  int v59[2]; // [rsp+18h] [rbp-CB0h]
  __int64 v60; // [rsp+18h] [rbp-CB0h]
  unsigned __int8 v61; // [rsp+18h] [rbp-CB0h]
  unsigned int v62; // [rsp+18h] [rbp-CB0h]
  unsigned __int8 v63; // [rsp+18h] [rbp-CB0h]
  unsigned int v64; // [rsp+20h] [rbp-CA8h]
  int v66; // [rsp+2Ch] [rbp-C9Ch] BYREF
  unsigned __int64 v67; // [rsp+34h] [rbp-C94h] BYREF
  char v68; // [rsp+3Ch] [rbp-C8Ch]
  int v69[2]; // [rsp+40h] [rbp-C88h]
  int v70[2]; // [rsp+48h] [rbp-C80h] BYREF
  __int64 v71[10]; // [rsp+50h] [rbp-C78h] BYREF
  int v72[2]; // [rsp+A0h] [rbp-C28h] BYREF
  void *v73; // [rsp+A8h] [rbp-C20h]
  int v74[2]; // [rsp+B0h] [rbp-C18h]
  _BYTE v75[16]; // [rsp+B8h] [rbp-C10h] BYREF
  int v76[2]; // [rsp+C8h] [rbp-C00h] BYREF
  void *v77; // [rsp+D0h] [rbp-BF8h]
  int v78[2]; // [rsp+D8h] [rbp-BF0h]
  _BYTE v79[16]; // [rsp+E0h] [rbp-BE8h] BYREF
  int v80[2]; // [rsp+F0h] [rbp-BD8h] BYREF
  char v81; // [rsp+F8h] [rbp-BD0h]
  __int64 v82; // [rsp+FCh] [rbp-BCCh]
  char v83; // [rsp+104h] [rbp-BC4h]
  void *v84; // [rsp+108h] [rbp-BC0h]
  __int64 v85; // [rsp+110h] [rbp-BB8h]
  void *v86[2]; // [rsp+118h] [rbp-BB0h] BYREF
  char v87; // [rsp+128h] [rbp-BA0h] BYREF
  __int64 v88; // [rsp+138h] [rbp-B90h] BYREF
  void *ptr; // [rsp+140h] [rbp-B88h]
  __int64 v90; // [rsp+150h] [rbp-B78h] BYREF
  void *v91; // [rsp+170h] [rbp-B58h]
  int v92; // [rsp+17Ch] [rbp-B4Ch]
  unsigned __int8 *v93; // [rsp+220h] [rbp-AA8h] BYREF
  void *v94; // [rsp+228h] [rbp-AA0h]
  __int64 v95; // [rsp+230h] [rbp-A98h]
  _BYTE v96[16]; // [rsp+238h] [rbp-A90h] BYREF
  __int64 v97; // [rsp+248h] [rbp-A80h] BYREF
  void *v98; // [rsp+250h] [rbp-A78h]
  __int64 v99; // [rsp+258h] [rbp-A70h]
  _BYTE v100[28]; // [rsp+260h] [rbp-A68h] BYREF
  int v101; // [rsp+27Ch] [rbp-A4Ch]
  unsigned __int64 v102; // [rsp+550h] [rbp-778h]

  v12 = 0;
  v14 = *(_QWORD *)(a2 + 96);
  v66 = a5;
  if ( a10 )
    v12 = *(_QWORD *)(v14 + 608);
  v53 = *(_WORD *)(a2 + 92);
  v54 = *(_DWORD *)(a2 + 88);
  sub_1703F20(a2 + 48, v14, *(unsigned int *)(a2 + 16));
  v15 = *(_WORD *)(a2 + 32);
  if ( v15 == 3 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v16 + 760) )
    {
      *(_BYTE *)(v16 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v16 + 48) + 6LL) = 1;
    }
    v17 = *(_QWORD *)(a2 + 96);
    *(_WORD *)(a2 + 32) = 1;
    sub_172A9A0(*(_QWORD *)(v17 + 656), *(_QWORD *)(v17 + 608), 10);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 18) = 0;
    goto LABEL_7;
  }
  *(_QWORD *)v72 = 0;
  v73 = v75;
  *(_QWORD *)v76 = a2 + 504;
  *(_QWORD *)v74 = 0x200000000LL;
  v77 = v79;
  *(_QWORD *)v78 = 0x200000000LL;
  if ( (unsigned __int16)(v15 - 406) <= 8u || (unsigned int)sub_155CBC0(a2, 0, 0) )
    sub_14AB020(a2, (unsigned int *)v72, a7, a8);
  *(_QWORD *)v69 = a2;
  *(_QWORD *)v70 = &v66;
  v22 = sub_15615B0(a2, a3 != nullptr, a9 != 0);
  if ( v22 == 2 )
  {
    sub_1564820(
      &v93,
      *(_QWORD *)v69,
      *(unsigned int *)(*(_QWORD *)v69 + 16LL),
      (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 8LL) + 56LL) + 1LL) & 0x40) == 0 ? 1998 : 2084);
    sub_AE9DF0(&v93, **(_DWORD **)v70 == 2, 2u);
    sub_AEA040((__int64)&v93);
    v34 = *(_WORD *)(a2 + 32) == 153;
    v35 = *(_DWORD *)(a2 + 16);
    v80[0] = 0;
    if ( v34 )
    {
      v60 = sub_14C6120(a2, 10, (__int64)v72, a7, a8);
      v36 = sub_1C36280(*(_QWORD *)(a2 + 96), v60, v35, (unsigned int)v80[0]);
    }
    else
    {
      v93 = nullptr;
      v97 = a2 + 504;
      v94 = v96;
      v98 = v100;
      v95 = 0x200000000LL;
      v99 = 0x200000000LL;
      v58 = sub_14972B0((__m128i *)a2, 10, v80, (__int64)v72, (__int64 *)&v93, 1, a7, a8, 0, nullptr);
      sub_15DCED0(v97, &v97);
      if ( v98 != v100 )
        free(v98);
      if ( v94 != v96 )
        free(v94);
      v36 = sub_1C36280(*(_QWORD *)(a2 + 96), v58, v35, (unsigned int)v80[0]);
    }
    goto LABEL_67;
  }
  if ( v22 != 3 )
  {
    if ( v22 )
    {
      if ( v12 )
      {
        sub_15ED420(v12, 6);
        *(_DWORD *)(v12 + 8) |= 0x2000000u;
      }
      sub_147A4A0((__int64)v80, a2 + 504);
      sub_148B330(a2, (__int64)v80, 0, 3u, 11, a7, a8);
      sub_147A650((__int64)&v93, (__int64)v80, (__int64)v72, 11);
      sub_147E3E0(a2, (__int64)&v93);
      v23 = *(_WORD *)(a2 + 32);
      if ( v23 == 126 )
      {
        LODWORD(v71[0]) = 0;
        v42 = sub_156E540(a2, 1, v71);
        if ( v42 == 1 )
        {
          LOWORD(v67) = 63;
          sub_15680D0(a2, &v67, 1, 1);
          *(_QWORD *)a1 = 0;
          *(_QWORD *)(a1 + 8) = 1;
          *(_BYTE *)(a1 + 16) = 1;
          *(_BYTE *)(a1 + 18) = 0;
LABEL_30:
          sub_147A7A0((char *)&v93);
          if ( v92 )
            free(v91);
          sub_15DCED0(v88, &v88);
          if ( ptr != &v90 )
            free(ptr);
          v25 = v86[0];
          if ( v86[0] == &v87 )
            goto LABEL_36;
          goto LABEL_35;
        }
        v102 = v42 & 0xFFFFFFFFFFFFFFFELL;
        if ( LODWORD(v71[0]) )
          v101 = v71[0];
        v23 = *(_WORD *)(a2 + 32);
      }
      if ( v23 == 189 )
        sub_14C56A0((const __m128i *)a2, (__int64)&v93, a7, a8);
      *(_QWORD *)v57 = sub_1849A30(*(_QWORD *)(a2 + 96), *(_QWORD *)(*(_QWORD *)(a2 + 96) + 608LL), &v93);
      if ( v24 )
      {
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 16) = 1;
        *(_BYTE *)(a1 + 18) = 0;
        goto LABEL_30;
      }
      v38 = sub_156F700(a2);
      v39 = v38;
      if ( v38 )
      {
        v61 = v38;
        v45 = *(__int64 **)(a2 + 8);
        *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
        sub_14634E0(v45, (int *)(a2 + 16));
        v39 = v61;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 56LL) + 1LL) & 0x10) == 0 || *(_WORD *)(a2 + 32) != 24 )
        {
          sub_1703A10(a2 + 48, *(unsigned int *)(a2 + 16), *(_QWORD *)v57);
          v46 = sub_14BDAD0(a2, 0, a7);
          v47 = v61;
          v48 = v46;
          goto LABEL_88;
        }
      }
      else
      {
        v40 = *(_WORD *)(a2 + 32);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 56LL) + 1LL) & 0x10) == 0 || v40 != 24 )
        {
          if ( v40 == 22 )
          {
            v49 = sub_146A990(a2);
            LOWORD(v71[0]) = 23;
            v62 = v49;
            v50 = sub_15680D0(a2, v71, 1, 3);
            v51 = v62;
            if ( v50 )
              v51 = sub_146A990(a2);
            v64 = v51;
            sub_1564820(v71, a2, *(unsigned int *)(*(_QWORD *)v57 + 24LL), 1620);
            v68 = 1;
            v67 = __PAIR64__(v64, v62);
            sub_AEC610(v71, (__int64 *)&v67);
            sub_AEA040((__int64)v71);
            v41 = *(_QWORD *)(a2 + 96);
          }
          else
          {
            sub_1564820(v71, a2, *(unsigned int *)(*(_QWORD *)v57 + 24LL), 1619);
            sub_AEA040((__int64)v71);
            v41 = *(_QWORD *)(a2 + 96);
          }
          goto LABEL_75;
        }
      }
      v63 = v39;
      sub_1564820(v71, a2, *(unsigned int *)(a2 + 16), 2118);
      sub_AEA040((__int64)v71);
      v52 = sub_14EE310(a2);
      v47 = v63;
      v48 = v52;
LABEL_88:
      v41 = *(_QWORD *)(a2 + 96);
      if ( v48 != 1 )
      {
        sub_17ED4C0(v41, *(_QWORD *)v57, v48 & 0xFFFFFFFFFFFFFFFELL, v47 ^ 1u);
        goto LABEL_76;
      }
LABEL_75:
      sub_17A5050(v41, *(_QWORD *)v57);
LABEL_76:
      sub_17BF6B0(*(_QWORD *)(a2 + 96), *(_QWORD *)v57);
      sub_19B4DA0(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)v57, a4, (unsigned int)v66);
      goto LABEL_30;
    }
    if ( v12 )
    {
      sub_15ED420(v12, 6);
      *(_DWORD *)(v12 + 8) &= ~0x2000000u;
    }
    if ( v72[0] && v72[1] )
    {
      sub_1481BE0(a2, (unsigned int *)v72, 0);
      v74[0] = 0;
      sub_15DCED0(*(_QWORD *)v76, v76);
      v78[0] = 0;
      *(_QWORD *)v72 = 0;
    }
    if ( !a3 || *(_WORD *)(a2 + 32) != 63 )
    {
      v26 = *(_QWORD *)(a2 + 96);
      v27 = v66;
      *(_QWORD *)v55 = v26;
      if ( v66 == 1 )
        sub_18C74E0(v26, 4, 0, 4);
      v28 = sub_14BFC10((const __m128i *)a2, 0, a7);
      if ( v28 == 1 )
      {
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 16) = 1;
        *(_BYTE *)(a1 + 18) = 0;
      }
      else
      {
        v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
        if ( a3 && *(_WORD *)(a2 + 32) == 63 )
        {
          *(_QWORD *)v59 = v29;
          sub_14C5AB0(*(__int64 *)v69, (_DWORD **)v70);
          *a3 = sub_1C36190(*(_QWORD *)(a2 + 96), *(_QWORD *)v59, 1);
          v37 = *(__int64 **)(a2 + 8);
          *(_DWORD *)(a2 + 40) = *(_DWORD *)(a2 + 16);
          sub_14634E0(v37, (int *)(a2 + 16));
          sub_14CC110(a1, a2, 0, a4, v66, a6, 0, 0);
        }
        else
        {
          sub_1917B40(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(*(_QWORD *)(a2 + 96) + 608LL), a4, v29, v66, a6);
        }
      }
      if ( v27 == 1 )
        sub_190D5E0(*(_QWORD *)v55);
      goto LABEL_36;
    }
    sub_14C5AB0(*(__int64 *)v69, (_DWORD **)v70);
    v43 = *(_DWORD *)(a2 + 16);
    v44 = v43;
    if ( (*(_BYTE *)(a2 + 34) & 0x10) == 0 && v43 >= 0 )
    {
      sub_1564820(&v93, a2, (unsigned int)v43, 2137);
      sub_AE9DF0(&v93, v66 == 2, 2u);
      v82 = 0;
      v83 = 0;
      v84 = v86;
      v85 = 0;
      LOBYTE(v86[0]) = 0;
      v87 = 0;
      v80[0] = v43;
      v80[1] = v43;
      v81 = 1;
      if ( v43 )
      {
        sub_14C6E00((__int64 *)&v93, (unsigned __int64)v80);
        if ( v84 != v86 )
          operator delete(v84);
      }
      sub_AEA040((__int64)&v93);
      v44 = *(_DWORD *)(a2 + 16);
    }
    *(_DWORD *)(a2 + 40) = v44;
    sub_14634E0(*(__int64 **)(a2 + 8), (int *)(a2 + 16));
    v36 = sub_1C36210(*(_QWORD *)(a2 + 96), (unsigned int)v43, 0);
LABEL_67:
    *a3 = v36;
    sub_14CC110(a1, a2, 0, a4, v66, a6, 0, 0);
    goto LABEL_36;
  }
  v80[0] = 0;
  v94 = v96;
  v97 = a2 + 504;
  v30 = *(_DWORD *)(a2 + 16);
  v95 = 0x200000000LL;
  v93 = nullptr;
  v98 = v100;
  v99 = 0x200000000LL;
  v31 = sub_14972B0((__m128i *)a2, 9, v80, (__int64)v72, (__int64 *)&v93, 0, a7, a8, a9, nullptr);
  v32 = sub_1C36280(*(_QWORD *)(a2 + 96), v31, v30, *(unsigned int *)(a2 + 16));
  *(_BYTE *)(a1 + 18) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a9 + 96) = v32;
  v33 = v97;
  *(_BYTE *)(a1 + 16) = 0;
  sub_15DCED0(v33, &v97);
  if ( v98 != v100 )
    free(v98);
  v25 = v94;
  if ( v94 == v96 )
    goto LABEL_36;
LABEL_35:
  free(v25);
LABEL_36:
  sub_15DCED0(*(_QWORD *)v76, v76);
  if ( v77 != v79 )
    free(v77);
  if ( v73 != v75 )
    free(v73);
LABEL_7:
  v18 = *(_DWORD *)(a2 + 2792);
  if ( v18 )
  {
    v19 = *(_WORD *)(a2 + 88);
    v20 = *(_QWORD *)(a2 + 2784) + 24LL * v18 - 24;
    do
    {
      if ( v19 == *(_WORD *)(v20 + 14) )
      {
        if ( *(_DWORD *)(v20 + 16) == *(_DWORD *)(a2 + 90) )
          goto LABEL_10;
      }
      else if ( v19 > *(_WORD *)(v20 + 14) )
      {
        goto LABEL_10;
      }
      if ( *(_WORD *)(a2 + 90) <= *(_WORD *)(v20 + 16) && *(_WORD *)(a2 + 92) <= *(_WORD *)(v20 + 18) )
        break;
LABEL_10:
      --v18;
      v20 -= 24;
      *(_DWORD *)(a2 + 2792) = v18;
    }
    while ( v18 );
  }
  *(_DWORD *)(a2 + 88) = v54;
  *(_WORD *)(a2 + 92) = v53;
  if ( v12 )
    *(_DWORD *)(v12 + 8) &= ~0x2000000u;
  return a1;
}
