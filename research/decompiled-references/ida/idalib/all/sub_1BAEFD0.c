__int64 __fastcall sub_1BAEFD0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-90h]
  char v24; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h]
  _BYTE v27[104]; // [rsp+30h] [rbp-68h] BYREF

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 32), a3, a6, a7, a4, a5);
  if ( v8 == 1 )
    return 1;
  v12 = v8;
  v13 = sub_1BAEDF0(a1, *(_QWORD *)(a2 + 40), v9, v10, v11, a6, a7);
  if ( v13 == 1 )
    return 1;
  v15 = *(unsigned int *)(a2 + 16);
  v24 = 0;
  ptr = v27;
  v26 = 0x800000000LL;
  if ( (unsigned __int8)sub_1BA5320(
                          a1,
                          (unsigned __int64 *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                          v15,
                          1,
                          (__int64)&ptr,
                          &v24,
                          a6,
                          a7) )
  {
    result = 1;
  }
  else
  {
    v19 = *a1;
    v20 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v21 = *(unsigned int *)(*a1 + 12632);
    if ( (_DWORD)v21 || *(_QWORD *)(a2 + 32) != v20 || v24 )
    {
      v22 = sub_EEC8C0(v20, v21, *(double *)a6.m128_u64);
      result = sub_19303F0(
                 v19,
                 0,
                 v20,
                 v22,
                 (unsigned __int64 *)ptr,
                 (unsigned int)v26,
                 a6,
                 a7,
                 *(_DWORD *)(a2 + 20),
                 v13 & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      result = (__int64)sub_19A3E40(v19, (unsigned __int16 *)a2, v16, v17, v18, a6, a7);
    }
  }
  if ( ptr != v27 )
  {
    v23 = result;
    free(ptr);
    return v23;
  }
  return result;
}
