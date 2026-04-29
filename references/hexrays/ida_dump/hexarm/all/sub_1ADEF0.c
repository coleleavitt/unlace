const char *__fastcall sub_1ADEF0(__int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  int v3; // edx
  _QWORD *v4; // rbx
  const char *result; // rax

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (_QWORD *)(v2 + 24LL * *(int *)(v2 + 384) + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v4[1] = 0;
  sub_647F0(a1, (__int64)v4);
  result = s1;
  if ( v4[1] )
    return (const char *)*v4;
  return result;
}
