/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FAD0
// Address: 0x000000010000FAD0

//----- (000000010000FAD0) ----------------------------------------------------
__int64 __fastcall sub_10000FAD0(__int64 a1)
{
  __int64 v2; // r12
  int *v3; // r14
  int v4; // r15d
  unsigned __int32 v5; // eax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __m128i si128; // xmm0
  char *v14; // rdx
  __m128i v15; // xmm1
  unsigned int epi32; // esi
  unsigned __int64 v17; // rdx
  void *v18; // rdi
  unsigned __int64 v20; // [rsp+0h] [rbp-60h]
  void **v21; // [rsp+8h] [rbp-58h]
  __int128 v22; // [rsp+10h] [rbp-50h] BYREF
  int v23; // [rsp+20h] [rbp-40h]

  LODWORD(v2) = 0;
  qlseek(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 96), 0);
  v3 = (int *)(a1 + 60);
  if ( qlread(*(_QWORD *)(a1 + 48), (void *)(a1 + 60), 8) != 8 )
    return (unsigned int)v2;
  v4 = *v3;
  if ( *v3 == -1095041334 )
  {
    *(_DWORD *)(a1 + 60) = -889275714;
    v5 = _byteswap_ulong(*(_DWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 64) = v5;
    if ( v5 > 0x10 )
      goto LABEL_28;
  }
  else if ( v4 != -889275714 || *(_DWORD *)(a1 + 64) > 0x10u )
  {
    goto LABEL_28;
  }
  v6 = qlsize(*(_QWORD *)(a1 + 48));
  v7 = *(unsigned int *)(a1 + 64);
  v2 = (unsigned int)(20 * v7);
  if ( v2 + 8 >= v6 )
  {
LABEL_28:
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
  v8 = a1 + 72;
  v9 = *(_QWORD *)(a1 + 80);
  v20 = v2 + 8;
  v21 = (void **)(a1 + 72);
  if ( v9 >= v7 )
  {
    if ( v9 != v7 )
    {
      v22 = 0;
      v23 = 0;
      sub_10001D830((__int64)v21, v7, (unsigned __int64)&v22);
    }
  }
  else
  {
    v10 = *(char **)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < v7 )
    {
      v10 = (char *)qvector_reserve(v8, *(void **)(a1 + 72), v7, 0x14u);
      *(_QWORD *)(a1 + 72) = v10;
      v9 = *(_QWORD *)(a1 + 80);
    }
    __bzero(&v10[20 * v9], 20 * (v7 - v9));
    *(_QWORD *)(a1 + 80) = v7;
  }
  if ( qlread(*(_QWORD *)(a1 + 48), *(void **)(a1 + 72), (unsigned int)(20 * v7)) != v2 )
  {
    v18 = *v21;
    if ( *v21 )
    {
LABEL_27:
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v18);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
      goto LABEL_28;
    }
    goto LABEL_28;
  }
  LOBYTE(v2) = 1;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v11 = 16;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_10008FEB0);
    while ( 1 )
    {
      v14 = (char *)*v21;
      if ( v4 == -1095041334 )
      {
        v15 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)&v14[v11 - 16]), si128);
        *(__m128i *)&v14[v11 - 16] = v15;
        *(_DWORD *)&v14[v11] = _byteswap_ulong(*(_DWORD *)&v14[v11]);
        epi32 = _mm_extract_epi32(v15, 3);
      }
      else
      {
        epi32 = *(_DWORD *)&v14[v11 - 4];
      }
      if ( epi32 < 0x1D )
        break;
      if ( v6 <= epi32 )
        break;
      v17 = *(unsigned int *)&v14[v11 - 8];
      if ( v20 > v17 || v6 < epi32 + (unsigned int)v17 )
        break;
      ++v12;
      v11 += 20;
      if ( v12 >= *(unsigned int *)(a1 + 64) )
        return (unsigned int)v2;
    }
    v18 = *v21;
    if ( !*v21 )
      goto LABEL_28;
    goto LABEL_27;
  }
  return (unsigned int)v2;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 10008FEB0: using guessed type __int128 xmmword_10008FEB0;
