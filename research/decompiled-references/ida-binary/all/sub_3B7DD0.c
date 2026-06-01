__int64 __fastcall sub_3B7DD0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  const char *v13; // rsi
  int v14; // eax
  char v15; // cl
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  const char *v19; // rsi
  const char *v21; // rbx
  __int64 func; // rax
  const char *v23; // rbx
  __int64 v24; // rdi
  const char *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rbx
  _QWORD *v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rbx
  _QWORD *v34; // r13
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v39; // [rsp+10h] [rbp-118h]
  __int64 v40; // [rsp+10h] [rbp-118h]
  const char *v41; // [rsp+18h] [rbp-110h]
  char v42; // [rsp+18h] [rbp-110h]
  __int64 v43; // [rsp+20h] [rbp-108h] BYREF
  __int128 v44; // [rsp+28h] [rbp-100h]
  __int64 v45; // [rsp+38h] [rbp-F0h]
  __int64 v46; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+50h] [rbp-D8h]
  __int64 v49; // [rsp+60h] [rbp-C8h]
  __int128 v50; // [rsp+68h] [rbp-C0h]
  char v51; // [rsp+78h] [rbp-B0h]
  __int64 v52; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+88h] [rbp-A0h]
  __int64 v54; // [rsp+98h] [rbp-90h]
  __int64 v55; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-78h]
  __int64 v58; // [rsp+C0h] [rbp-68h]
  __int128 v59; // [rsp+C8h] [rbp-60h]
  char v60; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+E8h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) <= 1u )
  {
    v15 = 0;
    if ( !*(_BYTE *)a4 )
      goto LABEL_6;
  }
  else
  {
    v13 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v13 = *(const char **)a1;
    v41 = *(const char **)a2;
    v14 = strcmp(*(const char **)a2, v13);
    v15 = 0;
    if ( v14 )
    {
      v15 = set_name(a9, v41, 0);
      if ( !v15 )
        return 0;
    }
    if ( !*(_BYTE *)a4 )
    {
LABEL_6:
      v16 = *(_QWORD *)(a6 + 8);
      if ( *(_QWORD *)(a5 + 8) )
      {
        v17 = *(const char **)a5;
        if ( !v16 )
        {
          if ( !*v17 )
            goto LABEL_8;
          v21 = &s1;
LABEL_14:
          func = get_func(a9);
          if ( (unsigned __int8)set_func_cmt(func, v21, 1) )
            goto LABEL_8;
          return 0;
        }
      }
      else
      {
        v17 = &s1;
        if ( !v16 )
          goto LABEL_8;
      }
      v21 = *(const char **)a6;
      if ( !strcmp(*(const char **)a6, v17) )
      {
LABEL_8:
        v18 = *(_QWORD *)(a8 + 8);
        if ( *(_QWORD *)(a7 + 8) )
        {
          v19 = *(const char **)a7;
          if ( !v18 )
          {
            if ( !*v19 )
              return 1;
            v23 = &s1;
            goto LABEL_20;
          }
        }
        else
        {
          v19 = &s1;
          if ( !v18 )
            return 1;
        }
        v23 = *(const char **)a8;
        if ( !strcmp(*(const char **)a8, v19) )
          return 1;
LABEL_20:
        v24 = get_func(a9);
        return set_func_cmt(v24, v23, 0);
      }
      goto LABEL_14;
    }
  }
  v42 = v15;
  if ( (unsigned __int8)apply_tinfo(a9, a4, 1) )
  {
    v43 = 0;
    v26 = *a3;
    v51 = 16;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v49 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v58 = 0;
    v60 = 16;
    v44 = 0;
    v48 = 0;
    v50 = 0;
    v53 = 0;
    v57 = 0;
    v59 = 0;
    if ( (unsigned __int8)get_tinfo_details(v26, 12, &v43)
      && (unsigned __int8)get_tinfo_details(*a4, 12, &v52)
      && (v45 & 2) != 0
      && (v54 & 2) == 0 )
    {
      v37 = get_func(a9);
      *(_QWORD *)(v37 + 16) &= ~1uLL;
      update_func(v37);
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58, &byte_9[3]);
    }
    cleanup_argloc(&v56);
    clear_tinfo_t(&v55);
    v27 = v52;
    if ( v52 )
    {
      v39 = v53;
      if ( (_QWORD)v53 )
      {
        v28 = 0;
        do
        {
          v29 = (_QWORD *)(v27 + 80 * v28);
          clear_tinfo_t(v29 + 8);
          v30 = v29[5];
          if ( v30 )
          {
            v29[6] = 0;
            qfree(v30, &byte_9[3]);
          }
          v31 = v29[2];
          if ( v31 )
          {
            v29[3] = 0;
            qfree(v31, &byte_9[3]);
          }
          ++v28;
          cleanup_argloc(v29);
          v27 = v52;
        }
        while ( v39 != v28 );
      }
      *(_QWORD *)&v53 = 0;
      qfree(v27, &byte_9[3]);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49, &byte_9[3]);
    }
    cleanup_argloc(&v47);
    clear_tinfo_t(&v46);
    v32 = v43;
    if ( v43 )
    {
      v40 = v44;
      if ( (_QWORD)v44 )
      {
        v33 = 0;
        do
        {
          v34 = (_QWORD *)(v32 + 80 * v33);
          clear_tinfo_t(v34 + 8);
          v35 = v34[5];
          if ( v35 )
          {
            v34[6] = 0;
            qfree(v35, &byte_9[3]);
          }
          v36 = v34[2];
          if ( v36 )
          {
            v34[3] = 0;
            qfree(v36, &byte_9[3]);
          }
          ++v33;
          cleanup_argloc(v34);
          v32 = v43;
        }
        while ( v40 != v33 );
      }
      *(_QWORD *)&v44 = 0;
      qfree(v32, &byte_9[3]);
    }
    goto LABEL_6;
  }
  if ( !v42 )
    return 0;
  v25 = &s1;
  if ( *(_QWORD *)(a1 + 8) )
    v25 = *(const char **)a1;
  set_name(a9, v25, 0);
  return 0;
}
