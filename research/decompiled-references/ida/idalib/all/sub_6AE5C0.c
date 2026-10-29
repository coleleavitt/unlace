__int64 __fastcall sub_6AE5C0(__int64 a1, __int64 a2, unsigned __int64 *a3, const char *a4)
{
  unsigned __int64 v6; // rdi
  void *v8; // rbx
  int v9; // r14d
  int v12; // r14d
  unsigned __int64 v13; // rdi
  char *v14; // rdi
  void *v15; // r15
  char *v16; // r14
  void *v17; // rdi
  void *v18; // rdi
  char *v19; // rdi
  void *v20; // r12
  void *v21; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  int v25; // eax
  void *v26; // rdi
  const char *v27; // rsi
  void *v28; // rax
  __int64 v29; // rsi
  char *v30; // rdi
  void *v31; // r12
  void *v32; // rbp
  char *v33; // rbx
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // [rsp+0h] [rbp-E8h]
  unsigned __int8 tinfo_property; // [rsp+8h] [rbp-E0h]
  __int64 v38; // [rsp+18h] [rbp-D0h] BYREF
  void *v39[3]; // [rsp+20h] [rbp-C8h] BYREF
  int v40; // [rsp+38h] [rbp-B0h]
  __int16 v41; // [rsp+3Ch] [rbp-ACh]
  void *v42; // [rsp+40h] [rbp-A8h] BYREF
  void *v43[3]; // [rsp+48h] [rbp-A0h] BYREF
  void *v44; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v45[24]; // [rsp+68h] [rbp-80h] BYREF
  void *v46; // [rsp+80h] [rbp-68h]
  __int128 v47; // [rsp+88h] [rbp-60h]
  char v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v6 = *a3;
  v49 = __readfsqword(0x28u);
  if ( (v6 & 0xF) == 0xA )
  {
    v42 = nullptr;
    *(_OWORD *)v39 = 0;
    v38 = 0;
    copy_tinfo_t(&v39[1]);
    v39[2] = nullptr;
    copy_tinfo_t(&v39[2]);
    v40 = 0;
    v41 = 0;
    clear_tinfo_t(&v38);
    clear_tinfo_t(&v42);
    get_tinfo_details(*a3, 10, v39);
    v42 = nullptr;
    memset(v43, 0, sizeof(v43));
    v44 = nullptr;
    memset(v45, 0, 20);
    v25 = visit_subtypes(a1, (int)&v42, (int)v39, 0, 0);
    *(_DWORD *)(a1 + 40) = v25;
    if ( v25 >= 0 && (v45[16] & 1) != 0 )
    {
      tinfo_property = get_tinfo_property(*a3, 0);
      v28 = v39[0];
      v29 = *(unsigned __int8 *)a3;
      v39[0] = v42;
      v42 = v28;
      create_tinfo(a2, v29, 10, v39);
      set_tinfo_property4(a2, 26, tinfo_property, 0, 0, 1);
      *(_DWORD *)(a2 + 56) |= 1u;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 0;
    }
    v26 = v44;
    *(_DWORD *)(a1 + 8) |= 1u;
    if ( v26 )
    {
      *(_QWORD *)v45 = 0;
      qfree(v26);
    }
    if ( v43[0] )
    {
      v43[1] = nullptr;
      qfree(v43[0]);
    }
    clear_tinfo_t(&v42);
    clear_tinfo_t(&v39[2]);
    clear_tinfo_t(&v39[1]);
    clear_tinfo_t(v39);
    return 0;
  }
  if ( (v6 & 0xF) != 0xC )
  {
    v8 = *(void **)(a1 + 24);
    v42 = nullptr;
    *(_OWORD *)v43 = 0;
    if ( (getinf(57) & 0xF) == 6
      && ((unsigned int)verify_tinfo(*a3) || !get_tinfo_size(0, *a3, 0))
      && (*a3 & 0x100) != 0
      && get_tinfo_pdata(&v42, *a3, 0) )
    {
      v27 = haystack;
      if ( v43[0] )
        v27 = (const char *)v42;
      sub_6AB550(v8, v27);
    }
    if ( v42 )
    {
      v43[0] = nullptr;
      qfree(v42);
    }
    return 0;
  }
  memset(v43, 0, sizeof(v43));
  v42 = nullptr;
  v44 = nullptr;
  memset(v45, 0, sizeof(v45));
  v46 = nullptr;
  v48 = 16;
  v47 = 0;
  get_tinfo_details(v6, 140, &v42);
  v12 = sub_6AC810(
          *(const __m128i **)(*(_QWORD *)(a1 + 16) + 1672LL),
          *(void **)(a1 + 24),
          a3,
          (__int64)&v42,
          a4,
          *(_QWORD *)(a1 + 32));
  if ( !v12 )
  {
LABEL_21:
    if ( *(_BYTE *)a3 > 0x3Fu )
    {
      if ( (*(_BYTE *)(a2 + 56) & 1) == 0 )
      {
        copy_tinfo_t(a2);
        *(_DWORD *)(a2 + 56) |= 1u;
      }
      *(_QWORD *)a2 &= 0xFFFFFFFFFFFFFF3FLL;
      *(_DWORD *)(a1 + 40) |= 2u;
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
    cleanup_argloc(v45);
    clear_tinfo_t(&v44);
    v19 = (char *)v42;
    if ( v42 )
    {
      v20 = v43[0];
      if ( v43[0] )
      {
        v21 = nullptr;
        do
        {
          v22 = &v19[80 * (_QWORD)v21];
          clear_tinfo_t(v22 + 64);
          v23 = *((void **)v22 + 5);
          if ( v23 )
          {
            *((_QWORD *)v22 + 6) = 0;
            qfree(v23);
          }
          v24 = *((void **)v22 + 2);
          if ( v24 )
          {
            *((_QWORD *)v22 + 3) = 0;
            qfree(v24);
          }
          v21 = (char *)v21 + 1;
          cleanup_argloc(v22);
          v19 = (char *)v42;
        }
        while ( v20 != v21 );
      }
      v43[0] = nullptr;
      qfree(v19);
    }
    return 0;
  }
  v9 = *(_DWORD *)(a1 + 40) | v12;
  *(_DWORD *)(a1 + 40) = v9;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 56) |= 1u;
    create_tinfo(a2, *(unsigned __int8 *)a3, 12, &v42);
    v13 = *a3;
    memset(v39, 0, sizeof(v39));
    if ( (unsigned __int8)get_tinfo_attrs(v13, (char **)v39, 0) )
      set_tinfo_attrs((unsigned __int64 *)a2, (__int64)v39);
    v14 = (char *)v39[0];
    if ( v39[0] )
    {
      v36 = v39[1];
      if ( v39[1] )
      {
        v15 = nullptr;
        do
        {
          v16 = &v14[48 * (_QWORD)v15];
          v17 = *((void **)v16 + 3);
          if ( v17 )
          {
            *((_QWORD *)v16 + 4) = 0;
            qfree(v17);
          }
          v18 = *(void **)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            qfree(v18);
          }
          v14 = (char *)v39[0];
          v15 = (char *)v15 + 1;
        }
        while ( v36 != v15 );
      }
      v39[1] = nullptr;
      qfree(v14);
    }
    goto LABEL_21;
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  cleanup_argloc(v45);
  clear_tinfo_t(&v44);
  v30 = (char *)v42;
  if ( v42 )
  {
    v31 = v43[0];
    if ( v43[0] )
    {
      v32 = nullptr;
      do
      {
        v33 = &v30[80 * (_QWORD)v32];
        clear_tinfo_t(v33 + 64);
        v34 = *((void **)v33 + 5);
        if ( v34 )
        {
          *((_QWORD *)v33 + 6) = 0;
          qfree(v34);
        }
        v35 = *((void **)v33 + 2);
        if ( v35 )
        {
          *((_QWORD *)v33 + 3) = 0;
          qfree(v35);
        }
        v32 = (char *)v32 + 1;
        cleanup_argloc(v33);
        v30 = (char *)v42;
      }
      while ( v31 != v32 );
    }
    v43[0] = nullptr;
    qfree(v30);
  }
  return (unsigned int)v9;
}
