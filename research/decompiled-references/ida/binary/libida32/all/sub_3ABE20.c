__int64 __fastcall sub_3ABE20(__int64 *a1, __int64 a2, const char *a3)
{
  const char *v3; // rbx
  _QWORD *std_dirtree; // r14
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  _BYTE *v14; // rsi
  __int64 v15; // rbp
  size_t v16; // rax
  size_t v17; // r12
  size_t v18; // r13
  _BYTE *v19; // rsi
  const char *v20; // rdx
  const char *v21; // rsi
  int v22; // [rsp+1Bh] [rbp-ADh] BYREF
  char v23; // [rsp+1Fh] [rbp-A9h]
  int v24; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-A0h]
  void *v26; // [rsp+30h] [rbp-98h] BYREF
  __int128 v27; // [rsp+38h] [rbp-90h]
  void *v28; // [rsp+50h] [rbp-78h] BYREF
  __int128 v29; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+78h] [rbp-50h]
  unsigned __int64 v32; // [rsp+88h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  LOBYTE(v3) = a3 == nullptr || a2 == 0;
  if ( (_BYTE)v3
    || (v23 = 0,
        *(_QWORD *)&v31 = -1,
        std_dirtree = (_QWORD *)get_std_dirtree(5),
        v22 = *(_DWORD *)(a2 + 80),
        ptr = (void *)0xFFFFFFFFLL,
        dirtree_find_entry(&ptr, std_dirtree, &v22),
        v24 = (int)ptr,
        v25 = v31,
        (_DWORD)ptr == -1)
    && (_QWORD)v31 )
  {
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  v26 = nullptr;
  v27 = 0;
  dirtree_get_abspath_by_cursor(&v26, *std_dirtree, &v24, 0);
  v28 = nullptr;
  v29 = 0;
  if ( !strcmp(a3, "Default") || *a3 == 47 )
  {
    sub_3573A0((char **)&v28);
    if ( !(_QWORD)v29 )
      goto LABEL_8;
  }
  else
  {
    sub_3573A0((char **)&v28);
    if ( !(_QWORD)v29 )
    {
LABEL_8:
      v8 = haystack;
      goto LABEL_9;
    }
  }
  v8 = (const char *)v28;
  if ( *(_BYTE *)v28 == 47 && !*((_BYTE *)v28 + 1) )
  {
LABEL_10:
    v9 = *a1;
    v10 = *(unsigned int *)(a2 + 80);
    ptr = nullptr;
    v31 = 0;
    (*(void (__fastcall **)(__int64 *, void **, __int64, _QWORD))(v9 + 320))(a1, &ptr, v10, 0);
    v11 = v29;
    if ( (_QWORD)v29 )
    {
      v12 = v29 + 1;
      v13 = v29;
      v11 = v29 - 1;
    }
    else
    {
      v12 = 2;
      v13 = 1;
    }
    v14 = v28;
    if ( *((_QWORD *)&v29 + 1) < v12 )
    {
      v28 = (void *)qvector_reserve(&v28, v28, v12, 1);
      v14 = v28;
    }
    *(_QWORD *)&v29 = v12;
    v14[v13] = 0;
    *((_BYTE *)v28 + v11) = 47;
    v3 = haystack;
    if ( (_QWORD)v31 )
      v3 = (const char *)ptr;
    if ( v3 )
    {
      v15 = v29;
      v16 = strlen(v3);
      v17 = v16;
      v18 = v16;
      if ( v15 )
      {
        --v15;
        v18 = v16 + v15;
      }
      v19 = v28;
      if ( *((_QWORD *)&v29 + 1) < v18 + 1 )
      {
        v28 = (void *)qvector_reserve(&v28, v28, v18 + 1, 1);
        v19 = v28;
      }
      *(_QWORD *)&v29 = v18 + 1;
      v19[v18] = 0;
      memmove((char *)v28 + v15, v3, v17);
    }
    v20 = haystack;
    if ( (_QWORD)v29 )
      LODWORD(v20) = (_DWORD)v28;
    v21 = haystack;
    if ( (_QWORD)v27 )
      LODWORD(v21) = (_DWORD)v26;
    LOBYTE(v3) = (unsigned __int8)dirtree_rename(*std_dirtree, (int)v21, (int)v20) == 0;
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      qfree(ptr);
    }
    goto LABEL_28;
  }
LABEL_9:
  if ( (unsigned __int8)dirtree_mkdir(*std_dirtree, v8) <= 1u )
    goto LABEL_10;
LABEL_28:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return (unsigned int)v3;
}

