/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B560
// Address: 0x0006B560

//----- (0006B560) --------------------------------------------------------
char *__cdecl sub_6B560(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // ecx
  unsigned __int8 *v3; // esi
  unsigned int v4; // ecx
  bool v5; // cf
  unsigned int v6; // eax
  size_t v7; // edx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // ecx
  unsigned __int8 *v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // edx
  void **v16; // eax
  char *v17; // esi
  unsigned int v18; // eax
  unsigned __int8 v19; // cl
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // edx
  __m128i v23; // xmm2
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  int *v27; // ebx
  _BOOL4 v28; // ecx
  unsigned int v29; // ecx
  int v30; // ecx
  _DWORD *v31; // eax
  unsigned int v32; // eax
  unsigned int v34; // [esp+10h] [ebp-3Ch]
  unsigned __int8 *v35; // [esp+14h] [ebp-38h]
  unsigned int v36; // [esp+14h] [ebp-38h]
  size_t v37; // [esp+18h] [ebp-34h]
  unsigned int v38; // [esp+1Ch] [ebp-30h]
  unsigned int v39; // [esp+20h] [ebp-2Ch]
  unsigned int v40; // [esp+24h] [ebp-28h]
  float v41; // [esp+30h] [ebp-1Ch]

  v2 = *a2;
  if ( (v2 & 1) != 0 )
  {
    v3 = *((unsigned __int8 **)a2 + 2);
    v4 = *((_DWORD *)a2 + 1);
  }
  else
  {
    v3 = a2 + 1;
    v4 = v2 >> 1;
  }
  v5 = v4 < 4;
  v6 = v4;
  v7 = v4;
  v8 = v3;
  v37 = v7;
  v35 = v3;
  if ( !v5 )
  {
    v6 = v7;
    v9 = v7;
    v10 = v3;
    do
    {
      v6 = (1540483477 * ((1540483477 * *(_DWORD *)v10) ^ ((unsigned int)(1540483477 * *(_DWORD *)v10) >> 24)))
         ^ (1540483477 * v6);
      v10 += 4;
      v9 -= 4;
    }
    while ( v9 > 3 );
    v11 = (v37 - 4) & 0xFFFFFFFC;
    v8 = &v35[v11 + 4];
    v7 = v37 - 4 - v11;
  }
  switch ( v7 )
  {
    case 1u:
      goto LABEL_13;
    case 2u:
LABEL_12:
      v6 ^= v8[1] << 8;
LABEL_13:
      v6 = 1540483477 * (v6 ^ *v8);
      break;
    case 3u:
      v6 ^= v8[2] << 16;
      goto LABEL_12;
  }
  v12 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
  v13 = *(_DWORD *)(a1 + 4);
  v34 = v13;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( (v13 & (v13 - 1)) != 0 )
    {
      v15 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
      if ( v12 >= v13 )
      {
        v15 = v12 % v13;
        v13 = *(_DWORD *)(a1 + 4);
      }
    }
    else
    {
      v15 = v14 & v12;
    }
    v38 = v15;
    v16 = *(void ***)(*(_DWORD *)a1 + 4 * v15);
    if ( v16 )
    {
      v39 = v14;
      v17 = (char *)*v16;
      if ( *v16 )
      {
        v40 = v12;
        do
        {
          v18 = *((_DWORD *)v17 + 1);
          if ( v18 == v12 )
            goto LABEL_30;
          if ( (v13 & v39) != 0 )
          {
            if ( v18 >= v13 )
            {
              if ( v18 % v34 != v38 )
                break;
              goto LABEL_30;
            }
          }
          else
          {
            v18 &= v39;
          }
          if ( v18 != v38 )
            break;
LABEL_30:
          v19 = v17[8];
          v20 = v19 >> 1;
          if ( (v19 & 1) != 0 )
            v20 = *((_DWORD *)v17 + 3);
          if ( v20 == v37 )
          {
            if ( (v19 & 1) != 0 )
            {
              if ( !v37 || !memcmp(*((const void **)v17 + 4), v35, v37) )
                return v17 + 20;
            }
            else
            {
              if ( !v37 )
                return v17 + 20;
              v21 = 0;
              while ( v17[v21 + 9] == v35[v21] )
              {
                if ( (unsigned __int8)v17[8] >> 1 == ++v21 )
                  return v17 + 20;
              }
            }
          }
          v17 = *(char **)v17;
          v13 = v34;
          v12 = v40;
        }
        while ( v17 );
      }
    }
  }
  v17 = (char *)operator new(0x24u);
  *((_DWORD *)v17 + 4) = *((_DWORD *)a2 + 2);
  *((_QWORD *)v17 + 1) = *(_QWORD *)a2;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)v17 + 5) = 0;
  *(_DWORD *)(v17 + 30) = 0;
  *(_DWORD *)(v17 + 26) = 0;
  *((_DWORD *)v17 + 6) = 0;
  *((_DWORD *)v17 + 1) = v12;
  *(_DWORD *)v17 = 0;
  v22 = v34;
  v23 = _mm_loadl_epi64((const __m128i *)&qword_F4D98);
  v24 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 12) + 1), v23).m128i_i64 - *(double *)v23.m128i_i64;
  v25 = *(float *)(a1 + 16);
  if ( v34
    && (v26 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(v34), v23).m128i_i64 - *(double *)v23.m128i_i64,
        v24 <= (float)(v26 * v25)) )
  {
    v12 = v38;
    v27 = (int *)a1;
  }
  else
  {
    v28 = 1;
    if ( v34 >= 3 )
      v28 = (v34 & (v34 - 1)) != 0;
    v36 = (2 * v34) | v28;
    v41 = ceilf(v24 / v25);
    v29 = v36;
    if ( v36 < (unsigned int)(__int64)v41 )
      v29 = (__int64)v41;
    sub_75EF0(a1, v29);
    v22 = *(_DWORD *)(a1 + 4);
    v27 = (int *)a1;
    if ( (v22 & (v22 - 1)) != 0 )
    {
      if ( v12 >= v22 )
        v12 %= v22;
    }
    else
    {
      v12 &= v22 - 1;
    }
  }
  v30 = *v27;
  v31 = *(_DWORD **)(*v27 + 4 * v12);
  if ( v31 )
  {
    *(_DWORD *)v17 = *v31;
LABEL_61:
    *v31 = v17;
    goto LABEL_62;
  }
  *(_DWORD *)v17 = v27[2];
  v27[2] = (int)v17;
  *(_DWORD *)(v30 + 4 * v12) = v27 + 2;
  if ( *(_DWORD *)v17 )
  {
    v32 = *(_DWORD *)(*(_DWORD *)v17 + 4);
    if ( (v22 & (v22 - 1)) != 0 )
    {
      if ( v32 >= v22 )
        v32 %= v22;
    }
    else
    {
      v32 &= v22 - 1;
    }
    v31 = (_DWORD *)(*v27 + 4 * v32);
    goto LABEL_61;
  }
LABEL_62:
  ++v27[3];
  return v17 + 20;
}
// 6B7FB: variable 'v38' is possibly undefined
// F4D98: using guessed type __int64 qword_F4D98;
