bool __fastcall sub_2F5560(__int64 a1)
{
  const char *v1; // rsi
  const char *loader_name_from_dll; // rbx
  _QWORD v4[131]; // [rsp+0h] [rbp-418h] BYREF

  v4[129] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 80) == 11 )
    return 1;
  v1 = &s1;
  if ( *(_QWORD *)(a1 + 16) )
    v1 = *(const char **)(a1 + 8);
  qstrncpy(v4, v1, 1024);
  loader_name_from_dll = (const char *)get_loader_name_from_dll(v4);
  return !strcmp(loader_name_from_dll, "xbe") || strcmp(loader_name_from_dll, "epoc") == 0;
}
