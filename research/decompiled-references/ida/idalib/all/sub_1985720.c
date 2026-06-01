__int64 __fastcall sub_1985720(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v6 == 1 )
    return 1;
  v8 = *(unsigned __int16 **)(a2 + 24);
  v9 = v6;
  v10 = sub_190CCA0(a1, v8, *(double *)a3.m128_u64, a4);
  if ( v10 == 1 )
    return 1;
  v11 = *(_QWORD *)(a2 + 16);
  v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v13 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( v12 != v11 || (result = a2, *(_QWORD *)(a2 + 24) != v13) )
  {
    v14 = sub_EEB7E0(v11, (__int64)v8, *(double *)a3.m128_u64);
    v15 = *(_DWORD *)(a2 + 4);
    v16[0] = v13;
    return sub_1930830((__int64 *)*a1, 0, v12, v14, v16, 1, a3, a4, v15);
  }
  return result;
}
