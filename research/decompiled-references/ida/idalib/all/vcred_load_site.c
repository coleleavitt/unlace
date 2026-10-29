__int64 __fastcall vcred_load_site(__int64 a1)
{
  void *v1; // rbp
  const char *v2; // rdx
  unsigned int v3; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  sub_7C9A80(a1, (__int64)&ptr);
  v1 = ptr;
  v2 = (const char *)ptr;
  if ( !(_QWORD)v6 )
    v2 = haystack;
  v3 = reg_str_get(a1 + 176, "DefaultSite", v2);
  if ( v1 )
    qfree(v1);
  return v3;
}
