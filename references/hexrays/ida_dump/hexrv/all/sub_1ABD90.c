const char *__fastcall sub_1ABD90(__int64 a1, double a2)
{
  __int64 v2; // rbp
  __int64 module_data; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  int v6; // edx
  __int64 *v7; // rbx
  const char *result; // rax
  _BYTE *v9; // rax

  v2 = sub_3346E0();
  module_data = get_module_data((unsigned int)dword_4C1BB8);
  v4 = *(_QWORD *)(module_data + 1024);
  v5 = *(int *)(v4 + 384);
  v6 = *(_DWORD *)(v4 + 384) + 1;
  v7 = (__int64 *)(v4 + 24 * v5 + 144);
  *(_DWORD *)(v4 + 384) = v6;
  if ( v6 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v4 + 24 * v5 + 152) = 0;
  sub_1C3AC0(v2, v4 + 24 * v5 + 144, a1, *(unsigned int *)(v2 + 80));
  if ( *(_QWORD *)(v4 + 24 * v5 + 152) <= 1u )
  {
    if ( *(_QWORD *)(v4 + 24 * v5 + 160) <= 1u )
      *(_QWORD *)(v4 + 24 * v5 + 144) = qvector_reserve(v4 + 24 * v5 + 144, *(_QWORD *)(v4 + 24 * v5 + 144), 2, 1);
    v9 = (_BYTE *)*v7;
    *(_QWORD *)(v4 + 24 * v5 + 152) = 2;
    *v9 = 63;
    *(_BYTE *)(*v7 + 1) = 0;
  }
  sub_F6610(v7, (__int64)" defea=%a", a2);
  result = s1;
  if ( *(_QWORD *)(v4 + 24 * v5 + 152) )
    return (const char *)*v7;
  return result;
}
