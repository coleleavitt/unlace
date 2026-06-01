__int64 __fastcall sub_47D490(__int64 a1, unsigned int a2, unsigned int a3, int a4, char a5, char a6)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 udm_by_tid; // r13
  __int64 func; // rax
  unsigned int v15; // ebx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 idati; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  _QWORD *v24; // r12
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r12
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  unsigned int tinfo_property4; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+8h] [rbp-B0h]
  unsigned int v35; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v36; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v38; // [rsp+30h] [rbp-88h]
  void *v39; // [rsp+40h] [rbp-78h] BYREF
  __int128 v40; // [rsp+48h] [rbp-70h]
  __int128 v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  int v43; // [rsp+70h] [rbp-48h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v8 = a4;
  v10 = *(int *)(a1 + 4LL * (int)a3 + 16);
  v44 = __readfsqword(0x28u);
  v12 = switch_dbctx(v10);
  if ( a5 )
  {
    v39 = nullptr;
    udm_by_tid = get_udm_by_tid(&v39, 0, a2);
    if ( udm_by_tid == -1 )
    {
      clear_tinfo_t(&v39);
    }
    else
    {
      tinfo_property4 = get_tinfo_property4(v39, 300, 0, 0, 0, 0);
      clear_tinfo_t(&v39);
      if ( tinfo_property4 != -1 )
      {
        switch_dbctx(*(int *)(a1 + 4 * v8 + 16));
        v39 = nullptr;
        func = get_func(tinfo_property4);
        if ( (unsigned __int8)tinfo_get_func_frame(&v39, func)
          && (unsigned int)get_tinfo_property(v39, 16)
          && (int)get_tinfo_property(v39, 16) > udm_by_tid )
        {
          v15 = get_tinfo_property4(v39, 297, udm_by_tid, 0, 0, 0);
          goto LABEL_7;
        }
        if ( !a6 )
        {
          v15 = -1;
LABEL_7:
          clear_tinfo_t(&v39);
          return v15;
        }
        if ( !under_debugger )
          interr(2007);
LABEL_49:
        BUG();
      }
    }
    return (unsigned int)-1;
  }
  v34 = *(_QWORD *)(v12 + 1480);
  v17 = sub_69D720(v34, 0, 0, a2);
  if ( v17 < 0 )
    goto LABEL_10;
  v35 = sub_69CC60(v34, a2, 1, 0);
  if ( !v35 )
  {
    if ( !under_debugger )
      interr(3052);
    goto LABEL_49;
  }
  if ( !(unsigned __int8)sub_48D960(a1, &v35, a3, (unsigned int)v8, 0) )
  {
LABEL_10:
    if ( a6 )
    {
      if ( !under_debugger )
        interr(2008);
      goto LABEL_49;
    }
    return (unsigned int)-1;
  }
  v18 = switch_dbctx(*(int *)(a1 + 4 * v8 + 16));
  v36 = 0;
  v19 = *(_QWORD *)(v18 + 1480);
  v39 = nullptr;
  v42 = 0;
  v43 = 1;
  v40 = 0;
  v41 = 0;
  idati = *(_QWORD *)(v19 + 8);
  v38 = 257;
  v37[1] = v35;
  if ( !idati )
    idati = get_idati(257, &v35);
  v37[0] = idati;
  if ( !(unsigned __int8)create_tinfo(&v36, 61, 189, v37)
    || !(unsigned __int8)get_tinfo_details(v36, 141, &v39)
    || v17 >= (unsigned __int64)v40
    || (v21 = sub_6309B0(v19, *(_QWORD *)(v19 + 8), v35, 0), v15 = sub_69C1F0(v19, v21, &v39, v17, 0), v15 == -1) )
  {
    v27 = (char *)v39;
    if ( v39 )
    {
      v28 = v40;
      if ( (_QWORD)v40 )
      {
        v29 = 0;
        do
        {
          v30 = &v27[128 * v29];
          clear_tinfo_t(v30 + 64);
          v31 = *((void **)v30 + 5);
          if ( v31 )
          {
            *((_QWORD *)v30 + 6) = 0;
            qfree(v31);
          }
          v32 = *((void **)v30 + 2);
          if ( v32 )
          {
            *((_QWORD *)v30 + 3) = 0;
            qfree(v32);
          }
          ++v29;
          v27 = (char *)v39;
        }
        while ( v28 != v29 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v27);
    }
    clear_tinfo_t(&v36);
    goto LABEL_10;
  }
  if ( v39 )
  {
    v22 = v40;
    v23 = 0;
    if ( (_QWORD)v40 )
    {
      do
      {
        v24 = (char *)v39 + 128 * v23;
        clear_tinfo_t(v24 + 8);
        v25 = (void *)v24[5];
        if ( v25 )
        {
          v24[6] = 0;
          qfree(v25);
        }
        v26 = (void *)v24[2];
        if ( v26 )
        {
          v24[3] = 0;
          qfree(v26);
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  clear_tinfo_t(&v36);
  return v15;
}

