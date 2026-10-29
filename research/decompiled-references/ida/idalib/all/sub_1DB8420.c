__m128i *__fastcall sub_1DB8420(__m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __m128i v5; // xmm1
  __int64 v7; // r14
  char v8; // al
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  const __m128i *v13; // rax
  bool v14; // zf
  unsigned __int16 v15; // cx
  __m128i v16; // xmm2
  __int64 v17; // rdx
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h]

  v2 = *a2;
  v18 = 0;
  v19 = 0;
  v3 = *(_QWORD *)(v2 + 11280);
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)(v3 + 120);
  if ( !v4 )
  {
    while ( *(_BYTE *)(v3 + 113) )
    {
      v3 = *(_QWORD *)(v3 + 104);
      if ( !v3 )
        break;
      v4 = *(_QWORD *)(v3 + 120);
      if ( v4 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  v7 = a2[4];
  v8 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( v8 == 67 )
  {
    v9 = sub_BBE5B0(v4);
    v10 = sub_BBE590(v4);
  }
  else
  {
    if ( v8 == 47 )
    {
      v15 = *(_WORD *)(v4 + 70) >> 4;
      v10 = *(_DWORD *)(v4 + 68) & 0xFFFFF;
    }
    else
    {
      v15 = *(_WORD *)(v4 + 66) >> 4;
      v10 = *(_DWORD *)(v4 + 64) & 0xFFFFF;
    }
    v9 = v15;
  }
  v11 = *(_DWORD *)(v7 + 112);
  if ( v10 >= v11 )
  {
    v12 = *(_QWORD *)v7 + 24LL * (*(_DWORD *)(v7 + 8) + v11 - 1 - v10);
    if ( (unsigned __int64)v9 < *(_QWORD *)(v12 + 16) )
    {
      v13 = (const __m128i *)(*(_QWORD *)(v12 + 8) + 24LL * v9);
      if ( (v13->m128i_i32[0] & 0x7FFFFFFF) != 0 )
      {
        v16 = _mm_loadu_si128(v13);
        v17 = v13[1].m128i_i64[0];
        v13->m128i_i64[1] = 0;
        v19 = v17;
        v18 = v16;
        v13->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        goto LABEL_7;
      }
    }
  }
  v14 = *((_BYTE *)a2 + 58) == 0;
  *((_BYTE *)a2 + 57) = 1;
  if ( v14 )
  {
LABEL_7:
    v5 = _mm_load_si128(&v18);
    a1[1].m128i_i64[0] = v19;
    *a1 = v5;
    return a1;
  }
  a1->m128i_i64[1] = 0;
  a1->m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  return a1;
}
