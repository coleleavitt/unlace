_QWORD *__fastcall sub_9B9B20(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  signed __int64 v19; // r15
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *result; // rax
  int v29; // esi
  int v30; // r9d
  __int64 v31; // rdi
  __int64 *v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // r12
  __int64 *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38[5]; // [rsp+8h] [rbp-50h] BYREF

  if ( a3 && *(_BYTE *)a3 == 5 && !*(_QWORD *)(a3 + 40) )
    *(_QWORD *)(a3 + 40) = a2;
  v6 = *((unsigned int *)a1 + 16);
  v7 = a1[6];
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = &v7[2 * v8];
    v10 = *v9;
    if ( a2 == *v9 )
    {
LABEL_7:
      sub_9B9AB0((__m128 *)&v38[0].m128i_u64[1], v9, &v7[2 * v6], (__int64)(a1 + 6), 1);
      v11 = v38[0].m128i_i64[1];
      goto LABEL_8;
    }
    v29 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v30 = v29 + 1;
        v8 = (v6 - 1) & (v29 + v8);
        v9 = &v7[2 * v8];
        v31 = *v9;
        if ( a2 == *v9 )
          goto LABEL_7;
        v29 = v30;
      }
      while ( v31 != -4096 );
    }
  }
  sub_9B9AB0((__m128 *)&v38[0].m128i_u64[1], &v7[2 * (unsigned int)v6], &v7[2 * (unsigned int)v6], (__int64)(a1 + 6), 1);
  v11 = v38[0].m128i_i64[1];
LABEL_8:
  v12 = &a1[6][2 * *((unsigned int *)a1 + 16)];
  sub_9B9AB0((__m128 *)&v38[0].m128i_u64[1], v12, v12, (__int64)(a1 + 6), 1);
  if ( v38[0].m128i_i64[1] == v11 )
  {
    v32 = *a1;
    v33 = **a1;
    v32[10] += 24;
    v34 = (_QWORD *)((v33 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v32[1] >= (unsigned __int64)(v34 + 3) && v33 )
      *v32 = (__int64)(v34 + 3);
    else
      v34 = (_QWORD *)sub_962430((__int64)v32, 24, 24, 4, v13, v14);
    *v34 = 4;
    v35 = *a1;
    v34[1] = 0;
    v34[2] = a2;
    v36 = *v35;
    v35[10] += 32;
    result = (_QWORD *)((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v35[1] >= (unsigned __int64)(result + 4) && v36 )
      *v35 = (__int64)(result + 4);
    else
      result = (_QWORD *)sub_962430((__int64)v35, 32, 32, 4, v13, v14);
    *result = 16;
    result[1] = 0;
    result[2] = v34;
    result[3] = a3;
  }
  else
  {
    v15 = (__int64)a1[15];
    if ( v15 )
    {
      if ( *(_DWORD *)v15 == 1 )
      {
        v15 = *(_QWORD *)(v15 + 8);
      }
      else
      {
        --*(_DWORD *)v15;
        v16 = operator new(0x20u);
        v17 = (__int64)a1[15];
        v18 = v16;
        *(_DWORD *)v16 = 1;
        v19 = *(_QWORD *)(v17 + 16) - *(_QWORD *)(v17 + 8);
        *(_OWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        if ( v19 >> 4 )
        {
          if ( (unsigned __int64)(v19 >> 4) > 0xFFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
          v38[0].m128i_i64[0] = v17;
          v20 = operator new(v19);
          v17 = v38[0].m128i_i64[0];
          v15 = v20;
        }
        else
        {
          v15 = 0;
        }
        v38[0].m128i_i64[0] = v15;
        v21 = _mm_loadl_epi64(v38);
        *(_QWORD *)(v18 + 24) = v15 + v19;
        *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v21, v21);
        v22 = *(_QWORD *)(v17 + 16);
        v23 = *(_QWORD *)(v17 + 8);
        if ( v22 == v23 )
        {
          v27 = v15;
        }
        else
        {
          v24 = 0;
          v25 = 0;
          v26 = ((unsigned __int64)(v22 - 16 - v23) >> 4) + 1;
          do
          {
            ++v25;
            *(__m128i *)(v15 + v24) = _mm_loadu_si128((const __m128i *)(v23 + v24));
            v24 += 16;
          }
          while ( v25 < v26 );
          v27 = v15 + 16 * v26;
        }
        *(_QWORD *)(v18 + 16) = v27;
        a1[15] = (__int64 *)v18;
      }
    }
    else
    {
      v37 = operator new(0x20u);
      *(_OWORD *)v37 = 0;
      *(_DWORD *)v37 = 1;
      *(_OWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 24) = 0;
      a1[15] = (__int64 *)v37;
    }
    *(_QWORD *)(v15 + 16LL * *(unsigned int *)(v11 + 8) + 8) = a3;
    return (_QWORD *)a3;
  }
  return result;
}

