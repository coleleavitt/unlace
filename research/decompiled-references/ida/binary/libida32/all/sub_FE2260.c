__int64 __fastcall sub_FE2260(__m128i **a1, __int64 a2)
{
  _BYTE *v2; // r13
  signed __int64 v3; // r12
  __int64 m128i_i64; // rbp
  _BYTE *v5; // rax
  bool v6; // zf
  __m128i *v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rax
  signed __int64 v11; // r15
  _BYTE *v12; // r14
  __m128i *v13; // r12
  _QWORD *v14; // rbp
  void *v15; // rax
  const __m128i *v16; // rdx
  void **v17; // rbp
  const __m128i *v18; // rax
  unsigned __int64 v19; // rsi
  __m128i *v20; // rdx
  const __m128i *v21; // rcx
  void **v22; // r14
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rax
  _QWORD v26[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *((_DWORD *)a1 + 3) > *((_DWORD *)a1 + 2) )
  {
    v2 = *(_BYTE **)a2;
    v3 = *(_QWORD *)(a2 + 8);
    m128i_i64 = (__int64)(*a1)[2 * *((unsigned int *)a1 + 2)].m128i_i64;
    v5 = (_BYTE *)(m128i_i64 + 16);
    v6 = v3 + *(_QWORD *)a2 == 0;
    *(_QWORD *)m128i_i64 = m128i_i64 + 16;
    if ( v6 || v2 )
    {
      if ( (unsigned __int64)v3 <= 0xF )
      {
        if ( v3 == 1 )
        {
          *(_BYTE *)(m128i_i64 + 16) = *v2;
LABEL_7:
          *(_QWORD *)(m128i_i64 + 8) = v3;
          v5[v3] = 0;
          v7 = *a1;
          v8 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
          *((_DWORD *)a1 + 2) = v8;
          return (__int64)&v7[2 * v8 - 2];
        }
        if ( !v3 )
          goto LABEL_7;
LABEL_12:
        memcpy(v5, v2, v3);
        v5 = *(_BYTE **)m128i_i64;
        goto LABEL_7;
      }
      if ( v3 >= 0 )
      {
        v5 = (_BYTE *)operator new(v3 + 1);
        *(_QWORD *)(m128i_i64 + 16) = v3;
        *(_QWORD *)m128i_i64 = v5;
        goto LABEL_12;
      }
LABEL_38:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_26:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  v10 = sub_22136C0(a1, a1 + 2, 0, 32, v26);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_BYTE **)a2;
  v13 = (__m128i *)v10;
  v14 = (_QWORD *)(v10 + 32LL * *((unsigned int *)a1 + 2));
  v15 = v14 + 2;
  *v14 = v14 + 2;
  if ( &v12[v11] && !v12 )
    goto LABEL_26;
  if ( (unsigned __int64)v11 > 0xF )
  {
    if ( v11 < 0 )
      goto LABEL_38;
    v15 = (void *)operator new(v11 + 1);
    v14[2] = v11;
    *v14 = v15;
LABEL_25:
    memcpy(v15, v12, v11);
    v15 = (void *)*v14;
    goto LABEL_18;
  }
  if ( v11 == 1 )
  {
    *((_BYTE *)v14 + 16) = *v12;
    goto LABEL_18;
  }
  if ( v11 )
    goto LABEL_25;
LABEL_18:
  v14[1] = v11;
  *((_BYTE *)v15 + v11) = 0;
  v16 = *a1;
  v17 = (void **)&(*a1)[2 * *((unsigned int *)a1 + 2)];
  if ( *a1 != (__m128i *)v17 )
  {
    v18 = v16 + 1;
    v19 = (unsigned __int64)v13[2].m128i_u64 + (((char *)v17 - (char *)v16 - 32) & 0xFFFFFFFFFFFFFFE0LL);
    v20 = v13;
    do
    {
      v20->m128i_i64[0] = (__int64)v20[1].m128i_i64;
      v21 = (const __m128i *)v18[-1].m128i_i64[0];
      if ( v21 == v18 )
      {
        v20[1] = _mm_loadu_si128(v18);
      }
      else
      {
        v20->m128i_i64[0] = (__int64)v21;
        v20[1].m128i_i64[0] = v18->m128i_i64[0];
      }
      v20 += 2;
      v20[-2].m128i_i64[1] = v18[-1].m128i_i64[1];
      v18[-1].m128i_i64[0] = (__int64)v18;
      v18 += 2;
      v18[-3].m128i_i64[1] = 0;
      v18[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v19 != v20 );
    v22 = (void **)*a1;
    v17 = (void **)&(*a1)[2 * *((unsigned int *)a1 + 2)];
    if ( *a1 != (__m128i *)v17 )
    {
      do
      {
        while ( 1 )
        {
          v17 -= 4;
          if ( *v17 == v17 + 2 )
            break;
          operator delete(*v17);
          if ( v22 == v17 )
            goto LABEL_30;
        }
      }
      while ( v22 != v17 );
LABEL_30:
      v17 = (void **)*a1;
    }
  }
  v23 = v26[0];
  if ( a1 + 2 != (__m128i **)v17 )
    free(v17);
  v24 = *((_DWORD *)a1 + 2);
  *a1 = v13;
  *((_DWORD *)a1 + 3) = v23;
  v25 = (unsigned int)(v24 + 1);
  *((_DWORD *)a1 + 2) = v25;
  return (__int64)&v13[2 * v25 - 2];
}

