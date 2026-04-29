__int64 __fastcall sub_30030(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 *a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rbp
  __int64 result; // rax
  __int64 v15; // rdx
  char v16; // dl
  unsigned __int64 i; // r14
  __m128i *v18; // rdi
  unsigned __int8 v19; // dl
  __int64 v20; // rsi
  unsigned int v21; // r9d
  char v22; // al
  bool v23; // zf
  __int64 v24; // r13
  __int64 (__fastcall *v25)(__int64, __int64, __int64); // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // [rsp+6h] [rbp-42h]
  unsigned __int8 v28; // [rsp+7h] [rbp-41h]
  __int64 v29; // [rsp+8h] [rbp-40h]
  char v30; // [rsp+8h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 888);
  v27 = a5;
  v9 = *(_DWORD *)(v8 + 120);
  v28 = a6;
  if ( v9 > 5 )
    goto LABEL_46;
  v10 = (_BYTE *)a1;
  result = 1LL << v9;
  if ( ((1LL << v9) & 0x16) != 0 )
    goto LABEL_10;
  if ( (result & 0x29) == 0 )
  {
LABEL_46:
    sub_28E30();
LABEL_47:
    sub_28E10(a1, a2, v15);
    return sub_30280();
  }
  a1 = *(_QWORD *)(a1 + 32);
  v29 = v8;
  if ( a1 == -1 )
    result = get_first_seg(-1, a2, v8);
  else
    result = getseg(a1);
  v15 = v29;
  if ( !result )
    goto LABEL_47;
  if ( *(_BYTE *)(result + 43) != 2 )
  {
    result = (unsigned int)(*(_DWORD *)(v29 + 184) - 4);
    if ( (unsigned int)result > 1 )
    {
      v30 = 2;
      goto LABEL_11;
    }
  }
LABEL_10:
  v30 = 7;
LABEL_11:
  if ( a5 == 10 )
  {
    result = *(unsigned __int8 *)(a2 + 5);
    v27 = *(_BYTE *)(a2 + 5);
  }
  if ( v10[8] && *(_BYTE *)(a2 + 1) == 1 )
  {
    v16 = v27;
    result = 7;
    if ( v27 == 2 )
      v16 = 7;
    v27 = v16;
  }
  if ( a6 == 10 )
  {
    result = a3->m128i_u8[5];
    v28 = a3->m128i_u8[5];
  }
  for ( i = 0; i < a4[1]; ++i )
  {
    while ( 1 )
    {
      v24 = 40 * i;
      v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL);
      v20 = 40 * i + *a4;
      if ( v25 == sub_289D0 )
        result = sub_289D0((__int64)v10, v20, a2);
      else
        result = v25((__int64)v10, v20, a2);
      if ( (_BYTE)result )
      {
        v18 = (__m128i *)(v24 + *a4);
        v19 = v18->m128i_u8[5];
        LOBYTE(result) = v27 < v19;
        LOBYTE(v20) = v19 <= 0xF9u;
        v21 = v20 & result;
        result = (unsigned int)v20 | (unsigned int)result;
        if ( v27 <= 0xF9u )
          result = v21;
        if ( (_BYTE)result )
        {
          v18->m128i_i8[1] = 0;
        }
        else
        {
          *v18 = _mm_loadu_si128(a3);
          v18[1] = _mm_loadu_si128(a3 + 1);
          v18[2].m128i_i32[0] = a3[2].m128i_i32[0];
          v22 = v20 | (v28 < v19);
          if ( v28 <= 0xF9u )
            v22 = v20 & (v28 < v19);
          v23 = v22 == 0;
          result = *a4;
          if ( !v23 )
            v19 = v28;
          *(_BYTE *)(result + v24 + 5) = v19;
        }
        goto LABEL_30;
      }
      if ( *(_BYTE *)(a2 + 1) == 1 )
      {
        v26 = v24 + *a4;
        if ( *(_BYTE *)(v26 + 1) == 4 )
        {
          result = *(unsigned __int16 *)(a2 + 6);
          if ( *(_WORD *)(v26 + 6) == (_WORD)result )
            break;
        }
      }
LABEL_30:
      if ( ++i >= a4[1] )
        return result;
    }
    if ( v27 == v30 && a3->m128i_i8[1] == 1 && v28 == v27 )
    {
      result = a3->m128i_u16[3];
      *(_WORD *)(v26 + 6) = result;
      goto LABEL_30;
    }
    *(_BYTE *)(v26 + 1) = 0;
  }
  return result;
}
