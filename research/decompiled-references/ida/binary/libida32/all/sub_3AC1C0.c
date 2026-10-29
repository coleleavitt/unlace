__int64 __fastcall sub_3AC1C0(__int64 a1, char **a2, __int64 a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v6; // rbp
  _QWORD *std_dirtree; // r12
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  int v13; // [rsp+Bh] [rbp-5Dh] BYREF
  char v14; // [rsp+Fh] [rbp-59h]
  int v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(bpt_kernel_interface, a3);
  if ( !v6 )
    return 0;
  v14 = 0;
  std_dirtree = (_QWORD *)get_std_dirtree(5);
  v8 = *(_DWORD *)(v6 + 80);
  *(_QWORD *)&v18 = -1;
  v13 = v8;
  ptr = (void *)0xFFFFFFFFLL;
  dirtree_find_entry(&ptr, std_dirtree, &v13);
  v15 = (int)ptr;
  v16 = v18;
  if ( (_DWORD)ptr == -1 )
  {
    if ( (_QWORD)v18 )
      return 0;
  }
  v9 = *std_dirtree;
  ptr = (void *)0xFFFFFFFFLL;
  *(_QWORD *)&v18 = -1;
  dirtree_get_parent_cursor(&ptr, v9, &v15);
  v10 = (int)ptr;
  ptr = nullptr;
  v15 = v10;
  v11 = v18;
  v18 = 0;
  v16 = v11;
  dirtree_get_abspath_by_cursor(&ptr, *std_dirtree, &v15, 0);
  sub_3573A0(a2);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return 1;
}

