/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x0000000100046970

//----- (0000000100046970) ----------------------------------------------------
char *__fastcall lex_print_token(
        char **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  unsigned int v10; // w8
  char *v11; // x8
  __int64 v12; // x8
  char *v14; // x1
  bool v15; // cf
  int v16; // w8
  int v17; // w2
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  char *v24; // x8
  char *v25; // x1
  __int64 v26; // x8
  unsigned __int64 v27; // x9
  void **v28; // x8
  int v29; // w10
  unsigned __int64 v30; // x11
  __int64 v31; // x11
  size_t v32; // x0
  size_t v33; // x20
  char *v34; // x21
  void *v35; // x0
  unsigned __int64 v36; // x8
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  char *v43; // x1
  char *v44; // x21
  char *v45; // x1
  char *v46; // x1
  char *v47; // x1
  char *p_s; // x9
  __int64 *v50; // x9
  size_t v51; // x0
  void *v52; // [xsp+10h] [xbp-450h] BYREF
  __int64 v53; // [xsp+18h] [xbp-448h]
  __int64 v54; // [xsp+20h] [xbp-440h]
  char __s; // [xsp+28h] [xbp-438h] BYREF
  _BYTE v56[7]; // [xsp+29h] [xbp-437h] BYREF
  char v57; // [xsp+427h] [xbp-39h] BYREF
  __int64 v58; // [xsp+428h] [xbp-38h] BYREF

  v10 = *(unsigned __int16 *)(a2 + 24);
  if ( v10 > 4 )
  {
    if ( *(unsigned __int16 *)(a2 + 24) > 6u )
    {
      if ( v10 == 7 )
      {
        realtoasc(&__s, 0x400u, (unsigned __int16 *)(a2 + 48), 50, a5, a6, a9, a7, a8);
        v32 = strlen(&__s);
        if ( !v32 )
          goto LABEL_49;
        v33 = v32;
        v34 = (char *)(v32 + 1);
        v35 = *a1;
        if ( a1[2] >= v34 )
          goto LABEL_75;
        goto LABEL_74;
      }
      if ( v10 == 8 )
      {
        sub_10000295C(a1, "0x%llxi64", a3, a4, a5, a6, a7, a8, *(_QWORD *)(a2 + 48));
        goto LABEL_66;
      }
    }
    else
    {
      if ( v10 == 5 )
      {
        v26 = *(_QWORD *)(a2 + 32);
        if ( !v26 )
        {
          v47 = *a1;
          if ( (unsigned __int64)a1[2] <= 4 )
          {
            v47 = (char *)qvector_reserve(a1, v47, 5u, 1u);
            *a1 = v47;
          }
          a1[1] = (char *)5;
          *(_DWORD *)v47 = 657480743;
          (*a1)[4] = 0;
          if ( !a1[1] )
            return &byte_10007AE40;
          return *a1;
        }
        if ( v26 == (char)v26 )
          v27 = 1;
        else
          v27 = 8;
        v28 = &v52;
        v29 = 2;
        LOBYTE(v30) = 1;
        do
        {
          v31 = *(_QWORD *)(a2 + 32) >> (8 * ((unsigned __int8)v27 - (unsigned __int8)v30));
          if ( (_BYTE)v31 )
          {
            *(_BYTE *)v28 = v31;
            v28 = (void **)((char *)v28 + 1);
          }
          v30 = v29++;
        }
        while ( v27 >= v30 );
        *(_BYTE *)v28 = 0;
        str2user(&__s, (char *)&v52, 1024);
        sub_10000295C(a1, "'%s'", v37, v38, v39, v40, v41, v42, (char)&__s);
        goto LABEL_66;
      }
      if ( v10 == 6 )
      {
        if ( *(_QWORD *)(a2 + 8) )
          v11 = *(char **)a2;
        else
          v11 = &byte_10007AE40;
        sub_10000295C(a1, "@type %s", a3, a4, a5, a6, a7, a8, (char)v11);
        goto LABEL_66;
      }
    }
LABEL_43:
    if ( v10 - 128 < 0x380 )
      goto LABEL_44;
    if ( v10 == 11868 )
    {
      v43 = *a1;
      if ( (unsigned __int64)a1[2] <= 3 )
      {
        v43 = (char *)qvector_reserve(a1, v43, 4u, 1u);
        *a1 = v43;
      }
      a1[1] = (char *)4;
      v43[2] = 46;
      *(_WORD *)v43 = 11822;
      (*a1)[3] = 0;
      if ( !a1[1] )
        return &byte_10007AE40;
      return *a1;
    }
    p_s = &__s;
    if ( v10 >= 0x100 )
    {
      p_s = v56;
      __s = BYTE1(v10);
    }
    *p_s = v10;
    v50 = (__int64 *)(p_s + 1);
    if ( v50 >= &v58 )
    {
      v50 = (__int64 *)&v57;
      v57 = 0;
    }
    *(_BYTE *)v50 = 0;
    v51 = strlen(&__s);
    if ( !v51 )
    {
LABEL_49:
      a1[1] = nullptr;
      if ( !a1[1] )
        return &byte_10007AE40;
      return *a1;
    }
    v33 = v51;
    v34 = (char *)(v51 + 1);
    v35 = *a1;
    if ( a1[2] >= v34 )
    {
LABEL_75:
      a1[1] = v34;
      v46 = &__s;
LABEL_76:
      memmove(v35, v46, v33);
      (*a1)[v33] = 0;
      if ( a1[1] )
        return *a1;
      return &byte_10007AE40;
    }
LABEL_74:
    v35 = qvector_reserve(a1, *a1, (unsigned __int64)v34, 1u);
    *a1 = (char *)v35;
    goto LABEL_75;
  }
  if ( *(unsigned __int16 *)(a2 + 24) > 2u )
  {
    if ( v10 == 3 )
    {
      sub_10000295C(a1, "0x%a", a3, a4, a5, a6, a7, a8, *(_QWORD *)(a2 + 32));
      goto LABEL_66;
    }
    if ( v10 == 4 )
    {
      v52 = nullptr;
      v53 = 0;
      v54 = 0;
      v12 = *(_QWORD *)(a2 + 8);
      if ( v12 )
        v14 = *(char **)a2;
      else
        v14 = &byte_10007AE40;
      v15 = v12 != 0;
      v16 = v12 - 1;
      if ( v15 )
        v17 = v16;
      else
        v17 = 0;
      qstr2user((__int64)&v52, v14, v17);
      if ( *(_BYTE *)(a2 + 40) )
        v24 = "L";
      else
        v24 = &byte_1000931E5;
      sub_10000295C(a1, "%s\"%s\"", v18, v19, v20, v21, v22, v23, (char)v24);
      if ( v52 )
      {
        v53 = 0;
        qfree(v52);
      }
      goto LABEL_66;
    }
    goto LABEL_43;
  }
  if ( v10 == 1 )
  {
    v25 = *a1;
    if ( (unsigned __int64)a1[2] <= 5 )
    {
      v25 = (char *)qvector_reserve(a1, v25, 6u, 1u);
      *a1 = v25;
    }
    a1[1] = (char *)6;
    v25[4] = 62;
    *(_DWORD *)v25 = 1145980220;
    (*a1)[5] = 0;
    if ( !a1[1] )
      return &byte_10007AE40;
    return *a1;
  }
  if ( v10 != 2 )
    goto LABEL_43;
LABEL_44:
  if ( a1 != (char **)a2 )
  {
    v36 = *(_QWORD *)(a2 + 8);
    if ( v36 )
      v33 = v36 - 1;
    else
      v33 = 0;
    if ( v36 < 2 )
      goto LABEL_49;
    v44 = *(char **)a2;
    v45 = *a1;
    if ( (unsigned __int64)a1[2] <= v33 )
    {
      v45 = (char *)qvector_reserve(a1, v45, v33 + 1, 1u);
      *a1 = v45;
    }
    a1[1] = (char *)(v33 + 1);
    v35 = v45;
    v46 = v44;
    goto LABEL_76;
  }
LABEL_66:
  if ( a1[1] )
    return *a1;
  return &byte_10007AE40;
}
// 100046A68: variable 'v18' is possibly undefined
// 100046A68: variable 'v19' is possibly undefined
// 100046A68: variable 'v20' is possibly undefined
// 100046A68: variable 'v21' is possibly undefined
// 100046A68: variable 'v22' is possibly undefined
// 100046A68: variable 'v23' is possibly undefined
// 100046C14: variable 'v37' is possibly undefined
// 100046C14: variable 'v38' is possibly undefined
// 100046C14: variable 'v39' is possibly undefined
// 100046C14: variable 'v40' is possibly undefined
// 100046C14: variable 'v41' is possibly undefined
// 100046C14: variable 'v42' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
