unsigned __int64 __fastcall sub_624DD0(__int64 a1, __int64 a2)
{
  char *file_ext; // rax
  __int64 extlang; // rax
  int v5; // [rsp+Ch] [rbp-42Ch] BYREF
  char s[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v7; // [rsp+418h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = -1;
  netnode_check(&v5, "$ loader name", 0, 1);
  if ( get_loader_name(s) > 0 )
  {
    file_ext = (char *)get_file_ext(s);
    if ( file_ext && (extlang = find_extlang(file_ext)) != 0 )
    {
      --*(_DWORD *)(extlang + 12);
    }
    else
    {
      qstrncat(s, "32", 1024);
      set_file_ext(s, 1024, s, "so");
    }
    getsysfile(a1, a2, s, "loaders");
  }
  return v7 - __readfsqword(0x28u);
}

