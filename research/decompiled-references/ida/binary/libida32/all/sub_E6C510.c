unsigned __int64 __fastcall sub_E6C510(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 result; // rax
  unsigned int *v13; // rsi
  void *v14; // rdi
  size_t v15; // r12
  const void *v16; // rsi
  _WORD *v17; // rdx
  unsigned __int8 v18; // cl
  unsigned int *v19; // rsi
  unsigned int *v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  __m128i v23; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v25; // [rsp+40h] [rbp-38h]

  v9 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
    sub_E6C510(v9, a2, a3, 0, 1);
  v10 = *(_QWORD *)(a1 + 16);
  if ( !v10 )
  {
LABEL_13:
    v17 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v17 <= 1u )
      return sub_22581D0(a2, "::", 2);
    *v17 = 14906;
    *(_QWORD *)(a2 + 32) += 2LL;
    return 14906;
  }
  v11 = (*(__int64 *)(a1 + 8) >> 1) & 3;
  if ( (_DWORD)v11 != 1 )
  {
    if ( (_DWORD)v11 == 2 )
    {
      v25 = 257;
      v23 = _mm_loadu_si128(a3);
      v23.m128i_i8[1] |= 0xAu;
      v22 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      result = sub_F50AF0(&v22, a2, &v23, v24, 0);
      goto LABEL_7;
    }
    if ( v11 )
      BUG();
    v13 = *(unsigned int **)(v10 + 16);
    v14 = *(void **)(a2 + 32);
    v15 = *v13;
    v16 = v13 + 4;
    result = *(_QWORD *)(a2 + 24) - (_QWORD)v14;
    if ( v15 <= result )
    {
LABEL_11:
      if ( !v15 )
        goto LABEL_7;
      goto LABEL_12;
    }
    goto LABEL_21;
  }
  v18 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( (unsigned int)v18 - 59 <= 2 )
  {
    v21 = *(_QWORD *)(a2 + 32);
    result = *(_QWORD *)(a2 + 24) - v21;
    if ( result > 6 )
    {
      *(_DWORD *)v21 = 1970495327;
      *(_WORD *)(v21 + 4) = 25968;
      *(_BYTE *)(v21 + 6) = 114;
      *(_QWORD *)(a2 + 32) += 7LL;
    }
    else
    {
      result = sub_22581D0(a2, "__super", 7);
    }
    goto LABEL_7;
  }
  if ( v18 != 24 )
  {
    if ( v18 != 77 )
      BUG();
    result = *(_QWORD *)(v10 + 40);
    if ( (result & 7) == 0 )
    {
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( result )
      {
        v19 = *(unsigned int **)(result + 16);
        v14 = *(void **)(a2 + 32);
        v15 = *v19;
        v16 = v19 + 4;
        result = *(_QWORD *)(a2 + 24) - (_QWORD)v14;
        if ( result < v15 )
        {
LABEL_21:
          result = sub_22581D0(a2, v16, v15);
          goto LABEL_7;
        }
        if ( v15 )
        {
LABEL_12:
          result = (unsigned __int64)memcpy(v14, v16, v15);
          *(_QWORD *)(a2 + 32) += v15;
        }
      }
    }
LABEL_7:
    if ( !a5 )
      return result;
    goto LABEL_13;
  }
  result = *(_QWORD *)(v10 + 40);
  if ( (result & 7) == 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      v20 = *(unsigned int **)(result + 16);
      v14 = *(void **)(a2 + 32);
      v15 = *v20;
      v16 = v20 + 4;
      result = *(_QWORD *)(a2 + 24) - (_QWORD)v14;
      if ( result >= v15 )
        goto LABEL_11;
      goto LABEL_21;
    }
  }
  return result;
}

