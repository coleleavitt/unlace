__int64 __fastcall sub_55F260(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  _BYTE *v4; // rax
  unsigned __int64 v7; // rsi
  _BYTE *v8; // rdi
  const char *v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  const char *v12; // rdx
  char v13; // cl
  const char *v14; // rdx
  char v15; // cl
  const char *v16; // rdx
  char v17; // cl
  const char *v18; // rdx
  char v19; // cl
  const char *v20; // rdx
  char v21; // cl
  const char *v22; // rdx
  char v23; // cl
  const char *v24; // rdx
  char v25; // cl
  const char *v26; // rdx
  char v27; // cl
  const char *v28; // rdx
  char v29; // cl
  const char *v30; // rdx
  char v31; // cl
  const char *v32; // rdx
  char v33; // cl
  const char *v34; // rdx
  char v35; // cl
  const char *v36; // rdx
  char v37; // cl
  const char *v38; // rdx
  char v39; // cl
  __int64 v41; // rdx
  const char *v42; // rdx
  char v43; // cl
  const char *v44; // rdx
  char v45; // cl
  const char *v46; // rdx
  char v47; // cl
  const char *v48; // rdx
  char v49; // cl
  const char *v50; // rdx
  char v51; // cl
  const char *v52; // rdx
  char v53; // cl
  const char *v54; // rdx
  char v55; // cl

  v4 = a1;
  if ( a4 && (*(_QWORD *)(a3 + 8) & 0x7FFFFFFFFFFFA9DDLL) == 0 && !*(_DWORD *)(a3 + 32) )
    return 0;
  v7 = (unsigned __int64)&a1[a2];
  if ( (unsigned __int64)a1 >= v7 )
    goto LABEL_181;
  v8 = (_BYTE *)(v7 - 1);
  v9 = "Attributes:";
  if ( v4 == (_BYTE *)(v7 - 1) )
  {
LABEL_109:
    *(_BYTE *)(v7 - 1) = 0;
    v11 = *(_QWORD *)(a3 + 8);
    v4 = (_BYTE *)(v7 - 1);
    if ( (v11 & 4) != 0 )
      goto LABEL_110;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v9++;
      *v4 = v10;
      if ( !v10 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_109;
    }
    v11 = *(_QWORD *)(a3 + 8);
    if ( (v11 & 4) != 0 )
    {
      if ( (unsigned __int64)v4 >= v7 )
      {
        if ( under_debugger )
          goto LABEL_220;
        goto LABEL_182;
      }
      if ( v8 == v4 )
      {
LABEL_110:
        *(_BYTE *)(v7 - 1) = 0;
        v11 = *(_QWORD *)(a3 + 8);
        v4 = (_BYTE *)(v7 - 1);
        if ( (v11 & 1) != 0 )
          goto LABEL_111;
        goto LABEL_22;
      }
      v12 = " library function";
      while ( 1 )
      {
        v13 = *v12++;
        *v4 = v13;
        if ( !v13 )
          break;
        if ( ++v4 == v8 )
          goto LABEL_110;
      }
      v11 = *(_QWORD *)(a3 + 8);
    }
  }
  if ( (v11 & 1) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_111:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 8) != 0 )
        goto LABEL_112;
      goto LABEL_29;
    }
    v14 = " noreturn";
    while ( 1 )
    {
      v15 = *v14++;
      *v4 = v15;
      if ( !v15 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_111;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_22:
  if ( (v11 & 8) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_112:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x10) != 0 )
        goto LABEL_113;
      goto LABEL_36;
    }
    v16 = " static";
    while ( 1 )
    {
      v17 = *v16++;
      *v4 = v17;
      if ( !v17 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_112;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_29:
  if ( (v11 & 0x10) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_113:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x100) != 0 )
        goto LABEL_114;
      goto LABEL_43;
    }
    v18 = " bp-based frame";
    while ( 1 )
    {
      v19 = *v18++;
      *v4 = v19;
      if ( !v19 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_113;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_36:
  if ( (v11 & 0x100) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_114:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x40) != 0 )
        goto LABEL_115;
      goto LABEL_50;
    }
    v20 = " bp==sp";
    while ( 1 )
    {
      v21 = *v20++;
      *v4 = v21;
      if ( !v21 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_114;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_43:
  if ( (v11 & 0x40) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_115:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x80u) != 0LL )
        goto LABEL_116;
      goto LABEL_57;
    }
    v22 = " hidden";
    while ( 1 )
    {
      v23 = *v22++;
      *v4 = v23;
      if ( !v23 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_115;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_50:
  if ( (v11 & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_116:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x800) != 0 )
        goto LABEL_117;
      goto LABEL_64;
    }
    v24 = " thunk";
    while ( 1 )
    {
      v25 = *v24++;
      *v4 = v25;
      if ( !v25 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_116;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_57:
  if ( (v11 & 0x800) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_117:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x10000) != 0 )
        goto LABEL_118;
      goto LABEL_71;
    }
    v26 = " fuzzy-sp";
    while ( 1 )
    {
      v27 = *v26++;
      *v4 = v27;
      if ( !v27 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_117;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_64:
  if ( (v11 & 0x10000) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_118:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x20000) != 0 )
        goto LABEL_119;
      goto LABEL_78;
    }
    v28 = " info_from_lumina";
    while ( 1 )
    {
      v29 = *v28++;
      *v4 = v29;
      if ( !v29 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_118;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_71:
  if ( (v11 & 0x20000) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_119:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x40000) != 0 )
        goto LABEL_120;
      goto LABEL_85;
    }
    v30 = " outline";
    while ( 1 )
    {
      v31 = *v30++;
      *v4 = v31;
      if ( !v31 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_119;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_78:
  if ( (v11 & 0x40000) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_120:
      *(_BYTE *)(v7 - 1) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v11 & 0x80000) != 0 )
        goto LABEL_121;
      goto LABEL_92;
    }
    v32 = " reanalysis_pending";
    while ( 1 )
    {
      v33 = *v32++;
      *v4 = v33;
      if ( !v33 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_120;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_85:
  if ( (v11 & 0x80000) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_121:
      *(_BYTE *)(v7 - 1) = 0;
      v4 = (_BYTE *)(v7 - 1);
      if ( (*(_BYTE *)(a3 + 10) & 0x10) != 0 )
        goto LABEL_122;
LABEL_98:
      if ( !a4 )
        goto LABEL_123;
      if ( !*(_DWORD *)(a3 + 32) )
        return 1;
      if ( (unsigned __int64)v4 >= v7 )
        goto LABEL_207;
      if ( v4 != v8 )
      {
        v38 = " fpd=";
        while ( 1 )
        {
          v39 = *v38++;
          *v4 = v39;
          if ( !v39 )
            break;
          if ( ++v4 == v8 )
            goto LABEL_173;
        }
        btoa32(v4, v7 - (_QWORD)v4, *(unsigned int *)(a3 + 32), 0);
        return 1;
      }
LABEL_173:
      *(_BYTE *)(v7 - 1) = 0;
      btoa32(v8, 1, *(unsigned int *)(a3 + 32), 0);
      return 1;
    }
    v34 = " unwind_handler";
    while ( 1 )
    {
      v35 = *v34++;
      *v4 = v35;
      if ( !v35 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_121;
    }
    v11 = *(_QWORD *)(a3 + 8);
  }
LABEL_92:
  if ( (v11 & 0x100000) == 0 )
    goto LABEL_98;
  if ( (unsigned __int64)v4 >= v7 )
  {
    if ( under_debugger )
      goto LABEL_220;
    goto LABEL_182;
  }
  if ( v4 != v8 )
  {
    v36 = " catch_handler";
    do
    {
      v37 = *v36++;
      *v4 = v37;
      if ( !v37 )
        goto LABEL_98;
    }
    while ( ++v4 != v8 );
  }
LABEL_122:
  *(_BYTE *)(v7 - 1) = 0;
  v4 = (_BYTE *)(v7 - 1);
  if ( a4 )
  {
    if ( !*(_DWORD *)(a3 + 32) )
      return 1;
    goto LABEL_173;
  }
LABEL_123:
  v41 = *(_QWORD *)(a3 + 8);
  if ( (v41 & 2) == 0 )
    goto LABEL_130;
  if ( (unsigned __int64)v4 >= v7 )
  {
LABEL_207:
    if ( under_debugger )
      goto LABEL_220;
    goto LABEL_182;
  }
  v42 = " far";
  if ( v4 == v8 )
  {
LABEL_174:
    *(_BYTE *)(v7 - 1) = 0;
    v41 = *(_QWORD *)(a3 + 8);
    v4 = (_BYTE *)(v7 - 1);
    if ( (v41 & 0x20) != 0 )
      goto LABEL_175;
    goto LABEL_137;
  }
  while ( 1 )
  {
    v43 = *v42++;
    *v4 = v43;
    if ( !v43 )
      break;
    if ( ++v4 == v8 )
      goto LABEL_174;
  }
  v41 = *(_QWORD *)(a3 + 8);
LABEL_130:
  if ( (v41 & 0x20) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_175:
      *(_BYTE *)(v7 - 1) = 0;
      v41 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v41 & 0x200) != 0 )
        goto LABEL_176;
      goto LABEL_144;
    }
    v44 = " user-specified-far";
    while ( 1 )
    {
      v45 = *v44++;
      *v4 = v45;
      if ( !v45 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_175;
    }
    v41 = *(_QWORD *)(a3 + 8);
  }
LABEL_137:
  if ( (v41 & 0x200) != 0 )
  {
    if ( (unsigned __int64)v4 >= v7 )
    {
      if ( under_debugger )
        goto LABEL_220;
      goto LABEL_182;
    }
    if ( v4 == v8 )
    {
LABEL_176:
      *(_BYTE *)(v7 - 1) = 0;
      v41 = *(_QWORD *)(a3 + 8);
      v4 = (_BYTE *)(v7 - 1);
      if ( (v41 & 0x400) != 0 )
        goto LABEL_177;
LABEL_151:
      if ( (v41 & 0x1000) != 0 )
      {
        if ( (unsigned __int64)v4 >= v7 )
        {
          if ( under_debugger )
            goto LABEL_220;
          goto LABEL_182;
        }
        if ( v4 == v8 )
          goto LABEL_178;
        v50 = " prolog-analysis-ok";
        while ( 1 )
        {
          v51 = *v50++;
          *v4 = v51;
          if ( !v51 )
            break;
          if ( ++v4 == v8 )
            goto LABEL_178;
        }
        v41 = *(_QWORD *)(a3 + 8);
      }
      goto LABEL_158;
    }
    v46 = " noret-pending";
    while ( 1 )
    {
      v47 = *v46++;
      *v4 = v47;
      if ( !v47 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_176;
    }
    v41 = *(_QWORD *)(a3 + 8);
  }
LABEL_144:
  if ( (v41 & 0x400) == 0 )
    goto LABEL_151;
  if ( (unsigned __int64)v4 >= v7 )
  {
    if ( under_debugger )
      goto LABEL_220;
    goto LABEL_182;
  }
  if ( v4 != v8 )
  {
    v48 = " sp-ready";
    while ( 1 )
    {
      v49 = *v48++;
      *v4 = v49;
      if ( !v49 )
        break;
      if ( ++v4 == v8 )
        goto LABEL_177;
    }
    v41 = *(_QWORD *)(a3 + 8);
    goto LABEL_151;
  }
LABEL_177:
  *(_BYTE *)(v7 - 1) = 0;
  v41 = *(_QWORD *)(a3 + 8);
  v4 = (_BYTE *)(v7 - 1);
  if ( (v41 & 0x1000) == 0 )
  {
LABEL_158:
    if ( (v41 & 0x4000) == 0 )
      goto LABEL_165;
    if ( (unsigned __int64)v4 < v7 )
    {
      if ( v4 == v8 )
        goto LABEL_179;
      v52 = " purged-analysis-ok";
      while ( 1 )
      {
        v53 = *v52++;
        *v4 = v53;
        if ( !v53 )
          break;
        if ( ++v4 == v8 )
          goto LABEL_179;
      }
      v41 = *(_QWORD *)(a3 + 8);
      goto LABEL_165;
    }
    if ( under_debugger )
      goto LABEL_220;
LABEL_182:
    interr(520);
  }
LABEL_178:
  *(_BYTE *)(v7 - 1) = 0;
  v41 = *(_QWORD *)(a3 + 8);
  v4 = (_BYTE *)(v7 - 1);
  if ( (v41 & 0x4000) != 0 )
  {
LABEL_179:
    *(_BYTE *)(v7 - 1) = 0;
    if ( *(char *)(a3 + 9) < 0 )
      goto LABEL_180;
    return 1;
  }
LABEL_165:
  if ( (v41 & 0x8000) == 0 )
    return 1;
  if ( (unsigned __int64)v4 >= v7 )
  {
LABEL_181:
    if ( !under_debugger )
      goto LABEL_182;
LABEL_220:
    BUG();
  }
  if ( v4 == v8 )
  {
LABEL_180:
    *(_BYTE *)(v7 - 1) = 0;
    return 1;
  }
  v54 = " tail-chunk";
  while ( 1 )
  {
    v55 = *v54++;
    *v4 = v55;
    if ( !v55 )
      return 1;
    if ( ++v4 == v8 )
      goto LABEL_180;
  }
}

