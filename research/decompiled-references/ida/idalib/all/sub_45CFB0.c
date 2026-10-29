unsigned __int64 __fastcall sub_45CFB0(__int64 a1)
{
  __int64 plugin_options; // rax
  __int64 v3; // rax
  char *v4; // r8
  char *v5; // r12
  char *v6; // r15
  const char *v7; // rbp
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // rbp
  char v11; // al
  const char *v12; // rsi
  const char *v13; // rbp
  FILE *v14; // rax
  char *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  size_t v22; // rax
  const char *v23; // r9
  size_t v24; // rbp
  unsigned __int64 v25; // rdx
  void *v26; // rdi
  size_t v27; // rax
  const char *v28; // r9
  size_t v29; // rbp
  unsigned __int64 v30; // rdx
  void *v31; // rdi
  size_t v32; // rax
  const char *v33; // r9
  size_t v34; // rbp
  unsigned __int64 v35; // rdx
  const char *v36; // rsi
  unsigned __int64 v37; // rdx
  void *v38; // rdi
  __int64 v39; // rax
  const char *v40; // rbp
  __int64 v41; // rax
  const char *v42; // rbp
  size_t v43; // rax
  size_t v44; // r9
  __int64 v45; // rax
  void *v46; // rdi
  unsigned __int64 v47; // rdx
  void *v48; // rdi
  size_t v49; // rax
  const char *v50; // r9
  size_t v51; // rbp
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  const char *v55; // r14
  __int64 v56; // rbp
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  const char *src; // [rsp+0h] [rbp-70h]
  const char *srcb; // [rsp+0h] [rbp-70h]
  const char *srcd; // [rsp+0h] [rbp-70h]
  void *srca; // [rsp+0h] [rbp-70h]
  void *srcc; // [rsp+0h] [rbp-70h]
  _BYTE *srch; // [rsp+0h] [rbp-70h]
  const char *srci; // [rsp+0h] [rbp-70h]
  void *srce; // [rsp+0h] [rbp-70h]
  void *srcf; // [rsp+0h] [rbp-70h]
  void *srcg; // [rsp+0h] [rbp-70h]
  void *srcj; // [rsp+0h] [rbp-70h]
  char v72; // [rsp+Fh] [rbp-61h]
  const char *v73; // [rsp+10h] [rbp-60h]
  const char *v74; // [rsp+10h] [rbp-60h]
  const char *v75; // [rsp+10h] [rbp-60h]
  size_t v76; // [rsp+10h] [rbp-60h]
  const char *v77; // [rsp+10h] [rbp-60h]
  void *v78; // [rsp+18h] [rbp-58h] BYREF
  __int128 v79; // [rsp+20h] [rbp-50h]
  unsigned __int64 v80; // [rsp+30h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v79 = 0;
  v78 = nullptr;
  plugin_options = get_plugin_options("merge");
  if ( !(unsigned __int8)parse_plugin_options(&v78, plugin_options) )
    goto LABEL_25;
  v3 = v79;
  v4 = (char *)v78;
  *(_BYTE *)(a1 + 288) = 2;
  *(_WORD *)(a1 + 290) = 257;
  v5 = &v4[48 * v3];
  if ( v4 == v5 )
    goto LABEL_25;
  v72 = 0;
  v6 = v4;
  do
  {
    if ( !*((_QWORD *)v6 + 1) )
    {
LABEL_11:
      if ( !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 290, "random", 1) )
      {
        v11 = plugin_option_t_get_bool(v6, a1 + 291, "batch", 1);
        if ( v11 )
        {
          v72 = v11;
        }
        else if ( !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 292, "privrange", 1)
               && !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 296, "postvld", 1)
               && !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 293, "save", 1)
               && !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 294, "delete_local", 0)
               && !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 295, "delete_remote", 0)
               && !(unsigned __int8)plugin_option_t_get_bool(v6, a1 + 297, "check1846", 1) )
        {
          v12 = haystack;
          if ( *((_QWORD *)v6 + 1) )
            v12 = *(const char **)v6;
          sub_378C70((__int64)"Unknown merge option: %s", v12);
        }
      }
      goto LABEL_9;
    }
    v7 = *(const char **)v6;
    if ( !strcmp(*(const char **)v6, "log") )
    {
      if ( *((_QWORD *)v6 + 4) <= 1u )
      {
        v25 = 10;
        v8 = "merge.log";
        v10 = 9;
      }
      else
      {
        v8 = *((const char **)v6 + 3);
        if ( !v8 || (v9 = strlen(*((const char **)v6 + 3)), (v10 = v9) == 0) )
        {
          *(_QWORD *)(a1 + 80) = 0;
          goto LABEL_9;
        }
        v25 = v9 + 1;
      }
      v26 = *(void **)(a1 + 72);
      if ( *(_QWORD *)(a1 + 88) < v25 )
      {
        srca = (void *)v25;
        v39 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v25, 1);
        *(_QWORD *)(a1 + 72) = v39;
        v25 = (unsigned __int64)srca;
        v26 = (void *)v39;
      }
      *(_QWORD *)(a1 + 80) = v25;
      memmove(v26, v8, v10);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v10) = 0;
    }
    else if ( !strcmp(v7, "lst") )
    {
      if ( *((_QWORD *)v6 + 4) <= 1u )
      {
        v30 = 10;
        v23 = "merge.lst";
        v24 = 9;
      }
      else
      {
        if ( !*((_QWORD *)v6 + 3) || (src = *((const char **)v6 + 3), v22 = strlen(src), v23 = src, (v24 = v22) == 0) )
        {
          *(_QWORD *)(a1 + 128) = 0;
          goto LABEL_9;
        }
        v30 = v22 + 1;
      }
      v31 = *(void **)(a1 + 120);
      if ( *(_QWORD *)(a1 + 136) < v30 )
      {
        v73 = v23;
        srcc = (void *)v30;
        v45 = qvector_reserve(a1 + 120, *(_QWORD *)(a1 + 120), v30, 1);
        *(_QWORD *)(a1 + 120) = v45;
        v23 = v73;
        v31 = (void *)v45;
        v30 = (unsigned __int64)srcc;
      }
      *(_QWORD *)(a1 + 128) = v30;
      memmove(v31, v23, v24);
      *(_BYTE *)(*(_QWORD *)(a1 + 120) + v24) = 0;
    }
    else if ( !strcmp(v7, "journal") )
    {
      if ( *((_QWORD *)v6 + 4) <= 1u )
      {
        v37 = 14;
        v29 = 13;
        v28 = "merge.journal";
      }
      else
      {
        if ( !*((_QWORD *)v6 + 3) || (srcb = *((const char **)v6 + 3), v27 = strlen(srcb), v28 = srcb, (v29 = v27) == 0) )
        {
          *(_QWORD *)(a1 + 104) = 0;
          goto LABEL_9;
        }
        v37 = v27 + 1;
      }
      v38 = *(void **)(a1 + 96);
      if ( *(_QWORD *)(a1 + 112) < v37 )
      {
        v74 = v28;
        srce = (void *)v37;
        v53 = qvector_reserve(a1 + 96, *(_QWORD *)(a1 + 96), v37, 1);
        *(_QWORD *)(a1 + 96) = v53;
        v28 = v74;
        v38 = (void *)v53;
        v37 = (unsigned __int64)srce;
      }
      *(_QWORD *)(a1 + 104) = v37;
      memmove(v38, v28, v29);
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + v29) = 0;
    }
    else
    {
      if ( !strcmp(v7, "play") )
      {
        v36 = "merge.journal";
        if ( *((_QWORD *)v6 + 4) > 1u )
          v36 = *((const char **)v6 + 3);
        sub_45C720(a1, v36);
      }
      if ( !strcmp(v7, "idb") )
      {
        if ( *((_QWORD *)v6 + 4) <= 1u )
        {
          v35 = 11;
          v34 = 10;
          v33 = "result.i64";
        }
        else
        {
          if ( !*((_QWORD *)v6 + 3)
            || (srcd = *((const char **)v6 + 3), v32 = strlen(srcd), v33 = srcd, (v34 = v32) == 0) )
          {
            *(_QWORD *)(a1 + 152) = 0;
            goto LABEL_9;
          }
          v35 = v32 + 1;
        }
        v46 = *(void **)(a1 + 144);
        if ( *(_QWORD *)(a1 + 160) < v35 )
        {
          v75 = v33;
          srcf = (void *)v35;
          v58 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v35, 1);
          *(_QWORD *)(a1 + 144) = v58;
          v33 = v75;
          v46 = (void *)v58;
          v35 = (unsigned __int64)srcf;
        }
        *(_QWORD *)(a1 + 152) = v35;
        memmove(v46, v33, v34);
        *(_BYTE *)(*(_QWORD *)(a1 + 144) + v34) = 0;
      }
      else if ( !strcmp(v7, "finalize") )
      {
        if ( *((_QWORD *)v6 + 4) <= 1u )
        {
          v47 = 12;
          v44 = 11;
          v42 = "finalize.py";
        }
        else
        {
          v42 = *((const char **)v6 + 3);
          if ( !v42 || (v43 = strlen(*((const char **)v6 + 3)), (v44 = v43) == 0) )
          {
            *(_QWORD *)(a1 + 176) = 0;
            goto LABEL_9;
          }
          v47 = v43 + 1;
        }
        v48 = *(void **)(a1 + 168);
        if ( *(_QWORD *)(a1 + 184) < v47 )
        {
          v76 = v44;
          srcg = (void *)v47;
          v59 = qvector_reserve(a1 + 168, *(_QWORD *)(a1 + 168), v47, 1);
          *(_QWORD *)(a1 + 168) = v59;
          v44 = v76;
          v48 = (void *)v59;
          v47 = (unsigned __int64)srcg;
        }
        *(_QWORD *)(a1 + 176) = v47;
        srch = (_BYTE *)v44;
        memmove(v48, v42, v44);
        srch[*(_QWORD *)(a1 + 168)] = 0;
      }
      else if ( !strcmp(v7, "stop") )
      {
        if ( *((_QWORD *)v6 + 4) <= 1u )
        {
          v52 = 18;
          v51 = 17;
          v50 = "Disassembly/Items";
        }
        else
        {
          if ( !*((_QWORD *)v6 + 3)
            || (srci = *((const char **)v6 + 3), v49 = strlen(srci), v50 = srci, (v51 = v49) == 0) )
          {
            *(_QWORD *)(a1 + 200) = 0;
            goto LABEL_9;
          }
          v52 = v49 + 1;
        }
        v57 = *(void **)(a1 + 192);
        if ( *(_QWORD *)(a1 + 208) < v52 )
        {
          v77 = v50;
          srcj = (void *)v52;
          v60 = qvector_reserve(a1 + 192, *(_QWORD *)(a1 + 192), v52, 1);
          *(_QWORD *)(a1 + 192) = v60;
          v50 = v77;
          v57 = (void *)v60;
          v52 = (unsigned __int64)srcj;
        }
        *(_QWORD *)(a1 + 200) = v52;
        memmove(v57, v50, v51);
        *(_BYTE *)(*(_QWORD *)(a1 + 192) + v51) = 0;
      }
      else
      {
        if ( strcmp(v7, "policy") )
          goto LABEL_11;
        v54 = -1;
        v55 = "remote";
        if ( *((_QWORD *)v6 + 4) > 1u )
        {
          v55 = *((const char **)v6 + 3);
          v54 = strcmp(v55, "skip");
        }
        v56 = 0;
        if ( v54 )
        {
          do
          {
            if ( ++v56 == 6 )
              sub_378C70((__int64)"Wrong merge policy: %s", v55);
          }
          while ( strcmp(v55, (const char *)*(&off_2B28D80 + v56)) );
        }
        *(_BYTE *)(a1 + 288) = v56;
      }
    }
LABEL_9:
    v6 += 48;
  }
  while ( v5 != v6 );
  if ( !v72 && (unsigned __int8)(*(_BYTE *)(a1 + 288) - 4) <= 1u )
    *(_BYTE *)(a1 + 291) = batch[0];
LABEL_25:
  if ( *(_QWORD *)(a1 + 80) > 1u )
  {
    v40 = *(const char **)(a1 + 72);
    v41 = qfopen(v40, "wt");
    if ( !v41 )
      sub_457390(v40);
    *(_QWORD *)(a1 + 216) = v41;
  }
  if ( *(_QWORD *)(a1 + 104) > 1u )
  {
    v13 = *(const char **)(a1 + 96);
    v14 = (FILE *)qfopen(v13, "wt");
    if ( !v14 )
      sub_457390(v13);
    *(_QWORD *)(a1 + 224) = v14;
    setvbuf(v14, nullptr, 2, 0);
    sub_391AE0(
      *(_QWORD *)(a1 + 224),
      (__int64)"*** Merging journal version=%d,policy=%d\n",
      1,
      *(unsigned __int8 *)(a1 + 288));
  }
  v15 = (char *)v78;
  if ( v78 )
  {
    v16 = v79;
    if ( (_QWORD)v79 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[48 * v17];
        v19 = *((void **)v18 + 3);
        if ( v19 )
        {
          *((_QWORD *)v18 + 4) = 0;
          qfree(v19);
        }
        v20 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v20);
        }
        ++v17;
        v15 = (char *)v78;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v79 = 0;
    qfree(v15);
  }
  return v80 - __readfsqword(0x28u);
}
