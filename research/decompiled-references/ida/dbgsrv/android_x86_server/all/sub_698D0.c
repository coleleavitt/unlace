/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_698D0
// Address: 0x000698D0

//----- (000698D0) --------------------------------------------------------
char *__cdecl sub_698D0(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // ecx
  unsigned __int8 *v3; // edi
  unsigned int v4; // ecx
  bool v5; // cf
  unsigned int v6; // eax
  size_t v7; // edx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // ecx
  unsigned __int8 *v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // ebx
  void **v15; // eax
  char *v16; // esi
  unsigned int v17; // eax
  unsigned __int8 v18; // cl
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  __m128i v22; // xmm2
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  int v26; // edi
  int *v27; // ebx
  _BOOL4 v28; // ecx
  unsigned int v29; // edi
  int v30; // ecx
  _DWORD *v31; // eax
  unsigned int v32; // eax
  size_t v34; // [esp+10h] [ebp-3Ch]
  unsigned int v35; // [esp+14h] [ebp-38h]
  unsigned int v36; // [esp+18h] [ebp-34h]
  unsigned int v37; // [esp+20h] [ebp-2Ch]
  unsigned int v38; // [esp+24h] [ebp-28h]
  float v39; // [esp+30h] [ebp-1Ch]

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
  v34 = v7;
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
    v11 = (v34 - 4) & 0xFFFFFFFC;
    v8 = &v3[v11 + 4];
    v7 = v34 - 4 - v11;
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
  v35 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
  v12 = *(_DWORD *)(a1 + 4);
  v36 = v12;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( (v12 & (v12 - 1)) != 0 )
    {
      v14 = (1540483477 * (v6 ^ (v6 >> 13))) ^ ((1540483477 * (v6 ^ (v6 >> 13))) >> 15);
      if ( v35 >= v12 )
      {
        v14 = v35 % v12;
        v12 = *(_DWORD *)(a1 + 4);
      }
    }
    else
    {
      v14 = v13 & v35;
    }
    v15 = *(void ***)(*(_DWORD *)a1 + 4 * v14);
    v37 = v14;
    if ( v15 )
    {
      v38 = v13;
      v16 = (char *)*v15;
      if ( *v15 )
      {
        do
        {
          v17 = *((_DWORD *)v16 + 1);
          if ( v17 == v35 )
            goto LABEL_29;
          if ( (v12 & v38) != 0 )
          {
            if ( v17 >= v12 )
            {
              if ( v17 % v36 != v14 )
                break;
              goto LABEL_29;
            }
          }
          else
          {
            v17 &= v38;
          }
          if ( v17 != v14 )
            break;
LABEL_29:
          v18 = v16[8];
          v19 = v18 >> 1;
          if ( (v18 & 1) != 0 )
            v19 = *((_DWORD *)v16 + 3);
          if ( v19 == v34 )
          {
            if ( (v18 & 1) != 0 )
            {
              if ( !v34 )
                return v16 + 20;
              v14 = v37;
              if ( !memcmp(*((const void **)v16 + 4), v3, v34) )
                return v16 + 20;
            }
            else
            {
              if ( !v34 )
                return v16 + 20;
              v20 = 0;
              while ( v16[v20 + 9] == v3[v20] )
              {
                if ( (unsigned __int8)v16[8] >> 1 == ++v20 )
                  return v16 + 20;
              }
            }
          }
          v16 = *(char **)v16;
          v12 = v36;
        }
        while ( v16 );
      }
    }
  }
  v16 = (char *)operator new(0x18u);
  *((_DWORD *)v16 + 4) = *((_DWORD *)a2 + 2);
  *((_QWORD *)v16 + 1) = *(_QWORD *)a2;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  *((_WORD *)v16 + 10) = 0;
  *((_DWORD *)v16 + 1) = v35;
  *(_DWORD *)v16 = 0;
  v21 = v36;
  v22 = _mm_loadl_epi64((const __m128i *)&qword_13ACD8 - 17908);
  v23 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 12) + 1), v22).m128i_i64 - *(double *)v22.m128i_i64;
  v24 = *(float *)(a1 + 16);
  if ( v36
    && (v25 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(v36), v22).m128i_i64 - *(double *)v22.m128i_i64,
        v23 <= (float)(v25 * v24)) )
  {
    v26 = v37;
    v27 = (int *)a1;
  }
  else
  {
    v28 = 1;
    if ( v36 >= 3 )
      v28 = (v36 & (v36 - 1)) != 0;
    v29 = (2 * v36) | v28;
    v39 = ceilf(v23 / v24);
    if ( v29 < (unsigned int)(__int64)v39 )
      v29 = (__int64)v39;
    sub_75930(a1, v29);
    v21 = *(_DWORD *)(a1 + 4);
    v27 = (int *)a1;
    v26 = v35;
    if ( (v21 & (v21 - 1)) != 0 )
    {
      if ( v35 >= v21 )
        v26 = v35 % v21;
    }
    else
    {
      v26 = (v21 - 1) & v35;
    }
  }
  v30 = *v27;
  v31 = *(_DWORD **)(*v27 + 4 * v26);
  if ( v31 )
  {
    *(_DWORD *)v16 = *v31;
LABEL_60:
    *v31 = v16;
    goto LABEL_61;
  }
  *(_DWORD *)v16 = v27[2];
  v27[2] = (int)v16;
  *(_DWORD *)(v30 + 4 * v26) = v27 + 2;
  if ( *(_DWORD *)v16 )
  {
    v32 = *(_DWORD *)(*(_DWORD *)v16 + 4);
    if ( (v21 & (v21 - 1)) != 0 )
    {
      if ( v32 >= v21 )
        v32 %= v21;
    }
    else
    {
      v32 &= v21 - 1;
    }
    v31 = (_DWORD *)(*v27 + 4 * v32);
    goto LABEL_60;
  }
LABEL_61:
  ++v27[3];
  return v16 + 20;
}
// 69B5D: variable 'v37' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
