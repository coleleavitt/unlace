__int64 __fastcall sub_4A02B0(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  const char *v8; // rsi
  const char *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rax
  const char *v18; // rsi
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rax
  const char *v26; // rsi
  const char *v27; // rdi
  __int64 v28; // rax
  const char *v29; // rsi
  const char *v30; // rdi

  v5 = 0xD37A6F4DE9BD37A7LL * ((a2 - a1) >> 3);
  v6 = a1;
  if ( v5 >> 2 > 0 )
  {
    v7 = a1 + 736 * (v5 >> 2);
    while ( 1 )
    {
      if ( !*(_BYTE *)(v6 + 176) )
        goto LABEL_6;
      v20 = *(_QWORD *)(v6 + 24);
      if ( *(_QWORD *)(a3 + 24) )
      {
        v8 = *(const char **)(a3 + 16);
        v9 = haystack;
        if ( !v20 )
          goto LABEL_5;
      }
      else
      {
        if ( !v20 )
          return v6;
        v8 = haystack;
      }
      v9 = *(const char **)(v6 + 16);
LABEL_5:
      if ( !strcmp(v9, v8) )
        return v6;
LABEL_6:
      v10 = v6 + 184;
      if ( !*(_BYTE *)(v6 + 360) )
        goto LABEL_11;
      v11 = *(_QWORD *)(v6 + 208);
      if ( *(_QWORD *)(a3 + 24) )
      {
        v12 = *(const char **)(a3 + 16);
        v13 = haystack;
        if ( !v11 )
          goto LABEL_10;
      }
      else
      {
        if ( !v11 )
          return v10;
        v12 = haystack;
      }
      v13 = *(const char **)(v6 + 200);
LABEL_10:
      if ( !strcmp(v13, v12) )
        return v10;
LABEL_11:
      v10 = v6 + 368;
      if ( !*(_BYTE *)(v6 + 544) )
        goto LABEL_16;
      v14 = *(_QWORD *)(v6 + 392);
      if ( *(_QWORD *)(a3 + 24) )
      {
        v15 = *(const char **)(a3 + 16);
        v16 = haystack;
        if ( !v14 )
          goto LABEL_15;
      }
      else
      {
        if ( !v14 )
          return v10;
        v15 = haystack;
      }
      v16 = *(const char **)(v6 + 384);
LABEL_15:
      if ( !strcmp(v16, v15) )
        return v10;
LABEL_16:
      v10 = v6 + 552;
      if ( *(_BYTE *)(v6 + 728) )
      {
        v17 = *(_QWORD *)(v6 + 576);
        if ( *(_QWORD *)(a3 + 24) )
        {
          v18 = *(const char **)(a3 + 16);
          v19 = haystack;
          if ( v17 )
            goto LABEL_19;
        }
        else
        {
          if ( !v17 )
            return v10;
          v18 = haystack;
LABEL_19:
          v19 = *(const char **)(v6 + 568);
        }
        if ( !strcmp(v19, v18) )
          return v10;
      }
      v6 += 736;
      if ( v7 == v6 )
      {
        v5 = 0xD37A6F4DE9BD37A7LL * ((a2 - v6) >> 3);
        break;
      }
    }
  }
  if ( v5 == 2 )
  {
LABEL_41:
    if ( !*(_BYTE *)(v6 + 176) )
    {
LABEL_46:
      v6 += 184;
      goto LABEL_47;
    }
    v22 = *(_QWORD *)(v6 + 24);
    if ( *(_QWORD *)(a3 + 24) )
    {
      v23 = *(const char **)(a3 + 16);
      v24 = haystack;
      if ( !v22 )
        goto LABEL_45;
    }
    else
    {
      v23 = haystack;
      if ( !v22 )
        return v6;
    }
    v24 = *(const char **)(v6 + 16);
LABEL_45:
    if ( !strcmp(v24, v23) )
      return v6;
    goto LABEL_46;
  }
  if ( v5 == 3 )
  {
    if ( !*(_BYTE *)(v6 + 176) )
    {
LABEL_40:
      v6 += 184;
      goto LABEL_41;
    }
    v28 = *(_QWORD *)(v6 + 24);
    if ( *(_QWORD *)(a3 + 24) )
    {
      v29 = *(const char **)(a3 + 16);
      v30 = haystack;
      if ( !v28 )
        goto LABEL_59;
    }
    else
    {
      v29 = haystack;
      if ( !v28 )
        return v6;
    }
    v30 = *(const char **)(v6 + 16);
LABEL_59:
    if ( !strcmp(v30, v29) )
      return v6;
    goto LABEL_40;
  }
  if ( v5 != 1 )
    return a2;
LABEL_47:
  if ( !*(_BYTE *)(v6 + 176) )
    return a2;
  v25 = *(_QWORD *)(v6 + 24);
  if ( *(_QWORD *)(a3 + 24) )
  {
    v26 = *(const char **)(a3 + 16);
    v27 = haystack;
    if ( !v25 )
      goto LABEL_51;
  }
  else
  {
    v26 = haystack;
    if ( !v25 )
      return v6;
  }
  v27 = *(const char **)(v6 + 16);
LABEL_51:
  if ( strcmp(v27, v26) )
    return a2;
  return v6;
}
