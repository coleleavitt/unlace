unsigned __int64 __fastcall sub_389460(__int64 a1)
{
  const char *v1; // rbx
  bool v2; // zf
  const char *file_ext; // rdi
  __int64 v5; // r14
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // r9d
  char v9; // [rsp+0h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1000h] [rbp-1048h] BYREF
  unsigned __int64 v11; // [rsp+2008h] [rbp-40h]

  v1 = haystack;
  v2 = *(_QWORD *)(a1 + 8) == 0;
  v11 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = *(const char **)a1;
  file_ext = (const char *)get_file_ext(v1);
  if ( file_ext && !strcasecmp(file_ext, "idb") )
  {
    if ( (unsigned __int8)qfileexist(v1, "idb") )
    {
      set_file_ext(s, 4096, v1, "i64");
      if ( !(unsigned __int8)qfileexist(s, 4096) )
      {
        set_file_ext(s, 4096, v1, "id0");
        if ( !(unsigned __int8)qfileexist(s, 4096) )
        {
          is_cvt64();
          sub_835590(1);
          v5 = sub_3FAEC0();
          if ( (unsigned int)sub_5983D0(v5, v1, 0) != 1 )
            sub_378C70((__int64)"%s: failed to convert to i64", v1);
          sub_387AC0();
        }
      }
      v6 = (unsigned int)sub_389310();
      v7 = qbasename(v1);
      qmakepath((unsigned int)&v9, 4096, v6, v7, 0, v8, v9);
      sub_368890();
    }
    sub_378C70((__int64)"%s: cannot find", v1);
  }
  return v11 - __readfsqword(0x28u);
}
