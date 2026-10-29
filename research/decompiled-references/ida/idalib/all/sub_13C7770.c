__int64 __fastcall sub_13C7770(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rcx
  unsigned __int8 v8; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 result; // rax
  unsigned int v19; // edx
  __int64 *v20; // r15
  int v21; // r11d
  unsigned __int64 v22; // r14
  int v23; // edx
  __int64 v24; // r9
  bool v25; // zf
  __int64 *v26; // [rsp+8h] [rbp-70h]
  __m128 v27; // [rsp+10h] [rbp-68h] BYREF
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29; // [rsp+28h] [rbp-50h] BYREF

  v7 = (__int64 **)(a1 + 1296);
  v8 = a3;
  v11 = a2[1];
  v12 = *(unsigned int *)(a1 + 1312);
  v29.m128i_i64[0] = 0;
  v28 = v11;
  v29.m128i_i32[2] = 2;
  if ( !(_DWORD)v12 )
  {
    v27.m128_u64[0] = 0;
LABEL_20:
    v26 = (__int64 *)v7;
    sub_13C6EC0(v7, 2 * v12, a3, (__int64)v7, a5, a6);
LABEL_21:
    sub_13C2A70(v26, &v28, &v27);
    v11 = v28;
    a5 = *(_QWORD *)(a1 + 1296);
    v12 = *(unsigned int *)(a1 + 1312);
    LODWORD(a3) = *(_DWORD *)(a1 + 1304) + 1;
    v14 = v27.m128_u64[0];
    v7 = (__int64 **)v26;
    goto LABEL_16;
  }
  a5 = *(_QWORD *)(a1 + 1296);
  v13 = (v12 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v14 = a5 + 24LL * v13;
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)v14 == v11 )
    goto LABEL_3;
  v21 = 1;
  v22 = 0;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v22 )
        v22 = v14;
      v13 = (v12 - 1) & (v21 + v13);
      v14 = a5 + 24LL * v13;
      v15 = *(_QWORD *)v14;
      if ( v11 == *(_QWORD *)v14 )
        break;
      if ( v15 == -4096 )
      {
        if ( v22 )
          v14 = v22;
        goto LABEL_14;
      }
      ++v21;
    }
LABEL_3:
    sub_13C5370(&v27, (_QWORD *)v14, (_QWORD *)(a5 + 24 * v12), (__int64)v7, 1);
    v17 = v27.m128_u64[0];
    result = 0;
    v19 = *(_DWORD *)(v27.m128_u64[0] + 16);
    if ( v19 <= 1 )
      return result;
    result = 3;
    if ( v19 == 2 )
      return result;
    goto LABEL_5;
  }
LABEL_14:
  v23 = *(_DWORD *)(a1 + 1304);
  a6 = (unsigned int)(3 * v12);
  v27.m128_u64[0] = v14;
  a3 = (unsigned int)(v23 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a6 )
    goto LABEL_20;
  v24 = (unsigned int)(v12 - *(_DWORD *)(a1 + 1308) - a3);
  if ( (unsigned int)v24 <= (unsigned int)v12 >> 3 )
  {
    v26 = (__int64 *)v7;
    sub_13C6EC0(v7, v12, a3, (__int64)v7, a5, v24);
    goto LABEL_21;
  }
LABEL_16:
  v25 = *(_QWORD *)v14 == -4096;
  *(_DWORD *)(a1 + 1304) = a3;
  if ( !v25 )
    --*(_DWORD *)(a1 + 1308);
  *(_QWORD *)v14 = v11;
  *(__m128i *)(v14 + 8) = _mm_loadu_si128(&v29);
  sub_13C5370(&v27, (_QWORD *)v14, (_QWORD *)(a5 + 24 * v12), (__int64)v7, 1);
  v17 = v27.m128_u64[0];
LABEL_5:
  v20 = (__int64 *)(v17 + 8);
  if ( !*(_QWORD *)(v17 + 8) )
  {
    *v20 = sub_13C3EC0((__int64 *)a1, a2, a4);
    if ( !*(_QWORD *)(v17 + 8) )
      return 3;
  }
  result = sub_13C7420(a1, (_QWORD *)*v20, v8, (__int64)a2, 0, v16);
  if ( (_DWORD)result == 1 )
  {
    *(_DWORD *)(v17 + 16) = 0;
  }
  else if ( (_DWORD)result == 3 )
  {
    *(_DWORD *)(v17 + 16) = 2;
  }
  return result;
}
