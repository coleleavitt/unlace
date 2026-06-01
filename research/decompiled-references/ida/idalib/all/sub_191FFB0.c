unsigned __int64 __fastcall sub_191FFB0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r10d
  __int64 *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rdx
  unsigned int v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h] BYREF
  __int64 v41[8]; // [rsp+18h] [rbp-40h] BYREF

  sub_18D4200((__int64)a1, a2, a3, a4, 0, *(double *)a6.m128_u64);
  v15 = 0;
  if ( a5 <= 0x1F )
  {
    v12 = a5;
    v15 = ((1LL << a5) & 0xE0070000) != 0;
  }
  v16 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v18 <= 1
    || (v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3
                                                                                                & 0xFFFFFFFFFFFFFFFELL)
                                                                                               + 8)
                                                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                                                       + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 57,
        (unsigned int)v18 <= 1) )
  {
    if ( sub_F61A60(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v18, v12, v13, v14)
      && sub_F61A60(
           *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a2,
           v19,
           v20,
           v21,
           v22) )
    {
      return sub_1918B10(a1, a2, a3, a4, a5 - 29 <= 2, 1, a6, a7, (*(_BYTE *)(a1[29] + 13) & 4) != 0, v15, 1);
    }
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  if ( sub_F58380(v17)
    || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))
    || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))
    || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( sub_F61A60(
           *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a2,
           v24,
           v25,
           v26,
           v27)
      && sub_F61A60(
           *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a2,
           v28,
           v29,
           v30,
           v31) )
    {
      return sub_1918440((__int64)a1, a2, a3, a4, a5 - 29 <= 2, 1, a6, a7);
    }
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  v32 = a5 - 29;
  if ( a5 == 16 )
  {
    sub_18DB2B0((__int64)a1, a2, a3, a4, 16, (__m128i)a6, *(double *)a7.m128_u64);
    v32 = -13;
  }
  v39 = v32;
  if ( sub_F580C0(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))
    || sub_F580C0(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  v33 = &v40;
  v40 = *a2;
  v41[0] = *a3;
  v37 = sub_191F280((__int64)a1, &v40, v41, a4, v39 < 3 ? 4 : 1, a6, a7);
  if ( v40 != 1 && v41[0] != 1 )
  {
    v38 = v41[0] & 0xFFFFFFFFFFFFFFFELL;
    *a2 = v40 & 0xFFFFFFFFFFFFFFFELL;
    *a3 = v38;
    if ( a5 == 17 )
    {
      v33 = a2;
      sub_18DB970((__int64)a1, a2, a3, a4, v35, (__m128i)a6, *(double *)a7.m128_u64);
    }
    if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0
      && sub_F61920(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v33, v38, v34, v35, v36) )
    {
      return v37;
    }
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  return 0;
}
