const char *__fastcall sub_1B20A0(__int64 a1, double a2)
{
  __int64 module_data; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  const char *v7; // rdx

  module_data = get_module_data((unsigned int)dword_4C1BB8);
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(_DWORD *)(v3 + 384) + 1;
  v5 = (__int64 *)(v3 + 24LL * *(int *)(v3 + 384) + 144);
  *(_DWORD *)(v3 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v5[1] = 0;
  sub_1B1D60(a1, v5, a2);
  v6 = v5[1];
  if ( v6 > 1 )
  {
    tag_remove(v5, *v5, 0);
    v6 = v5[1];
  }
  v7 = s1;
  if ( v6 )
    return (const char *)*v5;
  return v7;
}
