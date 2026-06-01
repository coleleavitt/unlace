unsigned __int64 __fastcall sub_642030(__int64 a1, __int64 a2)
{
  char *file_ext; // rax
  char *v3; // rbx
  __int64 extlang; // rax
  char *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-440h] BYREF
  char s[2]; // [rsp+10h] [rbp-438h] BYREF
  char v9; // [rsp+12h] [rbp-436h] BYREF
  unsigned __int64 v10; // [rsp+418h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v7 = -1;
  netnode_check(&v7, "$ loader name", 0, 1);
  if ( get_loader_name(s) > 0 )
  {
    file_ext = (char *)get_file_ext(s);
    v3 = file_ext;
    if ( !file_ext )
      goto LABEL_8;
    extlang = find_extlang(file_ext);
    if ( extlang )
    {
      --*(_DWORD *)(extlang + 12);
LABEL_5:
      getsysfile(a1, a2, s, "loaders");
      return v10 - __readfsqword(0x28u);
    }
    v6 = v3 - 1;
    if ( s >= v3 )
LABEL_8:
      v6 = &s[strlen(s)];
    if ( v6 >= &v9 && *(v6 - 1) == 52 && *(v6 - 2) == 54 )
      *(v6 - 2) = 0;
    set_file_ext(s, 1024, s, "so");
    goto LABEL_5;
  }
  return v10 - __readfsqword(0x28u);
}
