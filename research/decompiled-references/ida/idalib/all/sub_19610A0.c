__int64 __fastcall sub_19610A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 result; // rax
  int v9; // edx
  unsigned __int16 **v10; // rsi
  unsigned __int64 v11; // r12
  unsigned int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-90h]
  char v14; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
  if ( v5 == 1 )
    return 1;
  v6 = v5;
  v7 = sub_1960A00(a1, *(_QWORD *)(a2 + 40), a3, a4);
  if ( v7 == 1 )
    return 1;
  v9 = *(_DWORD *)(a2 + 16);
  v14 = 0;
  ptr = v17;
  v16 = 0x800000000LL;
  v10 = (unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_195E940(a1, v10, v9, 1, (__int64)&ptr, &v14, a3, a4) )
  {
    result = 1;
  }
  else
  {
    v11 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v12 = sub_EEC8C0(v11, (__int64)v10, *(double *)a3.m128_u64);
    result = sub_19303F0(
               *a1,
               0,
               v11,
               v12,
               (unsigned __int64 *)ptr,
               (unsigned int)v16,
               a3,
               a4,
               *(_DWORD *)(a2 + 20),
               v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( ptr != v17 )
  {
    v13 = result;
    free(ptr);
    return v13;
  }
  return result;
}
