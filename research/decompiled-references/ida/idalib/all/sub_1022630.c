__int64 __fastcall sub_1022630(__int64 a1, int a2, int a3, _BYTE *a4)
{
  __int64 *v8; // r12
  unsigned int *v9; // rsi
  unsigned int *v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned int *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int *v18; // r8
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v31; // [rsp+20h] [rbp-38h]

  if ( !a2 )
  {
    result = 1;
    if ( a4 )
      *a4 = 1;
    return result;
  }
  if ( a2 == *(_DWORD *)(a1 + 496) )
  {
    v8 = *(__int64 **)(a1 + 504);
  }
  else
  {
    v30.m128i_i8[0] = 0;
    v21 = sub_101FA50(a1, a2, &v30);
    if ( v30.m128i_i8[0] || *(char *)(v21 + 3) < 0 )
    {
      if ( a4 )
        *a4 = 1;
      return 1;
    }
    v8 = (__int64 *)(*(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  }
  v9 = (unsigned int *)v8[5];
  if ( !v9 )
  {
    sub_101D9A0(&v30, v8, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0);
    v28 = v31;
    if ( a4 )
    {
      v24 = v31 ^ 1u;
      *a4 = v31 ^ 1;
    }
    if ( v28 )
    {
      v29 = sub_1022230((__int64 *)(a1 + 24), (__int64)v8, v24, v25, v26, v27, v30.m128i_u64[0], v30.m128i_u64[1]);
      v8[5] = v29;
      v9 = (unsigned int *)v29;
      goto LABEL_7;
    }
    return 1;
  }
  if ( a4 )
    *a4 = 0;
LABEL_7:
  v10 = v9 + 1;
  v11 = a3 + 1;
  v12 = *v9;
  v13 = 4 * v12 + 4;
  v14 = (unsigned __int64)v9 + v13;
  if ( a2 != *(_DWORD *)(a1 + 496) )
  {
LABEL_8:
    v15 = v9 + 1;
    v16 = (4 * v12) >> 2;
    goto LABEL_10;
  }
  v22 = *(unsigned int *)(a1 + 516);
  if ( v11 < *(_DWORD *)(a1 + 512) )
  {
    if ( (unsigned int)v12 > (unsigned int)v22 )
    {
      v15 = v9 + 1;
      v16 = (4 * v22 + 4) >> 2;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v23 = v22;
  v15 = &v9[v23];
  if ( v14 > (unsigned __int64)(v15 + 5) )
  {
    if ( v11 < v15[5] )
    {
      v16 = 5;
      goto LABEL_11;
    }
    if ( v14 > (unsigned __int64)(v15 + 10) )
    {
      if ( v11 < v15[10] )
      {
        v16 = 10;
LABEL_11:
        while ( 1 )
        {
          v17 = v16 >> 1;
          v18 = &v15[v16 >> 1];
          if ( v11 > *v18 )
            break;
          v16 >>= 1;
          if ( !v17 )
            goto LABEL_13;
        }
        v15 = v18 + 1;
        v16 = v16 - v17 - 1;
        goto LABEL_10;
      }
      if ( v14 > (unsigned __int64)(v15 + 20) && v11 < v15[20] )
      {
        v16 = 20;
        goto LABEL_11;
      }
    }
  }
  v16 = (v13 - v23 * 4) >> 2;
LABEL_10:
  if ( v16 > 0 )
    goto LABEL_11;
LABEL_13:
  *(_DWORD *)(a1 + 496) = a2;
  v19 = v15 - v10;
  *(_QWORD *)(a1 + 504) = v8;
  *(_DWORD *)(a1 + 512) = v11;
  *(_DWORD *)(a1 + 516) = v19;
  return (unsigned int)v19;
}
