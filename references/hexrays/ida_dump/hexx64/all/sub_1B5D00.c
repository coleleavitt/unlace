const char *__fastcall sub_1B5D00(_QWORD *a1, double a2, double a3)
{
  __int64 module_data; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 *v6; // rbx
  const char *result; // rax
  __m128 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4EF998);
  v4 = *(_QWORD *)(module_data + 1024);
  v5 = *(_DWORD *)(v4 + 384) + 1;
  v6 = (__int64 *)(v4 + 24LL * *(int *)(v4 + 384) + 144);
  *(_DWORD *)(v4 + 384) = v5;
  if ( v5 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v6[1] = 0;
  v9 = 0;
  v8 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4EF998) + 1344));
  sub_1B3C00(a1, v6, (__int64)&v8, *(double *)v8.m128_u64, a3);
  result = s1;
  if ( v6[1] )
    return (const char *)*v6;
  return result;
}
