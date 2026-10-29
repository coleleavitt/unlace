unsigned __int64 __fastcall make_script_ns(__int64 a1, const char *a2, __int64 a3)
{
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  const char *v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // rbp
  _WORD *v19; // rsi
  void *v20; // rdi
  size_t v21; // r13
  void *ptr; // [rsp+0h] [rbp-1088h] BYREF
  __int128 v23; // [rsp+8h] [rbp-1080h]
  void *dest; // [rsp+20h] [rbp-1068h] BYREF
  __int128 v25; // [rsp+28h] [rbp-1060h]
  _BYTE v26[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1048h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  ptr = nullptr;
  v23 = 0;
  plugin_name_from_path_or_name(&ptr, a3);
  dest = nullptr;
  v25 = 0;
  if ( !a2
    || (v5 = strlen(a2),
        v6 = v5 + 1,
        v7 = v5,
        dest = (void *)qvector_reserve(&dest, 0, v5 + 1, 1),
        *(_QWORD *)&v25 = v6,
        memmove(dest, a2, v7),
        *((_BYTE *)dest + v7) = 0,
        (unsigned __int64)v25 <= 1) )
  {
    qstrncpy(v26, a3, 4096);
    while ( (unsigned __int8)qdirname(v26) )
    {
      if ( !v26[0] )
        break;
      v15 = (const char *)qbasename(v26);
      v16 = v15;
      if ( !v15 || !*v15 )
        break;
      if ( !strcmp(v15, "plugins") || !strcmp(v16, "procs") || !strcmp(v16, "loaders") )
      {
        v17 = strlen(v16);
        v18 = v17;
        if ( !v17 )
        {
          *(_QWORD *)&v25 = 0;
          goto LABEL_27;
        }
        v20 = dest;
        v21 = v17 + 1;
        if ( *((_QWORD *)&v25 + 1) < v17 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v21, 1);
          v20 = dest;
        }
        *(_QWORD *)&v25 = v21;
        memmove(v20, v16, v18);
        *((_BYTE *)dest + v18) = 0;
        break;
      }
    }
    if ( (unsigned __int64)v25 > 1 )
      goto LABEL_3;
LABEL_27:
    v19 = dest;
    if ( *((_QWORD *)&v25 + 1) <= 6u )
    {
      dest = (void *)qvector_reserve(&dest, dest, 7, 1);
      v19 = dest;
    }
    *(_QWORD *)&v25 = 7;
    v19[2] = 25964;
    *(_DWORD *)v19 = 1969516397;
    *((_BYTE *)dest + 6) = 0;
  }
LABEL_3:
  sub_3573A0((char **)a1);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 - 1 )
        goto LABEL_10;
      v10 = (_BYTE *)(v9 + *(_QWORD *)a1);
      v11 = (unsigned __int8)*v10;
      if ( (char)v11 > 57 )
        break;
      if ( (char)v11 <= 47 )
        goto LABEL_16;
LABEL_9:
      ++v9;
      if ( !v8 )
        goto LABEL_10;
    }
    v12 = (unsigned int)(v11 - 65);
    if ( (unsigned __int8)v12 <= 0x39u )
    {
      v13 = 0x3FFFFFF43FFFFFFLL;
      if ( _bittest64(&v13, v12) )
        goto LABEL_9;
    }
LABEL_16:
    *v10 = 95;
    v8 = *(_QWORD *)(a1 + 8);
    goto LABEL_9;
  }
LABEL_10:
  if ( dest )
  {
    *(_QWORD *)&v25 = 0;
    qfree(dest);
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}

