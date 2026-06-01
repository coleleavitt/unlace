/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: compile_idc_snippet
// Address: 0x000000010002C190

//----- (000000010002C190) ----------------------------------------------------
__int64 __fastcall compile_idc_snippet(
        char a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // w19
  size_t v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  size_t v19; // x9
  unsigned __int64 v20; // x8
  __int64 v21; // x10
  const char *v22; // x9
  unsigned __int64 v23; // x9
  int v24; // w10
  int v25; // t1
  __int64 result; // x0
  int v27; // w10
  char v28; // w9
  const char *v29; // x23
  const char *v30; // x11
  int v31; // w13
  const char *v32; // x12
  int v33; // w14
  int v34; // t1
  int v35; // w13
  __int64 v37; // x8
  int v38; // t1
  unsigned int v39; // t1
  __int64 v40; // x27
  _BOOL4 v41; // w9
  size_t v43; // x24
  __int64 v44; // x8
  __int64 v45; // x19
  void *v46; // [xsp+20h] [xbp-70h] BYREF
  __int64 v47; // [xsp+28h] [xbp-68h]
  __int64 v48; // [xsp+30h] [xbp-60h]

  if ( !a2 )
    return 0;
  v8 = a5;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  sub_10000273C((char **)&v46, "static %s(){", a3, a4, a5, a6, a7, a8, a1);
  v12 = strlen(a2);
  do
  {
    v19 = v12;
    v20 = (unsigned __int64)&a2[v12];
    if ( &a2[v12] <= a2 )
      break;
    v21 = *(char *)(v20 - 1);
    if ( v21 < 0 )
      break;
    --v12;
  }
  while ( (_DefaultRuneLocale.__runetype[v21] & 0x4000) != 0 );
  if ( v19 )
  {
    v22 = &a2[v19];
    v25 = *((unsigned __int8 *)v22 - 1);
    v23 = (unsigned __int64)(v22 - 1);
    v24 = v25;
    if ( v25 == 59 )
    {
      v20 = v23;
LABEL_12:
      v27 = 0;
      v28 = 0;
      v29 = a2;
      v30 = a2;
LABEL_13:
      v31 = 0;
LABEL_14:
      v32 = v30;
LABEL_15:
      v30 = v32 + 1;
      while ( (unsigned __int64)(v30 - 1) < v20 )
      {
        v33 = *((unsigned __int8 *)v30 - 1);
        if ( !v31 )
        {
          if ( *((unsigned __int8 *)v30 - 1) <= 0x27u )
          {
            v31 = *((unsigned __int8 *)v30 - 1);
            v32 = v30;
            if ( v33 != 34 )
            {
              v31 = *((unsigned __int8 *)v30 - 1);
              v32 = v30;
              if ( v33 != 39 )
                goto LABEL_13;
            }
            goto LABEL_15;
          }
          if ( *((unsigned __int8 *)v30 - 1) > 0x3Au )
          {
            if ( v33 != 59 )
            {
              if ( v33 == 123 )
              {
                v29 = nullptr;
                goto LABEL_13;
              }
              if ( v33 != 125 )
                goto LABEL_13;
            }
            v27 = 0;
            v28 = 0;
            v29 = v30;
            goto LABEL_13;
          }
          if ( v33 != 47 )
          {
            if ( v33 == 40 )
            {
              ++v27;
            }
            else if ( v33 == 41 )
            {
              v28 |= --v27 < 0;
            }
            goto LABEL_13;
          }
          v35 = *(unsigned __int8 *)v30;
          if ( v35 == 42 )
          {
            for ( v32 += 2; ; ++v32 )
            {
              v31 = *(unsigned __int8 *)v32;
              if ( v31 == 42 )
              {
                if ( v32[1] == 47 )
                {
                  v31 = 0;
                  v32 += 2;
                  goto LABEL_15;
                }
              }
              else if ( !*v32 )
              {
                goto LABEL_15;
              }
            }
          }
          if ( v35 == 47 )
          {
            for ( v32 += 2; *v32 && *v32 != 10; ++v32 )
              ;
            v31 = 0;
            goto LABEL_15;
          }
          goto LABEL_13;
        }
        if ( v33 == v31 )
          goto LABEL_13;
        if ( v33 != 92 )
          goto LABEL_14;
        v34 = *(unsigned __int8 *)v30;
        v30 += 2;
        if ( !v34 )
          break;
      }
      if ( !((v29 == nullptr) | v28 & 1) )
      {
        if ( (*v29 & 0x80000000) == 0 )
        {
          v37 = *(unsigned __int8 *)v29;
          while ( 1 )
          {
            while ( (_DefaultRuneLocale.__runetype[v37] & 0x4000) != 0 )
            {
              v38 = *++v29;
              v37 = (unsigned __int8)v38;
              if ( v38 < 0 )
                goto LABEL_64;
            }
            if ( v37 != 47 || v29[1] != 47 )
              break;
            v37 = 47;
            while ( v37 != 10 )
            {
              v39 = *(unsigned __int8 *)++v29;
              v37 = v39;
              if ( !v39 )
                goto LABEL_76;
            }
          }
        }
LABEL_64:
        v40 = 0;
        while ( 1 )
        {
          v43 = strlen(off_10009A460[v40]);
          if ( !strncmp(v29, off_10009A460[v40], v43) )
          {
            v44 = v29[v43];
            v41 = (v44 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v44] & 0x500) != 0;
            if ( (_DWORD)v44 != 95 && !v41 )
              break;
          }
          if ( ++v40 == 11 )
          {
            if ( !v29 )
              goto LABEL_76;
            sub_100028C68((char **)&v46, "%*.*sreturn %s\n;}", v13, v14, v15, v16, v17, v18, (_BYTE)v29 - (_BYTE)a2);
            goto LABEL_77;
          }
        }
      }
      goto LABEL_76;
    }
    if ( v24 != 125 )
      goto LABEL_12;
  }
LABEL_76:
  sub_100028C68((char **)&v46, "%s\n;}", v13, v14, v15, v16, v17, v18, (char)a2);
LABEL_77:
  result = compile_idc_text((__int64)v46, a3, a4, v8);
  if ( v46 )
  {
    v47 = 0;
    v45 = result;
    qfree(v46);
    return v45;
  }
  return result;
}
// 10002C49C: variable 'v13' is possibly undefined
// 10002C49C: variable 'v14' is possibly undefined
// 10002C49C: variable 'v15' is possibly undefined
// 10002C49C: variable 'v16' is possibly undefined
// 10002C49C: variable 'v17' is possibly undefined
// 10002C49C: variable 'v18' is possibly undefined
// 10009A460: using guessed type char *off_10009A460[11];
