void __fastcall CoinWarmStartBasis::deleteRows(CoinWarmStartBasis *this, int a2, const __m128i *a3)
{
  const __m128i *v4; // rbx
  const int *v5; // rax
  int v6; // edi
  int v7; // ecx
  signed __int64 v8; // r14
  __int64 v9; // rax
  const int *m128i_i32; // rdx
  char *v11; // r12
  __int64 v12; // rcx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rax
  char *v16; // r13
  char *v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // r14d
  int v20; // edx
  char *v21; // rax
  char *i; // rdx
  char *v23; // rax
  char *v24; // rcx
  int v25; // esi
  char *v26; // r8
  int v27; // r14d
  int v28; // edx
  char *v29; // rax
  char *v30; // rax
  int v31; // esi
  int v32; // edx
  char *v33; // rax
  char *v34; // [rsp+0h] [rbp-48h]

  if ( a2 > 0 )
  {
    v4 = a3;
    v5 = (const int *)a3;
    v6 = -1;
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 <= v6 )
        break;
      ++v5;
      v6 = v7;
      if ( v5 == (const int *)((char *)a3->m128i_i64 + 4 * (unsigned int)(a2 - 1) + 4) )
      {
        (*(void (__fastcall **)(CoinWarmStartBasis *))(*(_QWORD *)this + 56LL))(this);
        return;
      }
    }
    v8 = 4LL * a2;
    v9 = operator new[](v8);
    m128i_i32 = (const int *)a3;
    v11 = (char *)v9;
    if ( a3 != (const __m128i *)v9 )
    {
      if ( a2 >> 3 )
      {
        v12 = (unsigned int)((a2 >> 3) - 1);
        do
        {
          v13 = _mm_loadu_si128(v4 + 1);
          v9 += 32;
          v4 += 2;
          v14 = _mm_loadu_si128(v4 - 2);
          *(__m128i *)(v9 - 16) = v13;
          *(__m128i *)(v9 - 32) = v14;
        }
        while ( &v11[32 * v12 + 32] != (char *)v9 );
        v15 = 2 * ((int)v12 + 1LL);
        m128i_i32 = a3[v15].m128i_i32;
        v9 = (__int64)&v11[v15 * 16];
      }
      switch ( a2 & 7 )
      {
        case 0:
          break;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          *(_DWORD *)(v9 + 24) = m128i_i32[6];
LABEL_13:
          *(_DWORD *)(v9 + 20) = m128i_i32[5];
LABEL_14:
          *(_DWORD *)(v9 + 16) = m128i_i32[4];
LABEL_15:
          *(_DWORD *)(v9 + 12) = m128i_i32[3];
LABEL_16:
          *(_DWORD *)(v9 + 8) = m128i_i32[2];
LABEL_17:
          *(_DWORD *)(v9 + 4) = m128i_i32[1];
LABEL_18:
          *(_DWORD *)v9 = *m128i_i32;
          break;
      }
    }
    v16 = &v11[v8];
    v17 = v11;
    if ( v11 == &v11[v8] )
      goto LABEL_34;
    _BitScanReverse64(&v18, v8 >> 2);
    v17 = v11 + 4;
    sub_281670(v11, &v11[v8], 2 * (63LL - (int)(v18 ^ 0x3F)));
    if ( (unsigned __int64)v8 > 0x40 )
    {
      v26 = v11 + 64;
      do
      {
        v27 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 < *(_DWORD *)v11 )
        {
          if ( v17 != v11 )
          {
            v34 = v26;
            memmove(v11 + 4, v11, v17 - v11);
            v26 = v34;
          }
          *(_DWORD *)v11 = v27;
        }
        else
        {
          v28 = *((_DWORD *)v17 - 1);
          v29 = v17 - 4;
          if ( v28 > v27 )
          {
            while ( 1 )
            {
              *((_DWORD *)v29 + 1) = v28;
              v28 = *((_DWORD *)v29 - 1);
              if ( v27 >= v28 )
                break;
              v29 -= 4;
            }
          }
          else
          {
            v29 = v17;
          }
          *(_DWORD *)v29 = v27;
        }
        v17 += 4;
      }
      while ( v26 != v17 );
      while ( v16 != v17 )
      {
        v31 = *(_DWORD *)v17;
        v32 = *((_DWORD *)v17 - 1);
        v33 = v17 - 4;
        if ( v32 > *(_DWORD *)v17 )
        {
          while ( 1 )
          {
            *((_DWORD *)v33 + 1) = v32;
            v32 = *((_DWORD *)v33 - 1);
            if ( v31 >= v32 )
              break;
            v33 -= 4;
          }
          *(_DWORD *)v33 = v31;
          v17 += 4;
        }
        else
        {
          v30 = v17;
          v17 += 4;
          *(_DWORD *)v30 = v31;
        }
      }
    }
    else
    {
      if ( v16 == v11 + 4 )
      {
LABEL_34:
        (*(void (__fastcall **)(CoinWarmStartBasis *, signed __int64, char *))(*(_QWORD *)this + 56LL))(
          this,
          (v17 - v11) >> 2,
          v11);
        operator delete[](v11);
        return;
      }
      do
      {
        v19 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 < *(_DWORD *)v11 )
        {
          if ( v17 != v11 )
            memmove(v11 + 4, v11, v17 - v11);
          *(_DWORD *)v11 = v19;
        }
        else
        {
          v20 = *((_DWORD *)v17 - 1);
          v21 = v17 - 4;
          if ( v19 < v20 )
          {
            while ( 1 )
            {
              *((_DWORD *)v21 + 1) = v20;
              v20 = *((_DWORD *)v21 - 1);
              if ( v19 >= v20 )
                break;
              v21 -= 4;
            }
          }
          else
          {
            v21 = v17;
          }
          *(_DWORD *)v21 = v19;
        }
        v17 += 4;
      }
      while ( v16 != v17 );
    }
    for ( i = v11; ; i += 4 )
    {
      v23 = i + 4;
      v24 = i + 4;
      if ( v16 == i + 4 )
        goto LABEL_33;
      if ( *(_DWORD *)i == *((_DWORD *)i + 1) )
        break;
    }
    if ( v16 == i )
    {
LABEL_33:
      v17 = v16;
      goto LABEL_34;
    }
    while ( 1 )
    {
      v24 += 4;
      v17 = v23;
      if ( v16 == v24 )
        goto LABEL_34;
      while ( 1 )
      {
        v25 = *(_DWORD *)v24;
        if ( *(_DWORD *)i == *(_DWORD *)v24 )
          break;
        v24 += 4;
        *((_DWORD *)i + 1) = v25;
        i = v23;
        v23 += 4;
        v17 = v23;
        if ( v16 == v24 )
          goto LABEL_34;
      }
    }
  }
}

