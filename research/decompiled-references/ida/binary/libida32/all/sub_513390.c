__int64 __fastcall sub_513390(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v6; // rsi
  const char *v7; // r15
  __int64 v8; // rdi
  char *v9; // rbx
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 result; // rax
  void *v16; // rdi
  int v17; // [rsp+0h] [rbp-88h]
  int v18; // [rsp+8h] [rbp-80h]
  unsigned __int8 v19; // [rsp+Fh] [rbp-79h]
  int v20; // [rsp+10h] [rbp-78h]
  _BYTE v21[9]; // [rsp+16h] [rbp-72h] BYREF
  char v22; // [rsp+1Fh] [rbp-69h]
  int v23; // [rsp+20h] [rbp-68h] BYREF
  void *v24; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  int v26[4]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *(_DWORD *)v21 = a2;
  v21[4] = 1;
  ptr = (void *)0xFFFFFFFFLL;
  *(_QWORD *)v26 = -1;
  dirtree_find_entry(&ptr, a1, v21);
  v23 = (int)ptr;
  v24 = *(void **)v26;
  if ( (_DWORD)ptr == -1 && *(_QWORD *)v26 )
    return 5;
  v6 = *a1;
  *(_OWORD *)v26 = 0;
  ptr = nullptr;
  dirtree_get_abspath_by_cursor(&ptr, v6, &v23, 0);
  v7 = haystack;
  if ( *(_QWORD *)v26 )
    v7 = (const char *)ptr;
  dirtree_chdir(*a1, v7);
  v8 = *a1;
  v23 = a2;
  v9 = (char *)(dirtree_get_dir_size(v8, a2) - 1);
  if ( (__int64)v9 >= 0 )
  {
    while ( 1 )
    {
      v10 = *a1;
      v24 = v9;
      *(_DWORD *)&v21[5] = -1;
      v22 = 0;
      dirtree_resolve_cursor(&v21[5], v10, &v23);
      if ( *(_DWORD *)&v21[5] != -1 && v22 )
        result = sub_513390(
                   (int)a1,
                   *(int *)&v21[5],
                   1,
                   v11,
                   v12,
                   v13,
                   v17,
                   v18,
                   v20,
                   *(int *)&v21[2],
                   v23,
                   v24,
                   (__int64)ptr,
                   v26[0],
                   *(__int64 *)&v26[2]);
      else
        result = dirtree_link_inode(*a1, *(unsigned int *)&v21[5], 0);
      if ( (_BYTE)result )
        break;
      if ( v9-- == nullptr )
        goto LABEL_10;
    }
LABEL_11:
    v16 = ptr;
    if ( !ptr )
      return result;
    goto LABEL_12;
  }
LABEL_10:
  dirtree_chdir(*a1, "..");
  result = 0;
  if ( !a3 )
    goto LABEL_11;
  result = dirtree_rmdir();
  v16 = ptr;
  if ( !ptr )
    return result;
LABEL_12:
  v19 = result;
  *(_QWORD *)v26 = 0;
  qfree(v16);
  return v19;
}

