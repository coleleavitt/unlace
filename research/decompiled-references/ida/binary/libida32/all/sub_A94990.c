__int64 __fastcall sub_A94990(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  bool v16; // zf
  __int64 *v17; // r13
  __int64 v18; // r8
  __m128i *v19; // rdx
  unsigned __int64 v20; // rcx
  __m128i si128; // xmm0
  __m128i *v22; // rdi
  __int64 *i; // rdi
  __int64 v24; // r9
  int v25; // r10d
  unsigned int v26; // ecx
  _QWORD *v27; // r8
  __int64 v28; // r11
  __int64 v29; // rdx
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 result; // rax
  unsigned __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 *j; // rdx
  __int64 *v42; // r8
  int v43; // edi
  unsigned int v44; // ecx
  __int64 *v45; // rsi
  __int64 v46; // r9
  int v47; // ecx
  __int64 v48; // rdi
  int v49; // r10d
  __int64 *v50; // r11
  _QWORD *v51; // [rsp+8h] [rbp-70h]
  int v52; // [rsp+14h] [rbp-64h]
  __int64 v53; // [rsp+20h] [rbp-58h] BYREF
  __int64 v54; // [rsp+28h] [rbp-50h] BYREF

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
      v16 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v17 = &v8[v12];
      if ( v16 )
      {
        v48 = 8LL * v6;
        if ( v14 == v14 + v48 )
          goto LABEL_14;
        v19 = (__m128i *)v14;
        v20 = ((unsigned __int64)(v48 - 8) >> 3) + 1;
        if ( v48 == 8 )
        {
LABEL_13:
          v19->m128i_i64[0] = -4096;
LABEL_14:
          for ( i = v8; v17 != i; ++i )
          {
            v29 = *i;
            if ( *i != -4096 && v29 != -8192 )
            {
              if ( (*(_BYTE *)a1 & 1) != 0 )
              {
                v24 = a1 + 8;
                v25 = 3;
              }
              else
              {
                if ( !v6 )
                {
                  *(_QWORD *)&dword_0 = *i;
                  BUG();
                }
                v25 = v6 - 1;
                v24 = v14;
              }
              v26 = v25 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
              v27 = (_QWORD *)(v24 + 8LL * v26);
              v28 = *v27;
              if ( *v27 != v29 && v28 != -4096 )
              {
                v52 = 1;
                v51 = nullptr;
                while ( 1 )
                {
                  if ( v28 == -8192 )
                  {
                    if ( v51 )
                      v27 = v51;
                    v51 = v27;
                  }
                  v26 = v25 & (v52 + v26);
                  v27 = (_QWORD *)(v24 + 8LL * v26);
                  v28 = *v27;
                  if ( v29 == *v27 )
                    break;
                  if ( v28 == -4096 )
                  {
                    if ( v51 )
                      v27 = v51;
                    break;
                  }
                  ++v52;
                }
              }
              *v27 = v29;
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
          return operator delete();
        }
        v18 = v14;
      }
      else
      {
        v18 = a1 + 8;
        v19 = (__m128i *)(a1 + 8);
        v20 = 4;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      v22 = &v19[v20 >> 1];
      do
        *v19++ = si128;
      while ( v22 != v19 );
      v19 = (__m128i *)(v18 + 8 * (v20 & 0xFFFFFFFFFFFFFFFELL));
      if ( v20 == (v20 & 0xFFFFFFFFFFFFFFFELL) )
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
        v14 = sub_220C370(v13, 8, v10, v9, a5, a6);
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
    v30 = &v53;
  }
  else
  {
    v53 = *v15;
    v30 = &v54;
  }
  if ( (__int64 *)v10 != v15 + 1 )
  {
    v31 = v15[1];
    if ( v31 != -4096 && v31 != -8192 )
      *v30++ = v31;
    if ( (__int64 *)v10 != v15 + 2 )
    {
      v32 = v15[2];
      if ( v32 != -4096 && v32 != -8192 )
        *v30++ = v32;
      if ( (__int64 *)v10 != v15 + 3 )
      {
        v33 = v15[3];
        if ( v33 != -4096 && v33 != -8192 )
          *v30++ = v33;
        if ( (__int64 *)v10 != v15 + 4 )
        {
          v34 = v15[4];
          if ( v34 != -4096 && v34 != -8192 )
            *v30++ = v34;
        }
      }
    }
  }
  if ( v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v35 = sub_220C370(8LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v35;
    v8 = (__int64 *)v35;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    v36 = v8;
    v37 = *(unsigned int *)(a1 + 16);
  }
  else
  {
    v36 = v15;
    v37 = 4;
  }
  result = (__int64)&v36[v37];
  if ( v36 != &v36[v37] )
  {
    result = (__int64)v36;
    v39 = ((unsigned __int64)(v37 * 8 - 8) >> 3) + 1;
    if ( v37 == 1 )
      goto LABEL_54;
    v40 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
    do
    {
      *(__m128i *)result = v40;
      result += 16;
    }
    while ( &v36[2 * (v39 >> 1)] != (__int64 *)result );
    result = v39 & 0xFFFFFFFFFFFFFFFELL;
    v36 += v39 & 0xFFFFFFFFFFFFFFFELL;
    if ( v39 != (v39 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_54:
      *v36 = -4096;
  }
  for ( j = &v53; j != v30; ++j )
  {
    result = *j;
    if ( *j != -8192 && result != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v42 = v15;
        v43 = 3;
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 16);
        if ( !v47 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v43 = v47 - 1;
        v42 = v8;
      }
      v44 = v43 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
      v45 = &v42[v44];
      v46 = *v45;
      if ( result != *v45 )
      {
        v49 = 1;
        v50 = nullptr;
        if ( v46 != -4096 )
        {
          while ( 1 )
          {
            if ( v46 == -8192 && !v50 )
              v50 = v45;
            v44 = v43 & (v49 + v44);
            v45 = &v42[v44];
            v46 = *v45;
            if ( result == *v45 )
              break;
            if ( v46 == -4096 )
            {
              if ( v50 )
                v45 = v50;
              break;
            }
            ++v49;
          }
        }
      }
      *v45 = result;
      result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}

