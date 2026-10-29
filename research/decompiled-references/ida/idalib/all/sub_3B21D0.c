__int64 __fastcall sub_3B21D0(__int64 *a1, __int64 a2)
{
  _QWORD *std_dirtree; // rbx
  const char *v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 dir_size; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  void *v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // r13
  __int64 v16; // rax
  const char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rsi
  char *v20; // rsi
  void *v21; // [rsp+10h] [rbp-F8h]
  __int128 v22; // [rsp+20h] [rbp-E8h] BYREF
  void *v23; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-D0h]
  void *v25; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+58h] [rbp-B0h]
  void *v27; // [rsp+70h] [rbp-98h] BYREF
  __int128 v28; // [rsp+78h] [rbp-90h]
  void *v29; // [rsp+90h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h]
  void *ptr; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
  {
    LODWORD(std_dirtree) = 0;
    return (unsigned int)std_dirtree;
  }
  std_dirtree = (_QWORD *)get_std_dirtree(5);
  v24 = 0;
  v23 = nullptr;
  sub_35A790((char **)&v23);
  v25 = nullptr;
  v3 = haystack;
  v26 = 0;
  v22 = -1;
  if ( (_QWORD)v24 )
    v3 = (const char *)v23;
  v4 = *std_dirtree;
  v29 = (void *)-1LL;
  LOBYTE(v30) = 0;
  dirtree_resolve_path(&v29, v4, v3);
  if ( v29 != (void *)-1LL && (_BYTE)v30 )
  {
    *(_QWORD *)&v22 = v29;
    dir_size = dirtree_get_dir_size(*std_dirtree, v29);
    v7 = v26;
    v8 = dir_size;
    if ( (unsigned __int64)v26 < dir_size )
    {
      v20 = (char *)v25;
      if ( *((_QWORD *)&v26 + 1) < dir_size )
      {
        v25 = (void *)qvector_reserve(&v25, v25, dir_size, 8);
        v7 = v26;
        v20 = (char *)v25;
      }
      memset(&v20[8 * v7], 0, 8 * (v8 - v7));
      *(_QWORD *)&v26 = v8;
    }
    else
    {
      if ( dir_size != (_QWORD)v26 )
        *(_QWORD *)&v26 = dir_size;
      if ( !dir_size )
      {
        v10 = v26;
LABEL_24:
        v15 = v25;
        if ( v25 < (char *)v25 + 8 * v10 )
        {
          do
          {
            v16 = *a1;
            v27 = nullptr;
            v28 = 0;
            (*(void (__fastcall **)(__int64 *, void **, _QWORD, _QWORD))(v16 + 320))(a1, &v27, *v15, 0);
            v29 = nullptr;
            v30 = 0;
            sub_35A790((char **)&v29);
            ptr = nullptr;
            v32 = 0;
            sub_35A790((char **)&ptr);
            v17 = haystack;
            if ( (_QWORD)v32 )
              LODWORD(v17) = (_DWORD)ptr;
            v18 = haystack;
            if ( (_QWORD)v30 )
              LODWORD(v18) = (_DWORD)v29;
            dirtree_rename(*std_dirtree, (int)v18, (int)v17);
            if ( ptr )
            {
              *(_QWORD *)&v32 = 0;
              qfree(ptr);
            }
            if ( v29 )
            {
              *(_QWORD *)&v30 = 0;
              qfree(v29);
            }
            if ( v27 )
            {
              *(_QWORD *)&v28 = 0;
              qfree(v27);
            }
            ++v15;
          }
          while ( v15 < (_QWORD *)((char *)v25 + 8 * (_QWORD)v26) );
        }
        v19 = haystack;
        if ( (_QWORD)v24 )
          v19 = (const char *)v23;
        LOBYTE(std_dirtree) = (unsigned __int8)dirtree_rmdir(*std_dirtree, v19) == 0;
        goto LABEL_7;
      }
    }
    v9 = 0;
    while ( 1 )
    {
      *((_QWORD *)&v22 + 1) = v9;
      v11 = *std_dirtree;
      LOBYTE(v32) = 0;
      ptr = (void *)-1LL;
      dirtree_resolve_cursor(&ptr, v11, &v22);
      v12 = ptr;
      if ( ptr != (void *)-1LL )
      {
        if ( (_BYTE)v32 )
          break;
      }
      v13 = v26;
      v14 = v25;
      if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
      {
        v21 = ptr;
        v25 = (void *)qvector_reserve(&v25, v25, v26 + 1, 8);
        v14 = v25;
        v12 = v21;
        v13 = v26;
      }
      v14[v13] = v12;
      ++v9;
      v10 = v26 + 1;
      *(_QWORD *)&v26 = v26 + 1;
      if ( v8 == v9 )
        goto LABEL_24;
    }
  }
  LODWORD(std_dirtree) = 0;
LABEL_7:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return (unsigned int)std_dirtree;
}
