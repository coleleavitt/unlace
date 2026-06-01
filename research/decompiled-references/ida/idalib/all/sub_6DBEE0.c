__int64 __fastcall sub_6DBEE0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  bool v4; // zf
  unsigned int v6; // ebx
  const char *v8; // rdx
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 v11; // r14
  char *v12; // r15
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-108h]
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  __int16 v22; // [rsp+5Ch] [rbp-ACh]
  void *v23; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-78h]
  void *ptr; // [rsp+A0h] [rbp-68h]
  __int128 v30; // [rsp+A8h] [rbp-60h]
  char v31; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+C8h] [rbp-40h]

  v4 = *(_BYTE *)a3 == 105;
  v32 = __readfsqword(0x28u);
  v16 = 0;
  if ( v4 && *(_BYTE *)(a3 + 1) == 100 && !*(_BYTE *)(a3 + 2) || !strcmp((const char *)a3, "Class") )
  {
    v23 = nullptr;
    get_stock_tinfo(&v23, 7);
LABEL_5:
    copy_tinfo_t(&v16);
    clear_tinfo_t(&v23);
    goto LABEL_6;
  }
  if ( !strcmp((const char *)a3, "SEL") )
  {
    v23 = nullptr;
    get_stock_tinfo(&v23, 2);
    goto LABEL_5;
  }
  if ( strcmp((const char *)a3, "IMP") )
  {
    if ( strcmp((const char *)a3, "BOOL") )
      goto LABEL_7;
    v23 = &dword_30 + 2;
    goto LABEL_5;
  }
  v23 = nullptr;
  v24 = 0;
  v28 = 0;
  v30 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  ptr = nullptr;
  v31 = 16;
  *(_QWORD *)&v19 = 1;
  copy_tinfo_t(&v26);
  clear_tinfo_t(&v19);
  create_tinfo(&v16, 12, 12, &v23);
  v19 = 0;
  v17 = 0;
  v18 = 0;
  copy_tinfo_t((char *)&v19 + 8);
  v20 = 0;
  copy_tinfo_t(&v20);
  v21 = 0;
  v22 = 0;
  clear_tinfo_t(&v18);
  clear_tinfo_t(&v17);
  copy_tinfo_t(&v19);
  create_tinfo(&v16, 10, 10, &v19);
  clear_tinfo_t(&v20);
  clear_tinfo_t((char *)&v19 + 8);
  clear_tinfo_t(&v19);
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  cleanup_argloc(&v27);
  clear_tinfo_t(&v26);
  v10 = (char *)v23;
  if ( v23 )
  {
    v15 = v24;
    if ( (_QWORD)v24 )
    {
      v11 = 0;
      do
      {
        v12 = &v10[80 * v11];
        clear_tinfo_t(v12 + 64);
        v13 = *((void **)v12 + 5);
        if ( v13 )
        {
          *((_QWORD *)v12 + 6) = 0;
          qfree(v13);
        }
        v14 = *((void **)v12 + 2);
        if ( v14 )
        {
          *((_QWORD *)v12 + 3) = 0;
          qfree(v14);
        }
        ++v11;
        cleanup_argloc(v12);
        v10 = (char *)v23;
      }
      while ( v15 != v11 );
    }
    *(_QWORD *)&v24 = 0;
    qfree(v10);
  }
LABEL_6:
  if ( (_BYTE)v16 )
  {
    v8 = (const char *)a3;
    v6 = 1;
    sub_6DBDC0(a1, (__int64)&v16, v8, nullptr, 1, 0);
    v9 = v16;
    v16 = *a2;
    *a2 = v9;
    goto LABEL_8;
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  clear_tinfo_t(&v16);
  return v6;
}
