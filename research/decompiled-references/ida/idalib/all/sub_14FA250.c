char __fastcall sub_14FA250(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  const __m128i *v13; // rdx
  __m128i *v14; // rcx
  __int16 v15; // ax
  int v16; // esi
  __int64 *v17; // rdi
  unsigned __int16 v18; // cx
  char result; // al
  unsigned int v20; // eax
  unsigned __int16 v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // rdi
  unsigned __int64 v24; // r13
  __int64 *v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-30h]
  __int64 v27; // [rsp+8h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 369)
    && (!a2 || (unsigned __int8)sub_17A5D60(*(_QWORD *)(a1 + 96), a2))
    && (unsigned __int8)sub_1534E60(a1) )
  {
    return sub_17A5DE0(*(_QWORD *)(a1 + 96), a2);
  }
  v3 = operator new(0x88u);
  *(_QWORD *)(v3 + 16) = a2;
  v4 = *(_QWORD *)(a1 + 2072);
  v5 = v3 + 40;
  *(_QWORD *)(v3 + 32) = 0x400000000LL;
  v6 = *(unsigned int *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 36);
  *(_QWORD *)v3 = &off_2BB32C8;
  *(_QWORD *)(v3 + 8) = a1;
  *(_QWORD *)(v3 + 24) = v3 + 40;
  if ( v6 + 1 > v7 )
  {
    v26 = v3;
    sub_2237220(v4 + 24, v4 + 40, v6 + 1, 8);
    v6 = *(unsigned int *)(v4 + 32);
    v3 = v26;
  }
  v8 = a1 + 16;
  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6) = v3;
  ++*(_DWORD *)(v4 + 32);
  v9 = *(unsigned int *)(v3 + 32);
  v10 = v3 + 24;
  v11 = v9 + 1;
  v12 = *(_QWORD *)(v3 + 24);
  if ( v9 + 1 <= (unsigned __int64)*(unsigned int *)(v3 + 36) )
    goto LABEL_8;
  if ( v12 > v8 )
  {
    v27 = v3;
    goto LABEL_37;
  }
  v27 = v3;
  if ( v8 >= v12 + 24 * v9 )
  {
LABEL_37:
    sub_2237220(v3 + 24, v5, v11, 24);
    v3 = v27;
    v12 = *(_QWORD *)(v27 + 24);
    v9 = *(unsigned int *)(v27 + 32);
LABEL_8:
    v13 = (const __m128i *)(a1 + 16);
    goto LABEL_9;
  }
  v24 = v8 - v12;
  sub_2237220(v3 + 24, v5, v11, 24);
  v3 = v27;
  v12 = *(_QWORD *)(v27 + 24);
  v9 = *(unsigned int *)(v27 + 32);
  v13 = (const __m128i *)(v12 + v24);
LABEL_9:
  v14 = (__m128i *)(v12 + 24 * v9);
  *v14 = _mm_loadu_si128(v13);
  v14[1].m128i_i64[0] = v13[1].m128i_i64[0];
  ++*(_DWORD *)(v3 + 32);
  v15 = *(_WORD *)(a1 + 32);
  if ( v15 == 150 )
  {
    v23 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v23, (int *)(a1 + 16));
    if ( *(_WORD *)(a1 + 32) == 62 )
    {
      sub_141B840(v10, (const __m128i *)(a1 + 16));
      v25 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v25, (int *)(a1 + 16));
      while ( *(_WORD *)(a1 + 32) != 24 )
      {
        sub_146E570(a1, 22, 22, v10, 0, 1);
        sub_146E570(a1, 23, 23, v10, 0, 1);
      }
    }
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 16);
    v17 = *(__int64 **)(a1 + 8);
    if ( v15 != 62 )
      goto LABEL_11;
    *(_DWORD *)(a1 + 40) = v16;
    sub_14634E0(v17, (int *)(a1 + 16));
    while ( *(_WORD *)(a1 + 32) != 24 )
    {
      sub_146E570(a1, 22, 22, v10, 0, 1);
      sub_146E570(a1, 23, 23, v10, 0, 1);
    }
  }
  sub_141B840(v10, (const __m128i *)(a1 + 16));
  v15 = *(_WORD *)(a1 + 32);
  v16 = *(_DWORD *)(a1 + 16);
  v17 = *(__int64 **)(a1 + 8);
LABEL_11:
  v18 = *(_WORD *)(a1 + 92);
  if ( v15 == 24 )
  {
    *(_WORD *)(a1 + 92) = v18 + 1;
  }
  else
  {
    if ( !v18 )
      goto LABEL_13;
    v20 = *(_DWORD *)(a1 + 2792);
    if ( v20 )
    {
      v21 = *(_WORD *)(a1 + 88);
      v22 = *(_QWORD *)(a1 + 2784) + 24LL * v20 - 24;
      do
      {
        if ( v21 == *(_WORD *)(v22 + 14) )
        {
          if ( *(_DWORD *)(v22 + 16) == *(_DWORD *)(a1 + 90) )
            goto LABEL_21;
        }
        else if ( v21 > *(_WORD *)(v22 + 14) )
        {
          goto LABEL_21;
        }
        if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v22 + 16) && *(_WORD *)(v22 + 18) >= v18 )
          break;
LABEL_21:
        --v20;
        v22 -= 24;
        *(_DWORD *)(a1 + 2792) = v20;
      }
      while ( v20 );
    }
    *(_WORD *)(a1 + 92) = v18 - 1;
  }
LABEL_13:
  *(_DWORD *)(a1 + 40) = v16;
  sub_14634E0(v17, (int *)(a1 + 16));
  while ( 1 )
  {
    result = sub_146E570(a1, 25, 25, v10, 0, 1);
    if ( *(_WORD *)(a1 + 32) != 128 )
      break;
    sub_146E570(a1, 24, 24, v10, 0, 1);
  }
  return result;
}
