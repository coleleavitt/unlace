unsigned __int64 __fastcall sub_3A6330(const __m128i *a1)
{
  __int64 v2; // r13
  __int64 i; // r12
  __int64 v4; // rbp
  double v5; // xmm0_8
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __m128i v13; // xmm0
  int *v14; // r12
  int v15; // r8d
  int v16; // r13d
  int *v17; // rdi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __m128i *v30; // rax
  int *v31; // rax
  int v32; // r9d
  int *v33; // rdx
  int v34; // r10d
  __int64 v35; // rax
  __int64 v37; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+8h] [rbp-C0h]
  __int64 v39; // [rsp+18h] [rbp-B0h]
  __int64 v40; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-88h] BYREF
  __int128 v43; // [rsp+48h] [rbp-80h]
  _BYTE v44[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v37 = 0;
  v38 = 0;
  v2 = sub_2B6570(a1[13].m128i_i64[1], a1->m128i_i64[0], 0);
  for ( i = netnode_supfirst(v2, 110); ; i = netnode_supnext(v2, i, 110) )
  {
    v8 = v38;
    v9 = v37;
    v10 = v38;
    v11 = v37;
    if ( i == -1 )
      break;
    v12 = v38 + 1;
    if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
    {
      v37 = qvector_reserve(&v37, v37, v12, 16);
      v11 = v37;
      v10 = v38;
      v12 = v38 + 1;
    }
    v4 = 16 * v10 + v11;
    *(_QWORD *)&v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(i), 224).m128i_u64[0];
    *(_QWORD *)&v38 = v12;
    *(double *)v4 = v5;
    v6 = a1->m128i_i64[0];
    v7 = netnode_altval(v2, i, 110);
    *(_QWORD *)(v4 + 8) = v6 + v7;
    sub_3A61B0((__int64)a1, (int *)(v4 + 4), v6 + v7, v5);
  }
  v13.m128i_i64[0] = 0;
  v14 = (int *)v37;
  v15 = 0;
  v41 = 0;
  v16 = 0;
  v17 = (int *)(v37 + 16 * v38);
  v43 = 0;
  v40 = 0;
  v42 = 0;
  if ( v17 != (int *)v37 )
  {
    do
    {
      if ( *((_QWORD *)v14 + 1) == -1 )
      {
        v31 = v14;
        while ( v31 != (int *)v9 )
        {
          v31 -= 4;
          if ( *((_QWORD *)v31 + 1) != -1 )
            goto LABEL_31;
        }
        v32 = 0x7FFFFFFF;
        if ( *((_QWORD *)v31 + 1) == -1 )
          goto LABEL_24;
LABEL_31:
        v32 = *v14 - *v31;
LABEL_24:
        v33 = v31;
        do
        {
          v33 += 4;
          if ( v17 == v33 )
          {
            if ( v32 == 0x7FFFFFFF )
              goto LABEL_18;
            goto LABEL_28;
          }
        }
        while ( *((_QWORD *)v33 + 1) == -1 );
        v34 = *v33;
        if ( *v33 - *v14 <= v32 )
          goto LABEL_30;
LABEL_28:
        if ( v17 == v31 )
          goto LABEL_18;
        v34 = *v31;
        v33 = v31;
LABEL_30:
        v18 = v14[1] + v33[1] - v34;
        v14[1] = v18;
      }
      else
      {
        v18 = v14[1];
      }
      v19 = *v14;
      if ( (_DWORD)v19 != v18 )
      {
        if ( v15 != 3 )
        {
          qsnprintf(v44, 32, "$%a", *(double *)v13.m128i_i64);
          v19 = *v14;
          v16 = callui(1104, v44, &callui, v20, v21, v22, v37, v38, *((_QWORD *)&v38 + 1), v39);
        }
        v23 = v41;
        v24 = v40;
        if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
        {
          v40 = qvector_reserve(&v40, v40, v41 + 1, 32);
          v24 = v40;
          v23 = v41;
        }
        v25 = 32 * v23 + v24;
        *(_QWORD *)(v25 + 8) = 0;
        *(_QWORD *)v25 = -1;
        *(_QWORD *)(v25 + 16) = v19;
        *(_QWORD *)&v41 = v41 + 1;
        *(_DWORD *)(v25 + 24) = v16;
        *(_QWORD *)v25 = v19;
        *(_DWORD *)(v25 + 8) = v16;
        *(_DWORD *)(v25 + 12) = 3;
        v26 = v43;
        *(_DWORD *)(v25 + 28) = 3;
        v27 = v26 + 1;
        *(_QWORD *)(v25 + 16) = v14[1];
        v28 = v42;
        if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v26 + 1) )
        {
          v35 = qvector_reserve(&v42, v42, v27, 24);
          v26 = v43;
          v42 = v35;
          v28 = v35;
          v27 = v43 + 1;
        }
        v29 = _mm_loadl_epi64(a1);
        *(_QWORD *)&v43 = v27;
        v15 = 3;
        v30 = (__m128i *)(v28 + 24 * v26);
        v13 = _mm_unpacklo_epi64(v29, v29);
        *v30 = v13;
        v30[1].m128i_i64[0] = *((_QWORD *)v14 + 1);
      }
      v8 = v38;
      v9 = v37;
LABEL_18:
      v14 += 4;
      v17 = (int *)(v9 + 16 * v8);
    }
    while ( v14 != v17 );
  }
  sub_3A5960(a1[13].m128i_i64[1], &v40, &v42, *(double *)v13.m128i_i64);
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v45 - __readfsqword(0x28u);
}
