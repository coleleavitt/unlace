__int64 __fastcall sub_153CA60(__int64 a1, unsigned __int8 a2, __m128i a3, __m128 a4)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rsi
  char v8; // al
  char v9; // dl
  bool v10; // zf
  _BYTE *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 v15; // ax
  __int64 *v16; // rdi
  unsigned int v17; // ebx
  __int64 *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  bool v28; // r13
  const __m128i *i; // r12
  bool v30; // bl
  unsigned __int64 v31; // r15
  __int64 v32; // rbx
  __int64 *v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rdx
  __int64 *v41; // rdi
  __int16 v42; // ax
  unsigned int j; // r15d
  __int64 *v44; // rdi
  char v45; // al
  __int64 v46; // r13
  unsigned __int32 v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 (*v50)(); // rax
  unsigned __int32 v51; // ebx
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+8h] [rbp-380h]
  __int64 v56; // [rsp+18h] [rbp-370h]
  __int64 v58; // [rsp+38h] [rbp-350h]
  __int64 v59; // [rsp+48h] [rbp-340h]
  char v60; // [rsp+5Bh] [rbp-32Dh]
  unsigned int v61; // [rsp+6Ch] [rbp-31Ch] BYREF
  _BYTE v62[32]; // [rsp+70h] [rbp-318h] BYREF
  _QWORD v63[3]; // [rsp+90h] [rbp-2F8h] BYREF
  int v64; // [rsp+A8h] [rbp-2E0h]
  const char *v65; // [rsp+B0h] [rbp-2D8h]
  _BYTE *v66; // [rsp+C0h] [rbp-2C8h] BYREF
  char v67; // [rsp+C8h] [rbp-2C0h]
  __int64 v68; // [rsp+D0h] [rbp-2B8h]
  int v69; // [rsp+D8h] [rbp-2B0h]
  __int16 v70; // [rsp+DCh] [rbp-2ACh]
  __int64 (__fastcall *v71)(__int64); // [rsp+E0h] [rbp-2A8h]
  __int64 v72; // [rsp+E8h] [rbp-2A0h]
  __int64 v73; // [rsp+F0h] [rbp-298h]
  void *v74; // [rsp+100h] [rbp-288h] BYREF
  void *v75; // [rsp+108h] [rbp-280h]
  __int64 v76; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v77[16]; // [rsp+118h] [rbp-270h] BYREF
  __int8 *v78; // [rsp+128h] [rbp-260h] BYREF
  void *v79; // [rsp+130h] [rbp-258h]
  __int64 v80; // [rsp+138h] [rbp-250h]
  _BYTE v81[16]; // [rsp+140h] [rbp-248h] BYREF
  void *v82; // [rsp+150h] [rbp-238h] BYREF
  __int64 v83; // [rsp+158h] [rbp-230h]
  _BYTE v84[192]; // [rsp+160h] [rbp-228h] BYREF
  unsigned __int64 v85; // [rsp+220h] [rbp-168h] BYREF
  void *v86; // [rsp+228h] [rbp-160h]
  __int64 v87; // [rsp+230h] [rbp-158h]
  _QWORD v88[2]; // [rsp+238h] [rbp-150h] BYREF
  void *v89; // [rsp+248h] [rbp-140h] BYREF
  void *v90; // [rsp+250h] [rbp-138h]
  __int64 v91; // [rsp+258h] [rbp-130h] BYREF
  __int64 v92; // [rsp+260h] [rbp-128h] BYREF
  __int64 v93; // [rsp+268h] [rbp-120h] BYREF
  void *ptr; // [rsp+270h] [rbp-118h]
  __int64 v95; // [rsp+278h] [rbp-110h]
  _QWORD v96[4]; // [rsp+280h] [rbp-108h] BYREF
  void *v97; // [rsp+2A0h] [rbp-E8h]
  __int64 v98; // [rsp+2A8h] [rbp-E0h]
  __int64 v99; // [rsp+2B0h] [rbp-D8h]
  __int64 v100; // [rsp+2B8h] [rbp-D0h]
  __int64 v101; // [rsp+2C0h] [rbp-C8h]
  __int64 v102; // [rsp+2C8h] [rbp-C0h]
  __int64 v103; // [rsp+2D0h] [rbp-B8h]
  __int64 v104; // [rsp+2D8h] [rbp-B0h]
  __int64 v105; // [rsp+2E0h] [rbp-A8h]
  __int64 v106; // [rsp+2E8h] [rbp-A0h]
  __int64 v107; // [rsp+2F0h] [rbp-98h]
  __int64 v108; // [rsp+2F8h] [rbp-90h]
  __int64 v109; // [rsp+300h] [rbp-88h]
  __int64 v110; // [rsp+308h] [rbp-80h]
  __int64 v111; // [rsp+310h] [rbp-78h]
  __int64 v112; // [rsp+318h] [rbp-70h]
  __int64 v113; // [rsp+320h] [rbp-68h]
  __int64 v114; // [rsp+328h] [rbp-60h]
  __int64 v115; // [rsp+330h] [rbp-58h]
  __int16 v116; // [rsp+338h] [rbp-50h]
  __int64 v117; // [rsp+340h] [rbp-48h]

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  sub_2233820(v63);
  v7 = *(_QWORD *)(a1 + 96);
  v64 = v5;
  v63[2] = v6;
  v63[0] = &off_2B552D0;
  v65 = "in compound statement ('{}')";
  sub_15F3080(v62, v7);
  v8 = *(_BYTE *)(a1 + 2064);
  v9 = *(_BYTE *)(a1 + 1952);
  v10 = *(_WORD *)(a1 + 32) == 24;
  *(_BYTE *)(a1 + 2064) = 0;
  v60 = v8;
  v11 = (_BYTE *)(a1 + 1952);
  v66 = (_BYTE *)(a1 + 1952);
  v67 = v9;
  *(_BYTE *)(a1 + 1952) = 1;
  v68 = a1;
  v69 = 1638424;
  v70 = 63;
  v71 = sub_1478A90;
  v72 = 0;
  v73 = 0;
  if ( !v10 )
    goto LABEL_34;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( !(unsigned __int8)sub_1568800(&v66) )
      goto LABEL_4;
    v11 = v66;
    v9 = v67;
LABEL_34:
    v32 = 1;
    goto LABEL_35;
  }
  LODWORD(v73) = sub_1478A90(a1);
LABEL_4:
  v12 = (__int64 *)a2;
  v59 = *(_QWORD *)(a1 + 96);
  sub_1C36400(v59, a2);
  sub_1534040(a1, a3);
  sub_1C36410(*(_QWORD *)(a1 + 96));
  v82 = v84;
  v83 = 0x1800000000LL;
  v15 = *(_WORD *)(a1 + 32);
  if ( v15 == 206 )
  {
    v56 = a1 + 504;
    do
    {
      while ( 1 )
      {
        v16 = *(__int64 **)(v4 + 8);
        *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
        sub_14634E0(v16, (int *)(v4 + 16));
        v10 = *(_WORD *)(v4 + 32) == 5;
        v17 = *(_DWORD *)(v4 + 40);
        v74 = &v76;
        v75 = (void *)0x400000000LL;
        if ( v10 )
        {
          while ( 1 )
          {
            v18 = *(__int64 **)(v4 + 8);
            v19 = *(_QWORD *)(v4 + 24);
            *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
            sub_14634E0(v18, (int *)(v4 + 16));
            v20 = sub_1A5C7E0(*(_QWORD *)(v4 + 96), v19, *(unsigned int *)(v4 + 40), v17);
            v21 = (unsigned int)v75;
            v22 = (unsigned int)v75 + 1LL;
            if ( v22 > HIDWORD(v75) )
            {
              v58 = v20;
              sub_2237220(&v74, &v76, v22, 8);
              v21 = (unsigned int)v75;
              v20 = v58;
            }
            *((_QWORD *)v74 + v21) = v20;
            v10 = *(_WORD *)(v4 + 32) == 66;
            v23 = (unsigned int)((_DWORD)v75 + 1);
            LODWORD(v75) = (_DWORD)v75 + 1;
            if ( !v10 )
              break;
            v34 = *(__int64 **)(v4 + 8);
            *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
            sub_14634E0(v34, (int *)(v4 + 16));
            if ( *(_WORD *)(v4 + 32) != 5 )
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          sub_1564840(&v85, v4, v4 + 16, 14);
          sub_AE9DF0((unsigned __int8 **)&v85, 5, 4u);
          sub_AEA040((__int64)&v85);
          v23 = (unsigned int)v75;
        }
        v85 &= 0xFFFFFFC000000000LL;
        v87 = 0;
        v93 = v56;
        v89 = &v91;
        v90 = (void *)0x200000000LL;
        ptr = v96;
        v95 = 0x200000000LL;
        v88[0] = 0;
        v88[1] = 0;
        v96[2] = 0;
        v96[3] = 0;
        v97 = nullptr;
        v98 = 0;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v102 = 0;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v24 = *(_QWORD *)(v4 + 96);
        v116 &= 0xF000u;
        v115 = 0;
        v117 = 0;
        v25 = sub_17B3220(v24, *(_QWORD *)(v24 + 608), &v85, v74, v23);
        v26 = sub_1C36280(*(_QWORD *)(v4 + 96), v25, v17, *(unsigned int *)(v4 + 16));
        sub_156A150(v4, 1648, &byte_22F0C30, 0);
        if ( v26 > 1 )
        {
          v35 = (unsigned int)v83;
          v36 = v26 & 0xFFFFFFFFFFFFFFFELL;
          v37 = (unsigned int)v83 + 1LL;
          if ( v37 > HIDWORD(v83) )
          {
            sub_2237220(&v82, v84, v37, 8);
            v35 = (unsigned int)v83;
          }
          *((_QWORD *)v82 + v35) = v36;
          LODWORD(v83) = v83 + 1;
        }
        if ( HIDWORD(v98) )
          free(v97);
        v12 = &v93;
        sub_15DCED0(v93, &v93);
        if ( ptr != v96 )
          free(ptr);
        if ( v89 != &v91 )
          free(v89);
        if ( v74 == &v76 )
          break;
        free(v74);
        v15 = *(_WORD *)(v4 + 32);
        if ( v15 != 206 )
          goto LABEL_19;
      }
      v15 = *(_WORD *)(v4 + 32);
    }
    while ( v15 == 206 );
  }
LABEL_19:
  v27 = (__int64)&v74;
  v28 = 0;
  v55 = a2 == 0 ? 3 : 7;
  for ( i = (const __m128i *)v4; ; v15 = i[2].m128i_i16[0] )
  {
    if ( (unsigned __int16)(v15 - 456) > 2u )
      goto LABEL_20;
    if ( (unsigned __int8)sub_15686D0(i) )
      break;
    v15 = i[2].m128i_i16[0];
LABEL_20:
    v30 = v15 != 25 && v15 != 1;
    if ( !v30 )
      break;
    if ( v15 == 426 )
    {
      sub_1526EC0((__int64)i);
      continue;
    }
    if ( v15 == 63 )
    {
      v12 = (__int64 *)&v82;
      if ( (unsigned __int8)sub_153C910((__int64)i, (__int64)&v82, a3, a4) )
        continue;
      v15 = i[2].m128i_i16[0];
    }
    if ( v15 == 201 )
    {
      v41 = (__int64 *)i->m128i_i64[1];
      i[2].m128i_i32[2] = i[1].m128i_i32[0];
      sub_14634E0(v41, i[1].m128i_i32);
      v42 = i[2].m128i_i16[0];
      for ( j = i[2].m128i_u32[2]; v42 == 201; v42 = i[2].m128i_i16[0] )
      {
        v44 = (__int64 *)i->m128i_i64[1];
        i[2].m128i_i32[2] = i[1].m128i_i32[0];
        sub_14634E0(v44, i[1].m128i_i32);
      }
      v74 = nullptr;
      v75 = v77;
      v76 = 0x200000000LL;
      v78 = &i[31].m128i_i8[8];
      v79 = v81;
      v80 = 0x200000000LL;
      if ( (unsigned __int16)(v42 - 406) <= 8u || (unsigned int)sub_155CBC0(i, 0, 1) )
        sub_14AB020((__int64)i, (unsigned int *)&v74, a3, a4);
      if ( (*(_BYTE *)(*(_QWORD *)(i->m128i_i64[1] + 56) + 1LL) & 8) != 0 )
        v45 = sub_1562A00(i, 0);
      else
        v45 = sub_147EA80((__int64)i, 0, 1);
      if ( v45 )
      {
        v46 = i[6].m128i_i64[1];
        v61 = 0;
        ++*(_BYTE *)(v46 + 4);
        v47 = i[1].m128i_u32[0];
        v89 = &i[31].m128i_u64[1];
        v87 = 0x200000000LL;
        v91 = 0x200000000LL;
        v85 = 0;
        v86 = v88;
        v90 = &v92;
        v48 = sub_14977F0((__int64)i, 8u, &v61, (__int64)&v74, (__int64 *)&v85, nullptr, a3, a4);
        v31 = sub_1C36280(i[6].m128i_i64[0], v48, v47, v61);
        sub_15DCED0(v89, &v89);
        if ( v90 != &v92 )
          free(v90);
        if ( v86 != v88 )
          free(v86);
        --*(_BYTE *)(v46 + 4);
        v28 = v31 == 1;
      }
      else
      {
        v52 = sub_14C4C60(i, j, a3);
        if ( v52 == 1 )
        {
          LOWORD(v85) = 63;
          v12 = (__int64 *)&v85;
          sub_15680D0(i, &v85, 1, 0);
          sub_147A450(&v74);
          continue;
        }
        v28 = v30;
        sub_156A150(i, 1642, &byte_22F0C30, 0);
        v53 = sub_1534210((__int64)i, v52, v55);
        v31 = v53;
        if ( v53 != 1 )
        {
          v28 = 0;
          if ( v53 )
          {
            v31 = sub_1C49890(i[6].m128i_i64[0], &v74, v53 & 0xFFFFFFFFFFFFFFFELL);
            v28 = v31 == 1;
          }
        }
      }
      v12 = (__int64 *)&v78;
      sub_15DCED0(v78, &v78);
      if ( v79 != v81 )
        free(v79);
      if ( v75 != v77 )
        free(v75);
    }
    else
    {
      v12 = (__int64 *)&v82;
      v31 = sub_153BAF0((__int64)i, (__int64 (__fastcall ***)())&v82, v55, nullptr, a3, a4);
      v28 = v31 == 1;
    }
    if ( v31 > 1 )
    {
      v38 = (unsigned int)v83;
      v27 = HIDWORD(v83);
      v39 = v31 & 0xFFFFFFFFFFFFFFFELL;
      v40 = (unsigned int)v83 + 1LL;
      if ( v40 > HIDWORD(v83) )
      {
        v12 = (__int64 *)v84;
        sub_2237220(&v82, v84, v40, 8);
        v38 = (unsigned int)v83;
      }
      *((_QWORD *)v82 + v38) = v39;
      LODWORD(v83) = v83 + 1;
    }
  }
  v4 = (__int64)i;
  if ( !v28 || !a2 || (v27 = (unsigned int)v83, v32 = 1, !(_DWORD)v83) )
  {
    v49 = (__int64)sub_102B890;
    v50 = *(__int64 (**)())(**(_QWORD **)(i->m128i_i64[1] + 64) + 208LL);
    if ( v50 != sub_102B890 && !(unsigned __int8)v50() )
    {
      v54 = i->m128i_i64[1];
      v49 = *(unsigned int *)(v54 + 532);
      if ( (_DWORD)v49 || !*(_DWORD *)(v54 + 528) )
      {
        v12 = (__int64 *)i;
        sub_1564820(&v85, i, i[1].m128i_u32[0], 2155);
        sub_AEA040((__int64)&v85);
      }
    }
    v51 = i[1].m128i_u32[0];
    if ( (unsigned __int8)sub_14808E0((__int64)&v66, v12, v49, v27, v13, v14) != 1 && a2 && i[2].m128i_i16[0] == 23 )
      sub_1564BC0(i, v51, 25, 1);
    if ( HIDWORD(v73) )
      v51 = HIDWORD(v73);
    v32 = sub_1C36480(i[6].m128i_i64[0], (unsigned int)v73, v51, v82, (unsigned int)v83, a2);
  }
  if ( v82 != v84 )
    free(v82);
  sub_1C36470(v59);
  v11 = v66;
  v9 = v67;
LABEL_35:
  *v11 = v9;
  *(_BYTE *)(v4 + 2064) = v60;
  sub_15F30C0(v62);
  v63[0] = &off_2B552D0;
  sub_22338A0(v63);
  return v32;
}
