__int64 __fastcall sub_FFFC90(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  __int64 v4; // r9
  __int64 v5; // rdx
  int *v6; // rsi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // esi
  unsigned int v15[3]; // [rsp+Ch] [rbp-4Ch] BYREF
  int *v16; // [rsp+18h] [rbp-40h] BYREF
  __m128 v17[3]; // [rsp+20h] [rbp-38h] BYREF

  result = 0;
  v15[0] = a2;
  if ( !a2 )
    return result;
  v3 = (__int64 *)(a1 + 536);
  if ( (unsigned __int8)sub_FFA780((__int64 *)(a1 + 536), v15, &v16) )
  {
    sub_FFB2C0(v17, v16, (int *)(*(_QWORD *)(a1 + 536) + 12LL * *(unsigned int *)(a1 + 552)), (__int64)v3, 1);
    return *(_QWORD *)(v17[0].m128_u64[0] + 4);
  }
  v5 = *(unsigned int *)(a1 + 552);
  v6 = v16;
  v7 = *(_DWORD *)(a1 + 544) + 1;
  v8 = (unsigned int)(4 * v7);
  v17[0].m128_u64[0] = (unsigned __int64)v16;
  if ( (unsigned int)v8 >= 3 * (int)v5 )
  {
    sub_FFFAB0((__int64)v3, 2 * v5, v5, (unsigned int)(2 * v5), v8, v4);
LABEL_16:
    sub_FFA780(v3, v15, v17);
    v6 = (int *)v17[0].m128_u64[0];
    v7 = *(_DWORD *)(a1 + 544) + 1;
    goto LABEL_5;
  }
  v9 = (unsigned int)(v5 - *(_DWORD *)(a1 + 548) - v7);
  if ( (unsigned int)v9 <= (unsigned int)v5 >> 3 )
  {
    sub_FFFAB0((__int64)v3, v5, v5, v9, v8, v4);
    goto LABEL_16;
  }
LABEL_5:
  *(_DWORD *)(a1 + 544) = v7;
  if ( *v6 )
    --*(_DWORD *)(a1 + 548);
  v10 = v15[0];
  *(_QWORD *)(v6 + 1) = 0;
  *v6 = v10;
  v11 = *(unsigned int *)(a1 + 552);
  v16 = v6;
  sub_FFB2C0(v17, v6, (int *)(*(_QWORD *)(a1 + 536) + 12 * v11), (__int64)v3, 1);
  v12 = v17[0].m128_u64[0];
  v17[0].m128_i8[0] = 0;
  v13 = sub_FFBD10(a1, v15[0], v17);
  if ( !v17[0].m128_i8[0] )
  {
    if ( *(char *)(v13 + 3) < 0 )
      v14 = *(_DWORD *)(v13 + 12);
    else
      v14 = *(_DWORD *)(v13 + 8);
    if ( v14 )
      *(_QWORD *)(v12 + 4) = sub_A5CA10(a1, v14);
  }
  return *(_QWORD *)(v12 + 4);
}

