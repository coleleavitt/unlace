unsigned __int64 __fastcall sub_16BAAD0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rsi
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rbp
  __m128i *v9; // r8
  int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // ecx
  __m128i *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __m128i v17; // xmm0
  __m128i *v18; // r11
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // [rsp+0h] [rbp-1Ch]

  v1 = a1[11];
  v2 = v1 & 1;
  if ( (v1 & 1) != 0 )
  {
    v1 = 2 * ((v1 >> 58 << 57) | ~((-1LL << (v1 >> 58)) | (v1 >> 1))) + 1;
    a1[11] = v1;
    goto LABEL_3;
  }
  v9 = *(__m128i **)v1;
  v10 = *(_DWORD *)(v1 + 64);
  v11 = *(unsigned int *)(v1 + 8);
  v12 = *(_QWORD *)v1 + v11 * 8;
  v13 = v10 & 0x3F;
  if ( *(_QWORD *)v1 == v12 )
  {
    if ( (v10 & 0x3F) == 0 )
      goto LABEL_19;
    goto LABEL_28;
  }
  v14 = *(__m128i **)v1;
  v15 = v12 - (_QWORD)v9 - 8;
  v16 = (v15 >> 3) + 1;
  if ( !v15 )
    goto LABEL_15;
  do
  {
    v17 = _mm_loadu_si128(v14++);
    v14[-1] = _mm_xor_si128(v17, (__m128i)-1LL);
  }
  while ( &v9[v16 >> 1] != v14 );
  v14 = (__m128i *)((char *)v9 + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
  if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_15:
    v14->m128i_i64[0] = ~v14->m128i_i64[0];
  if ( v13 )
LABEL_28:
    v9->m128i_i64[v11 - 1] &= ~(-1LL << v13);
  v1 = a1[11];
  if ( (v1 & 1) == 0 )
  {
    v10 = *(_DWORD *)(v1 + 64);
LABEL_19:
    if ( v10 )
    {
      v18 = *(__m128i **)v1;
      v19 = (unsigned int)(v10 - 1) >> 6;
      v20 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v10;
      while ( 1 )
      {
        _RDX = v18->m128i_u64[v2];
        if ( v19 == (_DWORD)v2 )
          _RDX = v20 & v18->m128i_i64[v2];
        if ( _RDX )
          break;
        if ( v19 == v2 )
          goto LABEL_10;
        ++v2;
      }
      __asm { tzcnt   rdx, rdx }
      result = (unsigned int)(_RDX + ((_DWORD)v2 << 6));
      if ( (result & 0x80000000) == 0LL )
        goto LABEL_5;
    }
LABEL_10:
    result = a1[14];
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)result = -2;
    return result;
  }
LABEL_3:
  if ( !(~(-1LL << (v1 >> 58)) & (v1 >> 1)) )
    goto LABEL_10;
  __asm { tzcnt   rax, rax }
LABEL_5:
  v5 = a1[14];
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 != -2 )
  {
    v7 = a1[3];
    if ( (_DWORD)result == v6 )
    {
      result = *(unsigned int *)(v5 + 16);
      if ( result + 1 > *(unsigned int *)(v5 + 20) )
      {
        sub_2237220(v5 + 8, v5 + 24, result + 1, 8);
        result = *(unsigned int *)(v5 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * result) = v7;
      ++*(_DWORD *)(v5 + 16);
    }
    else if ( (int)result > v6 )
    {
      v22 = *(_DWORD *)(v5 + 20);
      *(_DWORD *)(v5 + 16) = 0;
      v23 = 0;
      if ( !v22 )
      {
        v24 = result;
        sub_2237220(v5 + 8, v5 + 24, 1, 8);
        result = v24;
        v23 = 8LL * *(unsigned int *)(v5 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + v23) = v7;
      *(_DWORD *)v5 = result;
      ++*(_DWORD *)(v5 + 16);
    }
  }
  return result;
}
