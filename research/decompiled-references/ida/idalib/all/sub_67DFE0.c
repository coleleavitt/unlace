__int64 __fastcall sub_67DFE0(int a1, const char *a2)
{
  int v3; // r15d
  unsigned int import_module_name; // ebx
  char *v5; // rdi
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  s1 = nullptr;
  v8 = 0;
  if ( a1 <= 0 )
  {
    return 0;
  }
  else
  {
    v3 = 0;
    while ( 1 )
    {
      import_module_name = get_import_module_name(&s1);
      if ( (_BYTE)import_module_name )
      {
        v5 = (char *)haystack;
        if ( (_QWORD)v8 )
          v5 = s1;
        if ( !strcasecmp(v5, a2) )
          break;
      }
      if ( a1 == ++v3 )
      {
        import_module_name = 0;
        break;
      }
    }
    if ( s1 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(s1);
    }
  }
  return import_module_name;
}
