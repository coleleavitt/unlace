__int64 __fastcall sub_1DDF170(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 *v14; // r12
  __int64 v15; // r14
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-90h]
  char v26; // [rsp+1Fh] [rbp-79h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h]
  _BYTE v29[104]; // [rsp+30h] [rbp-68h] BYREF

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = v9;
  v15 = sub_1DDEF90(a1, *(_QWORD *)(a2 + 40), v10, v11, v12, v13, a7, a8);
  if ( v15 == 1 )
    return 1;
  v17 = *(unsigned int *)(a2 + 16);
  v26 = 0;
  ptr = v29;
  v28 = 0x800000000LL;
  if ( (unsigned __int8)sub_1DDBD00(
                          a1,
                          (unsigned __int64 *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                          v17,
                          1u,
                          (__int64)&ptr,
                          &v26,
                          a7,
                          a8) )
  {
    result = 1;
  }
  else
  {
    v21 = *a1;
    v22 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
    v23 = *(unsigned int *)(*a1 + 12632);
    if ( (_DWORD)v23 || *(_QWORD *)(a2 + 32) != v22 || v26 )
    {
      v24 = sub_EEC8C0(v22, v23, *(double *)a7.m128_u64);
      result = sub_19303F0(
                 v21,
                 0,
                 v22,
                 v24,
                 (unsigned __int64 *)ptr,
                 (unsigned int)v28,
                 a7,
                 a8,
                 *(_DWORD *)(a2 + 20),
                 v15 & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      result = (__int64)sub_19A3E40(v21, (unsigned __int16 *)a2, v18, v19, v20, a7, a8);
    }
  }
  if ( ptr != v29 )
  {
    v25 = result;
    free(ptr);
    return v25;
  }
  return result;
}
