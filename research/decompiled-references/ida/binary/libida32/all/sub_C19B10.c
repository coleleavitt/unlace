__int64 __fastcall sub_C19B10(__int64 a1, _BYTE *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v13; // [rsp+8h] [rbp-90h] BYREF
  __m128 v14; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v15; // [rsp+20h] [rbp-78h] BYREF
  char v16; // [rsp+24h] [rbp-74h]

  v13 = a3;
  v14 = _mm_loadh_ps((const double *)&v13);
  v8 = sub_22271F0("EvaluateAsBooleanCondition", 26, sub_BEBB10, &v14, a5, a6);
  v14.m128_u64[1] = 0;
  v14.m128_i16[0] = 0;
  v15 = 0;
  v16 &= ~1u;
  v11 = sub_C19630(a1, (__int64)&v14, a3, a4, v9, v10);
  if ( (_BYTE)v11 )
    v11 = sub_BEC1F0((__int64)&v15, a2);
  if ( v15 > 1 )
    sub_A2BBA0((int *)&v15);
  if ( v8 )
    sub_2229990(v8);
  return v11;
}

