unsigned __int64 __fastcall sub_5C9E80(__int64 idati, _QWORD *a2, const char *a3)
{
  size_t v6; // rax
  __int64 v7; // r12
  size_t v8; // r15
  size_t v9; // r8
  char *v10; // rsi
  size_t v11; // rdx
  char *v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  __int64 v15; // rdi
  char *v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 v23; // rax
  void *v24; // rdi
  size_t v25; // r15
  __int64 v26; // rax
  size_t v27; // [rsp+0h] [rbp-118h]
  char *v28; // [rsp+8h] [rbp-110h]
  size_t v29; // [rsp+8h] [rbp-110h]
  __int64 v30; // [rsp+18h] [rbp-100h] BYREF
  __int64 v31; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-F0h] BYREF
  char *s; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+38h] [rbp-E0h]
  __int128 v35; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-B8h] BYREF
  int v37; // [rsp+68h] [rbp-B0h]
  __int16 v38; // [rsp+6Ch] [rbp-ACh]
  void *v39; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+78h] [rbp-A0h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-80h] BYREF
  int v44; // [rsp+A8h] [rbp-70h]
  void *v45; // [rsp+B0h] [rbp-68h]
  __int128 v46; // [rsp+B8h] [rbp-60h]
  char v47; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  s = nullptr;
  v34 = 0;
  s = (char *)qvector_reserve(&s, 0, 5, 1);
  *(_QWORD *)&v34 = 5;
  strcpy(s, "dtr_");
  if ( a3 )
  {
    v6 = strlen(a3);
    v7 = v34;
    v8 = v6;
    v9 = v6;
    if ( (_QWORD)v34 )
    {
      v7 = v34 - 1;
      v9 = v6 + v34 - 1;
    }
    v10 = s;
    v11 = v9 + 1;
    if ( *((_QWORD *)&v34 + 1) < v9 + 1 )
    {
      v29 = v9;
      v27 = v9 + 1;
      s = (char *)qvector_reserve(&s, s, v11, 1);
      v9 = v29;
      v10 = s;
      v11 = v27;
    }
    *(_QWORD *)&v34 = v11;
    v10[v9] = 0;
    memmove(&s[v7], a3, v8);
  }
  v12 = s;
  if ( s && (v13 = strlen(s), (v14 = v13) != 0) )
  {
    v24 = (void *)a2[2];
    v25 = v13 + 1;
    if ( a2[4] < v13 + 1 )
    {
      v26 = qvector_reserve(a2 + 2, a2[2], v25, 1);
      a2[2] = v26;
      v24 = (void *)v26;
    }
    a2[3] = v25;
    memmove(v24, v12, v14);
    *(_BYTE *)(a2[2] + v14) = 0;
  }
  else
  {
    a2[3] = 0;
  }
  v15 = a2[8];
  v39 = nullptr;
  v41 = 0;
  v42 = 0;
  v43[0] = 0;
  v43[1] = 0;
  v44 = 0;
  v45 = nullptr;
  v47 = 16;
  *(_QWORD *)&v35 = 0;
  v40 = 0;
  v46 = 0;
  *(_QWORD *)&v35 = get_tinfo_property(v15, 9);
  if ( (unsigned __int8)get_tinfo_details(v35, 12, &v39) && (_QWORD)v40 )
  {
    clear_tinfo_t(&v35);
    v28 = (char *)v39 + 64;
    if ( a3 )
    {
      *((_QWORD *)&v35 + 1) = a3;
      LOWORD(v36) = 0;
      if ( !idati )
        idati = get_idati(&v35, 0);
      *(_QWORD *)&v35 = idati;
      create_tinfo(v28, 61, 61, &v35);
    }
    v32 = 0;
    v35 = 0;
    v31 = 0;
    copy_tinfo_t((char *)&v35 + 8);
    v36 = 0;
    copy_tinfo_t(&v36);
    v37 = 0;
    v38 = 0;
    clear_tinfo_t(&v31);
    clear_tinfo_t(&v32);
    copy_tinfo_t(&v35);
    create_tinfo(v28, 10, 10, &v35);
    clear_tinfo_t(&v36);
    clear_tinfo_t((char *)&v35 + 8);
    clear_tinfo_t(&v35);
    v30 = 0;
    create_tinfo(&v30, 12, 12, &v39);
    v32 = 0;
    v31 = 0;
    v35 = 0;
    copy_tinfo_t((char *)&v35 + 8);
    v36 = 0;
    copy_tinfo_t(&v36);
    v37 = 0;
    v38 = 0;
    clear_tinfo_t(&v31);
    clear_tinfo_t(&v32);
    copy_tinfo_t(&v35);
    create_tinfo(&v30, 10, 10, &v35);
    clear_tinfo_t(&v36);
    clear_tinfo_t((char *)&v35 + 8);
    clear_tinfo_t(&v35);
    v23 = a2[8];
    a2[8] = v30;
    v30 = v23;
    clear_tinfo_t(&v30);
  }
  else
  {
    clear_tinfo_t(&v35);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  cleanup_argloc(v43);
  clear_tinfo_t(&v42);
  v16 = (char *)v39;
  if ( v39 )
  {
    v17 = v40;
    if ( (_QWORD)v40 )
    {
      v18 = 0;
      do
      {
        v19 = &v16[80 * v18];
        clear_tinfo_t(v19 + 64);
        v20 = *((void **)v19 + 5);
        if ( v20 )
        {
          *((_QWORD *)v19 + 6) = 0;
          qfree(v20);
        }
        v21 = *((void **)v19 + 2);
        if ( v21 )
        {
          *((_QWORD *)v19 + 3) = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc(v19);
        v16 = (char *)v39;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v16);
  }
  if ( s )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s);
  }
  return v48 - __readfsqword(0x28u);
}

