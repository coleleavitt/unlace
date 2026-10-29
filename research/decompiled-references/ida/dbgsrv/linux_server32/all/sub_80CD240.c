/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD240
// Address: 0x080CD240

//----- (080CD240) --------------------------------------------------------
int __cdecl sub_80CD240(int a1, void *dest, int n)
{
  __m128i v3; // xmm1
  int result; // eax
  signed __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  char v14; // cl
  int v15; // [esp+10h] [ebp-48h]
  int v16; // [esp+14h] [ebp-44h]
  int v17; // [esp+18h] [ebp-40h]
  signed __int64 v18; // [esp+24h] [ebp-34h]
  int v19; // [esp+2Ch] [ebp-2Ch]

  if ( n < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v15, v16, v17);
    BUG();
  }
  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 16));
  result = 0;
  v18 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v3, 0x20u)), _mm_cvtsi128_si32(v3));
  if ( v18 >= 0 )
  {
    v5 = (unsigned int)n + v18;
    if ( !__OFSUB__(v5, v18) )
    {
      v6 = *(_DWORD *)(a1 + 32);
      if ( !v6 )
      {
        result = (***(int (__cdecl ****)(_DWORD, __int32, __int32, void *, int))(a1 + 4))(
                   *(_DWORD *)(a1 + 4),
                   v3.m128i_i32[0],
                   v3.m128i_i32[1],
                   dest,
                   n);
        if ( result < 0 )
          return result;
        n = result;
        goto LABEL_7;
      }
      if ( *(_QWORD *)(a1 + 8) >= v5 )
      {
LABEL_12:
        v19 = (v5 + v6 - 1LL) / v6;
        v7 = v3.m128i_i64[0] / (unsigned __int64)v6;
        if ( v19 >= v7 )
        {
          v8 = -1;
LABEL_14:
          if ( v19 != v7 )
          {
LABEL_15:
            while ( 1 )
            {
              v9 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 24) + ((unsigned int)v7 >> 3));
              if ( _bittest(&v9, v7 & 7) )
                break;
              if ( v8 == -1 )
              {
                if ( v19 < v7 + 1 )
                  goto LABEL_26;
                v8 = v7++;
                goto LABEL_14;
              }
              if ( v19 < ++v7 )
                goto LABEL_26;
              if ( v19 == v7 )
                goto LABEL_17;
            }
          }
          if ( v8 == -1 )
            goto LABEL_23;
LABEL_17:
          v10 = *(_DWORD *)(a1 + 32);
          v11 = v7 * v10;
          v12 = v8 * v10;
          if ( *(_QWORD *)(a1 + 8) < (__int64)(unsigned int)v11 )
            v11 = *(_DWORD *)(a1 + 8);
          if ( v11 - v12 < 0
            || v11 - v12 != (***(int (__cdecl ****)(_DWORD, int, _DWORD, int, int))(a1 + 4))(
                              *(_DWORD *)(a1 + 4),
                              v12,
                              0,
                              v12 + *(_DWORD *)(a1 + 28),
                              v11 - v12) )
          {
            return -1;
          }
          if ( v7 > v8 )
          {
            do
            {
              v13 = v8;
              v14 = v8++;
              *(_BYTE *)(*(_DWORD *)(a1 + 24) + (v13 >> 3)) |= 1 << (v14 & 7);
            }
            while ( v7 != v8 );
          }
LABEL_23:
          while ( v19 >= ++v7 )
          {
            if ( v19 != v7 )
            {
              v8 = -1;
              goto LABEL_15;
            }
          }
LABEL_26:
          LODWORD(v18) = *(_DWORD *)(a1 + 16);
        }
        memcpy(dest, (const void *)(*(_DWORD *)(a1 + 28) + v18), n);
        result = n;
LABEL_7:
        *(_QWORD *)(a1 + 16) += (unsigned int)n;
        return result;
      }
      if ( v18 < *(_QWORD *)(a1 + 8) )
      {
        v5 = *(_QWORD *)(a1 + 8);
        n = v5 - v18;
        goto LABEL_12;
      }
    }
  }
  return result;
}
// 80CD4C7: variable 'v15' is possibly undefined
// 80CD4C7: variable 'v16' is possibly undefined
// 80CD4C7: variable 'v17' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
