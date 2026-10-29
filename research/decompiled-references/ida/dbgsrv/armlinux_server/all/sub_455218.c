/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455218
// Address: 0x0000000000455218

//----- (0000000000455218) ----------------------------------------------------
__int64 __fastcall sub_455218(__int64 a1, int *a2)
{
  __int64 v2; // x21
  __int64 v3; // x25
  __int64 v4; // x26
  __int64 v5; // x27
  __int64 v6; // x28
  __int64 v8; // x20
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // x4
  unsigned __int64 v11; // x3
  unsigned __int64 v12; // x0
  int v13; // w0
  char *v14; // x1
  int v15; // w2
  int v17; // w2
  unsigned __int8 v18; // w21
  int v19; // w25
  __int64 v20; // x1
  __int64 v22; // x21
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x4
  char *v26; // x2
  __int64 v27; // x1
  __int64 (__fastcall *v28)(void **, __int64); // x2
  unsigned __int64 v29; // x21
  char *v30; // x0
  size_t v31; // x21
  size_t v32; // x28
  unsigned __int64 v33; // x27
  _BYTE *v34; // x0
  __int64 v35; // x21
  char *v36; // x0
  __int64 v37; // x0
  char *v38; // x26
  int v39; // w0
  unsigned __int64 v40; // x21
  char *v41; // x0
  int v42; // w1
  __int64 i; // x0
  int v44; // w27
  int v45; // w0
  int v46; // w1
  char *v47; // x0
  int v48; // w1
  const char *v49; // x21
  __int64 (__fastcall *v50)(_QWORD, const char *); // x2
  int v51; // w0
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // x2
  int v53; // w0
  char *v54; // x21
  void (__fastcall *v55)(_QWORD, char *); // x2
  int v56; // w0
  char *v57; // x25
  _BOOL4 v58; // w26
  unsigned int v59; // w0
  int v60; // w6
  int v61; // w7
  unsigned int v62; // w21
  int v63; // w0
  __int64 (__fastcall *v64)(_QWORD, char *, _QWORD, _QWORD, _BOOL4, _QWORD); // x6
  int v65; // w0
  const char *v66; // x26
  size_t v67; // x0
  size_t v68; // x27
  size_t v69; // x25
  char v70; // [xsp+0h] [xbp-90h]
  __int64 v71; // [xsp+10h] [xbp-80h]
  __int64 v72; // [xsp+30h] [xbp-60h]
  __int64 v73; // [xsp+38h] [xbp-58h]
  __int64 v74; // [xsp+40h] [xbp-50h]
  __int64 v75; // [xsp+40h] [xbp-50h]
  __int64 v76; // [xsp+48h] [xbp-48h]
  unsigned __int64 v77; // [xsp+68h] [xbp-28h]
  void *src; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v79; // [xsp+78h] [xbp-18h]
  __int64 v80; // [xsp+80h] [xbp-10h]

  v8 = a1 + 312;
  do
  {
LABEL_2:
    while ( (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 216))(v8, *(_QWORD *)(a1 + 224)) < 0 )
    {
      if ( !*(_QWORD *)(a1 + 272) )
      {
        v20 = 0;
        if ( *(_DWORD *)(a1 + 348) )
          *a2 = 37;
        else
          *a2 = 34;
        return v20;
      }
      sub_450440(a1);
    }
    v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 168);
    v11 = *(_QWORD *)(a1 + 320);
    ++*(_DWORD *)(a1 + 304);
    v12 = v11;
    if ( v10 )
    {
      v13 = v10(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 296));
      if ( v13 )
      {
        v20 = 0;
        *a2 = v13;
        return v20;
      }
      v11 = *(_QWORD *)(a1 + 320);
      v12 = v11;
    }
  }
  while ( !v11 );
  v71 = v2;
  v72 = v3;
  if ( v11 - 1 <= 1 )
    goto LABEL_8;
  v22 = v11 - 2;
  v74 = v5;
  v76 = v6;
LABEL_24:
  v23 = v22 | v11;
  if ( !(v22 | v11) )
    goto LABEL_43;
  while ( 1 )
  {
    v24 = *(_QWORD *)(a1 + 312);
    if ( *(_BYTE *)(v24 + v22) != 92 )
      goto LABEL_56;
    v25 = v22 - 1;
    if ( v11 )
      goto LABEL_27;
    v26 = &byte_522118;
    if ( v22 != 1 )
      goto LABEL_27;
LABEL_28:
    if ( *v26 == 92 )
      goto LABEL_65;
    v28 = *(__int64 (__fastcall **)(void **, __int64))(a1 + 216);
    v27 = *(_QWORD *)(a1 + 224);
    src = nullptr;
    v79 = 0;
    v80 = 0;
    if ( v28(&src, v27) < 0 )
      break;
    v11 = *(_QWORD *)(a1 + 320);
    ++*(_DWORD *)(a1 + 304);
    v29 = v11 - 1;
    v30 = *(char **)v8;
    if ( (__int64)(v11 - 1) <= 1 )
    {
      if ( v30 )
      {
        *(_QWORD *)(a1 + 320) = 0;
        j__free(v30);
        v11 = *(_QWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 312) = 0;
        *(_QWORD *)(a1 + 328) = 0;
      }
    }
    else
    {
      if ( v29 > *(_QWORD *)(v8 + 16) )
      {
        v30 = (char *)sub_491288(v8, *(void **)v8, v29, 1u);
        *(_QWORD *)v8 = v30;
      }
      *(_QWORD *)(v8 + 8) = v29;
      v30[v29 - 1] = 0;
      v11 = *(_QWORD *)(a1 + 320);
    }
    if ( v79 )
    {
      v31 = v79 - 1;
      if ( v79 != 1 )
      {
        if ( v11 )
        {
          v32 = v31 + v11 - 1;
          v77 = v11 - 1;
          v33 = v31 + v11;
          v34 = *(_BYTE **)v8;
          if ( v31 + v11 <= *(_QWORD *)(v8 + 16) )
          {
LABEL_38:
            *(_QWORD *)(v8 + 8) = v33;
            v34[v32] = 0;
            memcpy((void *)(*(_QWORD *)(a1 + 312) + v77), src, v31);
            v11 = *(_QWORD *)(a1 + 320);
            goto LABEL_39;
          }
        }
        else
        {
          v32 = v79 - 1;
          v77 = 0;
          v33 = v79;
          v34 = *(_BYTE **)v8;
          if ( v79 <= *(_QWORD *)(v8 + 16) )
            goto LABEL_38;
        }
        v34 = sub_491288(v8, v34, v33, 1u);
        *(_QWORD *)v8 = v34;
        goto LABEL_38;
      }
    }
LABEL_39:
    v22 = v11 - 2;
    if ( !v11 )
      v22 = -1;
    if ( !src )
      goto LABEL_24;
    v79 = 0;
    j__free(src);
    v11 = *(_QWORD *)(a1 + 320);
    v23 = v22 | v11;
    if ( !(v22 | v11) )
    {
LABEL_43:
      if ( byte_522118 != 92 )
        goto LABEL_56;
      v25 = -1;
      v24 = *(_QWORD *)(a1 + 312);
LABEL_27:
      v26 = (char *)(v24 + v25);
      goto LABEL_28;
    }
  }
  if ( src )
  {
    v79 = 0;
    j__free(src);
  }
  v11 = *(_QWORD *)(a1 + 320);
  v23 = v22 | v11;
LABEL_65:
  if ( !v23 )
  {
    if ( byte_522118 != 92 )
      goto LABEL_56;
    v35 = v22 - 1;
    goto LABEL_52;
  }
  v37 = *(_QWORD *)(a1 + 312);
  if ( *(_BYTE *)(v37 + v22) != 92 )
    goto LABEL_56;
  v35 = v22 - 1;
  if ( v11 )
  {
LABEL_54:
    v36 = (char *)(v37 + v35);
  }
  else
  {
LABEL_52:
    v36 = &byte_522118;
    if ( v35 )
    {
      v37 = *(_QWORD *)(a1 + 312);
      goto LABEL_54;
    }
  }
  if ( *v36 != 92 )
    goto LABEL_56;
  v40 = v11 - 1;
  v41 = *(char **)v8;
  if ( (__int64)(v11 - 1) <= 1 )
  {
    if ( !v41 )
    {
LABEL_56:
      v12 = v11;
      v6 = v76;
      v5 = v74;
      goto LABEL_8;
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v41);
    *(_QWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 328) = 0;
    v12 = *(_QWORD *)(a1 + 320);
    v5 = v74;
    v6 = v76;
  }
  else
  {
    if ( v40 > *(_QWORD *)(v8 + 16) )
    {
      v41 = (char *)sub_491288(v8, *(void **)v8, v40, 1u);
      *(_QWORD *)v8 = v41;
    }
    *(_QWORD *)(v8 + 8) = v40;
    v41[v40 - 1] = 0;
    v5 = v74;
    v12 = *(_QWORD *)(a1 + 320);
    v6 = v76;
  }
LABEL_8:
  if ( v12 <= 1 )
    goto LABEL_60;
  v14 = *(char **)(a1 + 312);
  for ( *(_QWORD *)(a1 + 8) = v14; ; *(_QWORD *)(a1 + 8) = v14 )
  {
    v15 = (unsigned __int8)*v14;
    if ( v15 != 32 && v15 != 9 )
    {
      v18 = sub_450428(*v14);
      if ( !v18 )
        break;
    }
    ++v14;
  }
  v19 = (v17 == 35) & (*(unsigned __int8 *)(a1 + 144) ^ 1);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(a1 + 340) )
    {
      *a2 = 0;
      return *(_QWORD *)(a1 + 8);
    }
    sub_451570(a1, v14);
LABEL_60:
    v2 = v71;
    v3 = v72;
    goto LABEL_2;
  }
  v73 = v4;
  *(_QWORD *)(a1 + 8) = v14 + 1;
  v38 = sub_4517B0(a1);
  sub_451570(a1, *(_BYTE **)(a1 + 8));
  if ( !strcmp(v38, "else") )
  {
    if ( !*(_DWORD *)(a1 + 348) )
      goto LABEL_106;
    if ( !*(_DWORD *)(a1 + 344) )
    {
      v39 = *(_DWORD *)(a1 + 340);
      if ( v39 <= 1 )
        *(_DWORD *)(a1 + 340) = v39 == 0;
    }
LABEL_74:
    v2 = v71;
    v3 = v72;
    v4 = v73;
    goto LABEL_2;
  }
  if ( !strcmp(v38, "elif") )
  {
    if ( !*(_DWORD *)(a1 + 348) )
    {
LABEL_106:
      *a2 = 35;
      return 0;
    }
    if ( *(_DWORD *)(a1 + 344) )
      goto LABEL_74;
    if ( (*(_DWORD *)(a1 + 340) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 340) = 2;
      v2 = v71;
      v3 = v72;
      v4 = v73;
      goto LABEL_2;
    }
LABEL_88:
    for ( i = *(_QWORD *)(a1 + 8); ; --i )
    {
      *(_QWORD *)(a1 + 8) = i - 1;
      if ( !*(_BYTE *)(i - 1) )
        break;
    }
    *(_BYTE *)(i - 1) = *(_BYTE *)(a1 + 692);
    LOBYTE(src) = 1;
    v79 = 0;
    if ( (unsigned int)sub_4586D0(a1, (__int64)&src) )
    {
      *a2 = sub_4869A0();
      return 0;
    }
    *(_DWORD *)(a1 + 340) = v79 == 0;
    v2 = v71;
    v3 = v72;
    v4 = v73;
    goto LABEL_2;
  }
  if ( !strcmp(v38, "if") )
  {
    v42 = *(_DWORD *)(a1 + 340);
    ++*(_DWORD *)(a1 + 348);
    if ( v42 )
    {
      ++*(_DWORD *)(a1 + 344);
      v2 = v71;
      v3 = v72;
      v4 = v73;
      goto LABEL_2;
    }
    goto LABEL_88;
  }
  v75 = v5;
  if ( !strcmp(v38, "ifdef") )
  {
    v44 = 1;
LABEL_103:
    v47 = sub_4517B0(a1);
    if ( !*v47 )
      goto LABEL_130;
    v48 = *(_DWORD *)(a1 + 340);
    ++*(_DWORD *)(a1 + 348);
    if ( v48 )
    {
      ++*(_DWORD *)(a1 + 344);
      v2 = v71;
      v3 = v72;
      v4 = v73;
      v5 = v75;
      goto LABEL_2;
    }
    if ( (sub_453858(a1, v47) != 0) == v44 )
      goto LABEL_112;
    *(_DWORD *)(a1 + 340) = 1;
    v2 = v71;
    v3 = v72;
    v4 = v73;
    v5 = v75;
    goto LABEL_2;
  }
  v44 = strcmp(v38, "ifndef");
  if ( !v44 )
    goto LABEL_103;
  if ( !strcmp(v38, "endif") )
  {
    v45 = *(_DWORD *)(a1 + 348);
    if ( v45 )
    {
      v46 = *(_DWORD *)(a1 + 344);
      if ( v46 )
        *(_DWORD *)(a1 + 344) = v46 - 1;
      else
        *(_DWORD *)(a1 + 340) = 0;
      *(_DWORD *)(a1 + 348) = v45 - 1;
      v2 = v71;
      v3 = v72;
      v4 = v73;
      v5 = v75;
      goto LABEL_2;
    }
    v56 = 36;
LABEL_142:
    *a2 = v56;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 340) )
    goto LABEL_112;
  if ( !strcmp(v38, "pragma") )
  {
    v49 = *(const char **)(a1 + 8);
    if ( !strcmp(v49, "once") )
    {
      src = nullptr;
      v79 = 0;
      v66 = *(const char **)(a1 + 296);
      v80 = 0;
      if ( v66 )
      {
        v67 = strlen(v66);
        v68 = v67 + 1;
        v69 = v67;
        src = sub_491288((__int64)&src, nullptr, v67 + 1, 1u);
        v79 = v68;
        memmove(src, v66, v69);
        *((_BYTE *)src + v69) = 0;
      }
      sub_452AD8((char **)(a1 + 240), (__int64)&src);
      if ( src )
      {
        v79 = 0;
        j__free(src);
      }
      v2 = v71;
      v3 = v72;
      v4 = v73;
      v5 = v75;
      goto LABEL_2;
    }
    v50 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 176);
    if ( v50 )
    {
      v51 = v50(*(_QWORD *)(a1 + 208), v49);
      *a2 = v51;
      if ( v51 )
        return 0;
    }
LABEL_112:
    v2 = v71;
    v3 = v72;
    v4 = v73;
    v5 = v75;
    goto LABEL_2;
  }
  if ( !strcmp(v38, "warning") )
  {
    v52 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 184);
    if ( v52 )
    {
      v53 = v52(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 8));
      *a2 = v53;
      if ( v53 )
        return 0;
    }
    goto LABEL_112;
  }
  if ( !strcmp(v38, "softinclude") )
  {
    v18 = v19;
    LOBYTE(v19) = 0;
    goto LABEL_141;
  }
  if ( !strcmp(v38, "include_next") )
    goto LABEL_141;
  if ( !strcmp(v38, "include") || !strcmp(v38, "import") )
  {
    LOBYTE(v19) = 0;
LABEL_141:
    v56 = sub_458AD0(a1, v18, v19);
    if ( v56 )
      goto LABEL_142;
    goto LABEL_112;
  }
  if ( !strcmp(v38, "define") )
  {
    v57 = sub_4517B0(a1);
    if ( !*v57 )
      goto LABEL_130;
    v58 = *(unsigned __int8 *)(a1 + 692) == 40;
    v59 = sub_4518C8(a1);
    v62 = v59;
    if ( v59 != -2 )
    {
      if ( (v59 & 0x80000000) != 0 )
        goto LABEL_130;
      v63 = sub_454558(a1, v57, *(const char **)(a1 + 8), v59, v58, (bool *)&src, v60, v61, v70);
      *a2 = v63;
      if ( v63 )
        return 0;
      v64 = *(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, _BOOL4, _QWORD))(a1 + 192);
      if ( v64 )
      {
        v65 = v64(*(_QWORD *)(a1 + 208), v57, *(_QWORD *)(a1 + 8), v62, v58, (unsigned __int8)src);
        *a2 = v65;
        if ( v65 )
          return 0;
      }
    }
    goto LABEL_112;
  }
  if ( !strcmp(v38, "undef") )
  {
    v54 = sub_4517B0(a1);
    if ( !*v54 )
      goto LABEL_130;
    sub_453FC8(a1, v54);
    v55 = *(void (__fastcall **)(_QWORD, char *))(a1 + 200);
    if ( !v55 )
      goto LABEL_112;
    v55(*(_QWORD *)(a1 + 208), v54);
    v2 = v71;
    v3 = v72;
    v4 = v73;
    v5 = v75;
    goto LABEL_2;
  }
  if ( strcmp(v38, "error") )
  {
LABEL_130:
    v56 = 29;
    goto LABEL_142;
  }
  *a2 = 41;
  sub_486A58(0, *(char **)(a1 + 8));
  return 0;
}
// 455218: could not find valid save-restore pair for x21
// 455218: could not find valid save-restore pair for x25
// 455218: could not find valid save-restore pair for x26
// 455218: could not find valid save-restore pair for x27
// 455218: could not find valid save-restore pair for x28
// 4552B0: variable 'v2' is possibly undefined
// 4552B8: variable 'v3' is possibly undefined
// 4552D8: variable 'v14' is possibly undefined
// 455308: variable 'v17' is possibly undefined
// 45538C: variable 'v5' is possibly undefined
// 455394: variable 'v6' is possibly undefined
// 4555D4: variable 'v4' is possibly undefined
// 455AD0: variable 'v60' is possibly undefined
// 455AD0: variable 'v61' is possibly undefined
// 455AD0: variable 'v70' is possibly undefined
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 522118: using guessed type char byte_522118;
