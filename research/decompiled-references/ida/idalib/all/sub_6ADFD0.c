__int64 __fastcall sub_6ADFD0(__int64 a1)
{
  __int64 v1; // rbp
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r12
  char *v7; // r15
  void *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // [rsp+0h] [rbp-138h]
  __int64 v14; // [rsp+18h] [rbp-120h] BYREF
  __int64 v15; // [rsp+20h] [rbp-118h] BYREF
  __int64 v16; // [rsp+28h] [rbp-110h] BYREF
  __int64 v17; // [rsp+30h] [rbp-108h] BYREF
  __int64 v18; // [rsp+38h] [rbp-100h]
  __int128 v19; // [rsp+40h] [rbp-F8h] BYREF
  void *v20; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-E0h]
  void *ptr; // [rsp+68h] [rbp-D0h]
  __int128 v23; // [rsp+70h] [rbp-C8h]
  __int64 v24; // [rsp+80h] [rbp-B8h] BYREF
  int v25; // [rsp+88h] [rbp-B0h]
  void *v26; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+98h] [rbp-A0h]
  __int64 v28; // [rsp+A8h] [rbp-90h]
  __int64 v29; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-78h]
  void *v32; // [rsp+D0h] [rbp-68h]
  __int128 v33; // [rsp+D8h] [rbp-60h]
  char v34; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+F8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 2792);
  if ( !v1 )
  {
    v17 = 0;
    v18 = 0;
    v26 = nullptr;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = nullptr;
    v34 = 112;
    v14 = 1;
    v15 = 0;
    v16 = 0;
    v27 = 0;
    v31 = 0;
    v33 = 0;
    v19 = 0;
    copy_tinfo_t((char *)&v19 + 8);
    v20 = nullptr;
    copy_tinfo_t(&v20);
    LODWORD(v21) = 0;
    WORD2(v21) = 0;
    clear_tinfo_t(&v16);
    clear_tinfo_t(&v15);
    copy_tinfo_t(&v19);
    create_tinfo(&v29, 10, 10, &v19);
    clear_tinfo_t(&v20);
    clear_tinfo_t((char *)&v19 + 8);
    clear_tinfo_t(&v19);
    clear_tinfo_t(&v14);
    LODWORD(v19) = 0;
    *((_QWORD *)&v19 + 1) = 0;
    v20 = nullptr;
    ptr = nullptr;
    v24 = 0;
    v25 = 0;
    v21 = 0;
    v23 = 0;
    copy_tinfo_t(&v24);
    v25 = 6;
    sub_6116C0((__int64 *)&v26, (__int64)&v19);
    v13 = calc_arglocs(&v26);
    if ( v13 )
      copy_argloc(&v17, v26);
    clear_tinfo_t(&v24);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    cleanup_argloc(&v19);
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    cleanup_argloc(&v30);
    clear_tinfo_t(&v29);
    v4 = (char *)v26;
    if ( v26 )
    {
      v5 = v27;
      if ( (_QWORD)v27 )
      {
        v6 = 0;
        do
        {
          v7 = &v4[80 * v6];
          clear_tinfo_t(v7 + 64);
          v8 = *((void **)v7 + 5);
          if ( v8 )
          {
            *((_QWORD *)v7 + 6) = 0;
            qfree(v8);
          }
          v9 = *((void **)v7 + 2);
          if ( v9 )
          {
            *((_QWORD *)v7 + 3) = 0;
            qfree(v9);
          }
          ++v6;
          cleanup_argloc(v7);
          v4 = (char *)v26;
        }
        while ( v5 != v6 );
      }
      *(_QWORD *)&v27 = 0;
      qfree(v4);
    }
    if ( v13 )
    {
      v10 = (_QWORD *)qalloc_or_throw(16);
      *v10 = 0;
      v10[1] = 0;
      v11 = v18;
      *(_QWORD *)(a1 + 2792) = v10;
      v12 = v10[1];
      v10[1] = v11;
      v18 = v12;
      LODWORD(v12) = *(_DWORD *)v10;
      *(_DWORD *)v10 = v17;
      LODWORD(v17) = v12;
      cleanup_argloc(&v17);
      return *(_QWORD *)(a1 + 2792);
    }
    else
    {
      cleanup_argloc(&v17);
    }
  }
  return v1;
}
