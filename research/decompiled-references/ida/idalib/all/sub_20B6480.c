__int64 __fastcall sub_20B6480(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 *v7; // rax
  __int64 v8; // rbx
  __m128i *v9; // r13
  int v10; // ebx
  int v11; // r14d
  int i; // r15d
  __int64 v13; // r12
  int v14; // edx
  __int64 *v15; // r12
  __int64 result; // rax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __m128i *v24; // rdx
  unsigned __int8 v25; // al
  _QWORD *v26; // rdi
  __int64 v27; // r12
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // r8
  __int64 *v31; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+14h] [rbp-84h]
  __int64 v33; // [rsp+18h] [rbp-80h] BYREF
  __m128 v34; // [rsp+20h] [rbp-78h] BYREF
  __m128 v35; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v36; // [rsp+40h] [rbp-58h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  int v38; // [rsp+50h] [rbp-48h]
  int v39; // [rsp+54h] [rbp-44h] BYREF
  __int64 v40[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 - 16);
  v33 = a1;
  v35 = 0u;
  if ( (v3 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 - 32);
    v5 = *(unsigned int *)(a1 - 24);
  }
  else
  {
    v5 = (*(_WORD *)(a1 - 16) >> 6) & 0xF;
    v4 = a1 - 8LL * ((v3 >> 2) & 0xF) - 16;
  }
  v36 = (_QWORD *)(v4 + 8);
  v37 = (8 * v5 - 8) >> 3;
  v38 = *(_DWORD *)(a1 + 4);
  v39 = (unsigned __int16)sub_206D450(a1);
  v6 = *(_BYTE *)(a1 - 16);
  if ( (v6 & 2) != 0 )
    v7 = *(__int64 **)(a1 - 32);
  else
    v7 = (__int64 *)(a1 - 8LL * ((v6 >> 2) & 0xF) - 16);
  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(__m128i **)a2;
  v40[0] = *v7;
  if ( !(_DWORD)v8 )
  {
LABEL_16:
    sub_2081A40(&v34, &v9->m128i_i64[v8], &v9->m128i_i64[v8], a2, 1);
    v15 = (__int64 *)v34.m128_u64[0];
    goto LABEL_17;
  }
  v10 = v8 - 1;
  v11 = 1;
  for ( i = v10 & sub_20AA550(v38, &v39, v40); ; i = v10 & v14 )
  {
    v13 = v9->m128i_i64[i];
    v31 = &v9->m128i_i64[i];
    if ( v13 != -8192 && v13 != -4096 )
      break;
LABEL_11:
    if ( v13 == -4096 )
    {
      v9 = *(__m128i **)a2;
      v8 = *(unsigned int *)(a2 + 16);
      goto LABEL_16;
    }
    v14 = i + v11++;
  }
  v32 = v39;
  if ( v32 != (unsigned __int16)sub_206D450(v13) )
    goto LABEL_10;
  v25 = *(_BYTE *)(v13 - 16);
  v26 = (v25 & 2) != 0 ? *(_QWORD **)(v13 - 32) : (_QWORD *)(v13 + -16 - 8LL * ((v25 >> 2) & 0xF));
  if ( v40[0] != *v26 || v38 != *(_DWORD *)(v13 + 4) )
    goto LABEL_10;
  if ( (v25 & 2) != 0 )
  {
    if ( v37 == *(_DWORD *)(v13 - 24) - 1 )
    {
      v27 = *(_QWORD *)(v13 - 32);
      goto LABEL_34;
    }
LABEL_10:
    v13 = *v31;
    goto LABEL_11;
  }
  if ( v37 != ((*(_WORD *)(v13 - 16) >> 6) & 0xF) - 1 )
    goto LABEL_10;
  v27 = -16 - 8LL * ((v25 >> 2) & 0xF) + v13;
LABEL_34:
  v28 = v36;
  v29 = (_QWORD *)(v27 + 8);
  v30 = &v36[v37];
  if ( v30 == v36 )
    goto LABEL_39;
  if ( *(_QWORD *)(v27 + 8) != *v36 )
    goto LABEL_10;
  while ( 1 )
  {
    ++v28;
    ++v29;
    if ( v30 == v28 )
      break;
    if ( *v28 != *v29 )
      goto LABEL_10;
  }
LABEL_39:
  sub_2081A40(&v34, v31, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v15 = (__int64 *)v34.m128_u64[0];
LABEL_17:
  sub_2081A40(
    &v34,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v34.m128_u64[0] == v15 || (result = *v15) == 0 )
  {
    if ( (unsigned __int8)sub_207E1D0((__int64 *)a2, &v33, &v34) )
    {
      sub_2081A40(&v35, v34.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
    }
    else
    {
      v18 = (_QWORD *)v34.m128_u64[0];
      v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v20 = *(unsigned int *)(a2 + 16);
      v35.m128_u64[0] = v34.m128_u64[0];
      v21 = (unsigned int)(4 * v19);
      if ( (unsigned int)v21 >= 3 * (int)v20 )
      {
        sub_2083D70((__m128i **)a2, 2 * v20, v19, (unsigned int)(2 * v20), v21, v17);
      }
      else
      {
        v22 = (unsigned int)(v20 - *(_DWORD *)(a2 + 12) - v19);
        if ( (unsigned int)v22 > (unsigned int)v20 >> 3 )
          goto LABEL_22;
        sub_2083D70((__m128i **)a2, v20, v19, v22, v21, v17);
      }
      sub_207E1D0((__int64 *)a2, &v33, &v35);
      v20 = *(unsigned int *)(a2 + 16);
      v18 = (_QWORD *)v35.m128_u64[0];
      LODWORD(v19) = *(_DWORD *)(a2 + 8) + 1;
LABEL_22:
      v23 = *v18 == -4096;
      *(_DWORD *)(a2 + 8) = v19;
      if ( !v23 )
        --*(_DWORD *)(a2 + 12);
      *v18 = v33;
      v24 = *(__m128i **)a2;
      v34.m128_u64[0] = (unsigned __int64)v18;
      sub_2081A40(&v35, v18, &v24->m128i_i64[v20], a2, 1);
    }
    return v33;
  }
  return result;
}
