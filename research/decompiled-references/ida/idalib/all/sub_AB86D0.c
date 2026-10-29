__int64 __fastcall sub_AB86D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rsi
  bool v17; // zf
  __int64 *v18; // r13
  __int64 v19; // r8
  __m128i *v20; // rdx
  unsigned __int64 v21; // rcx
  __m128i si128; // xmm0
  __m128i *v23; // rdi
  __int64 *i; // rdi
  __int64 v25; // r9
  int v26; // r10d
  unsigned int v27; // ecx
  _QWORD *v28; // r8
  __int64 v29; // r11
  __int64 v30; // rdx
  __int64 *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 result; // rax
  unsigned __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 *j; // rdx
  __int64 *v43; // r8
  int v44; // edi
  unsigned int v45; // ecx
  __int64 *v46; // rsi
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rdi
  int v50; // r10d
  __int64 *v51; // r11
  _QWORD *v52; // [rsp+8h] [rbp-70h]
  int v53; // [rsp+14h] [rbp-64h]
  __int64 v54; // [rsp+20h] [rbp-58h] BYREF
  __int64 v55; // [rsp+28h] [rbp-50h] BYREF

  v6 = a2;
  v8 = *(__int64 **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 40;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
LABEL_8:
      v16 = v12;
      v17 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v18 = &v8[v16];
      if ( v17 )
      {
        v49 = 8LL * v6;
        if ( v14 == v14 + v49 )
          goto LABEL_14;
        v20 = (__m128i *)v14;
        v21 = ((unsigned __int64)(v49 - 8) >> 3) + 1;
        if ( v49 == 8 )
        {
LABEL_13:
          v20->m128i_i64[0] = -4096;
LABEL_14:
          for ( i = v8; v18 != i; ++i )
          {
            v30 = *i;
            if ( *i != -4096 && v30 != -8192 )
            {
              if ( (*(_BYTE *)a1 & 1) != 0 )
              {
                v25 = a1 + 8;
                v26 = 3;
              }
              else
              {
                if ( !v6 )
                {
                  *(_QWORD *)&dword_0 = *i;
                  BUG();
                }
                v26 = v6 - 1;
                v25 = v14;
              }
              v27 = v26 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
              v28 = (_QWORD *)(v25 + 8LL * v27);
              v29 = *v28;
              if ( *v28 != v30 && v29 != -4096 )
              {
                v53 = 1;
                v52 = nullptr;
                while ( 1 )
                {
                  if ( v29 == -8192 )
                  {
                    if ( v52 )
                      v28 = v52;
                    v52 = v28;
                  }
                  v27 = v26 & (v53 + v27);
                  v28 = (_QWORD *)(v25 + 8LL * v27);
                  v29 = *v28;
                  if ( v30 == *v28 )
                    break;
                  if ( v29 == -4096 )
                  {
                    if ( v52 )
                      v28 = v52;
                    break;
                  }
                  ++v53;
                }
              }
              *v28 = v30;
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
          return operator delete(v8, v16 * 8, 8);
        }
        v19 = v14;
      }
      else
      {
        v19 = a1 + 8;
        v20 = (__m128i *)(a1 + 8);
        v21 = 4;
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
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 40;
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
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 40;
      v6 = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v31 = &v54;
  }
  else
  {
    v54 = *v15;
    v31 = &v55;
  }
  if ( (__int64 *)v10 != v15 + 1 )
  {
    v32 = v15[1];
    if ( v32 != -4096 && v32 != -8192 )
      *v31++ = v32;
    if ( (__int64 *)v10 != v15 + 2 )
    {
      v33 = v15[2];
      if ( v33 != -4096 && v33 != -8192 )
        *v31++ = v33;
      if ( (__int64 *)v10 != v15 + 3 )
      {
        v34 = v15[3];
        if ( v34 != -4096 && v34 != -8192 )
          *v31++ = v34;
        if ( (__int64 *)v10 != v15 + 4 )
        {
          v35 = v15[4];
          if ( v35 != -4096 && v35 != -8192 )
            *v31++ = v35;
        }
      }
    }
  }
  if ( v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v36 = sub_22300B0(8LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v36;
    v8 = (__int64 *)v36;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v37 = v8;
    v38 = *(unsigned int *)(a1 + 16);
  }
  else
  {
    v37 = v15;
    v38 = 4;
  }
  result = (__int64)&v37[v38];
  if ( v37 != &v37[v38] )
  {
    result = (__int64)v37;
    v40 = ((unsigned __int64)(v38 * 8 - 8) >> 3) + 1;
    if ( v38 == 1 )
      goto LABEL_54;
    v41 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
    {
      *(__m128i *)result = v41;
      result += 16;
    }
    while ( &v37[2 * (v40 >> 1)] != (__int64 *)result );
    result = v40 & 0xFFFFFFFFFFFFFFFELL;
    v37 += v40 & 0xFFFFFFFFFFFFFFFELL;
    if ( v40 != (v40 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_54:
      *v37 = -4096;
  }
  for ( j = &v54; j != v31; ++j )
  {
    result = *j;
    if ( *j != -8192 && result != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v43 = v15;
        v44 = 3;
      }
      else
      {
        v48 = *(_DWORD *)(a1 + 16);
        if ( !v48 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v44 = v48 - 1;
        v43 = v8;
      }
      v45 = v44 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
      v46 = &v43[v45];
      v47 = *v46;
      if ( result != *v46 )
      {
        v50 = 1;
        v51 = nullptr;
        if ( v47 != -4096 )
        {
          while ( 1 )
          {
            if ( v47 == -8192 && !v51 )
              v51 = v46;
            v45 = v44 & (v50 + v45);
            v46 = &v43[v45];
            v47 = *v46;
            if ( result == *v46 )
              break;
            if ( v47 == -4096 )
            {
              if ( v51 )
                v46 = v51;
              break;
            }
            ++v50;
          }
        }
      }
      *v46 = result;
      result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}
