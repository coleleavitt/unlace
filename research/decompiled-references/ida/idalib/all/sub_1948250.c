unsigned __int64 __fastcall sub_1948250(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 *v6; // r15
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __m128 v15; // xmm0
  __int64 v16; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  __m128 v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-40h]

  v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = a1;
  v10 = sub_F6C520(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *v6;
  v14 = v10 * ((a4 - (unsigned __int64)(a4 != 0)) / v10 + (a4 != 0));
  v22.m128_u64[0] = v14;
  v15 = _mm_loadh_ps((const double *)v22.m128_u64);
  if ( (v13 & 7) == 0 )
  {
    v16 = v13;
    if ( (v13 & 8) == 0 )
    {
      v18 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v19 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) == 50 )
      {
        if ( v13 )
        {
          sub_1EA6140(a2, v13, 4, 4);
          *v21 = *(_DWORD *)v14;
          if ( !v18 )
            return 0;
          goto LABEL_4;
        }
      }
      else if ( *(_BYTE *)(v19 + 16) == 45 && v13 )
      {
        sub_1EA6140(a2, v13, 4, 4);
        *v20 = *(_DWORD *)v14;
        if ( !v18 )
          return 0;
        goto LABEL_4;
      }
    }
  }
  v22 = v15;
  v16 = sub_1946010(v23, a2, v15.m128_i64[0], v15.m128_i64[1], v11, v12, v15, a6);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
LABEL_4:
  result = sub_18D0A20(v23, v16, a3, a4, v15);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  return result;
}
