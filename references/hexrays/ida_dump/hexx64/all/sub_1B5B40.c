const char *__fastcall sub_1B5B40(int *a1)
{
  __int64 module_data; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  int v4; // edx
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  const char *v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __m128 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4EF998);
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(int *)(v2 + 384);
  v4 = *(_DWORD *)(v2 + 384) + 1;
  v5 = (__int64 *)(v2 + 24 * v3 + 144);
  *(_DWORD *)(v2 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v3 + 152) = 0;
  if ( a1 )
  {
    v12 = 0;
    v11 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4EF998) + 1344));
    sub_1B43D0(a1, v5, (__int64)&v11, 6u, *(double *)v11.m128_u64);
  }
  else
  {
    if ( *(_QWORD *)(v2 + 24 * v3 + 160) <= 6u )
      *(_QWORD *)(v2 + 24 * v3 + 144) = qvector_reserve(v2 + 24 * v3 + 144, *(_QWORD *)(v2 + 24 * v3 + 144), 7, 1);
    v9 = *v5;
    v5[1] = 7;
    *(_BYTE *)(v9 + 6) = 0;
    v10 = *v5;
    *(_DWORD *)v10 = 1819635240;
    *(_WORD *)(v10 + 4) = 10604;
  }
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
