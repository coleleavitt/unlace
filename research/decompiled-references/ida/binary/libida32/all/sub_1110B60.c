_QWORD *__fastcall sub_1110B60(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rax
  __m128 v5; // xmm0
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v12; // [rsp+8h] [rbp-70h] BYREF
  __m128 v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 ***v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 **v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  *a1 = a1 + 2;
  v12 = (_QWORD *)a2;
  a1[1] = 0x1000000000LL;
  v3 = *(__int64 **)(a2 + 16);
  v12 = a1;
  v14 = (__int64 ***)v3;
  v4 = *(_QWORD *)(a2 + 24);
  v16 = (__int64 **)&v14;
  v5 = _mm_loadh_ps((const double *)&v12);
  v15 = v4;
  v13 = v5;
  v17 = 1;
  sub_11108D0(a2, &v13.m128_i64[1], (__int64 **)&v16);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 336LL))(a2);
  v7 = *(unsigned int *)(a2 + 48);
  v16 = (__int64 **)v6;
  v17 = v8;
  v9 = sub_2291AE0(v7);
  v14 = &v16;
  v19 = v10;
  v18 = v9;
  v15 = 2;
  sub_11108D0(v13.m128_i64[0], &v13.m128_i64[1], (__int64 **)&v14);
  return a1;
}

