_QWORD *__fastcall sub_21C7AF0(_QWORD *a1, __int64 a2, const void *a3, size_t a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 *v11; // rcx
  size_t *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r15
  const __m128i *v15; // rsi
  __int8 *v16; // rsi
  unsigned int v17; // [rsp+0h] [rbp-F8h]
  __int64 v18; // [rsp+0h] [rbp-F8h]
  __int64 *v19; // [rsp+8h] [rbp-F0h]
  __int64 v20; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v21; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-C8h]

  if ( a4 )
  {
    v8 = sub_2244B30(a3, a4);
    v9 = (unsigned int)sub_2244CB0(a2 + 24, a3, a4, v8);
    v11 = (__int64 *)(*(_QWORD *)(a2 + 24) + 8 * v9);
    if ( *v11 )
    {
      if ( *v11 != -8 )
      {
        sub_A45C10((__int64 **)&v21, v11, 0);
LABEL_7:
        *a1 = 0;
        return a1;
      }
      --*(_DWORD *)(a2 + 40);
    }
    v19 = v11;
    v17 = v9;
    v12 = (size_t *)sub_22300B0(a4 + 9, 8, v9, v11, v9, v10);
    memcpy(v12 + 1, a3, a4);
    *((_BYTE *)v12 + a4 + 8) = 0;
    *v12 = a4;
    *v19 = (__int64)v12;
    ++*(_DWORD *)(a2 + 36);
    v13 = sub_22450D0(a2 + 24, v17);
    sub_A45C10((__int64 **)&v21, (__int64 *)(*(_QWORD *)(a2 + 24) + 8LL * v13), 0);
    v14 = *(_QWORD *)v21.m128i_i64[0] + 8LL;
    v18 = **(_QWORD **)v21.m128i_i64[0];
    sub_2231D80(&v21);
    sub_2231FA0(&v21, a3, a4);
    sub_22321A0(&v21, &v20);
    v21.m128i_i64[1] = v14;
    v15 = *(const __m128i **)(a2 + 80);
    v21.m128i_i64[0] = v20;
    v22 = v18;
    if ( v15 == *(const __m128i **)(a2 + 88) )
    {
      sub_21C7810(a2 + 72, v15, &v21);
    }
    else
    {
      v16 = &v15[1].m128i_i8[8];
      *(__m128i *)(v16 - 24) = _mm_load_si128(&v21);
      *((_QWORD *)v16 - 1) = v22;
      *(_QWORD *)(a2 + 80) = v16;
    }
    *(_BYTE *)(a2 + 384) = 0;
    goto LABEL_7;
  }
  sub_21C5A30(&v21, "symbol name is empty");
  *a1 = v21.m128i_i64[0];
  return a1;
}
