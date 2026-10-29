__int64 __fastcall sub_1931870(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v11; // rdx
  __m128 *v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
  __m128 v16; // [rsp+0h] [rbp-48h] BYREF
  char v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]
  __int64 v19; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 16);
  sub_18C79E0(v6, 4, 4);
  v9 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v9 == 2 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( v11 )
    {
      v12 = *(__m128 **)(a1 + 16);
      v13 = *(unsigned int *)(a1 + 24);
      v14 = *(_BYTE *)(v11 + 28) & 0x7F;
      if ( (unsigned int)(v14 - 40) > 6 )
      {
        if ( (unsigned int)(v14 - 34) > 5 )
          *(_BYTE *)(v11 + 29) |= 8u;
        else
          sub_1910D40((__int64)v12, v13, v11, 1, v7, v8, a3, a4);
      }
      else
      {
        sub_1906C40(v12, v13, v11, 0, (__int64)&v12[280].m128_i64[1]);
      }
    }
  }
  else if ( v9 == 8 )
  {
    v15 = *(_QWORD *)(a2 + 8);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    a3 = _mm_loadh_ps((const double *)(a1 + 16));
    v16 = a3;
    sub_1911FF0((__int64)&v16, v15, a3, a4);
  }
  sub_190D5E0(v6, a3);
  return sub_BC8610(a1, a2);
}
