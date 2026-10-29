__int64 __fastcall sub_195E5E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  unsigned __int16 *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  unsigned __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v5 == 1 )
    return 1;
  v7 = *(unsigned __int16 **)(a2 + 24);
  v8 = v5;
  v9 = sub_1944E10(a1, v7, a3, a4);
  if ( v9 == 1 )
    return 1;
  v10 = *(_DWORD *)(a2 + 4);
  v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v12 = sub_EEB7E0(*(_QWORD *)(a2 + 16), (__int64)v7, *(double *)a3.m128_u64);
  v13[0] = v11;
  return sub_1930830((__int64 *)*a1, 0, v8 & 0xFFFFFFFFFFFFFFFELL, v12, v13, 1, a3, a4, v10);
}
