unsigned __int64 __fastcall sub_1A09760(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  __m128i v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v18; // [rsp+8h] [rbp-70h] BYREF
  __m128i v19; // [rsp+10h] [rbp-68h] BYREF
  __m128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __m128i v22[4]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  if ( !*(_DWORD *)(a1 + 16) )
    return a2;
  v5 = *(__int64 **)(a1 + 8);
  v6 = *(_QWORD *)a1;
  v17 = a2;
  v19.m128i_i64[0] = 0;
  if ( (unsigned __int8)sub_19FE430(v6, a2, v5, v2, (unsigned __int64 *)&v17, (__int64)&v19) )
  {
    v7 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    v22[0] = _mm_load_si128(&v19);
    v21 = v7;
    if ( (unsigned __int8)sub_19F9D50((__int64 *)(a1 + 72), &v21, &v18) )
    {
      sub_19F9E10(&v20, v18, (_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * *(unsigned int *)(a1 + 88)), a1 + 72, 1);
      goto LABEL_4;
    }
    v9 = *(unsigned int *)(a1 + 88);
    v10 = v18;
    v11 = *(_DWORD *)(a1 + 80) + 1;
    v12 = (unsigned int)(4 * v11);
    v20.m128_u64[0] = (unsigned __int64)v18;
    if ( (unsigned int)v12 >= 3 * (int)v9 )
    {
      sub_1A09550((__int64 *)(a1 + 72), 2 * v9, v9, (unsigned int)(2 * v9), v12, v8);
    }
    else
    {
      v13 = (unsigned int)(v9 - *(_DWORD *)(a1 + 84) - v11);
      if ( (unsigned int)v13 > (unsigned int)v9 >> 3 )
      {
LABEL_9:
        v14 = *v10 == -4096;
        *(_DWORD *)(a1 + 80) = v11;
        if ( !v14 )
          --*(_DWORD *)(a1 + 84);
        v15 = _mm_loadu_si128(v22);
        *v10 = v21;
        *(__m128i *)(v10 + 1) = v15;
        v16 = *(unsigned int *)(a1 + 88);
        v18 = v10;
        sub_19F9E10(&v20, v10, (_QWORD *)(*(_QWORD *)(a1 + 72) + 24 * v16), a1 + 72, 1);
        goto LABEL_4;
      }
      sub_1A09550((__int64 *)(a1 + 72), v9, v9, v13, v12, v8);
    }
    sub_19F9D50((__int64 *)(a1 + 72), &v21, &v20);
    v10 = (_QWORD *)v20.m128_u64[0];
    v11 = *(_DWORD *)(a1 + 80) + 1;
    goto LABEL_9;
  }
LABEL_4:
  *(_DWORD *)(a1 + 16) = 0;
  return v17;
}
