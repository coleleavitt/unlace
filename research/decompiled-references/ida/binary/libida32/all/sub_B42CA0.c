__int64 __fastcall sub_B42CA0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // r13
  unsigned int v6; // edx
  __m128i v7; // xmm0
  unsigned int v8; // edx
  __int64 result; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 i; // rdx
  unsigned int v19; // edx
  unsigned int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __m128i v30[3]; // [rsp+8h] [rbp-30h] BYREF

  v1 = a1 + 8;
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)v3[2];
      v5 = (_QWORD *)*v3;
      if ( v4 == v3 + 4 )
      {
        operator delete(v3);
        if ( v5 == (_QWORD *)v1 )
          break;
      }
      else
      {
        free(v4);
        operator delete(v3);
        if ( v5 == (_QWORD *)v1 )
          break;
      }
      v3 = v5;
    }
  }
  v30[0].m128i_i64[0] = v1;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = _mm_loadl_epi64(v30);
  *(_QWORD *)(a1 + 24) = 0;
  v8 = v6 >> 1;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v7, v7);
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    {
      v10 = 4 * v8;
      goto LABEL_10;
    }
LABEL_25:
    v12 = (_QWORD *)(a1 + 40);
    v13 = 16;
    goto LABEL_13;
  }
  result = *(unsigned int *)(a1 + 36);
  if ( !(_DWORD)result )
    goto LABEL_16;
  v10 = 0;
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_25;
LABEL_10:
  v11 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v11 <= v10 || (unsigned int)v11 <= 0x40 )
  {
    v12 = *(_QWORD **)(a1 + 40);
    v13 = 2 * v11;
LABEL_13:
    for ( result = (__int64)&v12[v13]; (_QWORD *)result != v12; v12 += 2 )
      *v12 = 0;
    *(_QWORD *)(a1 + 32) &= 1uLL;
    goto LABEL_16;
  }
  if ( v8 && (v19 = v8 - 1) != 0 )
  {
    _BitScanReverse(&v19, v19);
    v20 = 1 << (33 - (v19 ^ 0x1F));
    if ( v20 - 9 > 0x36 )
    {
      if ( (_DWORD)v11 == v20 )
      {
        v16 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
        *(_QWORD *)(a1 + 32) &= 1uLL;
        if ( v16 )
        {
          v28 = *(_QWORD **)(a1 + 40);
          v29 = 2 * v11;
        }
        else
        {
          v28 = (_QWORD *)(a1 + 40);
          v29 = 16;
        }
        result = (__int64)&v28[v29];
        do
        {
          *v28 = 0;
          v28 += 2;
        }
        while ( (_QWORD *)result != v28 );
        goto LABEL_16;
      }
      operator delete();
      v25 = *(_BYTE *)(a1 + 32) | 1;
      *(_BYTE *)(a1 + 32) = v25;
      if ( v20 <= 8 )
        goto LABEL_29;
      v26 = 16LL * v20;
    }
    else
    {
      v20 = 64;
      operator delete();
      v25 = *(_BYTE *)(a1 + 32);
      v26 = 1024;
    }
    *(_BYTE *)(a1 + 32) = v25 & 0xFE;
    v27 = sub_220C370(v26, 8, v21, v22, v23, v24);
    *(_DWORD *)(a1 + 48) = v20;
    *(_QWORD *)(a1 + 40) = v27;
  }
  else
  {
    operator delete();
    *(_BYTE *)(a1 + 32) |= 1u;
  }
LABEL_29:
  v16 = (*(_QWORD *)(a1 + 32) & 1LL) == 0;
  *(_QWORD *)(a1 + 32) &= 1uLL;
  if ( v16 )
  {
    result = *(_QWORD *)(a1 + 40);
    v17 = 16LL * *(unsigned int *)(a1 + 48);
  }
  else
  {
    result = a1 + 40;
    v17 = 128;
  }
  for ( i = result + v17; i != result; result += 16 )
    *(_QWORD *)result = 0;
LABEL_16:
  if ( !*(_BYTE *)(a1 + 188) )
  {
    v14 = 4 * (*(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 184));
    v15 = *(unsigned int *)(a1 + 176);
    if ( v14 < 0x20 )
      v14 = 32;
    if ( (unsigned int)v15 > v14 )
    {
      result = sub_2212770(a1 + 168);
      goto LABEL_22;
    }
    result = (__int64)memset(*(void **)(a1 + 168), -1, 8 * v15);
  }
  *(_QWORD *)(a1 + 180) = 0;
LABEL_22:
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}

