__m128i *__fastcall sub_181BF30(__int64 a1, __int64 a2, const __m128i *a3, char *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r13d
  const __m128i *v8; // r12
  unsigned __int8 v10; // bl
  const __m128i **v11; // rax
  unsigned __int64 v12; // rax
  const __m128i *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __m128i *v19; // r15
  __int64 v21; // r15
  __int64 *v22; // rdx
  char **v23; // rax
  _QWORD *v24; // r15
  char *v25; // rsi
  __int64 v26; // rax
  char *v27; // rdi
  char *v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  char *v31; // [rsp+8h] [rbp-E0h]
  int v32; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v33[200]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a5;
  v8 = a3;
  v10 = (unsigned __int8)a4;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v11 = (const __m128i **)sub_B8C3D0(a2, a2, (__int64)a3, (__int64)a4, a5, a6);
  a3 = *v11;
  v12 = (unsigned __int64)*v11 + 8 * *((unsigned int *)v11 + 2);
  if ( (unsigned __int64)a3 < v12 )
  {
    a4 = (char *)a3;
    if ( *(_WORD *)(a3->m128i_i64[0] + 36) != 248 )
    {
      do
      {
        a4 += 8;
        if ( (char *)v12 == a4 )
          goto LABEL_8;
      }
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 248 );
    }
    if ( (char *)v12 == a4 )
      goto LABEL_8;
  }
  else
  {
    if ( a3 == (const __m128i *)v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 248 )
    {
      v13 = (const __m128i *)(v12 + 8);
      do
      {
        a4 = (char *)v13;
        if ( a3 == v13 )
          goto LABEL_8;
        v14 = v13->m128i_i64[0];
        v13 = (const __m128i *)((char *)v13 + 8);
      }
      while ( *(_WORD *)(v14 + 36) != 248 );
    }
  }
  v21 = a3->m128i_i64[0];
  if ( *(_WORD *)(a3->m128i_i64[0] + 36) != 248 )
  {
    v22 = &a3->m128i_i64[1];
    do
      v21 = *v22++;
    while ( *(_WORD *)(v21 + 36) != 248 );
  }
  if ( v7 == (unsigned int)sub_B142D0(v21) )
    return nullptr;
  sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), *(_DWORD *)(v21 + 24), 0x1051u, 0);
  v32 = 1;
  sub_1587D10((__int64)v33, &v32);
  sub_15F7200(v33);
  sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v8[1].m128i_u32[2], 0x1891u, 0);
  sub_15F7200(v33);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_8:
    if ( *(_QWORD *)(a2 + 128) )
      goto LABEL_9;
    goto LABEL_52;
  }
  v23 = (char **)sub_B8C3D0(a2, a1 + 8, (__int64)a3, (__int64)a4, a5, a6);
  a4 = *v23;
  v24 = v23;
  a5 = 8LL * *((unsigned int *)v23 + 2);
  v25 = &(*v23)[a5];
  v26 = a5 >> 3;
  if ( a5 >> 5 )
  {
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 248 )
    {
      v27 = a4;
    }
    else
    {
      v27 = a4 + 8;
      if ( *(_WORD *)(*((_QWORD *)a4 + 1) + 36LL) != 248 )
      {
        v27 = a4 + 16;
        if ( *(_WORD *)(*((_QWORD *)a4 + 2) + 36LL) != 248 )
        {
          a3 = *((const __m128i **)a4 + 3);
          v28 = a4;
          v27 = a4 + 24;
          if ( a3[2].m128i_i16[2] != 248 )
          {
            while ( 1 )
            {
              v27 = v28 + 32;
              if ( &a4[32 * (a5 >> 5)] == v28 + 32 )
              {
                v26 = (v25 - v27) >> 3;
                goto LABEL_37;
              }
              a3 = *((const __m128i **)v28 + 4);
              if ( a3[2].m128i_i16[2] == 248 )
                goto LABEL_43;
              a3 = *((const __m128i **)v28 + 5);
              if ( a3[2].m128i_i16[2] == 248 )
              {
                v27 = v28 + 40;
                goto LABEL_43;
              }
              a3 = *((const __m128i **)v28 + 6);
              if ( a3[2].m128i_i16[2] == 248 )
              {
                v27 = v28 + 48;
                goto LABEL_43;
              }
              a3 = *((const __m128i **)v28 + 7);
              if ( a3[2].m128i_i16[2] == 248 )
                break;
              v28 += 32;
            }
            v27 = v28 + 56;
          }
        }
      }
    }
    goto LABEL_43;
  }
  v27 = a4;
LABEL_37:
  if ( v26 == 2 )
    goto LABEL_61;
  if ( v26 == 3 )
  {
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 248 )
      goto LABEL_43;
    v27 += 8;
LABEL_61:
    if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 248 )
      goto LABEL_43;
    v27 += 8;
    goto LABEL_63;
  }
  if ( v26 != 1 )
  {
LABEL_40:
    a6 = (__int64)v25;
    goto LABEL_50;
  }
LABEL_63:
  a6 = (__int64)v25;
  if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 248 )
    goto LABEL_50;
LABEL_43:
  if ( v25 == v27 )
    goto LABEL_40;
  v29 = v27 + 8;
  if ( v25 == v27 + 8 )
  {
    a6 = (__int64)v27;
  }
  else
  {
    do
    {
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 248 )
      {
        *(_QWORD *)v27 = *(_QWORD *)v29;
        v27 += 8;
      }
      v29 += 8;
    }
    while ( v25 != v29 );
    a4 = (char *)*v24;
    a5 += *v24;
    a3 = (const __m128i *)(a5 - (_QWORD)v25);
    a6 = (__int64)&v27[a5 - (_QWORD)v25];
    if ( v25 != (char *)a5 )
    {
      v31 = &v27[a5 - (_QWORD)v25];
      memmove(v27, v25, (size_t)a3);
      a4 = (char *)*v24;
      a6 = (__int64)v31;
    }
  }
LABEL_50:
  v30 = (a6 - (__int64)a4) >> 3;
  *((_DWORD *)v24 + 2) = v30;
  if ( (_DWORD)v30 )
    goto LABEL_8;
  *(_BYTE *)(a2 + 29) &= ~1u;
  if ( *(_QWORD *)(a2 + 128) )
    goto LABEL_9;
LABEL_52:
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), (__int64)a3, (__int64)a4, a5, a6);
  v19 = *(__m128i **)(a2 + 128);
  if ( v19 )
  {
LABEL_9:
    if ( !(unsigned __int8)sub_181BD30(a1, (__int64 *)a2, v8[1].m128i_i64[1], v10, v7, a6) )
      goto LABEL_10;
    return nullptr;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x3D )
  {
    sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v8[1].m128i_u32[2], 0x1B44u, 0);
    v32 = 1;
    goto LABEL_67;
  }
  if ( sub_B97230(a2) )
  {
    sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v8[1].m128i_u32[2], 0x1B44u, 0);
    v32 = 0;
LABEL_67:
    sub_1587D10((__int64)v33, &v32);
    sub_15F7200(v33);
    return v19;
  }
LABEL_10:
  v17 = *(_QWORD **)(a1 + 248);
  v18 = v17[294];
  v17[304] += 40LL;
  v19 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v17[295] >= (unsigned __int64)&v19[2].m128i_u64[1] && v18 )
    v17[294] = (char *)v19 + 40;
  else
    v19 = (__m128i *)sub_986170((__int64)(v17 + 294), 40, 40, 3, v15, v16);
  sub_B142A0(v19, *(_QWORD *)(a1 + 248), v8, v10);
  return v19;
}
