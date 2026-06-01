/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415E40
// Address: 0x0000000000415E40

//----- (0000000000415E40) ----------------------------------------------------
__int64 __fastcall sub_415E40(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  FILE *v4; // x1
  int v6; // w21
  _BOOL4 v7; // w24
  size_t v8; // x26
  const char **v9; // x28
  char *v10; // x24
  const char **v11; // x22
  const char *v12; // x1
  unsigned __int64 v13; // x2
  _QWORD *v14; // x4
  int v15; // w0
  __int64 v16; // x1
  bool v17; // zf
  unsigned __int64 v18; // x2
  unsigned __int64 *v19; // x22
  unsigned __int64 v20; // x6
  char *v21; // x2
  unsigned __int64 v22; // x4
  unsigned __int64 v23; // x5
  int v24; // w2
  bool v25; // cc
  void **v26; // x27
  __int64 v27; // x23
  unsigned __int64 v28; // x22
  unsigned __int64 v29; // x25
  const char *v30; // x2
  int v31; // w25
  const char *v32; // x2
  char *v33; // x0
  int v34; // w2
  __int64 v35; // x0
  __int64 v36; // x1
  char *v37; // x1
  unsigned __int64 v38; // x21
  __int64 v39; // x19
  __int64 v40; // x20
  void *v41; // x0
  char *v42; // x1
  unsigned int v43; // w19
  char *v45; // x0
  signed __int64 v46; // x0
  void *v47; // x22
  unsigned __int64 v48; // x1
  char *v49; // x0
  char *v50; // x2
  void *v51; // x0
  int v52; // [xsp+6Ch] [xbp-84h]
  size_t n; // [xsp+70h] [xbp-80h]
  void *src; // [xsp+78h] [xbp-78h]
  void *ptr; // [xsp+80h] [xbp-70h] BYREF
  unsigned __int64 v56; // [xsp+88h] [xbp-68h]
  unsigned __int64 v57; // [xsp+90h] [xbp-60h]
  unsigned __int64 v58; // [xsp+98h] [xbp-58h] BYREF
  unsigned __int64 v59; // [xsp+A0h] [xbp-50h]
  char v60[16]; // [xsp+B8h] [xbp-38h] BYREF
  unsigned __int8 v61; // [xsp+C8h] [xbp-28h]
  char *s1; // [xsp+D0h] [xbp-20h]
  unsigned __int64 v63; // [xsp+D8h] [xbp-18h]
  unsigned __int64 v64; // [xsp+E0h] [xbp-10h]

  v52 = a3;
  if ( *(_BYTE *)(a1 + 2053) )
    return (unsigned int)-5;
  v4 = *(FILE **)(a1 + 2104);
  if ( !v4 )
    return (unsigned int)-5;
  if ( a3 )
  {
    sub_411A98(a1, 0, 1u);
    v4 = *(FILE **)(a1 + 2104);
  }
  v6 = 1;
  rewind(v4);
  ptr = nullptr;
  v56 = 0;
  v57 = 0;
  s1 = nullptr;
  v63 = 0;
  v64 = 0;
LABEL_6:
  while ( 1 )
  {
    v7 = sub_40C888(a1, (__int64)&v58);
    if ( !v7 )
      break;
    if ( v58 < v59 )
    {
      if ( *(_QWORD *)(a1 + 2128) > 1u )
        goto LABEL_16;
      v8 = v63;
      if ( v63 <= 1 )
        goto LABEL_16;
      v9 = (const char **)ptr;
      v10 = s1;
      v11 = (const char **)((char *)ptr + 24 * v56);
      if ( ptr != v11 )
      {
        while ( 1 )
        {
          v12 = (const char *)&qword_4B2D48;
          if ( v9[1] )
            v12 = *v9;
          if ( !strcmp(v10, v12) )
            break;
          v9 += 3;
          if ( v11 == v9 )
            goto LABEL_63;
        }
LABEL_16:
        v14 = (_QWORD *)*a2;
        v13 = a2[1];
        if ( !v13 )
          goto LABEL_70;
        goto LABEL_17;
      }
LABEL_63:
      v45 = strstr(v10, "ld-");
      if ( !v45 )
        goto LABEL_16;
      v46 = v45 - v10;
      if ( v46 == -1 || v46 && v10[v46 - 1] != 47 )
        goto LABEL_16;
      v47 = sub_491248(v8);
      memcpy(v47, s1, v8);
      v48 = v56;
      if ( v56 + 1 > v57 )
      {
        v49 = (char *)sub_491288((__int64)&ptr, ptr, v56 + 1, 0x18u);
        v48 = v56;
        ptr = v49;
      }
      else
      {
        v49 = (char *)ptr;
      }
      v50 = &v49[24 * v48];
      *(_QWORD *)v50 = v47;
      *((_QWORD *)v50 + 1) = v8;
      *((_QWORD *)v50 + 2) = v8;
      v14 = (_QWORD *)*a2;
      v13 = a2[1];
      ++v56;
      if ( !v13 )
      {
LABEL_70:
        v18 = 1;
        v16 = 0;
        if ( a2[2] )
          goto LABEL_24;
        goto LABEL_71;
      }
LABEL_17:
      if ( v58 != *v14 )
      {
        v15 = 0;
        while ( 1 )
        {
          v16 = ++v15;
          v17 = v15 == v13;
          if ( v15 >= v13 )
            break;
          if ( v14[10 * v15] == v58 )
            goto LABEL_6;
        }
        v18 = v13 + 1;
        if ( v17 )
        {
          if ( v18 <= a2[2] )
            goto LABEL_24;
LABEL_71:
          v14 = sub_491288((__int64)a2, v14, v18, 0x50u);
          v16 = a2[1];
          *a2 = (__int64)v14;
LABEL_24:
          v19 = &v14[10 * v16];
          *v19 = 0;
          v19[1] = 0;
          v19[2] = 0;
          v19[3] = 0;
          v19[4] = 0;
          v19[5] = 0;
          v19[6] = 0;
          v19[7] = 0;
          v19[8] = 0;
          *((_WORD *)v19 + 36) = 0;
          v20 = v58;
          ++a2[1];
          *v19 = v20;
          v19[1] = v59;
          v21 = (char *)v19[2];
          v19[2] = (unsigned __int64)s1;
          v22 = v19[3];
          v19[3] = v63;
          v23 = v19[4];
          v19[4] = v64;
          s1 = v21;
          v63 = v22;
          v24 = v61;
          v64 = v23;
          v25 = v6 < v61;
          *((_BYTE *)v19 + 72) = v61;
          if ( v25 )
            v6 = v24;
          if ( strchr(v60, 114) )
            *((_BYTE *)v19 + 73) |= 4u;
          if ( strchr(v60, 119) )
            *((_BYTE *)v19 + 73) |= 2u;
          if ( strchr(v60, 120) )
            *((_BYTE *)v19 + 73) |= 1u;
        }
      }
    }
  }
  if ( !v56 )
    goto LABEL_48;
  v26 = (void **)(a1 + 2120);
  v27 = 0;
  v28 = 0;
  while ( 2 )
  {
    v33 = (char *)ptr + v27;
    if ( (char *)ptr + v27 == (char *)v26 )
    {
LABEL_44:
      if ( *(_QWORD *)(a1 + 2128) )
        v30 = *(const char **)(a1 + 2120);
      else
        v30 = (const char *)&qword_4B2D48;
    }
    else
    {
      v29 = *((_QWORD *)v33 + 1);
      if ( v29 )
      {
        n = v29 - 1;
        if ( v29 != 1 )
        {
          src = *(void **)v33;
          v51 = *v26;
          if ( v29 > *(_QWORD *)(a1 + 2136) )
          {
            v51 = sub_491288(a1 + 2120, *v26, v29, 1u);
            *v26 = v51;
          }
          *(_QWORD *)(a1 + 2128) = v29;
          memmove(v51, src, n);
          *(_BYTE *)(*(_QWORD *)(a1 + 2120) + n) = 0;
          goto LABEL_44;
        }
      }
      v30 = (const char *)&qword_4B2D48;
      *(_QWORD *)(a1 + 2128) = 0;
    }
    sub_45CDF8(a1, (__int64)"trying potential interpreter %s\n", v30);
    v31 = (unsigned __int8)sub_415218(a1, a2);
    if ( v31 )
    {
      v32 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(a1 + 2128) )
        v32 = *(const char **)(a1 + 2120);
      sub_40AAF0(a1, (__int64)"Found a valid interpeter in %s, will report shared library events!\n", v32);
      sub_415768(a1, a2);
      v7 = v31;
    }
    ++v28;
    v27 += 24;
    if ( v28 < v56 )
      continue;
    break;
  }
  if ( !v7 )
    *(_QWORD *)(a1 + 2128) = 0;
LABEL_48:
  if ( a2[1] )
  {
    v34 = 0;
    v35 = 0;
    do
    {
      ++v34;
      v36 = *a2 + 80 * v35;
      v35 = v34;
      *(_BYTE *)(v36 + 72) = v6;
    }
    while ( v34 < (unsigned __int64)a2[1] );
  }
  if ( v52 )
    sub_412410(a1, 0, 1u);
  v37 = (char *)ptr;
  if ( ptr )
  {
    v38 = v56;
    if ( v56 )
    {
      v39 = 0;
      v40 = 0;
      do
      {
        v41 = *(void **)&v37[v39];
        v42 = &v37[v39];
        if ( v41 )
        {
          *((_QWORD *)v42 + 1) = 0;
          j__free(v41);
        }
        ++v40;
        v39 += 24;
        v37 = (char *)ptr;
      }
      while ( v38 != v40 );
    }
    v56 = 0;
    j__free(v37);
  }
  v43 = 1;
  if ( s1 )
  {
    v63 = 0;
    j__free(s1);
  }
  return v43;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
