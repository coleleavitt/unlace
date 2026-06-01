unsigned __int64 __fastcall sub_1917F70(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // r12d
  unsigned __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 *v19; // r15
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v33[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a4;
  if ( !(_BYTE)a5 )
  {
    v12 = sub_19179A0(a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
    *a2 = v12;
    if ( v12 == 1 )
      return 0;
  }
  v13 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v14 = sub_19179A0(a1, v13, 1u, a4, a5, a6, a7, a8);
  *a3 = v14;
  if ( v14 == 1 )
    return 0;
  v17 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(_QWORD *)(v17 + 8) & 7LL;
  if ( v18 | (*(__int64 *)(v17 + 8) >> 3) & 1 )
  {
    v19 = (__int64 *)(sub_F64F00(
                        *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8),
                        (__int64)v13,
                        v18,
                        v18 | (*(__int64 *)(v17 + 8) >> 3) & 1,
                        v15)
                    & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *a3;
  }
  else
  {
    v19 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v20 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_QWORD *)(v21 + 8) & 7LL;
  v23 = v22 | (*(__int64 *)(v21 + 8) >> 3) & 1;
  if ( v23 )
    v21 = sub_F64F00(v20, (__int64)v13, v22, v23, v15);
  v24 = *v19;
  v25 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*v19 + 16) - 31 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31 > 1 )
      v24 = 0;
    else
      v24 = sub_F63050(*v19, v13, v24, v23);
  }
  v26 = *v25;
  if ( (unsigned int)*(unsigned __int8 *)(*v25 + 16) - 31 > 1 )
  {
    v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31;
    if ( (unsigned int)v30 > 1 )
    {
      v26 = 0;
    }
    else
    {
      v31 = v24;
      v26 = sub_F63050(*v25, v13, v24, v30);
      v24 = v31;
    }
  }
  if ( v19[1] == v25[1] )
    return sub_ABBE20(*(_QWORD **)(a1 + 248), (__int64)v19, (__int64)v25, 0);
  v27 = *a3;
  v32 = *a2;
  v33[0] = v27;
  if ( v24 && !v26 )
  {
    v29 = sub_18C1BF0(a1, v27 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v24 + 32), *(double *)a7.m128_u64);
    *a3 = v29;
    if ( v29 != 1 )
      return (unsigned __int64)v19;
  }
  else
  {
    if ( v24 || !v26 )
      return sub_18F40B0(a1, v9, a2, a3, *(double *)a7.m128_u64);
    v28 = sub_18C1BF0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v26 + 32), *(double *)a7.m128_u64);
    *a2 = v28;
    if ( v28 != 1 )
      return (unsigned __int64)v25;
  }
  return sub_18F40B0(a1, v9, &v32, v33, *(double *)a7.m128_u64);
}
