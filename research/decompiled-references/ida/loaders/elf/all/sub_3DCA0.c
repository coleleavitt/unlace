__int64 __fastcall sub_3DCA0(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v7; // rdx
  const __m128i *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdx
  const char *v19; // r14
  int v20; // r15d
  __m128i v21; // xmm0
  const char *v22; // rsi
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  const char *v24; // [rsp+10h] [rbp-78h] BYREF
  __int128 v25; // [rsp+18h] [rbp-70h]
  __m128i v26; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+40h] [rbp-48h]
  char v28; // [rsp+44h] [rbp-44h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 80) == 0;
  v29 = __readfsqword(0x28u);
  if ( v2 )
  {
    v7 = *(unsigned int *)(a1 + 72);
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 76) )
      goto LABEL_13;
    v8 = (const __m128i *)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64));
    if ( v8 )
    {
      if ( v8 != *(const __m128i **)(a1 + 48) )
        sub_31300((const __m128i **)(a1 + 40), v8);
      *(_DWORD *)(a1 + 72) = 0;
      v9 = sub_3D6D0((_QWORD *)a1, (unsigned __int64)v8);
      *(_DWORD *)(a1 + 76) = v9;
      if ( v9 )
      {
        *(_QWORD *)(a1 + 64) += v9;
        v7 = *(unsigned int *)(a1 + 72);
        if ( (unsigned int)v7 < v9 )
        {
LABEL_13:
          *a2 = *(_QWORD *)(a1 + 40) + 24 * v7;
          ++*(_DWORD *)(a1 + 72);
          return 1;
        }
      }
    }
    return 0;
  }
  v4 = *(unsigned int *)(a1 + 72);
  v5 = *(_DWORD *)(a1 + 76);
  if ( (unsigned int)v4 < v5 )
  {
LABEL_3:
    *(_DWORD *)(a1 + 72) = v4 + 1;
    *a2 = *(_QWORD *)(a1 + 40) + 24 * v4;
    return 1;
  }
  if ( v5 )
    return 0;
  v10 = *(_QWORD *)(a1 + 24);
  v24 = nullptr;
  v25 = 0;
  if ( v10 )
  {
    v24 = (const char *)qvector_reserve(&v24, 0, v10, 1);
    memset((void *)&v24[v25], 0, v10 - v25);
    *(_QWORD *)&v25 = v10;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = qlseek(*(_QWORD *)(v11 + 472), 0, 1);
  v13 = *(_QWORD *)(v11 + 480);
  v14 = v12 - v13;
  if ( qlseek(*(_QWORD *)(v11 + 472), *(_QWORD *)(a1 + 16) + v13, 0) != -1 )
  {
    v15 = qlread(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), v24, *(_QWORD *)(a1 + 24));
    v16 = *(_QWORD *)(a1 + 24);
    v17 = v15;
    if ( v15 >= v16 )
    {
      v18 = v25;
      if ( (unsigned __int64)v25 <= 3 )
        goto LABEL_19;
      goto LABEL_25;
    }
    sub_EAA0((__int64)"READ ERROR: read only %zd bytes instead of %lld bytes\n", v15, v16);
    if ( v17 <= 8 )
      goto LABEL_19;
    v18 = v25;
    if ( (unsigned __int64)v25 < v17 )
    {
      v22 = v24;
      if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)v17 )
      {
        v24 = (const char *)qvector_reserve(&v24, v24, v17, 1);
        v18 = v25;
        v22 = v24;
      }
      memset((void *)&v22[v18], 0, v17 - v18);
    }
    else if ( v17 == (_QWORD)v25 )
    {
LABEL_25:
      v19 = &v24[v18];
      v23.m128i_i64[0] = (__int64)v24;
      v20 = *(_DWORD *)v24;
      v23.m128i_i64[0] = (__int64)(v24 + 4);
      if ( (unsigned __int8)unpack_xleb128(&v23.m128i_u64[1], 64, 1, &v23, &v24[v18])
        && v23.m128i_i64[1] > 0
        && v23.m128i_i64[1] < *(_QWORD *)(a1 + 24) )
      {
        if ( v20 == 844320833 )
        {
          v21 = _mm_loadl_epi64(&v23);
          v27 = 0;
          v28 = 1;
          v26 = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)v19);
          sub_3D940((__int64)&v26, (const __m128i **)(a1 + 40), (const __m128i *)v23.m128i_i64[1]);
          *(_DWORD *)(a1 + 76) = v23.m128i_i32[2];
          qlseek(*(_QWORD *)(v11 + 472), v14 + *(_QWORD *)(v11 + 480), 0);
          if ( v24 )
          {
            *(_QWORD *)&v25 = 0;
            qfree(v24);
          }
          v4 = *(unsigned int *)(a1 + 72);
          goto LABEL_3;
        }
        sub_15250((__int64)"The relocation packing method '%4.4s' is not supported yet.", v24);
      }
      goto LABEL_19;
    }
    *(_QWORD *)&v25 = v17;
    v18 = v17;
    goto LABEL_25;
  }
LABEL_19:
  qlseek(*(_QWORD *)(v11 + 472), v14 + *(_QWORD *)(v11 + 480), 0);
  if ( !v24 )
    return 0;
  *(_QWORD *)&v25 = 0;
  qfree(v24);
  return 0;
}

