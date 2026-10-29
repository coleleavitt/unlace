__int64 __fastcall sub_68D7E0(__int64 a1)
{
  __int64 v1; // rbp
  const char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  char *v8; // r15
  void *v9; // rdi
  void *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // [rsp+0h] [rbp-138h]
  __int64 v15; // [rsp+18h] [rbp-120h] BYREF
  __int64 v16; // [rsp+20h] [rbp-118h] BYREF
  __int64 v17; // [rsp+28h] [rbp-110h] BYREF
  __int64 v18; // [rsp+30h] [rbp-108h] BYREF
  __int64 v19; // [rsp+38h] [rbp-100h]
  __int128 v20; // [rsp+40h] [rbp-F8h] BYREF
  void *v21; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+58h] [rbp-E0h]
  void *ptr; // [rsp+68h] [rbp-D0h]
  __int128 v24; // [rsp+70h] [rbp-C8h]
  __int64 v25; // [rsp+80h] [rbp-B8h] BYREF
  int v26; // [rsp+88h] [rbp-B0h]
  void *v27; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+98h] [rbp-A0h]
  __int64 v29; // [rsp+A8h] [rbp-90h]
  __int64 v30; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+B8h] [rbp-80h] BYREF
  int v32; // [rsp+C8h] [rbp-70h]
  void *v33; // [rsp+D0h] [rbp-68h]
  __int128 v34; // [rsp+D8h] [rbp-60h]
  char v35; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+F8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 2592);
  if ( !v1 )
  {
    v18 = 0;
    v19 = 0;
    v27 = nullptr;
    v29 = 0;
    v30 = 0;
    v31[0] = 0;
    v31[1] = 0;
    v32 = 0;
    v33 = nullptr;
    v35 = 112;
    v15 = 1;
    v16 = 0;
    v17 = 0;
    v28 = 0;
    v34 = 0;
    v20 = 0;
    copy_tinfo_t((char *)&v20 + 8);
    v21 = nullptr;
    copy_tinfo_t(&v21);
    LODWORD(v22) = 0;
    WORD2(v22) = 0;
    clear_tinfo_t(&v17);
    clear_tinfo_t(&v16);
    copy_tinfo_t(&v20);
    create_tinfo(&v30, 10, 10, &v20);
    clear_tinfo_t(&v21);
    clear_tinfo_t((char *)&v20 + 8);
    clear_tinfo_t(&v20);
    clear_tinfo_t(&v15);
    LODWORD(v20) = 0;
    *((_QWORD *)&v20 + 1) = 0;
    v21 = nullptr;
    ptr = nullptr;
    v25 = 0;
    v26 = 0;
    v22 = 0;
    v24 = 0;
    copy_tinfo_t(&v25);
    v4 = (const char *)&v20;
    v26 = 6;
    sub_5F5640((__int64 *)&v27, (__int64)&v20);
    v14 = calc_arglocs(&v27);
    if ( v14 )
    {
      v4 = (const char *)v27;
      copy_argloc(&v18, v27);
    }
    clear_tinfo_t(&v25);
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      qfree(ptr);
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
    cleanup_argloc(&v20);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    cleanup_argloc(v31);
    clear_tinfo_t(&v30);
    v5 = (char *)v27;
    if ( v27 )
    {
      v6 = v28;
      if ( (_QWORD)v28 )
      {
        v7 = 0;
        do
        {
          v8 = &v5[80 * v7];
          clear_tinfo_t(v8 + 64);
          v9 = *((void **)v8 + 5);
          if ( v9 )
          {
            *((_QWORD *)v8 + 6) = 0;
            qfree(v9);
          }
          v10 = *((void **)v8 + 2);
          if ( v10 )
          {
            *((_QWORD *)v8 + 3) = 0;
            qfree(v10);
          }
          ++v7;
          cleanup_argloc(v8);
          v5 = (char *)v27;
        }
        while ( v6 != v7 );
      }
      *(_QWORD *)&v28 = 0;
      qfree(v5);
    }
    if ( v14 )
    {
      v11 = (_QWORD *)qalloc_or_throw(16, v4);
      *v11 = 0;
      v11[1] = 0;
      v12 = v19;
      *(_QWORD *)(a1 + 2592) = v11;
      v13 = v11[1];
      v11[1] = v12;
      v19 = v13;
      LODWORD(v13) = *(_DWORD *)v11;
      *(_DWORD *)v11 = v18;
      LODWORD(v18) = v13;
      cleanup_argloc(&v18);
      return *(_QWORD *)(a1 + 2592);
    }
    else
    {
      cleanup_argloc(&v18);
    }
  }
  return v1;
}

