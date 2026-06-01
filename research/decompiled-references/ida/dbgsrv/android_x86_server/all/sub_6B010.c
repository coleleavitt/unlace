/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B010
// Address: 0x0006B010

//----- (0006B010) --------------------------------------------------------
void __cdecl sub_6B010(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned __int8 *v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  _DWORD *v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // edx
  int **v15; // eax
  int *i; // edi
  unsigned int v17; // eax
  unsigned __int8 v18; // dl
  int v19; // ecx
  int v20; // ecx
  _DWORD *v21; // edi
  __m128i si128; // xmm3
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  int v26; // edx
  int *v27; // edi
  _BOOL4 v28; // ebx
  unsigned int v29; // edi
  unsigned int v30; // ecx
  int v31; // ecx
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
  unsigned int v34; // eax
  _DWORD *v35; // [esp+10h] [ebp-5Ch]
  _DWORD *v36; // [esp+10h] [ebp-5Ch]
  unsigned int v37; // [esp+14h] [ebp-58h]
  size_t v38; // [esp+18h] [ebp-54h]
  unsigned int v39; // [esp+1Ch] [ebp-50h]
  unsigned int v40; // [esp+20h] [ebp-4Ch]
  unsigned int *v41; // [esp+24h] [ebp-48h]
  _DWORD *v42; // [esp+28h] [ebp-44h]
  unsigned int v43; // [esp+2Ch] [ebp-40h]
  float v44; // [esp+38h] [ebp-34h]
  __m128i v45[2]; // [esp+40h] [ebp-2Ch] BYREF

  v2 = a1;
  a1[1] = 0;
  *a1 = 0;
  a1[3] = 0;
  a1[2] = 0;
  a1[4] = a2[4];
  sub_75EF0((int)a1, a2[1]);
  v3 = a2[2];
  if ( v3 )
  {
    v42 = a1 + 2;
    v45[0] = (__m128i)0x4330000000000000uLL;
    while ( 1 )
    {
      v4 = *(unsigned __int8 *)(v3 + 8);
      if ( (v4 & 1) != 0 )
      {
        v5 = *(unsigned __int8 **)(v3 + 16);
        v6 = *(_DWORD *)(v3 + 12);
      }
      else
      {
        v5 = (unsigned __int8 *)(v3 + 9);
        v6 = v4 >> 1;
      }
      v7 = v6;
      v35 = v5;
      v38 = v6;
      if ( v6 >= 4 )
      {
        v8 = v3;
        v7 = v6;
        v9 = v6;
        v10 = v35;
        do
        {
          v7 = (1540483477 * ((1540483477 * *v10) ^ ((unsigned int)(1540483477 * *v10) >> 24))) ^ (1540483477 * v7);
          ++v10;
          v9 -= 4;
        }
        while ( v9 > 3 );
        v11 = (v38 - 4) & 0xFFFFFFFC;
        v5 = (unsigned __int8 *)v35 + v11 + 4;
        v6 = v38 - 4 - v11;
        v2 = a1;
        v3 = v8;
      }
      v41 = (unsigned int *)v3;
      if ( v6 == 1 )
        goto LABEL_15;
      if ( v6 == 2 )
        goto LABEL_14;
      if ( v6 == 3 )
        break;
LABEL_16:
      v12 = (1540483477 * (v7 ^ (v7 >> 13))) ^ ((1540483477 * (v7 ^ (v7 >> 13))) >> 15);
      v13 = v2[1];
      v39 = v12;
      v37 = v13;
      if ( v13 )
      {
        v43 = v13 - 1;
        if ( (v13 & (v13 - 1)) != 0 )
        {
          v14 = (1540483477 * (v7 ^ (v7 >> 13))) ^ ((1540483477 * (v7 ^ (v7 >> 13))) >> 15);
          if ( v12 >= v13 )
          {
            v14 = v12 % v13;
            v13 = v2[1];
            v12 = (1540483477 * (v7 ^ (v7 >> 13))) ^ ((1540483477 * (v7 ^ (v7 >> 13))) >> 15);
          }
        }
        else
        {
          v14 = (v13 - 1) & v12;
        }
        v40 = v14;
        v15 = *(int ***)(*v2 + 4 * v14);
        if ( v15 )
        {
          for ( i = *v15; i; v13 = v37 )
          {
            v17 = i[1];
            if ( v17 == v12 )
              goto LABEL_30;
            if ( (v13 & v43) != 0 )
            {
              if ( v17 >= v13 )
              {
                if ( v17 % v37 != v40 )
                  break;
                goto LABEL_30;
              }
            }
            else
            {
              v17 &= v43;
            }
            if ( v17 != v40 )
              break;
LABEL_30:
            v18 = *((_BYTE *)i + 8);
            v19 = v18 >> 1;
            if ( (v18 & 1) != 0 )
              v19 = i[3];
            if ( v19 == v38 )
            {
              if ( (v18 & 1) != 0 )
              {
                if ( !v38 || !memcmp((const void *)i[4], v35, v38) )
                  goto LABEL_63;
              }
              else
              {
                if ( !v38 )
                  goto LABEL_63;
                v20 = 0;
                while ( *((_BYTE *)i + v20 + 9) == *((_BYTE *)v35 + v20) )
                {
                  if ( *((unsigned __int8 *)i + 8) >> 1 == ++v20 )
                    goto LABEL_63;
                }
              }
            }
            i = (int *)*i;
            v12 = v39;
          }
        }
      }
      v21 = operator new(0x24u);
      sub_762D0(v21 + 2, (int)(v41 + 2));
      v21[1] = v39;
      v36 = v21;
      *v21 = 0;
      si128 = _mm_load_si128(v45);
      v23 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(a1[3] + 1), si128).m128i_i64 - *(double *)si128.m128i_i64;
      v24 = *((float *)a1 + 4);
      if ( v37
        && (v25 = *(double *)_mm_or_si128(_mm_cvtsi32_si128(v37), si128).m128i_i64 - *(double *)si128.m128i_i64,
            v23 <= (float)(v25 * v24)) )
      {
        v26 = v40;
        v27 = a1;
      }
      else
      {
        v28 = 1;
        if ( v37 >= 3 )
          v28 = (v37 & (v37 - 1)) != 0;
        v29 = (2 * v37) | v28;
        v44 = ceilf(v23 / v24);
        if ( v29 < (unsigned int)(__int64)v44 )
          v29 = (__int64)v44;
        sub_75EF0((int)a1, v29);
        v30 = a1[1];
        v27 = a1;
        v26 = v39;
        v37 = v30;
        if ( (v30 & (v30 - 1)) != 0 )
        {
          if ( v39 >= v30 )
            v26 = v39 % v30;
        }
        else
        {
          v26 = (v30 - 1) & v39;
        }
      }
      v31 = *v27;
      v32 = *(_DWORD **)(*v27 + 4 * v26);
      if ( v32 )
      {
        *v36 = *v32;
        v33 = v36;
      }
      else
      {
        *v36 = *v42;
        *v42 = v36;
        *(_DWORD *)(v31 + 4 * v26) = v42;
        if ( !*v36 )
          goto LABEL_62;
        v34 = *(_DWORD *)(*v36 + 4);
        if ( (v37 & (v37 - 1)) != 0 )
        {
          if ( v34 >= v37 )
            v34 %= v37;
        }
        else
        {
          v34 &= v37 - 1;
        }
        v33 = v36;
        v32 = (_DWORD *)(*v27 + 4 * v34);
      }
      *v32 = v33;
LABEL_62:
      ++v27[3];
LABEL_63:
      v3 = *v41;
      v2 = a1;
      if ( !*v41 )
        return;
    }
    v7 ^= v5[2] << 16;
LABEL_14:
    v7 ^= v5[1] << 8;
LABEL_15:
    v7 = 1540483477 * (v7 ^ *v5);
    goto LABEL_16;
  }
}
// 6B322: variable 'v40' is possibly undefined
