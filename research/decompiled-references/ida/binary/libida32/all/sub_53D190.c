__int64 __fastcall sub_53D190(__int64 a1)
{
  unsigned int v1; // r14d
  char *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  void *v10; // [rsp+10h] [rbp-98h] BYREF
  __int128 v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-70h] BYREF
  int v15; // [rsp+48h] [rbp-60h]
  void *ptr; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h]
  char v18; // [rsp+68h] [rbp-40h]
  unsigned __int64 v19; // [rsp+78h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v9 = 0;
  create_tinfo(&v9, 1, 7, 0);
  v10 = nullptr;
  v18 = 16;
  v12 = 0;
  v13 = 0;
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0;
  ptr = nullptr;
  v11 = 0;
  v17 = 0;
  copy_tinfo_t(&v13);
  HIDWORD(v12) = 0;
  v18 = v18 & 0xF | 0x10;
  v1 = create_tinfo(a1, 12, 12, &v10);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  cleanup_argloc(v14);
  clear_tinfo_t(&v13);
  v2 = (char *)v10;
  if ( v10 )
  {
    v3 = v11;
    if ( (_QWORD)v11 )
    {
      v4 = 0;
      do
      {
        v5 = &v2[80 * v4];
        clear_tinfo_t(v5 + 64);
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_QWORD *)v5 + 6) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_QWORD *)v5 + 3) = 0;
          qfree(v7);
        }
        ++v4;
        cleanup_argloc(v5);
        v2 = (char *)v10;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v11 = 0;
    qfree(v2);
  }
  clear_tinfo_t(&v9);
  return v1;
}

