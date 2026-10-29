__int64 *__fastcall sub_1A5DDF0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __m128i *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // r15
  __int64 v16; // rsi
  bool v17; // zf
  __m128i *v18; // r9
  __int64 v19; // r8
  __m128i *v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i si128; // xmm0
  __m128i *v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // r10
  int v26; // r11d
  unsigned int v27; // edi
  _QWORD *v28; // r8
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rdx
  __int64 v42; // rcx
  __m128i *v43; // rax
  unsigned __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 *result; // rax
  __int64 *v47; // r8
  int v48; // edi
  unsigned int v49; // ecx
  __int64 *v50; // rsi
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rcx
  int v54; // r10d
  __int64 *v55; // r11
  _QWORD *v56; // [rsp+8h] [rbp-90h]
  int v57; // [rsp+14h] [rbp-84h]
  __int64 v58; // [rsp+20h] [rbp-78h] BYREF
  __int64 v59; // [rsp+28h] [rbp-70h] BYREF

  v6 = a2;
  v8 = *(__m128i **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    v15 = (__m128i *)(a1 + 8);
    v10 = a1 + 72;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
LABEL_8:
      v16 = 8LL * v12;
      v17 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v18 = (__m128i *)((char *)v8 + v16);
      if ( v17 )
      {
        v53 = 8LL * v6;
        if ( v14 == v14 + v53 )
          goto LABEL_14;
        v20 = (__m128i *)v14;
        v21 = ((unsigned __int64)(v53 - 8) >> 3) + 1;
        if ( v53 == 8 )
        {
LABEL_13:
          v20->m128i_i64[0] = -4096;
LABEL_14:
          v24 = (__int64 *)v8;
          if ( v18 != v8 )
          {
            do
            {
              v30 = *v24;
              if ( *v24 != -4096 && v30 != -8192 )
              {
                if ( (*(_BYTE *)a1 & 1) != 0 )
                {
                  v25 = a1 + 8;
                  v26 = 7;
                }
                else
                {
                  if ( !v6 )
                    goto LABEL_114;
                  v26 = v6 - 1;
                  v25 = v14;
                }
                v27 = v26 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
                v28 = (_QWORD *)(v25 + 8LL * v27);
                v29 = *v28;
                if ( *v28 != v30 && v29 != -4096 )
                {
                  v57 = 1;
                  v56 = nullptr;
                  while ( 1 )
                  {
                    if ( v29 == -8192 )
                    {
                      if ( v56 )
                        v28 = v56;
                      v56 = v28;
                    }
                    v27 = v26 & (v57 + v27);
                    v28 = (_QWORD *)(v25 + 8LL * v27);
                    v29 = *v28;
                    if ( v30 == *v28 )
                      break;
                    if ( v29 == -4096 )
                    {
                      if ( v56 )
                        v28 = v56;
                      break;
                    }
                    ++v57;
                  }
                }
                *v28 = v30;
                *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
              }
              ++v24;
            }
            while ( v18 != (__m128i *)v24 );
          }
          return (__int64 *)operator delete(v8, v16, 8);
        }
        v19 = v14;
      }
      else
      {
        v19 = a1 + 8;
        v20 = (__m128i *)(a1 + 8);
        v21 = 8;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      v23 = &v20[v21 >> 1];
      do
        *v20++ = si128;
      while ( v23 != v20 );
      v20 = (__m128i *)(v19 + 8 * (v21 & 0xFFFFFFFFFFFFFFFELL));
      if ( v21 == (v21 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v11 = (v10 | (v10 >> 16)) + 1;
    v6 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__m128i *)(a1 + 8);
      v10 = a1 + 72;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 8LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 512;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
        goto LABEL_8;
      }
      v15 = (__m128i *)(a1 + 8);
      v10 = a1 + 72;
      v6 = 64;
    }
  }
  if ( v15->m128i_i64[0] == -4096 || v15->m128i_i64[0] == -8192 )
  {
    v31 = &v58;
  }
  else
  {
    v58 = v15->m128i_i64[0];
    v31 = &v59;
  }
  if ( (unsigned __int64 *)v10 != &v15->m128i_u64[1] )
  {
    v32 = v15->m128i_i64[1];
    if ( v32 != -4096 && v32 != -8192 )
      *v31++ = v32;
    if ( (__m128i *)v10 != &v15[1] )
    {
      v33 = v15[1].m128i_i64[0];
      if ( v33 != -4096 && v33 != -8192 )
        *v31++ = v33;
      if ( (unsigned __int64 *)v10 != &v15[1].m128i_u64[1] )
      {
        v34 = v15[1].m128i_i64[1];
        if ( v34 != -4096 && v34 != -8192 )
          *v31++ = v34;
        if ( (__m128i *)v10 != &v15[2] )
        {
          v35 = v15[2].m128i_i64[0];
          if ( v35 != -4096 && v35 != -8192 )
            *v31++ = v35;
          if ( (unsigned __int64 *)v10 != &v15[2].m128i_u64[1] )
          {
            v36 = v15[2].m128i_i64[1];
            if ( v36 != -4096 && v36 != -8192 )
              *v31++ = v36;
            if ( (__m128i *)v10 != &v15[3] )
            {
              v37 = v15[3].m128i_i64[0];
              if ( v37 != -4096 && v37 != -8192 )
                *v31++ = v37;
              if ( (unsigned __int64 *)v10 != &v15[3].m128i_u64[1] )
              {
                v38 = v15[3].m128i_i64[1];
                if ( v38 != -8192 && v38 != -4096 )
                  *v31++ = v38;
                if ( (__m128i *)v10 != &v15[4] )
                {
                  v39 = v15[4].m128i_i64[0];
                  if ( v39 != -4096 && v39 != -8192 )
                    *v31++ = v39;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v40 = sub_22300B0(8LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v40;
    v8 = (__m128i *)v40;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v41 = v8;
    v42 = 8LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v41 = v15;
    v42 = 64;
  }
  if ( v41 != (__m128i *)&v41->m128i_i8[v42] )
  {
    v43 = v41;
    v44 = ((unsigned __int64)(v42 - 8) >> 3) + 1;
    if ( v42 == 8 )
      goto LABEL_70;
    v45 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
      *v43++ = v45;
    while ( &v41[v44 >> 1] != v43 );
    v41 = (__m128i *)((char *)v41 + 8 * (v44 & 0xFFFFFFFFFFFFFFFELL));
    if ( v44 != (v44 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_70:
      v41->m128i_i64[0] = -4096;
  }
  for ( result = &v58; result != v31; ++result )
  {
    v30 = *result;
    if ( *result != -8192 && v30 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v47 = (__int64 *)v15;
        v48 = 7;
      }
      else
      {
        v52 = *(_DWORD *)(a1 + 16);
        if ( !v52 )
        {
LABEL_114:
          *(_QWORD *)&dword_0 = v30;
          BUG();
        }
        v48 = v52 - 1;
        v47 = (__int64 *)v8;
      }
      v49 = v48 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
      v50 = &v47[v49];
      v51 = *v50;
      if ( v30 != *v50 )
      {
        v54 = 1;
        v55 = nullptr;
        if ( v51 != -4096 )
        {
          while ( 1 )
          {
            if ( v51 == -8192 && !v55 )
              v55 = v50;
            v49 = v48 & (v54 + v49);
            v50 = &v47[v49];
            v51 = *v50;
            if ( v30 == *v50 )
              break;
            if ( v51 == -4096 )
            {
              if ( v55 )
                v50 = v55;
              break;
            }
            ++v54;
          }
        }
      }
      *v50 = v30;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
