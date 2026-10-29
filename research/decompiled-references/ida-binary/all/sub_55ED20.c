char __fastcall sub_55ED20(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // r9
  _DWORD *v7; // rax
  int v8; // ebp
  int v10; // r12d
  unsigned int v11; // r13d
  int v12; // r14d
  int v13; // r11d
  __int64 v14; // rdx
  __int64 *v15; // r10
  unsigned int v16; // r15d
  __int64 v17; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // eax
  unsigned int v21; // r15d
  unsigned int v22; // edx
  __int64 v23; // r9
  _BYTE *v24; // r10
  __int64 v25; // r11
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  int v29; // ebp
  __int64 v30; // rdx
  _QWORD *v31; // r12
  __int64 v32; // rax
  __m128i v33; // xmm0
  int v34; // edx
  __int64 v35; // rax
  __m128i v37; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+14h] [rbp-44h]
  unsigned int v39; // [rsp+1Ch] [rbp-3Ch]

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    __assert_fail(
      "(uint32_t)((&self->cursor.stack)->size - 1) < (&self->cursor.stack)->size",
      "lib/src/./get_changed_ranges.c",
      0x9Fu,
      "iterator_tree_is_visible");
  v2 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)(v1 - 1);
  v5 = *(__int64 **)(v2 + 32 * v4);
  v6 = *v5;
  while ( 1 )
  {
    v7 = (_DWORD *)(v2 + 32LL * (unsigned int)v4);
    v8 = v7[6];
    if ( (*v5 & 1) != 0 ? (*v5 & 2) != 0 : *(_BYTE *)(*v5 + 44) & 1 )
    {
      --*(_DWORD *)(a1 + 40);
      v10 = v7[2];
      v11 = v7[3];
      v12 = v7[4];
      *(_DWORD *)(a1 + 16) = v4;
      v13 = v7[5];
      if ( !(_DWORD)v4 )
        return (char)v7;
      v14 = (unsigned int)(v1 - 2);
    }
    else
    {
      if ( v1 == 1 )
      {
        *(_DWORD *)(a1 + 16) = 0;
        return (char)v7;
      }
      v14 = (unsigned int)(v1 - 2);
      v15 = *(__int64 **)(v2 + 32 * v14);
      if ( !*(_WORD *)(*v15 + 66)
        || !*(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL)
                     + 2LL
                     * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 36LL)
                      * (unsigned int)*(unsigned __int16 *)(*v15 + 66)
                      + v8)) )
      {
        v10 = v7[2];
        v11 = v7[3];
        *(_DWORD *)(a1 + 16) = v4;
        v12 = v7[4];
        v13 = v7[5];
        goto LABEL_12;
      }
      --*(_DWORD *)(a1 + 40);
      v10 = v7[2];
      v11 = v7[3];
      v12 = v7[4];
      *(_DWORD *)(a1 + 16) = v4;
      v13 = v7[5];
    }
    v15 = *(__int64 **)(v2 + 32 * v14);
LABEL_12:
    if ( (v6 & 1) == 0 && (*(_BYTE *)(v6 + 44) & 0x40) != 0 )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(v6 + 36);
        if ( !v16 )
          break;
        v17 = v6 - 8LL * v16;
        if ( (v6 & 1) != 0 )
          v17 = 0;
        v18 = v16 - 1;
LABEL_18:
        v19 = v18;
        while ( 1 )
        {
          v6 = *(_QWORD *)(v17 + 8LL * v19);
          if ( (v6 & 1) == 0 && (*(_BYTE *)(v6 + 44) & 0x40) != 0 )
            break;
          if ( v19-- == 0 )
            goto LABEL_18;
        }
      }
      *(_QWORD *)(a1 + 48) = v6;
    }
    v6 = *v15;
    if ( (*v15 & 1) == 0 )
    {
      v21 = *(_DWORD *)(v6 + 36);
      if ( v13 + 1 < v21 )
        break;
    }
    v1 = v4;
    v5 = v15;
    LODWORD(v4) = v4 - 1;
  }
  v37.m128i_i64[0] = *v5;
  v38 = sub_55C590(v37.m128i_u64[0]);
  v39 = v22;
  v26 = _mm_cvtsi32_si128(v10 + (int)v38);
  if ( HIDWORD(v38) )
    v11 += HIDWORD(v38);
  else
    v22 += v12;
  v27 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v11)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v25)));
  if ( (v37.m128i_i8[0] & 1) != 0 )
    v28 = ((unsigned __int64)v37.m128i_i64[0] >> 3) & 1;
  else
    LOBYTE(v28) = (*(_BYTE *)(v37.m128i_i64[0] + 44) & 4) != 0;
  v29 = ((_BYTE)v28 == 0) + v8;
  v30 = 0;
  if ( (*v24 & 1) == 0 )
    v30 = v23 - 8LL * v21;
  v31 = (_QWORD *)(v30 + 8 * v25);
  v37 = v27;
  sub_55ECB0(a1 + 8, 32);
  v32 = *(unsigned int *)(a1 + 16);
  v33 = _mm_load_si128(&v37);
  v34 = v32 + 1;
  v35 = *(_QWORD *)(a1 + 8) + 32 * v32;
  *(_DWORD *)(a1 + 16) = v34;
  *(_OWORD *)(v35 + 16) = 0;
  *(_QWORD *)v35 = v31;
  *(_DWORD *)(v35 + 24) = v29;
  *(__m128i *)(v35 + 8) = v33;
  if ( sub_55D770(a1) )
  {
    v7 = (_DWORD *)*v31;
    if ( (*v31 & 1) != 0 )
      LODWORD(v7) = BYTE6(v7);
    else
      LODWORD(v7) = v7[1];
    if ( (_DWORD)v7 )
      *(_BYTE *)(a1 + 44) = 1;
    else
      ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    LOBYTE(v7) = sub_55E970(a1, 0);
  }
  return (char)v7;
}
