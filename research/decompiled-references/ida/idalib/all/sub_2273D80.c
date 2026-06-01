__int64 __fastcall sub_2273D80(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rbp
  __int64 *v22; // r14
  __int64 v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rdi
  double v26[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = sub_2273810((__int64)a2, a2, a3, a4, a5, a6);
  v9 = _mm_loadu_si128((const __m128i *)(v8 + 8));
  *(_DWORD *)a1 = *(_DWORD *)v8;
  *(__m128i *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  sub_226E090((_QWORD *)(a1 + 24), *(_BYTE **)(v8 + 24), *(_QWORD *)(v8 + 24) + *(_QWORD *)(v8 + 32));
  if ( (__m128 *)a2[11].m128_u64[0] == &a2[11] )
    goto LABEL_6;
  v10 = (__int64 *)a2[11].m128_u64[1];
  v11 = (_QWORD *)v10[1];
  v12 = *v10;
  v10 += 7;
  *v11 = v12;
  *(_QWORD *)(v12 + 8) = v11;
  v13 = (__int64 *)*(v10 - 2);
  *(_OWORD *)(v10 - 7) = 0;
  if ( v13 != v10 )
    operator delete(v13);
  if ( &a2[11] == (__m128 *)a2[11].m128_u64[0] )
  {
LABEL_6:
    v15 = (__int64 *)a2[9].m128_u64[0];
    v16 = &v15[2 * a2[9].m128_u32[2]];
    while ( v16 != v15 )
    {
      v17 = v15[1];
      v18 = *v15;
      v15 += 2;
      operator delete(v18, v17, 16);
    }
    a2[9].m128_i32[2] = 0;
    v19 = a2[6].m128_u32[2];
    if ( (_DWORD)v19 )
    {
      a2[10].m128_u64[0] = 0;
      v20 = (_QWORD *)a2[6].m128_u64[0];
      v21 = &v20[v19];
      v22 = v20 + 1;
      *(_QWORD *)&v26[0] = *v20 + 4096LL;
      a2[5] = _mm_loadh_ps(v26);
      if ( v21 != v20 + 1 )
      {
        while ( 1 )
        {
          v23 = 0x40000000000LL;
          v24 = (unsigned int)(v22 - v20) >> 7;
          if ( v24 <= 0x1D )
            v23 = 4096LL << v24;
          v25 = *v22++;
          operator delete(v25, v23, 16);
          if ( v21 == v22 )
            break;
          v20 = (_QWORD *)a2[6].m128_u64[0];
        }
      }
      a2[6].m128_i32[2] = 1;
    }
  }
  return a1;
}
