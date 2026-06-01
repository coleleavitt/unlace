char __fastcall sub_55E970(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  unsigned int v3; // r13d
  char *v4; // rdi
  char *v5; // rax
  __int64 *v6; // r12
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // rax
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // esi
  unsigned int v19; // r15d
  unsigned int v20; // edx
  unsigned __int64 v21; // rdi
  unsigned int v22; // r8d
  bool v23; // al
  unsigned __int64 v24; // rsi
  unsigned int v25; // r10d
  unsigned __int64 v26; // r9
  unsigned int v27; // r10d
  unsigned int v28; // eax
  char result; // al
  int v31; // r13d
  char *v32; // rdi
  unsigned int v33; // eax
  __m128i v34; // xmm2
  unsigned int v35; // r12d
  __m128i v36; // xmm5
  __int64 v37; // rax
  char *v38; // rdi
  __m128i v40; // [rsp+10h] [rbp-58h] BYREF
  char *v41; // [rsp+20h] [rbp-48h]
  unsigned int v42; // [rsp+28h] [rbp-40h]
  unsigned int v43; // [rsp+2Ch] [rbp-3Ch]

  v2 = *(_BYTE *)(a1 + 44) == 0;
  v42 = a2;
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(a1 + 16);
  do
  {
    if ( !v3 )
      __assert_fail(
        "(uint32_t)((&self->cursor.stack)->size - 1) < (&self->cursor.stack)->size",
        "lib/src/./get_changed_ranges.c",
        0xDAu,
        "iterator_descend");
    v4 = *(char **)(a1 + 8);
    v5 = &v4[32 * v3 - 32];
    v6 = *(__int64 **)v5;
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v9 = *((_DWORD *)v5 + 4);
    v10 = **(_QWORD **)v5;
    if ( (v10 & 1) != 0 )
      return 0;
    v11 = *(unsigned int *)(v10 + 36);
    if ( !(_DWORD)v11 )
      return 0;
    v40.m128i_i64[0] = v11;
    v12 = 0;
    v13 = 0;
    v41 = v4;
    v43 = v3;
    while ( 1 )
    {
      v14 = 0;
      if ( (*(_BYTE *)v6 & 1) == 0 )
        v14 = *v6 - 8LL * *(unsigned int *)(*v6 + 36);
      v15 = (unsigned __int64 *)(v14 + 8 * v12);
      v16 = *v15;
      if ( (*v15 & 1) != 0 )
      {
        v17 = (v16 >> 40) & 0xF;
        v18 = BYTE4(v16);
        v19 = v7 + BYTE6(v16);
        if ( (_DWORD)v17 )
          goto LABEL_11;
      }
      else
      {
        LODWORD(v17) = *(_DWORD *)(v16 + 8);
        v18 = *(_DWORD *)(v16 + 12);
        v19 = v7 + *(_DWORD *)(v16 + 4);
        if ( (_DWORD)v17 )
        {
LABEL_11:
          v20 = v8 + v17;
          if ( (v16 & 1) != 0 )
            goto LABEL_12;
          goto LABEL_33;
        }
      }
      v18 += v9;
      v20 = v8;
      if ( (v16 & 1) != 0 )
      {
LABEL_12:
        v21 = HIBYTE(v16);
        v22 = HIBYTE(v16) + v19;
        goto LABEL_13;
      }
LABEL_33:
      v31 = *(_DWORD *)(v16 + 20);
      LODWORD(v21) = *(_DWORD *)(v16 + 24);
      v22 = v19 + *(_DWORD *)(v16 + 16);
      if ( v31 )
        break;
LABEL_13:
      LODWORD(v21) = v18 + v21;
      if ( v42 < v22 )
        goto LABEL_35;
LABEL_14:
      if ( (v16 & 1) != 0 )
        v23 = (*v15 & 8) != 0;
      else
        v23 = (*(_BYTE *)(v16 + 44) & 4) != 0;
      v24 = *v15;
      v13 += !v23;
      if ( (*v15 & 1) == 0 && (*(_BYTE *)(v24 + 44) & 0x40) != 0 )
      {
        while ( 1 )
        {
          v25 = *(_DWORD *)(v24 + 36);
          if ( !v25 )
            break;
          v26 = v24 - 8LL * v25;
          if ( (v24 & 1) != 0 )
            v26 = 0;
          v27 = v25 - 1;
LABEL_22:
          v28 = v27;
          while ( 1 )
          {
            v24 = *(_QWORD *)(v26 + 8LL * v28);
            if ( (v24 & 1) == 0 && (*(_BYTE *)(v24 + 44) & 0x40) != 0 )
              break;
            if ( v28-- == 0 )
              goto LABEL_22;
          }
        }
        *(_QWORD *)(a1 + 48) = v24;
      }
      if ( ++v12 == v40.m128i_i64[0] )
        return 0;
      v9 = v21;
      v8 = v20;
      v7 = v22;
    }
    v20 += v31;
    if ( v42 >= v22 )
      goto LABEL_14;
LABEL_35:
    v32 = v41;
    v33 = *(_DWORD *)(a1 + 20);
    v34 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v8)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v12)));
    v40 = v34;
    if ( v33 >= v43 + 1 )
      goto LABEL_48;
    v35 = 2 * v33;
    if ( 2 * v33 < 8 )
      v35 = 8;
    if ( v35 < v43 + 1 )
      v35 = v43 + 1;
    if ( v33 >= v35 )
    {
LABEL_48:
      v37 = v43;
      v36 = v34;
      v3 = v43 + 1;
    }
    else
    {
      if ( v41 )
        v32 = (char *)off_8C52A8(v41, 32LL * v35);
      else
        v32 = (char *)off_8C52B8(32LL * v35);
      v36 = _mm_load_si128(&v40);
      *(_QWORD *)(a1 + 8) = v32;
      *(_DWORD *)(a1 + 20) = v35;
      v37 = *(unsigned int *)(a1 + 16);
      v3 = v37 + 1;
    }
    v38 = &v32[32 * v37];
    *(_DWORD *)(a1 + 16) = v3;
    *((_OWORD *)v38 + 1) = 0;
    *(_QWORD *)v38 = v15;
    *((_DWORD *)v38 + 6) = v13;
    *(__m128i *)(v38 + 8) = v36;
    result = sub_55D770(a1);
  }
  while ( !result );
  if ( v42 >= v19 )
    ++*(_DWORD *)(a1 + 40);
  else
    *(_BYTE *)(a1 + 44) = 1;
  return result;
}
