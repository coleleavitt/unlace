__int64 __fastcall get_loader_name(char *s, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rdi
  const char *loader_name_from_dll; // rax
  size_t v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = -1;
  netnode_check(&v9, "$ loader name", 0, 1);
  v11 = 0;
  ptr = nullptr;
  v3 = netnode_qsupstr(v9, &ptr, 0, 83);
  v4 = ptr;
  if ( v3 <= 0 )
  {
    v7 = -1;
  }
  else
  {
    loader_name_from_dll = get_loader_name_from_dll((__int64)ptr);
    qstrncpy(s, loader_name_from_dll, a2);
    v6 = strlen(s);
    v4 = ptr;
    v7 = v6;
  }
  if ( v4 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v4);
  }
  return v7;
}
