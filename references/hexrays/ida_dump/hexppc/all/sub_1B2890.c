const char *__fastcall sub_1B2890(__int64 a1, double a2, double a3, double a4)
{
  __int64 module_data; // rax
  __int64 v5; // rcx
  int v6; // edx
  __int64 *v7; // rbp
  const char *result; // rax

  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v5 = *(_QWORD *)(module_data + 1024);
  v6 = *(_DWORD *)(v5 + 384) + 1;
  v7 = (__int64 *)(v5 + 24LL * *(int *)(v5 + 384) + 144);
  *(_DWORD *)(v5 + 384) = v6;
  if ( v6 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v7[1] = 0;
  sub_67E30(
    v7,
    (__int64)"gp_off=%d, fp_off=%d, gp_base=%a, fp_base=%a, stack=%a",
    *(_DWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 28),
    a2,
    a3,
    a4);
  result = s1;
  if ( v7[1] )
    return (const char *)*v7;
  return result;
}
