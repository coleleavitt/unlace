_BYTE *__fastcall sub_14831E0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int16 a8)
{
  char v10; // al
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // r15
  __int16 v18; // ax
  bool v19; // cl
  bool v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdi
  __int64 v26; // rdx
  _BYTE *result; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r14
  size_t v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  size_t v36; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  size_t v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  size_t v42; // rax
  unsigned __int64 v46; // [rsp+20h] [rbp-F8h]
  __int64 v47; // [rsp+30h] [rbp-E8h]
  __int64 v48; // [rsp+38h] [rbp-E0h]
  __int64 v49; // [rsp+40h] [rbp-D8h]
  char v51; // [rsp+4Dh] [rbp-CBh]
  char v52; // [rsp+4Eh] [rbp-CAh]
  char v53; // [rsp+4Fh] [rbp-C9h]
  _BYTE *v54; // [rsp+50h] [rbp-C8h] BYREF
  char v55; // [rsp+58h] [rbp-C0h]
  __int64 v56; // [rsp+60h] [rbp-B8h]
  int v57; // [rsp+68h] [rbp-B0h]
  __int16 v58; // [rsp+6Ch] [rbp-ACh]
  __int64 (__fastcall *v59)(__int64); // [rsp+70h] [rbp-A8h]
  __int64 v60; // [rsp+78h] [rbp-A0h]
  __int64 v61; // [rsp+80h] [rbp-98h]
  unsigned __int8 *v62[17]; // [rsp+90h] [rbp-88h] BYREF

  v54 = (_BYTE *)(a1 + 1952);
  v10 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v11 = (_QWORD *)(byte_9 + 5);
  v55 = v10;
  v56 = a1;
  v58 = 63;
  v57 = 1507350;
  v59 = sub_146A990;
  v60 = 0;
  v61 = 0;
  if ( (unsigned __int8)sub_156A040(&v54, 14, &byte_22F0C30, 0) )
  {
LABEL_21:
    result = v54;
    *v54 = v55;
    return result;
  }
  if ( !*(_QWORD *)(a1 + 472) )
  {
    v32 = *(_QWORD *)(a1 + 8);
    v33 = j__strlen("language");
    v34 = sub_6F3470(v32 + 552, "language", v33);
    v35 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 472) = v34;
    v36 = j__strlen("defined_in");
    v37 = sub_6F3470(v35 + 552, "defined_in", v36);
    v38 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 480) = v37;
    v39 = j__strlen("generated_declaration");
    v40 = sub_6F3470(v38 + 552, "generated_declaration", v39);
    v41 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 488) = v40;
    v42 = j__strlen("USR");
    v11 = (__int64 *)"USR";
    *(_QWORD *)(a1 + 496) = sub_6F3470(v41 + 552, "USR", v42);
  }
  if ( *(_WORD *)(a1 + 32) != 5 )
  {
    v26 = a1 + 16;
LABEL_44:
    sub_1564840(v62, a1, v26, 1667);
LABEL_20:
    sub_AEA040((__int64)v62);
    LOWORD(v62[0]) = 23;
    sub_15680D0(a1, v62, 1, 1);
    goto LABEL_21;
  }
  v53 = 0;
  v51 = 0;
  v49 = 0;
  v47 = 0;
  v46 = 0;
  v48 = 0;
  v52 = 0;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a1 + 16);
    v17 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 488) == v17 )
    {
      if ( v46 )
      {
        sub_1564840(v62, a1, a1 + 16, 1666);
        sub_1478560(v62, v17);
        goto LABEL_20;
      }
      v46 = sub_14803B0(a1, (__int64)v11, v12, v13, v14, v15);
      goto LABEL_27;
    }
    if ( *(_QWORD *)(a1 + 472) != v17 && *(_QWORD *)(a1 + 480) != v17 && *(_QWORD *)(a1 + 496) != v17 )
    {
      v26 = a1 + 16;
      goto LABEL_44;
    }
    *(_DWORD *)(a1 + 40) = v16;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v11 = (_QWORD *)&dword_40;
    if ( (unsigned __int8)sub_1569A00(a1, 64, 15, *(_QWORD *)(v17 + 16) + 16LL, **(unsigned int **)(v17 + 16)) )
    {
      LOWORD(v62[0]) = 23;
      sub_15680D0(a1, v62, 1, 1);
      goto LABEL_21;
    }
    v18 = *(_WORD *)(a1 + 32);
    v19 = (unsigned __int16)(v18 - 14) <= 1u;
    if ( *(_QWORD *)(a1 + 472) == v17 )
    {
      v28 = v18 - 17;
      if ( !v19 && v28 > 2u )
      {
        v52 = 1;
        goto LABEL_24;
      }
      if ( !v52 )
      {
        v52 = v19 || v28 <= 2u;
        v48 = sub_14B6F70(a1);
        goto LABEL_27;
      }
LABEL_35:
      sub_1564820(v62, a1, v16, 1666);
      v11 = (__int64 *)v17;
      sub_1478560(v62, v17);
      sub_AEA040((__int64)v62);
      sub_14B6F70(a1);
      goto LABEL_27;
    }
    v20 = v19 || v18 == 17;
    if ( *(_QWORD *)(a1 + 496) == v17 )
      break;
    if ( !v20 && (unsigned __int16)(v18 - 18) > 1u )
    {
      v51 = 1;
LABEL_24:
      sub_1564840(v62, a1, a1 + 16, 19);
      sub_14780E0(v62, 3);
      v29 = 0;
      if ( *(_QWORD *)(a1 + 472) != v17 )
        v29 = (*(_QWORD *)(a1 + 480) != v17) + 1LL;
      sub_14780E0(v62, v29);
      sub_AEA040((__int64)v62);
      v11 = (__int64 *)v62;
      LODWORD(v62[0]) = 1507394;
      sub_15680D0(a1, v62, 2, 3);
      goto LABEL_27;
    }
    if ( v51 )
      goto LABEL_35;
    v51 = 1;
    v47 = sub_14B6F70(a1);
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_28;
LABEL_16:
    v25 = *(__int64 **)(a1 + 8);
    v11 = (__int64 *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v25, (int *)(a1 + 16));
    if ( *(_WORD *)(a1 + 32) != 5 )
    {
      v26 = a1 + 16;
      goto LABEL_44;
    }
  }
  if ( !v20 && (unsigned __int16)(v18 - 18) > 1u )
  {
    v53 = 1;
    goto LABEL_24;
  }
  if ( v53 )
    goto LABEL_35;
  v53 = 1;
  v49 = sub_14B6F70(a1);
LABEL_27:
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_16;
LABEL_28:
  if ( (unsigned __int8)sub_14808E0((__int64)&v54, v11, v21, v22, v23, v24) )
    goto LABEL_21;
  v30 = HIDWORD(v61);
  if ( a5 )
    *a5 = HIDWORD(v61);
  v62[0] = (unsigned __int8 *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
  v62[1] = (unsigned __int8 *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
  v62[2] = (unsigned __int8 *)(v46 | 2);
  v62[3] = (unsigned __int8 *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
  v31 = sub_147A2E0(a4 + 40, a2, (v30 << 32) | a3, a6, a7, v62, 4u, a8, 0);
  sub_147F4B0(a4 + 8, v31);
  result = v54;
  *v54 = v55;
  return result;
}
