void __fastcall sub_13FAF50(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __m128i *v3; // rbx
  char *v4; // r13
  char *v5; // r12
  __m128i *v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 *v10; // rdi
  const __m128i *v11; // rdx
  unsigned __int64 v12; // rcx
  bool v13; // cf
  unsigned __int64 v14; // r15
  const __m128i *v15; // rax
  unsigned __int64 v16; // r15
  __m128i *v17; // rdx
  __int64 v18; // r15
  __m128i *v19; // rdi
  const __m128i *v20; // rsi
  __int64 *v21; // r15
  __int64 *v22; // r8
  __int64 v23; // rdx
  _BYTE *v24; // rsi
  __int64 *v25; // rdi
  void **v26; // r15
  unsigned __int64 v27; // r13
  __m128i *v28; // r12
  void **v29; // r15
  const __m128i *v30; // rax
  __m128i *v31; // rdx
  const __m128i *v32; // rsi
  __int64 v33; // rcx
  void **v34; // r13
  unsigned __int64 v35; // r15
  __m128i *v36; // rax
  __int64 *v37; // [rsp+8h] [rbp-A0h] BYREF
  __m128i *v38; // [rsp+10h] [rbp-98h]
  __m128i *v39; // [rsp+18h] [rbp-90h]
  _BYTE v40[136]; // [rsp+20h] [rbp-88h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(__m128i **)(v2 + 40);
  if ( v3 )
  {
    sub_FC70B0((__int64)v40, *(_QWORD *)(a1 + 8), *((_DWORD *)a2 + 6), 1057);
    sub_AEA040((__int64)v40);
    return;
  }
  if ( (*((_BYTE *)a2 + 28) & 1) != 0 )
  {
    *(_BYTE *)(v2 + 905) |= 0x10u;
    v2 = *(_QWORD *)(a1 + 48);
  }
  v4 = (char *)a2[1];
  v5 = (char *)*a2;
  v6 = *(__m128i **)(v2 + 1712);
  if ( v4 != (char *)*a2 )
  {
    v7 = (v4 - v5) >> 4;
    if ( v7 <= (__int64)(*(_QWORD *)(v2 + 1720) - (_QWORD)v6) >> 5 )
    {
      do
      {
        v8 = *((_QWORD *)v5 + 1);
        v9 = *(_BYTE **)v5;
        v10 = (__int64 *)v6;
        v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
        v5 += 16;
        v6 += 2;
        sub_13F28B0(v10, v9, (__int64)&v9[v8]);
      }
      while ( v4 != v5 );
      *(_QWORD *)(v2 + 1712) += 32 * v7;
      return;
    }
    v11 = *(const __m128i **)(v2 + 1704);
    v12 = ((char *)v6 - (char *)v11) >> 5;
    if ( v7 > 0x7FFFFFFFFFFFFFFLL - v12 )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v7 < v12 )
      v7 = ((char *)v6 - (char *)v11) >> 5;
    v13 = __CFADD__(v12, v7);
    v14 = v12 + v7;
    if ( v13 || v14 > 0x7FFFFFFFFFFFFFFLL )
    {
      v35 = 0xFFFFFFFFFFFFFFELL;
    }
    else
    {
      v39 = nullptr;
      if ( !v14 )
      {
LABEL_16:
        if ( v6 == v11 )
        {
          v38 = v3;
          v21 = (__int64 *)v3;
        }
        else
        {
          v15 = v11 + 1;
          v16 = (char *)&v6[-2] - (char *)v11;
          v17 = v3;
          v18 = (v16 >> 5) + 1;
          v19 = &v3[2 * v18];
          do
          {
            while ( 1 )
            {
              v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
              v20 = (const __m128i *)v15[-1].m128i_i64[0];
              if ( v20 == v15 )
                break;
              v17->m128i_i64[0] = (__int64)v20;
              v17 += 2;
              v17[-1].m128i_i64[0] = v15->m128i_i64[0];
              v17[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
              v15[-1].m128i_i64[0] = (__int64)v15;
              v15 += 2;
              v15[-3].m128i_i64[1] = 0;
              v15[-2].m128i_i8[0] = 0;
              if ( v19 == v17 )
                goto LABEL_20;
            }
            v17 += 2;
            v17[-1] = _mm_loadu_si128(v15);
            v17[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
            v15[-1].m128i_i64[0] = (__int64)v15;
            v15 += 2;
            v15[-3].m128i_i64[1] = 0;
            v15[-2].m128i_i8[0] = 0;
          }
          while ( v17 != v19 );
LABEL_20:
          v38 = &v3[2 * v18];
          v21 = (__int64 *)v38;
        }
        v22 = (__int64 *)v5;
        do
        {
          v23 = v22[1];
          v24 = (_BYTE *)*v22;
          v37 = v22;
          *v21 = (__int64)(v21 + 2);
          v25 = v21;
          v21 += 4;
          sub_13F28B0(v25, v24, (__int64)&v24[v23]);
          v22 = v37 + 2;
        }
        while ( v4 != (char *)(v37 + 2) );
        v26 = *(void ***)(v2 + 1712);
        v27 = v4 - 16 - v5;
        v28 = &v38[2 * (v27 >> 4) + 2];
        if ( v6 != (__m128i *)v26 )
        {
          v29 = v26 - 4;
          v30 = v6 + 1;
          v31 = &v38[2 * (v27 >> 4) + 2];
          do
          {
            v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
            v32 = (const __m128i *)v30[-1].m128i_i64[0];
            if ( v32 == v30 )
            {
              v31[1] = _mm_loadu_si128(v30);
            }
            else
            {
              v31->m128i_i64[0] = (__int64)v32;
              v31[1].m128i_i64[0] = v30->m128i_i64[0];
            }
            v31 += 2;
            v31[-2].m128i_i64[1] = v30[-1].m128i_i64[1];
            v30[-1].m128i_i64[0] = (__int64)v30;
            v30 += 2;
            v30[-3].m128i_i64[1] = 0;
            v30[-2].m128i_i8[0] = 0;
          }
          while ( &v28[2 * ((unsigned __int64)((char *)v29 - (char *)v6) >> 5) + 2] != v31 );
          v33 = 32 * (((unsigned __int64)((char *)v29 - (char *)v6) >> 5) + 1);
          v26 = *(void ***)(v2 + 1712);
          v28 = (__m128i *)((char *)v28 + v33);
        }
        v34 = *(void ***)(v2 + 1704);
        if ( v34 != v26 )
        {
          do
          {
            while ( *v34 != v34 + 2 )
            {
              operator delete(*v34);
              v34 += 4;
              if ( v34 == v26 )
                goto LABEL_35;
            }
            v34 += 4;
          }
          while ( v34 != v26 );
LABEL_35:
          v26 = *(void ***)(v2 + 1704);
        }
        if ( v26 )
          operator delete(v26);
        v37 = (__int64 *)v28;
        *(_QWORD *)(v2 + 1720) = v39;
        *(__m128 *)(v2 + 1704) = _mm_loadh_ps((const double *)&v37);
        return;
      }
      v35 = 2 * v14;
    }
    v36 = (__m128i *)operator new(v35 * 16);
    v11 = *(const __m128i **)(v2 + 1704);
    v3 = v36;
    v39 = &v36[v35];
    goto LABEL_16;
  }
}
