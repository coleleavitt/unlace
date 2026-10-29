__int64 __fastcall sub_491F80(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, char a6)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 udm_by_tid; // r13
  __int64 tinfo_property4; // r14
  __int64 func; // rax
  __int64 v16; // rbx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 idati; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r14
  _QWORD *v25; // r12
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  char *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
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
          v16 = get_tinfo_property4(v39, 297, udm_by_tid, 0, 0, 0);
          goto LABEL_7;
        }
        if ( !a6 )
        {
          v16 = -1;
LABEL_7:
          clear_tinfo_t(&v39);
          return v16;
        }
        if ( !under_debugger )
          interr(2007);
LABEL_49:
        BUG();
      }
    }
    return -1;
  }
  v34 = *(_QWORD *)(v12 + 1672);
  v18 = sub_6BE1C0(v34, 0, 0, a2);
  if ( v18 < 0 )
    goto LABEL_10;
  v35 = sub_6BD6E0(v34, a2, 1, 0);
  if ( !v35 )
  {
    if ( !under_debugger )
      interr(3052);
    goto LABEL_49;
  }
  if ( !(unsigned __int8)sub_4A2760(a1, &v35, a3, (unsigned int)v8, 0) )
  {
LABEL_10:
    if ( a6 )
    {
      if ( !under_debugger )
        interr(2008);
      goto LABEL_49;
    }
    return -1;
  }
  v19 = switch_dbctx(*(int *)(a1 + 4 * v8 + 16));
  v36 = 0;
  v20 = *(_QWORD *)(v19 + 1672);
  v39 = nullptr;
  v42 = 0;
  v43 = 1;
  v40 = 0;
  v41 = 0;
  idati = *(_QWORD *)(v20 + 8);
  v38 = 257;
  v37[1] = v35;
  if ( !idati )
    idati = get_idati(257, &v35);
  v37[0] = idati;
  if ( !(unsigned __int8)create_tinfo(&v36, 61, 189, v37)
    || !(unsigned __int8)get_tinfo_details(v36, 141, &v39)
    || v18 >= (unsigned __int64)v40
    || (v22 = sub_64DFD0(v20, *(_QWORD *)(v20 + 8), v35, 0), v16 = sub_6BCC40(v20, v22, &v39, v18, 0), v16 == -1) )
  {
    v28 = (char *)v39;
    if ( v39 )
    {
      v29 = v40;
      if ( (_QWORD)v40 )
      {
        v30 = 0;
        do
        {
          v31 = &v28[144 * v30];
          clear_tinfo_t(v31 + 64);
          v32 = *((void **)v31 + 5);
          if ( v32 )
          {
            *((_QWORD *)v31 + 6) = 0;
            qfree(v32);
          }
          v33 = *((void **)v31 + 2);
          if ( v33 )
          {
            *((_QWORD *)v31 + 3) = 0;
            qfree(v33);
          }
          ++v30;
          v28 = (char *)v39;
        }
        while ( v29 != v30 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v28);
    }
    clear_tinfo_t(&v36);
    goto LABEL_10;
  }
  if ( v39 )
  {
    v23 = v40;
    v24 = 0;
    if ( (_QWORD)v40 )
    {
      do
      {
        v25 = (char *)v39 + 144 * v24;
        clear_tinfo_t(v25 + 8);
        v26 = (void *)v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = (void *)v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  clear_tinfo_t(&v36);
  return v16;
}
