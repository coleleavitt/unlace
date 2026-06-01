__int64 __fastcall sub_1B86BA0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int16 **v16; // rsi
  unsigned __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-90h]
  char v20; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h]
  _BYTE v23[104]; // [rsp+30h] [rbp-68h] BYREF

  v8 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v12 = v8;
  v13 = sub_1B86A00(a1, *(_QWORD *)(a2 + 40), v9, v10, v11, a6, a7);
  if ( v13 == 1 )
    return 1;
  v15 = *(unsigned int *)(a2 + 16);
  v20 = 0;
  ptr = v23;
  v22 = 0x800000000LL;
  v16 = (unsigned __int16 **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_1B7D2C0(a1, v16, v15, 1u, (__int64)&ptr, &v20, a6, a7) )
  {
    result = 1;
  }
  else
  {
    v17 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v18 = sub_EEC8C0(v17, (__int64)v16, *(double *)a6.m128_u64);
    result = sub_19303F0(
               *a1,
               0,
               v17,
               v18,
               (unsigned __int64 *)ptr,
               (unsigned int)v22,
               a6,
               a7,
               *(_DWORD *)(a2 + 20),
               v13 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( ptr != v23 )
  {
    v19 = result;
    free(ptr);
    return v19;
  }
  return result;
}
