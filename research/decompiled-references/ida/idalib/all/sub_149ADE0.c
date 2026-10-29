void __fastcall sub_149ADE0(
        __int64 a1,
        unsigned __int64 a2,
        int *a3,
        __int64 a4,
        int *a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8)
{
  int v10; // r8d
  __int64 *v11; // rdi
  char *v12; // rax
  unsigned int v13; // ebp
  int v14; // ecx
  __int64 v15; // rdi
  __int16 v16; // ax
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int16 v19; // ax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  void *v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  unsigned __int8 ***v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int8 **v31; // rdx
  void **v32; // rbp
  __int64 v33; // rax
  int *v34; // rbp
  __int64 *v35; // rdi
  __int64 *v36; // rdi
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // r12d
  int *v41; // r14
  size_t v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  unsigned int *v53; // rax
  __int16 v54; // ax
  char v55; // al
  _WORD *v56; // rdi
  __int64 *v57; // rdi
  size_t v58; // rax
  _BOOL8 v59; // rsi
  size_t v60; // rax
  int v61; // [rsp+24h] [rbp-D84h]
  unsigned __int8 *v62; // [rsp+28h] [rbp-D80h]
  __int64 v64; // [rsp+38h] [rbp-D70h]
  unsigned int v66; // [rsp+50h] [rbp-D58h]
  unsigned int v67; // [rsp+50h] [rbp-D58h]
  unsigned __int16 v68; // [rsp+50h] [rbp-D58h]
  unsigned int v69; // [rsp+58h] [rbp-D50h]
  bool v70; // [rsp+5Eh] [rbp-D4Ah]
  bool v71; // [rsp+5Fh] [rbp-D49h]
  __int64 v72; // [rsp+60h] [rbp-D48h]
  void *v73; // [rsp+60h] [rbp-D48h]
  __int64 v74; // [rsp+60h] [rbp-D48h]
  __int64 v75; // [rsp+78h] [rbp-D30h]
  unsigned int v76; // [rsp+78h] [rbp-D30h]
  int v77; // [rsp+80h] [rbp-D28h] BYREF
  __int64 v78; // [rsp+88h] [rbp-D20h]
  __int64 v79; // [rsp+90h] [rbp-D18h]
  void *v80; // [rsp+A0h] [rbp-D08h] BYREF
  signed __int64 v81; // [rsp+A8h] [rbp-D00h]
  char v82; // [rsp+B0h] [rbp-CF8h] BYREF
  void *v83; // [rsp+B8h] [rbp-CF0h]
  _BYTE v84[24]; // [rsp+C8h] [rbp-CE0h] BYREF
  unsigned __int8 **v85; // [rsp+E0h] [rbp-CC8h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-CC0h]
  __int64 v87; // [rsp+F0h] [rbp-CB8h]
  void *v88; // [rsp+F8h] [rbp-CB0h]
  _QWORD v89[3]; // [rsp+130h] [rbp-C78h] BYREF
  _QWORD v90[5]; // [rsp+148h] [rbp-C60h] BYREF
  __int64 v91; // [rsp+170h] [rbp-C38h] BYREF
  __int64 v92; // [rsp+180h] [rbp-C28h] BYREF
  char *v93; // [rsp+188h] [rbp-C20h]
  __int64 v94; // [rsp+190h] [rbp-C18h]
  __int64 v95; // [rsp+198h] [rbp-C10h] BYREF
  _QWORD v96[2]; // [rsp+1A8h] [rbp-C00h] BYREF
  __int64 v97; // [rsp+1B8h] [rbp-BF0h]
  __int64 v98; // [rsp+1C0h] [rbp-BE8h] BYREF
  _BYTE v99[32]; // [rsp+1D0h] [rbp-BD8h] BYREF
  __int64 v100; // [rsp+1F0h] [rbp-BB8h] BYREF
  void *v101; // [rsp+1F8h] [rbp-BB0h] BYREF
  __int64 v102; // [rsp+208h] [rbp-BA0h] BYREF
  __int64 v103; // [rsp+218h] [rbp-B90h] BYREF
  void *ptr; // [rsp+220h] [rbp-B88h]
  __int64 v105; // [rsp+230h] [rbp-B78h] BYREF
  void *v106; // [rsp+250h] [rbp-B58h]
  int v107; // [rsp+25Ch] [rbp-B4Ch]
  unsigned __int8 *v108[3]; // [rsp+300h] [rbp-AA8h] BYREF
  _QWORD v109[4]; // [rsp+318h] [rbp-A90h] BYREF
  __int64 v110; // [rsp+338h] [rbp-A70h]
  unsigned __int8 *v111; // [rsp+340h] [rbp-A68h] BYREF
  unsigned int v112; // [rsp+350h] [rbp-A58h]
  unsigned int v113; // [rsp+358h] [rbp-A50h]
  int v114; // [rsp+368h] [rbp-A40h]
  int v115; // [rsp+388h] [rbp-A20h]
  char v116; // [rsp+5D0h] [rbp-7D8h]
  unsigned int v117; // [rsp+D5Ch] [rbp-4Ch]

  v61 = a2;
  if ( (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL) + 18LL) - 1 > 0x7F )
  {
    sub_1564820(v108, a1, *(unsigned int *)(a1 + 16), 1684);
    sub_AE9DF0(v108, 127, 3u);
    sub_AEA040((__int64)v108);
    v48 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v48 + 760) )
    {
      *(_BYTE *)(v48 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v48 + 48) + 6LL) = 1;
    }
    *(_WORD *)(a1 + 32) = 1;
    return;
  }
  if ( (unsigned int)a2 <= 0x1A )
  {
    v33 = 67240064;
    v71 = (_DWORD)a2 == 7;
    v70 = (_DWORD)a2 == 17;
    if ( _bittest64(&v33, a2) )
    {
      v69 = 1;
      if ( *(_WORD *)(a1 + 32) != 27 )
        goto LABEL_5;
LABEL_61:
      v34 = (int *)(a1 + 16);
LABEL_62:
      v35 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v35, v34);
      *a5 = *(_DWORD *)(a1 + 40);
      return;
    }
  }
  else
  {
    v71 = (_DWORD)a2 == 7;
    v70 = (_DWORD)a2 == 17;
  }
  v69 = a6;
  if ( *(_WORD *)(a1 + 32) == 27 )
    goto LABEL_61;
LABEL_5:
  v64 = a1 + 504;
  while ( 1 )
  {
    sub_147A4A0((__int64)v99, v64);
    v89[0] = 0;
    v89[2] = 0x200000000LL;
    v90[2] = v64;
    v89[1] = v90;
    v90[3] = &v91;
    v10 = *a3;
    v93 = (char *)&v95;
    v90[4] = 0x200000000LL;
    v92 = 0;
    v94 = 0x200000000LL;
    v96[0] = v64;
    v96[1] = &v98;
    v97 = 0x200000000LL;
    if ( v10 && a3[1] )
    {
      sub_147F860((__int64)&v92, (__int64)a3);
      v11 = *(__int64 **)(a1 + 8);
      v12 = (char *)v11[7];
    }
    else
    {
      if ( (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_14AB020(a1, v89);
      v11 = *(__int64 **)(a1 + 8);
      v12 = (char *)v11[7];
      if ( (*v12 < 0 || (v12[89] & 1) != 0) && *(_WORD *)(a1 + 32) == 20 )
      {
        v108[0] = nullptr;
        v108[1] = (unsigned __int8 *)v109;
        v108[2] = (unsigned __int8 *)0x200000000LL;
        v109[2] = v64;
        v109[3] = &v111;
        v110 = 0x200000000LL;
        sub_14A9F50(a1, v108);
        sub_147F860((__int64)&v92, (__int64)v108);
        sub_147A450(v108);
        v11 = *(__int64 **)(a1 + 8);
        v12 = (char *)v11[7];
      }
    }
    v13 = 0;
    v66 = *(_DWORD *)(a1 + 16);
    if ( (v12[1] & 8) != 0 && *(_WORD *)(a1 + 32) == 147 )
    {
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v11, (int *)(a1 + 16));
      v13 = *(_DWORD *)(a1 + 40);
    }
    v77 = 0;
    v78 = 0;
    v79 = 0;
    sub_1487580(a1, (__int64)v99, (__int64)&v77, 3u, 0, 0, a7, a8, v69);
    sub_147F500((__int64 *)&v101, (char *)v101, v93, &v93[8 * (unsigned int)v94]);
    LODWORD(v94) = 0;
    sub_15D8C50(&v103, v96);
    v14 = 26;
    LODWORD(v97) = 0;
    if ( v61 != 26 )
      v14 = !v70 ? 1 : 18;
    sub_147A650((__int64)v108, (__int64)v99, (__int64)v89, v14);
    v15 = *(_QWORD *)(a1 + 96);
    v85 = v108;
    v86 = a1;
    sub_15F0FC0(v15, v113, sub_1498E10, &v85);
    if ( v13 )
      v113 = v13;
    v16 = *(_WORD *)(a1 + 32);
    if ( v16 == 189 )
    {
      sub_1490D80((const __m128i *)a1, (__int64)v108, 0, a7, a8);
      v16 = *(_WORD *)(a1 + 32);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1) != 0 && v16 == 62 )
    {
      sub_14D7300(a1, &v100, 0, 0);
      v16 = *(_WORD *)(a1 + 32);
    }
    if ( v16 == 176 )
    {
      sub_1564840(&v85, a1, a1 + 16, 1877);
      sub_AEA040((__int64)&v85);
      v47 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v47, (int *)(a1 + 16));
      sub_14C51E0(a1, 1);
    }
    v62 = nullptr;
    if ( !(_DWORD)v110 )
      v62 = v111;
    if ( !(unsigned int)sub_15AC7E0(v99) && ((_DWORD)v110 || !v111) && !v115 )
    {
      sub_1564820(&v85, a1, v66, 1733);
      sub_AEA040((__int64)&v85);
      goto LABEL_50;
    }
    if ( *(_WORD *)(a1 + 32) == 27 )
    {
      v43 = *(_QWORD *)(a1 + 8);
      v44 = *(_QWORD *)(v43 + 2944);
      v45 = v44 >= *(unsigned int *)(v43 + 2912) ? sub_14180A0(v43, 1u) : *(_QWORD *)(v43 + 2904) + 24 * v44;
      if ( (*(_WORD *)(v45 + 16) != 23 || !v117 && !(unsigned __int8)sub_1E4C860(*(_QWORD *)(a1 + 96)))
        && (unsigned __int8)sub_1E4CD30(*(_QWORD *)(a1 + 96), v108) )
      {
        v46 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v46, (int *)(a1 + 16));
        sub_1550E90(a1, *(unsigned int *)(a1 + 40), v108);
      }
    }
    if ( (v116 & 1) == 0 && ((*(_DWORD *)v108[0] >> 12) & 0x7F) != 0x45 && !v111 && !((unsigned int)v110 | v114) )
    {
      v54 = *(_WORD *)(a1 + 32);
      if ( v54 != 6 && !sub_10CCDE0(v54) )
      {
        v68 = *(_WORD *)(a1 + 32);
        v55 = sub_141A630(v68);
        if ( v68 != 1 && !v55 )
        {
          v56 = *(_WORD **)(a1 + 24);
          if ( v56 )
          {
            if ( sub_FDE0B0(v56, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
            {
              sub_1564840(&v85, a1, a1 + 16, 1714);
              sub_13D35F0(
                (__int64)&v80,
                a1 + 16,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                nullptr);
              sub_AEC220((unsigned __int8 **)&v85, v80, v81);
              if ( v80 != &v82 )
                operator delete(v80);
              sub_AEA040((__int64)&v85);
              v57 = *(__int64 **)(a1 + 8);
              *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
              sub_14634E0(v57, (int *)(a1 + 16));
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(a4 + 8) == 0xFFFF )
    {
      sub_1564820(&v85, a1, v113, 1683);
      sub_AEA040((__int64)&v85);
      LOWORD(v85) = 23;
      sub_15680D0(a1, &v85, 1, 2);
      goto LABEL_84;
    }
    v17 = sub_17D1A30(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v108, v13);
    if ( *(_WORD *)(a1 + 32) != 64 )
    {
      v24 = nullptr;
      goto LABEL_45;
    }
    v67 = *(_DWORD *)(a1 + 16);
    if ( v71 )
      break;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    v75 = a1 + 16;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v72 = *(_QWORD *)(a1 + 96);
    sub_18C74E0(v72, 7, v17, 4);
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_WORD *)(a1 + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 56) + 1LL) & 0x10) != 0 && v19 == 24 )
    {
      sub_1564840(&v85, a1, v75, 2118);
      sub_AEA040((__int64)&v85);
      v22 = sub_14EE310(a1);
      goto LABEL_42;
    }
    if ( v19 != 22
      || ((v20 = *(_QWORD *)(v18 + 2944), v20 >= *(unsigned int *)(v18 + 2912))
        ? (v21 = sub_14180A0(v18, 1u))
        : (v21 = *(_QWORD *)(v18 + 2904) + 24 * v20),
          *(_WORD *)(v21 + 16) != 24) )
    {
      v22 = sub_14BDAD0(a1, 0);
LABEL_42:
      v23 = *(_QWORD *)(a1 + 96);
      if ( v22 == 1 )
      {
        sub_183B3E0(v23, v17, v67, 0);
        LODWORD(v85) = 1507394;
        sub_15680D0(a1, &v85, 2, 3);
      }
      else
      {
        sub_184A040(v23, v17, v67, v22 & 0xFFFFFFFFFFFFFFFELL);
      }
      sub_190D5E0(v72);
      v24 = nullptr;
      goto LABEL_45;
    }
    sub_1564840(&v85, a1, v75, 5033);
    sub_14780E0((unsigned __int8 **)&v85, 0);
    sub_AEA040((__int64)&v85);
    sub_183B3E0(*(_QWORD *)(a1 + 96), v17, v67, 0);
    LOWORD(v85) = 66;
    sub_15680D0(a1, &v85, 1, 2);
    sub_190D5E0(v72);
    sub_147A7A0((char *)v108);
    sub_147A450(&v92);
    sub_147A450(v89);
    sub_147A5F0((__int64)v99);
LABEL_57:
    if ( *(_WORD *)(a1 + 32) != 66 )
      return;
    v34 = (int *)(a1 + 16);
    v36 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v36, (int *)(a1 + 16));
    if ( *(_WORD *)(a1 + 32) == 27 )
      goto LABEL_62;
  }
  v49 = (_QWORD *)operator new(0x70u);
  v50 = *(_QWORD *)(a1 + 8);
  v51 = (__int64)v49;
  *v49 = v49 + 2;
  v49[1] = 0x400000000LL;
  v52 = *(_QWORD *)(v50 + 2944);
  if ( v52 >= *(unsigned int *)(v50 + 2912) )
  {
    v74 = v51;
    v53 = (unsigned int *)sub_14180A0(v50, 1u);
    v51 = v74;
  }
  else
  {
    v53 = (unsigned int *)(*(_QWORD *)(v50 + 2904) + 24 * v52);
  }
  v73 = (void *)v51;
  v76 = *v53;
  sub_14719E0((const __m128i *)a1, v51, 0);
  sub_1847C80(*(_QWORD *)(a1 + 96), v17, v67, v76);
  v24 = v73;
LABEL_45:
  v87 = v17;
  v25 = *(unsigned int *)(a4 + 12);
  v26 = *(_QWORD *)a4;
  v88 = v24;
  v85 = (unsigned __int8 **)v62;
  v27 = &v85;
  LODWORD(v86) = v112;
  v28 = *(unsigned int *)(a4 + 8);
  v29 = v28 + 1;
  v30 = v26 + 32 * v28;
  if ( v29 > v25 )
  {
    if ( v26 > (unsigned __int64)&v85 || v30 <= (unsigned __int64)&v85 )
    {
      sub_149ACE0(a4, v29);
      v27 = &v85;
      v30 = *(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8);
    }
    else
    {
      sub_149ACE0(a4, v29);
      v27 = (unsigned __int8 ***)((char *)&v85 + *(_QWORD *)a4 - v26);
      v30 = *(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8);
    }
  }
  *(_QWORD *)v30 = *v27;
  *(_DWORD *)(v30 + 8) = *((_DWORD *)v27 + 2);
  *(_QWORD *)(v30 + 16) = v27[2];
  v31 = v27[3];
  v27[3] = nullptr;
  *(_QWORD *)(v30 + 24) = v31;
  v32 = (void **)v88;
  ++*(_DWORD *)(a4 + 8);
  if ( v32 )
  {
    if ( *v32 != v32 + 2 )
      free(*v32);
    operator delete(v32, 0x70u);
  }
LABEL_50:
  if ( *(_WORD *)(a1 + 32) != 27 )
  {
    sub_147A7A0((char *)v108);
    sub_147A450(&v92);
    sub_147A450(v89);
    if ( v107 )
      free(v106);
    sub_15DCED0(v103, &v103);
    if ( ptr != &v105 )
      free(ptr);
    if ( v101 != &v102 )
      free(v101);
    goto LABEL_57;
  }
  v37 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v37, (int *)(a1 + 16));
  v38 = *(unsigned int *)(a1 + 40);
  *a5 = v38;
  v39 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (*(_BYTE *)(v39 + 2) & 2) != 0 )
  {
    sub_1564820(&v85, a1, v38, 2136);
    v60 = j__strlen(", ");
    sub_9EC740((__int64)&v80, *a5, ", ", v60, 0);
    if ( (_DWORD)v80 && HIDWORD(v80) )
      sub_1480470((__int64 *)&v85, (unsigned __int64)&v80);
    if ( v83 != v84 )
      operator delete(v83);
    sub_AEA040((__int64)&v85);
    v39 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  }
  if ( (*(_BYTE *)(v39 + 1) & 8) == 0 )
  {
    v41 = a5;
    sub_1564820(&v85, a1, (unsigned int)*a5, 1730);
    v42 = j__strlen(", ");
    goto LABEL_78;
  }
  v40 = v117;
  if ( v117 )
  {
    sub_1564820(&v85, a1, (unsigned int)*a5, 2152);
    sub_14780E0((unsigned __int8 **)&v85, 1);
    LODWORD(v80) = v40;
    HIDWORD(v80) = v40;
    LOBYTE(v81) = 1;
    sub_AEC610((__int64 *)&v85, (__int64 *)&v80);
    sub_AEA040((__int64)&v85);
    goto LABEL_76;
  }
  if ( (unsigned __int8)sub_1E4CD30(*(_QWORD *)(a1 + 96), v108) )
  {
    v40 = v117;
    sub_1564820(&v85, a1, (unsigned int)*a5, 2152);
    sub_14780E0((unsigned __int8 **)&v85, v40 != 0);
    LODWORD(v80) = v40;
    HIDWORD(v80) = v40;
    LOBYTE(v81) = 1;
    sub_AEC610((__int64 *)&v85, (__int64 *)&v80);
    sub_AEA040((__int64)&v85);
    if ( v40 )
    {
LABEL_76:
      sub_1564820(&v85, a1, v40, 2037);
      sub_AEA040((__int64)&v85);
    }
    else
    {
      sub_1564820(&v85, a1, v112, 2036);
      v58 = j__strlen("...");
      sub_9EC740((__int64)&v80, v112, "...", v58, 0);
      if ( (_DWORD)v80 && HIDWORD(v80) )
        sub_1480470((__int64 *)&v85, (unsigned __int64)&v80);
      v59 = 0;
      if ( !v111 )
        v59 = ((unsigned int)v110 | v114) == 0;
      sub_14780E0((unsigned __int8 **)&v85, v59);
      if ( v83 != v84 )
        operator delete(v83);
      sub_AEA040((__int64)&v85);
    }
    v41 = a5;
    sub_1564820(&v85, a1, (unsigned int)*a5, 2035);
    v42 = j__strlen(", ");
LABEL_78:
    sub_9EC740((__int64)&v80, *v41, ", ", v42, 0);
    if ( (_DWORD)v80 && HIDWORD(v80) )
      sub_1480470((__int64 *)&v85, (unsigned __int64)&v80);
    if ( v83 != v84 )
      operator delete(v83);
    sub_AEA040((__int64)&v85);
  }
LABEL_84:
  sub_147A7A0((char *)v108);
  sub_147A450(&v92);
  sub_147A450(v89);
  sub_147A5F0((__int64)v99);
}
