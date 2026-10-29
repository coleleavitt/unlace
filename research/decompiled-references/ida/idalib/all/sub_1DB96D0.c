__int64 __fastcall sub_1DB96D0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 *v11; // rdi
  unsigned int *v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  const __m128i *v20; // rdx
  __m128i *v21; // rax
  unsigned int *v22; // rdx
  __int64 v23; // r14
  unsigned int *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  const __m128i *v29; // r13
  __m128i *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  unsigned __int64 v34; // [rsp+0h] [rbp-58h] BYREF
  unsigned int *v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+10h] [rbp-48h]

  if ( (*(_BYTE *)(a1 + 140) & 7) == 2 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_BYTE *)(v11[1] + 8) & 0x7Fu) - 59 <= 2 )
        return sub_B8C1B0(*v11);
    }
    else if ( ((_BYTE)v11[1] & 0x7Fu) - 59 <= 2 )
    {
      return sub_B8C1B0((__int64)v11);
    }
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2A )
      return 0;
  }
  v5 = *(_QWORD *)(a1 + 112);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v5 )
  {
    if ( (v5 & 4) == 0 )
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFF8LL);
      v7 = (unsigned __int64)v9;
      LOBYTE(v8) = (_BYTE)v9;
      goto LABEL_11;
    }
    if ( v6 )
    {
      v7 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = *v6 | 4LL;
      v9 = (_QWORD *)v7;
LABEL_11:
      if ( (v8 & 4) != 0 && v7 )
      {
        if ( !a3 )
        {
          if ( (v5 & 4) != 0 && v6 )
            v13 = (unsigned int *)v6[1];
          else
            v13 = *(unsigned int **)(a1 + 128);
          v14 = *v13;
          v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
          v16 = *(unsigned int *)(a2 + 12);
          v35 = v13 + 2;
          v36 = v14;
          v34 = v15 & 0xFFFFFFFFFFFFFFFBLL;
          v17 = *(unsigned int *)(a2 + 8);
          v18 = v17 + 1;
          if ( v17 + 1 > v16 )
          {
            v32 = *(_QWORD *)a2;
            v33 = a2 + 16;
            if ( *(_QWORD *)a2 > (unsigned __int64)&v34 || (unsigned __int64)&v34 >= v32 + 24 * v17 )
            {
              sub_2237220(a2, v33, v18, 24);
              v19 = *(_QWORD *)a2;
              v17 = *(unsigned int *)(a2 + 8);
              v20 = (const __m128i *)&v34;
            }
            else
            {
              sub_2237220(a2, v33, v18, 24);
              v19 = *(_QWORD *)a2;
              v17 = *(unsigned int *)(a2 + 8);
              v20 = (const __m128i *)((char *)&v34 + *(_QWORD *)a2 - v32);
            }
          }
          else
          {
            v19 = *(_QWORD *)a2;
            v20 = (const __m128i *)&v34;
          }
          v21 = (__m128i *)(v19 + 24 * v17);
          *v21 = _mm_loadu_si128(v20);
          v21[1].m128i_i64[0] = v20[1].m128i_i64[0];
          ++*(_DWORD *)(a2 + 8);
        }
        if ( (*(_BYTE *)(v9[10] + 152LL) & 4) != 0 )
          return 0;
        v11 = (__int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
          return sub_B8C1B0((__int64)v11);
        return sub_B8C1B0(*v11);
      }
      if ( !a3 )
      {
LABEL_28:
        if ( (v5 & 4) != 0 && v6 )
        {
          v22 = (unsigned int *)v6[1];
LABEL_35:
          v23 = *v22;
          v24 = v22 + 2;
          if ( v7 )
            v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9) & 0xFFFFFFFFFFFFFFFBLL;
          v34 = v7;
          v25 = *(unsigned int *)(a2 + 8);
          v36 = v23;
          v26 = *(unsigned int *)(a2 + 12);
          v27 = *(_QWORD *)a2;
          v28 = v25 + 1;
          v35 = v24;
          v29 = (const __m128i *)&v34;
          v30 = (__m128i *)(v27 + 24 * v25);
          if ( v28 > v26 )
          {
            v31 = a2 + 16;
            if ( v27 > (unsigned __int64)&v34 || v30 <= (__m128i *)&v34 )
            {
              sub_2237220(a2, v31, v28, 24);
              v30 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            }
            else
            {
              sub_2237220(a2, v31, v28, 24);
              v29 = (const __m128i *)((char *)&v34 + *(_QWORD *)a2 - v27);
              v30 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
            }
          }
          *v30 = _mm_loadu_si128(v29);
          v30[1].m128i_i64[0] = v29[1].m128i_i64[0];
          ++*(_DWORD *)(a2 + 8);
          goto LABEL_39;
        }
LABEL_34:
        v22 = *(unsigned int **)(a1 + 128);
        goto LABEL_35;
      }
      goto LABEL_39;
    }
    v7 = 0;
    v9 = nullptr;
  }
  else
  {
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFF8LL);
    v7 = (unsigned __int64)v9;
  }
  if ( !a3 )
  {
    if ( !v5 )
      goto LABEL_34;
    goto LABEL_28;
  }
LABEL_39:
  if ( (*(_BYTE *)sub_BC3640(v9) & 4) != 0 )
    return 0;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
    return sub_B8C1B0((__int64)v11);
  return sub_B8C1B0(*v11);
}
