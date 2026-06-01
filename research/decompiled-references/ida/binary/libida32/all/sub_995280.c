__int16 __fastcall sub_995280(int **a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // r12
  char v6; // di
  unsigned __int8 v8; // si
  int v9; // eax
  int *v10; // r13
  int v11; // esi
  int v12; // r14d
  int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // cl
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  const __m128i *v27; // rbx
  __m128i *v28; // rax
  _DWORD *v29; // rdi
  _DWORD *v30; // rsi
  __int64 v31; // rax
  int v33; // [rsp+0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+10h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 16);
  LOWORD(v3) = *(_WORD *)v2 & 0x1FF;
  if ( (_WORD)v3 != 71 )
    return v3;
  v4 = *(_QWORD *)(v2 + 16);
  LOWORD(v3) = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v3 - 40 > 6 )
    return v3;
  v6 = *(_BYTE *)(v4 + 96);
  v8 = v6 & 7;
  if ( (v6 & 7) != 0 )
  {
    if ( v8 != 5 )
      goto LABEL_5;
    if ( (unsigned __int8)v3 == 46 || (unsigned __int8)v3 == 40 )
    {
      v23 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v23 = *(_QWORD *)(v23 + 8);
      if ( v23 )
      {
        v3 = sub_B6AD60(v23);
        v24 = *(_BYTE *)(v3 + 8) & 0x7F;
        if ( v24 > 0x12u )
        {
          if ( ((v24 + 94) & 0x7Fu) > 5 )
          {
LABEL_32:
            LOWORD(v3) = *(_BYTE *)(v4 + 28) & 0x7F;
            if ( (_BYTE)v3 != 43 )
              return v3;
          }
        }
        else
        {
          v3 = 1LL << v24;
          if ( ((1LL << v24) & 0x40182) == 0 )
            goto LABEL_32;
        }
        v8 = *(_BYTE *)(v4 + 96) & 7;
LABEL_5:
        if ( v8 <= 3u )
          return v3;
        goto LABEL_6;
      }
    }
    if ( (_BYTE)v3 != 43 )
      return v3;
LABEL_6:
    v9 = sub_9928E0((__int64)(*a1 + 18), a2);
    v10 = *a1;
    v11 = *(_DWORD *)(a2 + 4);
    v12 = v9;
    v13 = **a1;
    v14 = (unsigned int)(*a1)[5];
    *v10 = v13 + 1;
    v15 = (unsigned int)v10[4];
    if ( v15 >= v14 )
    {
      v25 = *((_QWORD *)v10 + 1);
      v33 = v13;
      v26 = v15 + 1;
      v34 = v4;
      v27 = (const __m128i *)&v33;
      v35 = v11;
      v28 = (__m128i *)(v25 + 24 * v15);
      if ( v14 < v26 )
      {
        v29 = v10 + 2;
        v30 = v10 + 6;
        if ( v25 > (unsigned __int64)&v33 || v28 <= (__m128i *)&v33 )
        {
          sub_22134E0(v29, v30, v26, 24);
          v28 = (__m128i *)(*((_QWORD *)v10 + 1) + 24LL * (unsigned int)v10[4]);
        }
        else
        {
          sub_22134E0(v29, v30, v26, 24);
          v31 = *((_QWORD *)v10 + 1);
          v27 = (const __m128i *)((char *)&v33 + v31 - v25);
          v28 = (__m128i *)(24LL * (unsigned int)v10[4] + v31);
        }
      }
      *v28 = _mm_loadu_si128(v27);
      v28[1].m128i_i64[0] = v27[1].m128i_i64[0];
      v17 = (unsigned int)(v10[4] + 1);
      v10[4] = v17;
    }
    else
    {
      v16 = *((_QWORD *)v10 + 1) + 24 * v15;
      *(_DWORD *)v16 = v13;
      *(_QWORD *)(v16 + 8) = v4;
      *(_DWORD *)(v16 + 16) = v11;
      v17 = (unsigned int)(v10[4] + 1);
      v10[4] = v17;
    }
    v18 = (int *)(*((_QWORD *)v10 + 1) + 24 * v17 - 24);
    v19 = sub_994A50((__int64 *)*a1 + 27, 24, 3u);
    v20 = *v18;
    *(_BYTE *)(v19 + 8) = 0;
    *(_QWORD *)v19 = off_2B16538;
    *(_DWORD *)(v19 + 12) = v20;
    *(_DWORD *)(v19 + 16) = v12;
    LOWORD(v3) = sub_991BB0((__int64)(a1 + 2), v19);
    return v3;
  }
  v21 = *(_QWORD *)&byte_8[*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v21 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v21 & 7)) >> 9 == 3 )
  {
    return v3;
  }
  LOWORD(v3) = v3 + 85;
  if ( (v3 & 0x7D) == 0 )
  {
LABEL_23:
    if ( (v6 & 0x18) != 0 )
      return v3;
    goto LABEL_6;
  }
  v22 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v22 = *(_QWORD *)(v22 + 8);
  LODWORD(v3) = *(_BYTE *)(sub_B6AD60(v22) + 8) & 0x7F;
  if ( (_DWORD)v3 != 24 && (_DWORD)v3 )
  {
    LOWORD(v3) = *(_BYTE *)(v4 + 28) & 0x7F;
    if ( (_BYTE)v3 == 43 )
      goto LABEL_22;
    v3 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
      v3 = *(_QWORD *)v3;
    LOWORD(v3) = (*(_BYTE *)(v3 + 8) + 70) & 0x7F;
    if ( (unsigned __int8)v3 > 3u )
    {
LABEL_22:
      v6 = *(_BYTE *)(v4 + 96);
      goto LABEL_23;
    }
  }
  return v3;
}

