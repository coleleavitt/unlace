__int64 __fastcall sub_3ADA90(__int64 *a1, __int64 a2)
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
  int v12; // r9d
  __int64 v13; // rax
  _DWORD *v14; // rsi
  unsigned int *v15; // r13
  __int64 v16; // rax
  const char *v17; // rdx
  const char *v18; // rsi
  char *v19; // rsi
  int v20; // [rsp+14h] [rbp-F4h]
  __int64 v21; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-E0h]
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
  sub_3573A0((char **)&v23);
  v25 = nullptr;
  v21 = 0xFFFFFFFFLL;
  v3 = haystack;
  v22 = -1;
  v26 = 0;
  if ( (_QWORD)v24 )
    v3 = (const char *)v23;
  v4 = *std_dirtree;
  LODWORD(v29) = -1;
  BYTE4(v29) = 0;
  dirtree_resolve_path(&v29, v4, v3);
  if ( (_DWORD)v29 != -1 && BYTE4(v29) )
  {
    LODWORD(v21) = (_DWORD)v29;
    dir_size = dirtree_get_dir_size(*std_dirtree, (unsigned int)v29);
    v7 = v26;
    v8 = dir_size;
    if ( (unsigned __int64)v26 < dir_size )
    {
      v19 = (char *)v25;
      if ( *((_QWORD *)&v26 + 1) < dir_size )
      {
        v25 = (void *)qvector_reserve(&v25, v25, dir_size, 4);
        v7 = v26;
        v19 = (char *)v25;
      }
      memset(&v19[4 * v7], 0, 4 * (v8 - v7));
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
        v15 = (unsigned int *)v25;
        if ( v25 < (char *)v25 + 4 * v10 )
        {
          do
          {
            v16 = *a1;
            v27 = nullptr;
            v28 = 0;
            (*(void (__fastcall **)(__int64 *, void **, _QWORD, _QWORD))(v16 + 320))(a1, &v27, *v15, 0);
            v29 = nullptr;
            v30 = 0;
            sub_3573A0((char **)&v29);
            ptr = nullptr;
            v32 = 0;
            sub_3573A0((char **)&ptr);
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
          while ( v15 < (unsigned int *)((char *)v25 + 4 * (_QWORD)v26) );
        }
        LOBYTE(std_dirtree) = (unsigned __int8)dirtree_rmdir() == 0;
        goto LABEL_7;
      }
    }
    v9 = 0;
    while ( 1 )
    {
      v22 = v9;
      v11 = *std_dirtree;
      BYTE4(ptr) = 0;
      LODWORD(ptr) = -1;
      dirtree_resolve_cursor(&ptr, v11, &v21);
      v12 = (int)ptr;
      if ( (_DWORD)ptr != -1 )
      {
        if ( BYTE4(ptr) )
          break;
      }
      v13 = v26;
      v14 = v25;
      if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
      {
        v20 = (int)ptr;
        v25 = (void *)qvector_reserve(&v25, v25, v26 + 1, 4);
        v14 = v25;
        v12 = v20;
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

