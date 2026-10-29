__int64 __fastcall sub_20FE3B0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r13
  __int64 v4; // r12
  unsigned int v5; // eax
  int v6; // eax
  __int64 *v7; // r12
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v10; // [rsp+18h] [rbp-50h] BYREF
  void *v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  sub_2246450(&v11, v9);
  v3 = v11;
  v4 = v12;
  v5 = sub_2244B30(v11, v12);
  v6 = sub_2244E60(a1 + 408, v3, v4, v5);
  if ( v6 == -1 )
    sub_2092420(&v10, (__int64 *)(*(_QWORD *)(a1 + 408) + 8LL * *(unsigned int *)(a1 + 416)), 1);
  else
    sub_2092420(&v10, (__int64 *)(*(_QWORD *)(a1 + 408) + 8LL * v6), 1);
  v7 = v10;
  if ( v11 != &v13 )
    operator delete(v11);
  sub_2092420((__int64 **)&v11, (__int64 *)(*(_QWORD *)(a1 + 408) + 8LL * *(unsigned int *)(a1 + 416)), 1);
  result = 0;
  if ( v11 != v7 )
    return *(unsigned int *)(*v7 + 8) | 0x100000000LL;
  return result;
}
