unsigned __int64 __fastcall sub_BB05A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  char v8; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i *v15; // rax
  bool v16; // zf
  __int64 *v17; // r12
  __int64 v18; // rbx
  __m128i *v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // rbp
  __m128i si128; // xmm0
  __int64 *i; // rbx
  unsigned __int64 *v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+8h] [rbp-70h] BYREF

  LODWORD(v7) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( (unsigned int)v7 <= 8 )
  {
    if ( !v8 )
    {
      v21 = *(unsigned int *)(a1 + 16);
      v15 = *(__m128i **)(a1 + 8);
      *(_BYTE *)a1 |= 1u;
      v7 = (unsigned int)v21;
      v14 = v21;
      v16 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v11 = (__int64 *)v15;
      v17 = &v15->m128i_i64[v14];
      if ( v16 )
      {
LABEL_6:
        v18 = 8 * v7;
        if ( v15 == (__m128i *)&v15->m128i_i8[v18] )
        {
LABEL_16:
          for ( i = v11; v17 != i; ++i )
          {
            if ( *i != -4096 && *i != -8192 )
            {
              sub_BAA140(a1, i, &v35);
              *v35 = *i;
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
          return operator delete(v11, v14 * 8, 8);
        }
        v19 = v15;
        v20 = ((unsigned __int64)(v18 - 8) >> 3) + 1;
        if ( v18 == 8 )
        {
LABEL_15:
          v15->m128i_i64[0] = -4096;
          goto LABEL_16;
        }
LABEL_12:
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v19++ = si128;
        while ( v19 != &v15[v20 >> 1] );
        v15 = (__m128i *)((char *)v15 + 8 * (v20 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v20 & 0xFFFFFFFFFFFFFFFELL) == v20 )
          goto LABEL_16;
        goto LABEL_15;
      }
LABEL_11:
      v15 = (__m128i *)(a1 + 8);
      v19 = (__m128i *)(a1 + 8);
      v20 = 8;
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
        v14 = v12;
        v15 = (__m128i *)sub_22300B0(v13, 8, v9, a4, a5, a6);
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v11[v14];
        *(_QWORD *)(a1 + 8) = v15;
        *(_DWORD *)(a1 + 16) = v7;
        if ( v16 )
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
    v25 = (unsigned __int64 *)&v35;
  }
  else
  {
    v35 = *(__int64 **)a4;
    v25 = (unsigned __int64 *)&v36;
  }
  if ( v9 != a4 + 8 )
  {
    v26 = *(_QWORD *)(a4 + 8);
    if ( v26 != -8192 && v26 != -4096 )
      *v25++ = v26;
    if ( v9 != a4 + 16 )
    {
      v27 = *(_QWORD *)(a4 + 16);
      if ( v27 != -8192 && v27 != -4096 )
        *v25++ = v27;
      if ( v9 != a4 + 24 )
      {
        v28 = *(_QWORD *)(a4 + 24);
        if ( v28 != -8192 && v28 != -4096 )
          *v25++ = v28;
        if ( v9 != a4 + 32 )
        {
          v29 = *(_QWORD *)(a4 + 32);
          if ( v29 != -8192 && v29 != -4096 )
            *v25++ = v29;
          if ( v9 != a4 + 40 )
          {
            v30 = *(_QWORD *)(a4 + 40);
            if ( v30 != -8192 && v30 != -4096 )
              *v25++ = v30;
            if ( v9 != a4 + 48 )
            {
              v31 = *(_QWORD *)(a4 + 48);
              if ( v31 != -8192 && v31 != -4096 )
                *v25++ = v31;
              if ( v9 != a4 + 56 )
              {
                v32 = *(_QWORD *)(a4 + 56);
                if ( v32 != -8192 && v32 != -4096 )
                  *v25++ = v32;
                if ( v9 != a4 + 64 )
                {
                  v33 = *(_QWORD *)(a4 + 64);
                  if ( v33 != -4096 && v33 != -8192 )
                    *v25++ = v33;
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
    v34 = sub_22300B0(8LL * (unsigned int)v7, 8, v9, a4, a5, a6);
    *(_DWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v34;
  }
  return sub_BB0380(a1, (unsigned __int64 *)&v35, v25);
}
