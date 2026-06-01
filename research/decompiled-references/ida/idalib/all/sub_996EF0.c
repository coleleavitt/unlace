__int64 __fastcall sub_996EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __m128i v3; // xmm0
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // r15
  __m128i v10; // rax
  __int64 v12; // [rsp+8h] [rbp-120h]
  __m128i v13; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+80h] [rbp-A8h]
  __m128i v15; // [rsp+90h] [rbp-98h]
  __int64 v16; // [rsp+A0h] [rbp-88h]
  __m128i v17; // [rsp+B0h] [rbp-78h]
  __int64 v18; // [rsp+C0h] [rbp-68h]
  __m128i v19; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-48h]

  v2 = 0;
  v3 = _mm_loadu_si128((const __m128i *)a2);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v3.m128i_i64[0];
  v19 = v3;
  v7 = v3.m128i_i64[1];
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 24)).m128i_i64[1];
  v13 = v3;
  v14 = v5;
  v20 = v5;
  while ( v4 != v6 || v12 != v7 )
  {
    if ( (v7 & 3) != 0 )
    {
      if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_EF2960(&v19);
      else
        sub_EF2750(&v19, 1);
      v7 = v19.m128i_i64[1];
      v6 = v19.m128i_i64[0];
    }
    else
    {
      v6 += 8;
      v19.m128i_i64[0] = v6;
    }
    ++v2;
  }
  v8 = *(unsigned int *)(a1 + 8);
  if ( v2 + v8 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v2 + v8, 8);
    v8 = *(unsigned int *)(a1 + 8);
  }
  v9 = (_QWORD *)(*(_QWORD *)a1 + 8 * v8);
  v19 = _mm_load_si128(&v13);
  v10 = v19;
  v15 = v19;
  v16 = v14;
  v18 = v14;
  v20 = v14;
  v17 = v19;
  while ( *(_OWORD *)&v10 != __PAIR128__(v7, v6) )
  {
    if ( (v10.m128i_i8[8] & 3) == 0 )
    {
      *v9 = *(_QWORD *)v10.m128i_i64[0];
LABEL_15:
      v10.m128i_i64[0] = v19.m128i_i64[0] + 8;
      v19.m128i_i64[0] += 8;
      goto LABEL_16;
    }
    v10.m128i_i64[0] = sub_EF2B30(&v19);
    v10.m128i_i64[1] = v19.m128i_i64[1];
    *v9 = *(_QWORD *)v10.m128i_i64[0];
    if ( (v10.m128i_i8[8] & 3) == 0 )
      goto LABEL_15;
    if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      sub_EF2960(&v19);
    else
      sub_EF2750(&v19, 1);
    v10 = v19;
LABEL_16:
    ++v9;
  }
  *(_DWORD *)(a1 + 8) += v2;
  return v10.m128i_i64[0];
}
