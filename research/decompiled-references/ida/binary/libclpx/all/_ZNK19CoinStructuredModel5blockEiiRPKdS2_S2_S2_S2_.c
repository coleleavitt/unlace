__int64 __fastcall CoinStructuredModel::block(
        CoinStructuredModel *this,
        int a2,
        int a3,
        const double **a4,
        const double **a5,
        const double **a6,
        const double **a7,
        const double **a8)
{
  bool v8; // zf
  __int64 v10; // r13
  __int64 v11; // rbx
  char v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i inserted; // [rsp+10h] [rbp-58h] BYREF
  const double **v19; // [rsp+28h] [rbp-40h]

  v8 = *((_QWORD *)this + 23) == 0;
  *a4 = nullptr;
  *a5 = nullptr;
  *a6 = nullptr;
  *a7 = nullptr;
  *a8 = nullptr;
  if ( !v8 && *((int *)this + 27) > 0 )
  {
    v19 = a6;
    inserted.m128i_i64[0] = (__int64)a5;
    v17.m128i_i64[0] = (__int64)a4;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (_QWORD *)CoinStructuredModel::coinBlock(this, v10);
        v14 = *((_QWORD *)this + 23) + 16 * v10;
        if ( *(_DWORD *)v14 == a2 )
        {
          if ( *(_BYTE *)(v14 + 9) )
            break;
        }
        if ( *(_DWORD *)(v14 + 4) == a3 )
          goto LABEL_9;
LABEL_5:
        if ( *((_DWORD *)this + 27) <= (int)++v10 )
          goto LABEL_11;
      }
      v12 = 1;
      v8 = *(_DWORD *)(v14 + 4) == a3;
      *(_QWORD *)v17.m128i_i64[0] = v13[16];
      *(_QWORD *)inserted.m128i_i64[0] = v13[17];
      if ( !v8 )
        goto LABEL_5;
LABEL_9:
      if ( !*(_BYTE *)(v14 + 12) )
        goto LABEL_5;
      v11 = 1;
      *v19 = (const double *)v13[24];
      *a7 = (const double *)v13[25];
      *a8 = (const double *)v13[23];
      if ( *((_DWORD *)this + 27) <= (int)++v10 )
        goto LABEL_11;
    }
  }
  v11 = 0;
  v12 = 0;
LABEL_11:
  v17.m128i_i64[0] = 0;
  LOBYTE(v15) = 0;
  HIBYTE(v15) = v12;
  v17.m128i_i64[1] = v15;
  inserted = _mm_insert_epi16(_mm_load_si128(&v17), 0, 5);
  v17.m128i_i64[0] = _mm_load_si128(&inserted).m128i_u64[0];
  v17.m128i_i64[1] = (v11 << 32) & 0xFFFF00FFFFFFFFFFLL | inserted.m128i_i64[1] & 0xFFFF0000FFFFFFFFLL;
  return v17.m128i_i64[0];
}

