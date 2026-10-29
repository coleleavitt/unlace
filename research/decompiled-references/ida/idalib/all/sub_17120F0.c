void __fastcall sub_17120F0(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // r8
  _QWORD *v4; // rcx
  char *v6; // rbx
  char *v7; // rbp
  char *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  char *v11; // rax
  char *v12; // r12
  char *v13; // r14
  char *v14; // rsi
  signed __int64 v15; // r9
  void *v16; // rax
  const __m128i *v17; // rax
  char *v18; // rdx
  __int8 v19; // cl
  const __m128i *v20; // rcx
  char *v21; // rdx
  const __m128i *v22; // rax
  unsigned __int64 v23; // rdi
  char *v24; // rsi
  char *v25; // rdx
  __int64 v26; // rcx
  const __m128i *v27; // rcx
  char *i; // r14
  char *v29; // rdi
  signed __int64 v30; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+8h] [rbp-50h]
  char *v32; // [rsp+10h] [rbp-48h]
  _QWORD *v33; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v4 = a3;
  v6 = a1[1];
  v7 = *a1;
  v8 = (char *)(a2 - *a1);
  v9 = (v6 - *a1) >> 6;
  if ( !v9 )
  {
    v10 = 1;
LABEL_38:
    v10 <<= 6;
    goto LABEL_4;
  }
  v10 = 2 * v9;
  if ( v9 <= 2 * v9 && v10 <= 0x3FFFFFFFFFFFFFFLL )
  {
    v12 = nullptr;
    if ( !v10 )
      goto LABEL_5;
    goto LABEL_38;
  }
  v10 = -64;
LABEL_4:
  src = a3;
  v30 = (signed __int64)a2;
  v11 = (char *)operator new(v10);
  v4 = src;
  v3 = a2;
  v12 = v11;
LABEL_5:
  v13 = &v8[(_QWORD)v12];
  v14 = (char *)v4[3];
  v15 = v4[4];
  *(_QWORD *)v13 = *v4;
  *((_DWORD *)v13 + 2) = *((_DWORD *)v4 + 2);
  *(_QWORD *)(v13 + 12) = *(_QWORD *)((char *)v4 + 12);
  *((_DWORD *)v13 + 5) = *((_DWORD *)v4 + 5);
  v16 = v13 + 40;
  *((_QWORD *)v13 + 3) = v13 + 40;
  if ( &v14[v15] && !v14 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v15 > 0xF )
  {
    if ( v15 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v33 = v4;
    v32 = v3;
    src = v14;
    v30 = v15;
    v16 = (void *)operator new(v15 + 1);
    v15 = v30;
    v3 = v32;
    v4 = v33;
    *((_QWORD *)v13 + 3) = v16;
    *((_QWORD *)v13 + 5) = v15;
LABEL_41:
    v32 = (char *)v4;
    src = v3;
    v30 = v15;
    memcpy(v16, v14, v15);
    v16 = *((void **)v13 + 3);
    v4 = v32;
    v3 = (char *)src;
    v15 = v30;
    goto LABEL_10;
  }
  if ( v15 == 1 )
  {
    v13[40] = *v14;
    goto LABEL_10;
  }
  if ( v15 )
    goto LABEL_41;
LABEL_10:
  *((_QWORD *)v13 + 4) = v15;
  *((_BYTE *)v16 + v15) = 0;
  v13[56] = *((_BYTE *)v4 + 56);
  if ( v3 == v7 )
  {
    v21 = v12;
  }
  else
  {
    v17 = (const __m128i *)(v7 + 40);
    v18 = v12;
    do
    {
      *(_QWORD *)v18 = v17[-3].m128i_i64[1];
      *((_DWORD *)v18 + 2) = v17[-2].m128i_i32[0];
      *(_QWORD *)(v18 + 12) = *(__int64 *)((char *)v17[-2].m128i_i64 + 4);
      *((_DWORD *)v18 + 5) = v17[-2].m128i_i32[3];
      *((_QWORD *)v18 + 3) = v18 + 40;
      v20 = (const __m128i *)v17[-1].m128i_i64[0];
      if ( v20 == v17 )
      {
        *(__m128i *)(v18 + 40) = _mm_loadu_si128(v17);
      }
      else
      {
        *((_QWORD *)v18 + 3) = v20;
        *((_QWORD *)v18 + 5) = v17->m128i_i64[0];
      }
      v18 += 64;
      *((_QWORD *)v18 - 4) = v17[-1].m128i_i64[1];
      v19 = v17[1].m128i_i8[0];
      v17[-1].m128i_i64[0] = (__int64)v17;
      v17 += 4;
      v17[-5].m128i_i64[1] = 0;
      v17[-4].m128i_i8[0] = 0;
      *(v18 - 8) = v19;
    }
    while ( v18 != &v12[64 * ((unsigned __int64)(v3 - 64 - v7) >> 6) + 64] );
    v21 = &v12[64 * ((unsigned __int64)(v3 - 64 - v7) >> 6) + 64];
  }
  v30 = (signed __int64)(v21 + 64);
  if ( v3 != v6 )
  {
    v22 = (const __m128i *)(v3 + 40);
    v23 = (unsigned __int64)(v6 - v3 - 64) >> 6;
    v24 = &v21[64 * v23 + 128];
    v25 = v21 + 64;
    do
    {
      *(_QWORD *)v25 = v22[-3].m128i_i64[1];
      *((_DWORD *)v25 + 2) = v22[-2].m128i_i32[0];
      *(_QWORD *)(v25 + 12) = *(__int64 *)((char *)v22[-2].m128i_i64 + 4);
      *((_DWORD *)v25 + 5) = v22[-2].m128i_i32[3];
      *((_QWORD *)v25 + 3) = v25 + 40;
      v27 = (const __m128i *)v22[-1].m128i_i64[0];
      if ( v22 == v27 )
      {
        *(__m128i *)(v25 + 40) = _mm_loadu_si128(v22);
      }
      else
      {
        *((_QWORD *)v25 + 3) = v27;
        *((_QWORD *)v25 + 5) = v22->m128i_i64[0];
      }
      v26 = v22[-1].m128i_i64[1];
      v25 += 64;
      v22[-1].m128i_i64[0] = (__int64)v22;
      v22 += 4;
      v22[-5].m128i_i64[1] = 0;
      *((_QWORD *)v25 - 4) = v26;
      LOBYTE(v26) = v22[-3].m128i_i8[0];
      v22[-4].m128i_i8[0] = 0;
      *(v25 - 8) = v26;
    }
    while ( v25 != v24 );
    v30 += (v23 + 1) << 6;
  }
  for ( i = v7; i != v6; i += 64 )
  {
    while ( 1 )
    {
      v29 = *((char **)i + 3);
      if ( v29 == i + 40 )
        break;
      operator delete(v29);
      i += 64;
      if ( v6 == i )
        goto LABEL_32;
    }
  }
LABEL_32:
  if ( v7 )
    operator delete(v7);
  src = v12;
  a1[2] = &v12[v10];
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v30);
}
