__int64 __fastcall sub_1A939B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = sub_168B9E0((_QWORD *)a1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(a1 + 16));
  v10[0] = v7;
  v8 = sub_1587BC0(v6, v10, v2, v3, v4, v5);
  return sub_AE9DF0((unsigned __int8 **)(*v8 + 32LL * *(unsigned int *)(a1 + 128) + 8), a2, 1u);
}
