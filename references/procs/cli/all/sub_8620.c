__int64 __fastcall sub_8620(_QWORD *a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // r15
  __int16 v7; // r13
  const char *v8; // rdx
  char *v9; // rdi
  char *v10; // rax
  char v11; // al
  char *v12; // r9
  unsigned int v13; // ecx
  _BYTE *v14; // rsi
  const char *v15; // rcx
  const char *v16; // rdx
  char *v17; // r11
  char v18; // si
  char *v19; // rdi
  char v20; // dl
  const char *v21; // rdx
  char *v22; // rdi
  char v23; // cl
  const char *v24; // rdx
  char *v25; // rdi
  char v26; // cl
  const char *v27; // rdx
  char *v28; // rsi
  char v29; // cl
  const char *v30; // rdx
  char *v31; // rsi
  char v32; // cl
  const char *v33; // r14
  const char *v34; // r8
  unsigned int i; // r12d
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned int j; // r12d
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  const char *v45; // rdi
  const char *v46; // r14
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  const char *v54; // rcx
  const char *v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-4B8h]
  __int64 v58; // [rsp+8h] [rbp-4B8h]
  unsigned __int64 v59; // [rsp+10h] [rbp-4B0h]
  __int64 v60; // [rsp+10h] [rbp-4B0h]
  unsigned __int64 v61; // [rsp+10h] [rbp-4B0h]
  const char *v62; // [rsp+18h] [rbp-4A8h]
  unsigned __int64 v63; // [rsp+18h] [rbp-4A8h]
  unsigned int k; // [rsp+18h] [rbp-4A8h]
  unsigned int v65; // [rsp+2Ch] [rbp-494h] BYREF
  int v66; // [rsp+30h] [rbp-490h] BYREF
  int v67; // [rsp+34h] [rbp-48Ch]
  unsigned __int16 v68; // [rsp+38h] [rbp-488h]
  unsigned __int16 v69; // [rsp+3Ah] [rbp-486h]
  unsigned __int16 v70; // [rsp+3Ch] [rbp-484h]
  unsigned __int16 v71; // [rsp+3Eh] [rbp-482h]
  _QWORD v72[2]; // [rsp+40h] [rbp-480h] BYREF
  __int64 v73; // [rsp+50h] [rbp-470h]
  const char *v74; // [rsp+60h] [rbp-460h] BYREF
  unsigned __int64 v75; // [rsp+68h] [rbp-458h]
  __int64 v76; // [rsp+70h] [rbp-450h]
  char v77[1023]; // [rsp+80h] [rbp-440h] BYREF
  char v78; // [rsp+47Fh] [rbp-41h] BYREF
  _BYTE v79[8]; // [rsp+480h] [rbp-40h] BYREF
  unsigned __int64 v80; // [rsp+488h] [rbp-38h]

  v4 = a1[77];
  v80 = __readfsqword(0x28u);
  if ( netnode_supval(*(_QWORD *)(v4 + 144), 0, &v65, 4, 0) != 4
    || netnode_supval(*(_QWORD *)(v4 + 144), v65, &v66, 16, 97) <= 0 )
  {
    return 0;
  }
  v7 = v67;
  v8 = ".assembly";
  v9 = v77;
  do
  {
    v11 = *v8++;
    *v9 = v11;
    if ( !v11 )
    {
      v12 = v9;
      v13 = v7 & 0x70;
      if ( v13 != 32 )
      {
        if ( v13 <= 0x20 )
        {
          if ( (v7 & 0x70) == 0 )
            goto LABEL_29;
          v15 = "neutral (PE32)";
          goto LABEL_18;
        }
        if ( v13 != 48 )
        {
          if ( v13 == 64 )
            goto LABEL_17;
          v14 = (_BYTE *)(v79 - v9);
          goto LABEL_12;
        }
        goto LABEL_102;
      }
LABEL_101:
      v15 = "x86 (PE32)";
LABEL_18:
      if ( v12 >= v79 )
        goto LABEL_109;
      v10 = &v78;
      if ( v12 != &v78 )
      {
        v16 = " proc:";
        v17 = v12;
        while ( 1 )
        {
          v18 = *v16++;
          *v17 = v18;
          if ( !v18 )
            break;
          if ( ++v17 == &v78 )
            goto LABEL_75;
        }
        if ( v17 >= v79 )
        {
          if ( under_debugger )
            goto LABEL_114;
          goto LABEL_106;
        }
        if ( v17 != &v78 )
        {
          v19 = v17;
          while ( 1 )
          {
            v20 = *v15++;
            *v19 = v20;
            if ( !v20 )
              break;
            if ( ++v19 == &v78 )
              goto LABEL_75;
          }
          v12 = v19;
          goto LABEL_29;
        }
      }
      goto LABEL_75;
    }
    ++v9;
    v10 = &v78;
  }
  while ( v9 != &v78 );
  v78 = 0;
  v12 = v9;
  v13 = v7 & 0x70;
  if ( v13 == 32 )
    goto LABEL_101;
  if ( v13 <= 0x20 )
  {
    if ( (v7 & 0x70) == 0 )
    {
      if ( (v7 & 0x80u) == 0 )
        goto LABEL_37;
LABEL_32:
      if ( v12 != &v78 )
      {
        v21 = " PA_Specified";
        v22 = v12;
        while ( 1 )
        {
          v23 = *v21++;
          *v22 = v23;
          if ( !v23 )
            break;
          if ( ++v22 == &v78 )
            goto LABEL_93;
        }
        v12 = v22;
        goto LABEL_37;
      }
      goto LABEL_93;
    }
LABEL_75:
    v78 = 0;
    if ( (v7 & 0x80u) == 0 )
    {
      v12 = &v78;
      if ( v7 < 0 )
        goto LABEL_39;
      goto LABEL_44;
    }
LABEL_93:
    v78 = 0;
    if ( v7 < 0 )
      goto LABEL_98;
    if ( (v7 & 0x4000) == 0 )
      goto LABEL_51;
    v12 = &v78;
LABEL_46:
    if ( v12 != &v78 )
    {
      v27 = " DisableJITcompileOptimizer";
      v28 = v12;
      while ( 1 )
      {
        v29 = *v27++;
        *v28 = v29;
        if ( !v29 )
          break;
        if ( ++v28 == &v78 )
          goto LABEL_96;
      }
      v10 = v28;
LABEL_51:
      v12 = v10;
LABEL_52:
      if ( (v7 & 0x100) == 0 )
        goto LABEL_58;
      if ( v12 < v79 )
        goto LABEL_54;
LABEL_109:
      if ( under_debugger )
        goto LABEL_114;
      goto LABEL_106;
    }
    goto LABEL_96;
  }
  if ( v13 == 48 )
  {
LABEL_102:
    v15 = "Itanium (PE32+)";
    goto LABEL_18;
  }
  v14 = (_BYTE *)(&dword_0 + 1);
  if ( v13 == 64 )
  {
LABEL_17:
    v15 = "AMD X64 (PE32+)";
    goto LABEL_18;
  }
LABEL_12:
  v12 += (int)qsnprintf(v12, v14, "proc: %x", v13);
LABEL_29:
  if ( (v7 & 0x80u) != 0 )
  {
    if ( v12 < v79 )
    {
      v10 = &v78;
      goto LABEL_32;
    }
    if ( under_debugger )
LABEL_114:
      BUG();
    do
    {
LABEL_106:
      interr(520);
LABEL_107:
      ;
    }
    while ( !under_debugger );
    goto LABEL_114;
  }
LABEL_37:
  if ( (v7 & 0x8000) == 0 )
  {
LABEL_44:
    if ( (v7 & 0x4000) == 0 )
      goto LABEL_52;
    if ( v12 >= v79 )
      goto LABEL_107;
    goto LABEL_46;
  }
  if ( v12 >= v79 )
  {
    if ( under_debugger )
      goto LABEL_114;
    goto LABEL_106;
  }
LABEL_39:
  if ( v12 != &v78 )
  {
    v24 = " EnableJITcompileTracking";
    v25 = v12;
    while ( 1 )
    {
      v26 = *v24++;
      *v25 = v26;
      if ( !v26 )
        break;
      if ( ++v25 == &v78 )
        goto LABEL_98;
    }
    v12 = v25;
    goto LABEL_44;
  }
LABEL_98:
  v78 = 0;
  if ( (v7 & 0x4000) != 0 )
  {
LABEL_96:
    v78 = 0;
    if ( (v7 & 0x100) == 0 )
      goto LABEL_58;
    goto LABEL_97;
  }
  v12 = &v78;
  if ( (v7 & 0x100) == 0 )
    goto LABEL_58;
LABEL_54:
  if ( v12 == &v78 )
  {
LABEL_97:
    v78 = 0;
    goto LABEL_58;
  }
  v30 = " Retargetable";
  v31 = v12;
  while ( 1 )
  {
    v32 = *v30++;
    *v31 = v32;
    if ( !v32 )
      break;
    if ( ++v31 == &v78 )
      goto LABEL_97;
  }
LABEL_58:
  sub_7630((__int64)v72, (__int64)a1, v65, a2, a3, a4);
  v33 = (const char *)v72[0];
  v34 = (const char *)v72[0];
  if ( !v72[1] )
    v34 = (const char *)&unk_15584;
  sub_4D60((__int64)a1, 0, (__int64)"%s %s", v77, v34);
  sub_4D60((__int64)a1, 0, (__int64)"{");
  sub_4D60((__int64)a1, 0, (__int64)"  .hash algorithm 0x%08X", v66);
  sub_4D60((__int64)a1, 0, (__int64)"  .ver %d:%d:%d:%d", v68, v69, v71, v70);
  sub_5820((__int64)a1, v65, "  .publickey = (", 0x69u);
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, "}", 0);
  for ( i = 436207617; ; ++i )
  {
    sub_7630((__int64)&v74, (__int64)a1, i, a2, a3, a4);
    v39 = v76;
    v62 = v74;
    v40 = v75;
    if ( v33 )
    {
      v57 = v76;
      v59 = v75;
      qfree(v33, a1, v76, v36, v37, v38);
      v39 = v57;
      v40 = v59;
    }
    v73 = v39;
    if ( v40 <= 1 || (unsigned __int8)sub_4D60((__int64)a1, 0, (__int64)".module extern %s", v62) )
      break;
    v33 = v62;
  }
  for ( j = 587202561; ; ++j )
  {
    sub_7630((__int64)&v74, (__int64)a1, j, a2, a3, a4);
    v45 = v62;
    v46 = v74;
    v47 = v75;
    v48 = v76;
    if ( v62 )
    {
      v60 = v76;
      v63 = v75;
      qfree(v45, a1, v76, v42, v43, v44);
      v48 = v60;
      v47 = v63;
    }
    v73 = v48;
    if ( v47 <= 1 || (unsigned __int8)sub_4D60((__int64)a1, 0, (__int64)".assembly extern %s", v46) )
      break;
    if ( netnode_supval(*(_QWORD *)(v4 + 144), j, &v74, 12, 97) > 0 )
    {
      sub_4D60((__int64)a1, 0, (__int64)"{");
      sub_5820((__int64)a1, j, "  .publickeytoken = (", 0x69u);
      sub_5820((__int64)a1, j, "  .hash       = (", 0x76u);
      sub_4D60(
        (__int64)a1,
        0,
        (__int64)"  .ver %d:%d:%d:%d",
        WORD2(v74),
        HIWORD(v74),
        (unsigned __int16)v75,
        WORD1(v75));
      sub_4D60((__int64)a1, 0, (__int64)"}");
    }
    v62 = v46;
  }
  for ( k = 637534209; ; ++k )
  {
    v49 = a1;
    sub_7630((__int64)&v74, (__int64)a1, k, a2, a3, a4);
    v55 = v74;
    v56 = v75;
    v50 = v76;
    if ( v46 )
    {
      v58 = v76;
      v61 = v75;
      qfree(v46, a1, v76, v51, v52, v53);
      v50 = v58;
      v56 = v61;
    }
    v73 = v50;
    if ( v56 <= 1 )
      break;
    v49 = (_QWORD *)k;
    if ( netnode_supval(*(_QWORD *)(v4 + 144), k, &v74, 4, 97) <= 0 )
      break;
    v54 = "nometadata ";
    if ( ((unsigned __int8)v74 & 1) == 0 )
      v54 = &s;
    v49 = nullptr;
    if ( (unsigned __int8)sub_4D60((__int64)a1, 0, (__int64)".file %s%s", v54, v55) )
      break;
    v49 = (_QWORD *)k;
    if ( (unsigned __int8)sub_5820((__int64)a1, k, "  .hash       = (", 0x76u) )
      break;
    v46 = v55;
  }
  if ( v55 )
    qfree(v55, v49, v50, v51, v52, v53);
  return 1;
}
