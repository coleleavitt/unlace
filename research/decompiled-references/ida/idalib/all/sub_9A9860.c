__m128 *__fastcall sub_9A9860(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  _QWORD **v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __m128 *result; // rax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  double v28[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = (_QWORD **)a4;
  if ( a3 )
  {
LABEL_2:
    v8 = *(_QWORD *)(a2 + 16);
    v9 = (v8 >> 2) & 1;
    goto LABEL_3;
  }
  v16 = sub_F63270(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
  v17 = *(_QWORD *)(v16 + 104);
  v18 = v16;
  v19 = *(_QWORD *)(v17 + 96);
  if ( (v19 & 1) != 0 )
  {
    v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    a4 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v19 & 2) == 0 )
      goto LABEL_23;
    a5 = a4[2295];
    v24 = v17 & 0xFFFFFFFFFFFFFFFBLL;
    if ( a5 )
    {
      v25 = a4[294];
      a4[304] += 24LL;
      v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a4[295] >= v26 + 24 && v25 )
      {
        a4[294] = v26 + 24;
        v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        *(_QWORD *)&v28[0] = a5;
        v27 = sub_986170((__int64)(a4 + 294), 24, 24, 3, a5, a6);
        a5 = *(_QWORD *)&v28[0];
        v26 = v27 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v27 = a5;
      v24 = v26 | 4;
      *(_DWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 16) = v17;
    }
    v20 = v24 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v20 | 1;
    *(_QWORD *)(v17 + 96) = v20 | 1;
  }
  if ( v20 )
  {
    if ( (v20 & 4) != 0 )
    {
      v21 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v21 )
      {
        v22 = *(_QWORD *)v21;
        v23 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
        if ( v21[2] != v23 )
        {
          v21[2] = v23;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v17);
        }
      }
    }
  }
LABEL_23:
  v8 = *(_QWORD *)(a2 + 16);
  a3 = *(_QWORD *)(v18 + 128);
  v9 = (v8 >> 2) & 1;
  if ( (*(_BYTE *)(a3 + 5) & 0x10) == 0 )
  {
    if ( !v9 )
      return nullptr;
    if ( !(unsigned int)sub_B99CC0(v8 & 0xFFFFFFFFFFFFFFF8LL) )
      return nullptr;
    goto LABEL_2;
  }
LABEL_3:
  if ( v9 )
    sub_B99CC0(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v7 )
  {
    v10 = sub_9A9530(a1, *v7, a3, (__int64)a4, a5, a6);
    v11 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 )
    {
      v12 = *v11;
      v11[10] += 48;
      result = (__m128 *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v11[1] >= (unsigned __int64)&result[3] && v12 )
        *v11 = (__int64)&result[3];
      else
        result = (__m128 *)sub_986170((__int64)v11, 48, 48, 3, a5, a6);
      *(_QWORD *)&v28[0] = a2;
      result->m128_i32[2] = 6;
      result[1] = _mm_loadh_ps(v28);
      *(_QWORD *)&v28[0] = v10;
      result->m128_u64[0] = (unsigned __int64)off_2B40410;
      result[2] = _mm_loadh_ps(v28);
      return result;
    }
  }
  else
  {
    v11 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
  }
  v14 = *v11;
  v11[10] += 32;
  result = (__m128 *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v11[1] >= (unsigned __int64)&result[2] && v14 )
    *v11 = (__int64)&result[2];
  else
    result = (__m128 *)sub_986170((__int64)v11, 32, 32, 3, a5, a6);
  result->m128_i32[2] = 5;
  *(_QWORD *)&v28[0] = a2;
  v15 = _mm_loadh_ps(v28);
  result->m128_u64[0] = (unsigned __int64)off_2B403E8;
  result[1] = v15;
  return result;
}
