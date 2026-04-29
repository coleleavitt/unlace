const char *__fastcall sub_1AE070(_QWORD *a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  int v3; // edx
  __int64 *v4; // rbx
  const char *result; // rax

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (__int64 *)(v2 + 24LL * *(int *)(v2 + 384) + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v4[1] = 0;
  sub_106520(a1, v4);
  result = s1;
  if ( v4[1] )
    return (const char *)*v4;
  return result;
}
