__int64 __fastcall sub_578B20(_BYTE *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _BYTE *v5; // rax
  unsigned __int64 v8; // rsi
  _BYTE *v9; // rdi
  const char *v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  const char *v13; // rdx
  char v14; // cl
  const char *v15; // rdx
  char v16; // cl
  const char *v17; // rdx
  char v18; // cl
  const char *v19; // rdx
  char v20; // cl
  const char *v21; // rdx
  char v22; // cl
  const char *v23; // rdx
  char v24; // cl
  const char *v25; // rdx
  char v26; // cl
  const char *v27; // rdx
  char v28; // cl
  const char *v29; // rdx
  char v30; // cl
  const char *v31; // rdx
  char v32; // cl
  const char *v33; // rdx
  char v34; // cl
  const char *v35; // rdx
  char v36; // cl
  const char *v37; // rdx
  char v38; // cl
  const char *v39; // rdx
  char v40; // cl
  __int64 v41; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  const char *v45; // rdx
  char v46; // cl
  const char *v47; // rdx
  char v48; // cl
  const char *v49; // rdx
  char v50; // cl
  const char *v51; // rdx
  char v52; // cl
  const char *v53; // rdx
  char v54; // cl
  const char *v55; // rdx
  char v56; // cl
  const char *v57; // rdx
  char v58; // cl

  v5 = a1;
  if ( a4 && (*(_QWORD *)(a3 + 16) & 0x7FFFFFFFFFFFA9DDLL) == 0 && !*(_QWORD *)(a3 + 56) )
    return 0;
  v8 = (unsigned __int64)&a1[a2];
  if ( (unsigned __int64)a1 >= v8 )
    goto LABEL_184;
  v9 = (_BYTE *)(v8 - 1);
  v10 = "Attributes:";
  if ( v5 == (_BYTE *)(v8 - 1) )
  {
LABEL_108:
    *(_BYTE *)(v8 - 1) = 0;
    v12 = *(_QWORD *)(a3 + 16);
    v5 = (_BYTE *)(v8 - 1);
    if ( (v12 & 4) != 0 )
      goto LABEL_109;
  }
  else
  {
    while ( 1 )
    {
      v11 = *v10++;
      *v5 = v11;
      if ( !v11 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_108;
    }
    v12 = *(_QWORD *)(a3 + 16);
    if ( (v12 & 4) != 0 )
    {
      if ( (unsigned __int64)v5 >= v8 )
      {
        if ( under_debugger )
          goto LABEL_223;
        goto LABEL_185;
      }
      if ( v9 == v5 )
      {
LABEL_109:
        *(_BYTE *)(v8 - 1) = 0;
        v12 = *(_QWORD *)(a3 + 16);
        v5 = (_BYTE *)(v8 - 1);
        if ( (v12 & 1) != 0 )
          goto LABEL_110;
        goto LABEL_22;
      }
      v13 = " library function";
      while ( 1 )
      {
        v14 = *v13++;
        *v5 = v14;
        if ( !v14 )
          break;
        if ( ++v5 == v9 )
          goto LABEL_109;
      }
      v12 = *(_QWORD *)(a3 + 16);
    }
  }
  if ( (v12 & 1) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_110:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 8) != 0 )
        goto LABEL_111;
      goto LABEL_29;
    }
    v15 = " noreturn";
    while ( 1 )
    {
      v16 = *v15++;
      *v5 = v16;
      if ( !v16 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_110;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_22:
  if ( (v12 & 8) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_111:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x10) != 0 )
        goto LABEL_112;
      goto LABEL_36;
    }
    v17 = " static";
    while ( 1 )
    {
      v18 = *v17++;
      *v5 = v18;
      if ( !v18 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_111;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_29:
  if ( (v12 & 0x10) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_112:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x100) != 0 )
        goto LABEL_113;
      goto LABEL_43;
    }
    v19 = " bp-based frame";
    while ( 1 )
    {
      v20 = *v19++;
      *v5 = v20;
      if ( !v20 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_112;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_36:
  if ( (v12 & 0x100) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_113:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x40) != 0 )
        goto LABEL_114;
      goto LABEL_50;
    }
    v21 = " bp==sp";
    while ( 1 )
    {
      v22 = *v21++;
      *v5 = v22;
      if ( !v22 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_113;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_43:
  if ( (v12 & 0x40) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_114:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x80u) != 0LL )
        goto LABEL_115;
      goto LABEL_57;
    }
    v23 = " hidden";
    while ( 1 )
    {
      v24 = *v23++;
      *v5 = v24;
      if ( !v24 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_114;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_50:
  if ( (v12 & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_115:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x800) != 0 )
        goto LABEL_116;
      goto LABEL_64;
    }
    v25 = " thunk";
    while ( 1 )
    {
      v26 = *v25++;
      *v5 = v26;
      if ( !v26 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_115;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_57:
  if ( (v12 & 0x800) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_116:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x10000) != 0 )
        goto LABEL_117;
      goto LABEL_71;
    }
    v27 = " fuzzy-sp";
    while ( 1 )
    {
      v28 = *v27++;
      *v5 = v28;
      if ( !v28 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_116;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_64:
  if ( (v12 & 0x10000) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_117:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x20000) != 0 )
        goto LABEL_118;
      goto LABEL_78;
    }
    v29 = " info_from_lumina";
    while ( 1 )
    {
      v30 = *v29++;
      *v5 = v30;
      if ( !v30 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_117;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_71:
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_118:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x40000) != 0 )
        goto LABEL_119;
      goto LABEL_85;
    }
    v31 = " outline";
    while ( 1 )
    {
      v32 = *v31++;
      *v5 = v32;
      if ( !v32 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_118;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_78:
  if ( (v12 & 0x40000) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_119:
      *(_BYTE *)(v8 - 1) = 0;
      v12 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v12 & 0x80000) != 0 )
        goto LABEL_120;
      goto LABEL_92;
    }
    v33 = " reanalysis_pending";
    while ( 1 )
    {
      v34 = *v33++;
      *v5 = v34;
      if ( !v34 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_119;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_85:
  if ( (v12 & 0x80000) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_120:
      *(_BYTE *)(v8 - 1) = 0;
      v5 = (_BYTE *)(v8 - 1);
      if ( (*(_BYTE *)(a3 + 18) & 0x10) != 0 )
      {
LABEL_121:
        *(_BYTE *)(v8 - 1) = 0;
        v5 = (_BYTE *)(v8 - 1);
        if ( a4 )
        {
          if ( *(_QWORD *)(a3 + 56) )
            goto LABEL_123;
          return 1;
        }
        goto LABEL_128;
      }
      goto LABEL_98;
    }
    v35 = " unwind_handler";
    while ( 1 )
    {
      v36 = *v35++;
      *v5 = v36;
      if ( !v36 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_120;
    }
    v12 = *(_QWORD *)(a3 + 16);
  }
LABEL_92:
  if ( (v12 & 0x100000) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
      goto LABEL_121;
    v37 = " catch_handler";
    while ( 1 )
    {
      v38 = *v37++;
      *v5 = v38;
      if ( !v38 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_121;
    }
  }
LABEL_98:
  if ( a4 )
  {
    if ( !*(_QWORD *)(a3 + 56) )
      return 1;
    if ( (unsigned __int64)v5 < v8 )
    {
      if ( v5 != v9 )
      {
        v39 = " fpd=";
        while ( 1 )
        {
          v40 = *v39++;
          *v5 = v40;
          if ( !v40 )
            break;
          if ( ++v5 == v9 )
            goto LABEL_123;
        }
        v41 = v8 - (_QWORD)v5;
        v9 = v5;
        goto LABEL_124;
      }
LABEL_123:
      *(_BYTE *)(v8 - 1) = 0;
      v41 = 1;
LABEL_124:
      v43 = *(_QWORD *)(a3 + 56);
      if ( a5 )
        v43 &= *(_QWORD *)(a5 + 16);
      btoa64(v9, v41, v43, 0);
      return 1;
    }
    goto LABEL_210;
  }
LABEL_128:
  v44 = *(_QWORD *)(a3 + 16);
  if ( (v44 & 2) == 0 )
    goto LABEL_135;
  if ( (unsigned __int64)v5 >= v8 )
  {
LABEL_210:
    if ( under_debugger )
      goto LABEL_223;
    goto LABEL_185;
  }
  v45 = " far";
  if ( v5 == v9 )
  {
LABEL_177:
    *(_BYTE *)(v8 - 1) = 0;
    v44 = *(_QWORD *)(a3 + 16);
    v5 = (_BYTE *)(v8 - 1);
    if ( (v44 & 0x20) != 0 )
      goto LABEL_178;
    goto LABEL_142;
  }
  while ( 1 )
  {
    v46 = *v45++;
    *v5 = v46;
    if ( !v46 )
      break;
    if ( ++v5 == v9 )
      goto LABEL_177;
  }
  v44 = *(_QWORD *)(a3 + 16);
LABEL_135:
  if ( (v44 & 0x20) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_178:
      *(_BYTE *)(v8 - 1) = 0;
      v44 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v44 & 0x200) != 0 )
        goto LABEL_179;
      goto LABEL_149;
    }
    v47 = " user-specified-far";
    while ( 1 )
    {
      v48 = *v47++;
      *v5 = v48;
      if ( !v48 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_178;
    }
    v44 = *(_QWORD *)(a3 + 16);
  }
LABEL_142:
  if ( (v44 & 0x200) != 0 )
  {
    if ( (unsigned __int64)v5 >= v8 )
    {
      if ( under_debugger )
        goto LABEL_223;
      goto LABEL_185;
    }
    if ( v5 == v9 )
    {
LABEL_179:
      *(_BYTE *)(v8 - 1) = 0;
      v44 = *(_QWORD *)(a3 + 16);
      v5 = (_BYTE *)(v8 - 1);
      if ( (v44 & 0x400) != 0 )
        goto LABEL_180;
LABEL_156:
      if ( (v44 & 0x1000) != 0 )
      {
        if ( (unsigned __int64)v5 >= v8 )
        {
          if ( under_debugger )
            goto LABEL_223;
          goto LABEL_185;
        }
        if ( v5 == v9 )
          goto LABEL_181;
        v53 = " prolog-analysis-ok";
        while ( 1 )
        {
          v54 = *v53++;
          *v5 = v54;
          if ( !v54 )
            break;
          if ( ++v5 == v9 )
            goto LABEL_181;
        }
        v44 = *(_QWORD *)(a3 + 16);
      }
      goto LABEL_163;
    }
    v49 = " noret-pending";
    while ( 1 )
    {
      v50 = *v49++;
      *v5 = v50;
      if ( !v50 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_179;
    }
    v44 = *(_QWORD *)(a3 + 16);
  }
LABEL_149:
  if ( (v44 & 0x400) == 0 )
    goto LABEL_156;
  if ( (unsigned __int64)v5 >= v8 )
  {
    if ( under_debugger )
      goto LABEL_223;
    goto LABEL_185;
  }
  if ( v5 != v9 )
  {
    v51 = " sp-ready";
    while ( 1 )
    {
      v52 = *v51++;
      *v5 = v52;
      if ( !v52 )
        break;
      if ( ++v5 == v9 )
        goto LABEL_180;
    }
    v44 = *(_QWORD *)(a3 + 16);
    goto LABEL_156;
  }
LABEL_180:
  *(_BYTE *)(v8 - 1) = 0;
  v44 = *(_QWORD *)(a3 + 16);
  v5 = (_BYTE *)(v8 - 1);
  if ( (v44 & 0x1000) == 0 )
  {
LABEL_163:
    if ( (v44 & 0x4000) == 0 )
      goto LABEL_170;
    if ( (unsigned __int64)v5 < v8 )
    {
      if ( v5 == v9 )
        goto LABEL_182;
      v55 = " purged-analysis-ok";
      while ( 1 )
      {
        v56 = *v55++;
        *v5 = v56;
        if ( !v56 )
          break;
        if ( ++v5 == v9 )
          goto LABEL_182;
      }
      v44 = *(_QWORD *)(a3 + 16);
      goto LABEL_170;
    }
    if ( under_debugger )
      goto LABEL_223;
LABEL_185:
    interr(520);
  }
LABEL_181:
  *(_BYTE *)(v8 - 1) = 0;
  v44 = *(_QWORD *)(a3 + 16);
  v5 = (_BYTE *)(v8 - 1);
  if ( (v44 & 0x4000) != 0 )
  {
LABEL_182:
    *(_BYTE *)(v8 - 1) = 0;
    if ( *(char *)(a3 + 17) >= 0 )
      return 1;
    goto LABEL_183;
  }
LABEL_170:
  if ( (v44 & 0x8000) == 0 )
    return 1;
  if ( (unsigned __int64)v5 >= v8 )
  {
LABEL_184:
    if ( !under_debugger )
      goto LABEL_185;
LABEL_223:
    BUG();
  }
  if ( v5 == v9 )
  {
LABEL_183:
    *(_BYTE *)(v8 - 1) = 0;
    return 1;
  }
  v57 = " tail-chunk";
  while ( 1 )
  {
    v58 = *v57++;
    *v5 = v58;
    if ( !v58 )
      return 1;
    if ( ++v5 == v9 )
      goto LABEL_183;
  }
}
