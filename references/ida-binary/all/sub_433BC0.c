__int64 __fastcall ida_ui_proxy_t__::vfunc_0(__int64 a1)
{
  const char *path; // rax
  const char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  void *v6; // rax

  path = (const char *)get_path(1);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( path )
  {
    v2 = path;
    v3 = strlen(path);
    v4 = v3 + 1;
    v5 = v3;
    v6 = (void *)qvector_reserve(a1, 0, v3 + 1, 1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v4;
    memmove(v6, v2, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  }
  return a1;
}
