const char *__fastcall sub_1AEE80(__int64 a1, double a2, double a3)
{
  __int64 module_data; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 *v6; // rbx
  const char *result; // rax

  module_data = get_module_data((unsigned int)dword_4C2AB8);
  v4 = *(_QWORD *)(module_data + 1024);
  v5 = *(_DWORD *)(v4 + 384) + 1;
  v6 = (__int64 *)(v4 + 24LL * *(int *)(v4 + 384) + 144);
  *(_DWORD *)(v4 + 384) = v5;
  if ( v5 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v6[1] = 0;
  sub_1AECD0(a1, v6, a2, a3);
  result = s1;
  if ( v6[1] )
    return (const char *)*v6;
  return result;
}
