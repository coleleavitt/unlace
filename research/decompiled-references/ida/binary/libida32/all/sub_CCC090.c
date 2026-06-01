__int64 __fastcall sub_CCC090(__int64 a1, __int64 a2)
{
  void **v3; // r14
  const __m128i *v4; // r13
  void **v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _BYTE *v9; // r13
  void **v10; // r14
  void *v11; // rdx
  _BYTE *v12; // rax
  _BYTE *v13; // rdi
  size_t v14; // rdx
  void **v15; // rbx
  __m128i *v17; // rdi
  const __m128i *v18; // rsi
  const __m128i *v19; // rax
  unsigned __int64 v20; // rcx
  const __m128i *v21; // rdx
  void **v22; // rbx
  void **v23; // rax
  _BYTE *v24; // rbx
  void **v25; // r13
  void *v26; // rdx
  _BYTE *v27; // rax
  _BYTE *v28; // rdi
  size_t v29; // rdx
  void **v30; // rbx
  void **v31; // r13
  void **v32; // rbx
  void *v33; // rdi
  void **v34; // rbx
  int v35; // [rsp+4h] [rbp-44h]

  if ( a1 != a2 )
  {
    v3 = *(void ***)a2;
    v4 = (const __m128i *)(a2 + 16);
    v6 = *(void ***)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v35 = v8;
      if ( v8 > v7 )
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          v34 = &v6[4 * v7];
          while ( v34 != v6 )
          {
            while ( 1 )
            {
              v34 -= 4;
              if ( *v34 == v34 + 2 )
                break;
              operator delete(*v34);
              if ( v34 == v6 )
                goto LABEL_71;
            }
          }
LABEL_71:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_A684B0(a1, v8);
          v3 = *(void ***)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(void ***)a1;
          v4 = *(const __m128i **)a2;
          goto LABEL_26;
        }
        if ( *(_DWORD *)(a1 + 8) )
        {
          v7 *= 32LL;
          v9 = (_BYTE *)(a2 + 32);
          v10 = (void **)((char *)v6 + v7);
          while ( 1 )
          {
            v12 = *((_BYTE **)v9 - 2);
            v13 = *v6;
            if ( v12 == v9 )
            {
              v14 = *((_QWORD *)v9 - 1);
              if ( v14 )
              {
                if ( v14 == 1 )
                  *v13 = *v9;
                else
                  memcpy(v13, v9, v14);
                v14 = *((_QWORD *)v9 - 1);
                v13 = *v6;
              }
              v6[1] = (void *)v14;
              v13[v14] = 0;
              v13 = *((_BYTE **)v9 - 2);
              goto LABEL_10;
            }
            if ( v13 == (_BYTE *)(v6 + 2) )
              break;
            *v6 = v12;
            v11 = v6[2];
            v6[1] = *((void **)v9 - 1);
            v6[2] = *(void **)v9;
            if ( !v13 )
              goto LABEL_53;
            *((_QWORD *)v9 - 2) = v13;
            *(_QWORD *)v9 = v11;
LABEL_10:
            v6 += 4;
            *((_QWORD *)v9 - 1) = 0;
            v9 += 32;
            *v13 = 0;
            if ( v6 == v10 )
            {
              v3 = *(void ***)a2;
              v8 = *(unsigned int *)(a2 + 8);
              v6 = *(void ***)a1;
              v4 = (const __m128i *)(*(_QWORD *)a2 + v7);
              goto LABEL_26;
            }
          }
          *v6 = v12;
          v6[1] = *((void **)v9 - 1);
          v6[2] = *(void **)v9;
LABEL_53:
          *((_QWORD *)v9 - 2) = v9;
          v13 = v9;
          goto LABEL_10;
        }
LABEL_26:
        v17 = (__m128i *)((char *)v6 + v7);
        v18 = (const __m128i *)&v3[4 * v8];
        if ( v18 != v4 )
        {
          v19 = v4 + 1;
          v20 = (unsigned __int64)v17[2].m128i_u64 + (((char *)v18 - (char *)v4 - 32) & 0xFFFFFFFFFFFFFFE0LL);
          do
          {
            v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
            v21 = (const __m128i *)v19[-1].m128i_i64[0];
            if ( v21 == v19 )
            {
              v17[1] = _mm_loadu_si128(v19);
            }
            else
            {
              v17->m128i_i64[0] = (__int64)v21;
              v17[1].m128i_i64[0] = v19->m128i_i64[0];
            }
            v17 += 2;
            v17[-2].m128i_i64[1] = v19[-1].m128i_i64[1];
            v19[-1].m128i_i64[0] = (__int64)v19;
            v19 += 2;
            v19[-3].m128i_i64[1] = 0;
            v19[-2].m128i_i8[0] = 0;
          }
          while ( (__m128i *)v20 != v17 );
          v3 = *(void ***)a2;
        }
        *(_DWORD *)(a1 + 8) = v35;
        v22 = &v3[4 * *(unsigned int *)(a2 + 8)];
        while ( v22 != v3 )
        {
          while ( 1 )
          {
            v22 -= 4;
            if ( *v22 == v22 + 2 )
              break;
            operator delete(*v22);
            if ( v22 == v3 )
              goto LABEL_37;
          }
        }
        goto LABEL_37;
      }
      v23 = *(void ***)a1;
      if ( !v8 )
      {
LABEL_55:
        v30 = &v23[4 * v7];
        while ( v6 != v30 )
        {
          while ( 1 )
          {
            v30 -= 4;
            if ( *v30 == v30 + 2 )
              break;
            operator delete(*v30);
            if ( v6 == v30 )
              goto LABEL_59;
          }
        }
LABEL_59:
        v31 = *(void ***)a2;
        *(_DWORD *)(a1 + 8) = v8;
        v32 = &v31[4 * *(unsigned int *)(a2 + 8)];
        if ( v31 != v32 )
        {
          while ( 1 )
          {
            v32 -= 4;
            v33 = *v32;
            if ( *v32 != v32 + 2 )
              break;
LABEL_63:
            if ( v31 == v32 )
              goto LABEL_37;
          }
          while ( 1 )
          {
            operator delete(v33);
            if ( v31 == v32 )
              break;
            v32 -= 4;
            v33 = *v32;
            if ( *v32 == v32 + 2 )
              goto LABEL_63;
          }
        }
LABEL_37:
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
      v24 = (_BYTE *)(a2 + 32);
      v25 = &v6[4 * v8];
      while ( 1 )
      {
        v27 = *((_BYTE **)v24 - 2);
        v28 = *v6;
        if ( v27 == v24 )
        {
          v29 = *((_QWORD *)v24 - 1);
          if ( v29 )
          {
            if ( v29 == 1 )
              *v28 = *v24;
            else
              memcpy(v28, v24, v29);
            v29 = *((_QWORD *)v24 - 1);
            v28 = *v6;
          }
          v6[1] = (void *)v29;
          v28[v29] = 0;
          v28 = *((_BYTE **)v24 - 2);
          goto LABEL_45;
        }
        if ( v28 == (_BYTE *)(v6 + 2) )
          break;
        *v6 = v27;
        v26 = v6[2];
        v6[1] = *((void **)v24 - 1);
        v6[2] = *(void **)v24;
        if ( !v28 )
          goto LABEL_66;
        *((_QWORD *)v24 - 2) = v28;
        *(_QWORD *)v24 = v26;
LABEL_45:
        v6 += 4;
        *((_QWORD *)v24 - 1) = 0;
        v24 += 32;
        *v28 = 0;
        if ( v6 == v25 )
        {
          v23 = *(void ***)a1;
          v7 = *(unsigned int *)(a1 + 8);
          goto LABEL_55;
        }
      }
      *v6 = v27;
      v6[1] = *((void **)v24 - 1);
      v6[2] = *(void **)v24;
LABEL_66:
      *((_QWORD *)v24 - 2) = v24;
      v28 = v24;
      goto LABEL_45;
    }
    v15 = &v6[4 * v7];
    if ( v15 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v15 -= 4;
          if ( *v15 == v15 + 2 )
            break;
          operator delete(*v15);
          if ( v15 == v6 )
            goto LABEL_20;
        }
      }
      while ( v15 != v6 );
LABEL_20:
      v6 = *(void ***)a1;
    }
    if ( v6 != (void **)(a1 + 16) )
      free(v6);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return a1;
}

