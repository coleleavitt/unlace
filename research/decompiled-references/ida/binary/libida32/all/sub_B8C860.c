unsigned __int64 __fastcall sub_B8C860(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  char v8; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rdi
  __m128i *v14; // rax
  bool v15; // zf
  __int64 *v16; // r12
  __int64 v17; // rbx
  __m128i *v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v20; // rbp
  __m128i si128; // xmm0
  __int64 *i; // rbx
  unsigned __int64 *v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // [rsp+0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+8h] [rbp-70h] BYREF

  LODWORD(v7) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( (unsigned int)v7 <= 8 )
  {
    if ( !v8 )
    {
      v20 = *(unsigned int *)(a1 + 16);
      v14 = *(__m128i **)(a1 + 8);
      *(_BYTE *)a1 |= 1u;
      v7 = (unsigned int)v20;
      v15 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v11 = (__int64 *)v14;
      v16 = &v14->m128i_i64[v20];
      if ( v15 )
      {
LABEL_6:
        v17 = 8 * v7;
        if ( v14 == (__m128i *)&v14->m128i_i8[v17] )
        {
LABEL_16:
          for ( i = v11; v16 != i; ++i )
          {
            if ( *i != -4096 && *i != -8192 )
            {
              sub_B86400(a1, i, &v34);
              *v34 = *i;
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
          return operator delete();
        }
        v18 = v14;
        v19 = ((unsigned __int64)(v17 - 8) >> 3) + 1;
        if ( v17 == 8 )
        {
LABEL_15:
          v14->m128i_i64[0] = -4096;
          goto LABEL_16;
        }
LABEL_12:
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        do
          *v18++ = si128;
        while ( v18 != &v14[v19 >> 1] );
        v14 = (__m128i *)((char *)v14 + 8 * (v19 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v19 & 0xFFFFFFFFFFFFFFFELL) == v19 )
          goto LABEL_16;
        goto LABEL_15;
      }
LABEL_11:
      v14 = (__m128i *)(a1 + 8);
      v18 = (__m128i *)(a1 + 8);
      v19 = 8;
      goto LABEL_12;
    }
    a4 = a1 + 8;
    v9 = a1 + 72;
  }
  else
  {
    v9 = (((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
         | (unsigned int)(v7 - 1)
         | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)
         | (((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
           | (unsigned int)(v7 - 1)
           | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4)) >> 8)
       | (((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
       | (unsigned int)(v7 - 1)
       | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)
       | (((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
         | (unsigned int)(v7 - 1)
         | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v7 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      a4 = a1 + 8;
      v9 = a1 + 72;
      if ( !v8 )
      {
        v11 = *(__int64 **)(a1 + 8);
        v12 = *(unsigned int *)(a1 + 16);
        v13 = 8LL * (unsigned int)v10;
LABEL_5:
        v14 = (__m128i *)sub_220C370(v13, 8, v9, a4, a5, a6);
        v15 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v16 = &v11[v12];
        *(_QWORD *)(a1 + 8) = v14;
        *(_DWORD *)(a1 + 16) = v7;
        if ( v15 )
          goto LABEL_6;
        goto LABEL_11;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = *(__int64 **)(a1 + 8);
        v12 = *(unsigned int *)(a1 + 16);
        v7 = 64;
        v13 = 512;
        goto LABEL_5;
      }
      a4 = a1 + 8;
      v9 = a1 + 72;
      LODWORD(v7) = 64;
    }
  }
  if ( *(_QWORD *)a4 == -4096 || *(_QWORD *)a4 == -8192 )
  {
    v24 = (unsigned __int64 *)&v34;
  }
  else
  {
    v34 = *(__int64 **)a4;
    v24 = (unsigned __int64 *)&v35;
  }
  if ( v9 != a4 + 8 )
  {
    v25 = *(_QWORD *)(a4 + 8);
    if ( v25 != -8192 && v25 != -4096 )
      *v24++ = v25;
    if ( v9 != a4 + 16 )
    {
      v26 = *(_QWORD *)(a4 + 16);
      if ( v26 != -8192 && v26 != -4096 )
        *v24++ = v26;
      if ( v9 != a4 + 24 )
      {
        v27 = *(_QWORD *)(a4 + 24);
        if ( v27 != -8192 && v27 != -4096 )
          *v24++ = v27;
        if ( v9 != a4 + 32 )
        {
          v28 = *(_QWORD *)(a4 + 32);
          if ( v28 != -8192 && v28 != -4096 )
            *v24++ = v28;
          if ( v9 != a4 + 40 )
          {
            v29 = *(_QWORD *)(a4 + 40);
            if ( v29 != -8192 && v29 != -4096 )
              *v24++ = v29;
            if ( v9 != a4 + 48 )
            {
              v30 = *(_QWORD *)(a4 + 48);
              if ( v30 != -8192 && v30 != -4096 )
                *v24++ = v30;
              if ( v9 != a4 + 56 )
              {
                v31 = *(_QWORD *)(a4 + 56);
                if ( v31 != -8192 && v31 != -4096 )
                  *v24++ = v31;
                if ( v9 != a4 + 64 )
                {
                  v32 = *(_QWORD *)(a4 + 64);
                  if ( v32 != -4096 && v32 != -8192 )
                    *v24++ = v32;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v7 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v33 = sub_220C370(8LL * (unsigned int)v7, 8, v9, a4, a5, a6);
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v33;
  }
  return sub_B8C640(a1, (unsigned __int64 *)&v34, v24);
}

