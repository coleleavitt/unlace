__int64 __fastcall sub_19140(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  const __m128i *v6; // r10
  __int64 result; // rax
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r11
  int v13; // r8d
  __int64 v14; // rbx
  unsigned __int8 v15; // dl
  int v16; // edi
  unsigned int v17; // r9d
  __int8 v18; // r9
  char v19; // al
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 (__fastcall *v23)(__int64, __int64, __int64); // rax
  __m128i *v24; // rsi
  __int64 v25; // rdx
  const __m128i *v26; // [rsp+0h] [rbp-48h]
  char v27; // [rsp+Eh] [rbp-3Ah]
  unsigned __int8 v28; // [rsp+Fh] [rbp-39h]

  v6 = a3;
  result = a5;
  v8 = a5;
  v9 = a6;
  v13 = (*(_WORD *)(a1 + 50) & 4) == 0 ? 2 : 7;
  if ( (_BYTE)result == 10 )
    v8 = *(_BYTE *)(a2 + 5);
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(_BYTE *)(a2 + 1) == 1 )
    {
      result = 7;
      if ( v8 == 2 )
        v8 = 7;
    }
  }
  if ( a6 == 10 )
    v9 = a3->m128i_u8[5];
  v14 = 0;
  if ( a4[1] )
  {
    while ( 1 )
    {
      v21 = *a4;
      v22 = 40 * v14;
      v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
      v24 = (__m128i *)(*a4 + 40 * v14);
      if ( v23 != sub_14F70 )
        break;
      result = v24->m128i_u8[1];
      v16 = *(unsigned __int8 *)(a2 + 1);
      if ( (_BYTE)result != (_BYTE)v16 )
        goto LABEL_26;
      switch ( (_BYTE)result )
      {
        case 4:
          result = *(unsigned __int16 *)(a2 + 6);
          if ( v24->m128i_i16[3] == (_WORD)result )
          {
            result = *(_QWORD *)(a2 + 16);
            if ( v24[1].m128i_i64[0] == result )
              goto LABEL_15;
          }
          goto LABEL_23;
        case 0x63:
          goto LABEL_15;
        case 1:
          result = *(unsigned __int16 *)(a2 + 6);
          if ( v24->m128i_i16[3] == (_WORD)result )
            goto LABEL_15;
LABEL_28:
          v25 = v22 + v21;
          if ( *(_BYTE *)(v25 + 1) != 4 )
            goto LABEL_23;
          result = *(unsigned __int16 *)(a2 + 6);
          if ( *(_WORD *)(v25 + 6) != (_WORD)result )
            goto LABEL_23;
          if ( v8 == (_BYTE)v13 && v6->m128i_i8[1] == 1 && v9 == v8 )
          {
            result = v6->m128i_u16[3];
            *(_WORD *)(v25 + 6) = result;
            goto LABEL_23;
          }
          *(_BYTE *)(v25 + 1) = 0;
          if ( ++v14 >= (unsigned __int64)a4[1] )
            return result;
          break;
        default:
LABEL_26:
          if ( (_BYTE)v16 == 1 )
          {
            v21 = *a4;
            goto LABEL_28;
          }
LABEL_23:
          if ( ++v14 >= (unsigned __int64)a4[1] )
            return result;
          break;
      }
    }
    v28 = v9;
    v16 = a1;
    v26 = v6;
    v27 = v13;
    result = ((__int64 (__fastcall *)(__int64, __m128i *, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v23)(
               a1,
               v24,
               a2,
               sub_14F70);
    LOBYTE(v13) = v27;
    v6 = v26;
    v9 = v28;
    if ( (_BYTE)result )
    {
      v24 = (__m128i *)(v22 + *a4);
LABEL_15:
      v15 = v24->m128i_u8[5];
      LOBYTE(result) = v8 < v15;
      LOBYTE(v16) = v15 <= 0xF9u;
      v17 = v16 & result;
      result = v16 | (unsigned int)result;
      if ( v8 <= 0xF9u )
        result = v17;
      if ( (_BYTE)result )
      {
        v24->m128i_i8[1] = 0;
      }
      else
      {
        v18 = v24[2].m128i_i8[0];
        *v24 = _mm_loadu_si128(v6);
        v24[1] = _mm_loadu_si128(v6 + 1);
        v24[2].m128i_i32[0] = v6[2].m128i_i32[0];
        *(_BYTE *)(*a4 + v22 + 32) = v18;
        v19 = v16 | (v9 < v15);
        if ( v9 <= 0xF9u )
          v19 = v16 & (v9 < v15);
        v20 = v19 == 0;
        result = *a4;
        if ( !v20 )
          v15 = v9;
        *(_BYTE *)(result + v22 + 5) = v15;
      }
      goto LABEL_23;
    }
    LOBYTE(v16) = *(_BYTE *)(a2 + 1);
    goto LABEL_26;
  }
  return result;
}
