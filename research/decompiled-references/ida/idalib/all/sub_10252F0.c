__int64 __fastcall sub_10252F0(__int64 a1, int a2)
{
  const __m128i *v4; // rbp
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __m128i *v28; // rax
  __int64 v29; // rdx
  int v30; // esi
  unsigned __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // [rsp+0h] [rbp-78h]
  int v35; // [rsp+4h] [rbp-74h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  unsigned __int64 v37; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 *v38; // [rsp+18h] [rbp-60h] BYREF
  __m128 v39[5]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (const __m128i *)v39;
  v5 = sub_101FBC0(*(_QWORD *)a1, a2);
  v6 = *(_QWORD *)a1;
  v39[0].m128_i8[0] = 0;
  v34 = v5 + 1;
  v7 = sub_101FA50(v6, a2, v39);
  if ( v39[0].m128_i8[0] || !v7 )
  {
    v8 = 0;
  }
  else
  {
    v8 = *(_DWORD *)v7 & 0x7FFFFFFF;
    if ( *(char *)(v7 + 3) < 0 )
      v8 = sub_1021D50(v6, v8 | 0x80000000);
  }
  v35 = sub_101D5E0(*(unsigned int **)a1, v8);
  v9 = sub_101FFD0(*(_QWORD *)a1, v35);
  if ( v9 )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    while ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
      v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 4) == 0 )
        break;
    }
  }
  v11 = *(_QWORD *)(a1 + 8);
  v37 = v9;
  if ( (unsigned __int8)sub_101F060((__int64 *)v11, (__int64 *)&v37, &v38) )
  {
    sub_101F830(v39, v38, (_QWORD *)(*(_QWORD *)v11 + 16LL * *(unsigned int *)(v11 + 16)), v11, 1);
    v13 = *(_QWORD *)(v11 + 24) + 32LL * *(unsigned int *)(v39[0].m128_u64[0] + 8);
    if ( *(_DWORD *)(v13 + 8) )
      goto LABEL_13;
    goto LABEL_16;
  }
  v15 = *(unsigned int *)(v11 + 16);
  v16 = v38;
  v17 = *(_DWORD *)(v11 + 8) + 1;
  v18 = (unsigned int)(2 * v15);
  v19 = (unsigned int)(4 * v17);
  v39[0].m128_u64[0] = (unsigned __int64)v38;
  if ( (unsigned int)v19 >= 3 * (int)v15 )
  {
    v30 = 2 * v15;
  }
  else
  {
    v18 = (unsigned int)(v15 - *(_DWORD *)(v11 + 12) - v17);
    if ( (unsigned int)v18 > (unsigned int)v15 >> 3 )
      goto LABEL_19;
    v30 = v15;
  }
  sub_10250F0((__int64 *)v11, v30, v15, v18, v19, v12);
  sub_101F060((__int64 *)v11, (__int64 *)&v37, v39);
  v16 = (unsigned __int64 *)v39[0].m128_u64[0];
  v17 = *(_DWORD *)(v11 + 8) + 1;
LABEL_19:
  v20 = *v16 == -4096;
  *(_DWORD *)(v11 + 8) = v17;
  if ( !v20 )
    --*(_DWORD *)(v11 + 12);
  v21 = v37;
  *((_DWORD *)v16 + 2) = 0;
  v22 = *(unsigned int *)(v11 + 16);
  *v16 = v21;
  v38 = v16;
  sub_101F830(v39, v16, (_QWORD *)(*(_QWORD *)v11 + 16 * v22), v11, 1);
  v39[1] = 0;
  v23 = v39[0].m128_u64[0];
  v24 = *(unsigned int *)(v11 + 36);
  v39[0] = (__m128)v37;
  v25 = *(unsigned int *)(v11 + 32);
  v26 = v25 + 1;
  if ( v25 + 1 > v24 )
  {
    v31 = *(_QWORD *)(v11 + 24);
    v32 = v11 + 24;
    v33 = v11 + 40;
    if ( v31 > (unsigned __int64)v39 || (unsigned __int64)v39 >= v31 + 32 * v25 )
    {
      sub_2237220(v32, v33, v26, 32);
      v27 = *(_QWORD *)(v11 + 24);
      v25 = *(unsigned int *)(v11 + 32);
    }
    else
    {
      v36 = *(_QWORD *)(v11 + 24);
      sub_2237220(v32, v33, v26, 32);
      v27 = *(_QWORD *)(v11 + 24);
      v25 = *(unsigned int *)(v11 + 32);
      v4 = (const __m128i *)((char *)v39 + v27 - v36);
    }
  }
  else
  {
    v27 = *(_QWORD *)(v11 + 24);
  }
  v28 = (__m128i *)(v27 + 32 * v25);
  *v28 = _mm_loadu_si128(v4);
  v28[1] = _mm_loadu_si128(v4 + 1);
  v29 = *(unsigned int *)(v11 + 32);
  *(_DWORD *)(v11 + 32) = v29 + 1;
  *(_DWORD *)(v23 + 8) = v29;
  v13 = *(_QWORD *)(v11 + 24) + 32 * v29;
  if ( !*(_DWORD *)(v13 + 8) )
LABEL_16:
    *(_DWORD *)(v13 + 8) = v8;
LABEL_13:
  result = v34;
  if ( v35 == a2 )
  {
    ++*(_DWORD *)(v13 + 12);
    *(_QWORD *)(v13 + 16) += v34;
  }
  *(_QWORD *)(v13 + 24) += v34;
  **(_QWORD **)(a1 + 16) += v34;
  return result;
}
