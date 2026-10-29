_QWORD *__fastcall sub_13C6BC0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  _QWORD *v14; // r15
  _QWORD *i; // rdx
  _QWORD *v16; // rbp
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // r13
  __int64 v22; // rdi
  __m128i si128; // xmm1
  void *v24; // rax
  _QWORD *v25; // r8
  unsigned __int64 v26; // r9
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *j; // rdx
  size_t v31; // rdx
  int v32; // r8d
  __int64 v33; // r9
  unsigned __int64 v34; // [rsp+0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+0h] [rbp-48h]
  _QWORD *v36; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(96LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 96 * v8;
    v14 = &v9[12 * v8];
    for ( i = &result[12 * v12]; i != result; result += 12 )
      *result = -4096;
    v16 = v9;
    if ( v14 != v9 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( *v16 == -8192 || v17 == -4096 )
          goto LABEL_15;
        v18 = *(_DWORD *)(a1 + 16);
        if ( !v18 )
        {
          *(_QWORD *)&dword_0 = *v16;
          BUG();
        }
        v19 = v18 - 1;
        v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
        v21 = *(_QWORD *)a1 + 96LL * v20;
        v22 = *(_QWORD *)v21;
        if ( *(_QWORD *)v21 != v17 )
        {
          v32 = 1;
          v33 = 0;
          if ( v22 != -4096 )
          {
            while ( 1 )
            {
              if ( v22 == -8192 && !v33 )
                v33 = v21;
              v20 = v19 & (v32 + v20);
              v21 = *(_QWORD *)a1 + 96LL * v20;
              v22 = *(_QWORD *)v21;
              if ( v17 == *(_QWORD *)v21 )
                break;
              if ( v22 == -4096 )
              {
                if ( v33 )
                  v21 = v33;
                break;
              }
              ++v32;
            }
          }
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
        *(_QWORD *)v21 = v17;
        v24 = (void *)(v21 + 32);
        v25 = v16 + 4;
        *(_QWORD *)(v21 + 8) = v21 + 32;
        *(__m128i *)(v21 + 16) = si128;
        v26 = v16[2];
        if ( !v26 )
          break;
        v27 = (_QWORD *)v16[1];
        if ( (_QWORD *)(v21 + 8) == v16 + 1 )
          goto LABEL_13;
        if ( v25 == v27 )
        {
          v31 = v16[2];
          if ( v26 <= 0x40
            || (v35 = v16[2],
                sub_2236E10(v21 + 8, v21 + 32, v31, 1),
                v31 = v16[2],
                v24 = *(void **)(v21 + 8),
                v27 = (_QWORD *)v16[1],
                v26 = v35,
                v25 = v16 + 4,
                v31) )
          {
            v36 = v25;
            v34 = v26;
            memcpy(v24, v27, v31);
            v27 = (_QWORD *)v16[1];
            v25 = v36;
            v26 = v34;
          }
          *(_QWORD *)(v21 + 16) = v26;
          v16[2] = 0;
          goto LABEL_13;
        }
        *(_QWORD *)(v21 + 16) = v26;
        v28 = v16[3];
        *(_QWORD *)(v21 + 8) = v27;
        *(_QWORD *)(v21 + 24) = v28;
        v16[1] = v25;
        *((_OWORD *)v16 + 1) = 0;
        ++*(_DWORD *)(a1 + 8);
LABEL_15:
        v16 += 12;
        if ( v14 == v16 )
          return (_QWORD *)operator delete(v9, v13, 8);
      }
      v27 = (_QWORD *)v16[1];
LABEL_13:
      ++*(_DWORD *)(a1 + 8);
      if ( v25 != v27 )
        free(v27);
      goto LABEL_15;
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v29 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[12 * v29]; j != result; result += 12 )
      *result = -4096;
  }
  return result;
}
