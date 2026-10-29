__int64 __fastcall sub_1BFA490(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r14
  unsigned int v9; // r13d
  __int64 result; // rax
  __int64 v12; // rax
  char v13; // r15
  __int64 *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // [rsp+8h] [rbp-F0h]
  __int64 *v17; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v18; // [rsp+10h] [rbp-E8h]
  __int64 *v19; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v20[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr; // [rsp+40h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-A8h] BYREF

  v8 = a5;
  v9 = a4;
  v19 = a2;
  if ( (unsigned __int8)sub_1BC8220(a1, (__int64 *)&v19, (__m128i)a7, a8, a3, a4, a5, a6) )
    return 1;
  v12 = *(_QWORD *)(a1 + 232);
  v13 = 0;
  if ( (*(_BYTE *)(v12 + 107) & 4) != 0 )
    v13 = (v9 & 0xFFFFFFFB) == 1;
  v14 = v19;
  if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
  {
    v18 = v19[1];
    v17 = *(__int64 **)(a1 + 736);
    v15 = sub_EEB7E0((unsigned __int64)v19, (__int64)&v19, *(double *)a7.m128_u64);
    sub_19E21D0(v17, v15, a3, v18, (unsigned __int64 *)&v19, 1u, a7, a8);
    v14 = v19;
  }
  sub_1BEC140(v20, a1, (unsigned __int64)v14, a3, 0, 2 * (v8 != 0), a7, a8, 0, 0, v13, 0);
  result = sub_19AFC70(a1, v19, a3, (__int64)v20, v9, 0, a7, a8);
  if ( (v20[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v22 )
  {
    v16 = result;
    free(ptr);
    return v16;
  }
  return result;
}
