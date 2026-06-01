__int64 __fastcall sub_55DD00(const __m128i *a1, _DWORD *a2, int a3)
{
  __int64 v5; // rdx
  int v6; // r12d
  int v7; // r14d
  _DWORD *v8; // r15
  __int64 v9; // rbp
  __int32 v10; // r13d
  _DWORD *v11; // rax
  char v12; // al
  void *v13; // rdi
  __m128i si128; // xmm2
  __int64 v15; // rax
  int v16; // eax
  int wide_byte; // eax
  char v18; // al
  __int64 v19; // [rsp+8h] [rbp-50h]
  __m128i v20[4]; // [rsp+10h] [rbp-48h] BYREF

  if ( (~a1[33].m128i_i16[0] & 0x600) != 0 )
  {
    if ( (unsigned int)(a3 + 1) <= 1 )
    {
      if ( (unsigned __int8)is_loaded(a1[1].m128i_u32[0]) )
      {
        v15 = a1[33].m128i_i64[0];
        if ( (v15 & 0x600) == 0x400 )
        {
          v16 = v15 & 0xF0000000;
          switch ( v16 )
          {
            case 0:
              wide_byte = get_wide_byte(a1[1].m128i_u32[0]);
LABEL_24:
              *a2 = wide_byte;
              return 1;
            case 0x10000000:
              wide_byte = get_wide_word(a1[1].m128i_u32[0]);
              goto LABEL_24;
            case 0x20000000:
              wide_byte = get_wide_dword(a1[1].m128i_u32[0]);
              goto LABEL_24;
          }
        }
      }
    }
    return 0;
  }
  v5 = a3 & 0xF;
  v19 = a1[1].m128i_i64[1];
  v20[0] = _mm_loadu_si128(a1 + 2);
  if ( (_DWORD)v5 == 15 )
  {
    v7 = 8;
    v5 = 0;
    v6 = 1;
  }
  else
  {
    v6 = v5 + 1;
    v7 = v5 + 1;
  }
  a1[1].m128i_i64[1] = 0;
  v8 = a2;
  v9 = (__int64)&a1[14].m128i_i64[3 * v5 + 1] + 4;
  a1[2] = 0;
  if ( a1[14].m128i_i8[24 * v5 + 13] )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v9 + 4) & 8) == 0 )
        goto LABEL_14;
      v10 = a1[4].m128i_i32[2];
      a1[4].m128i_i64[0] = (__int64)v8;
      a1[4].m128i_i32[2] = 4;
      sub_375980(0x13u, a1, v9);
      v11 = (_DWORD *)a1[4].m128i_i64[0];
      a1[4].m128i_i32[2] = v10;
      if ( v11 == v8 )
      {
        v12 = *(_BYTE *)(v9 + 1);
        if ( v12 == 4 )
        {
          v18 = *(_BYTE *)(v9 + 4);
          if ( v18 >= 0 )
          {
            *v8++ = *(_DWORD *)(v9 + 12);
            v18 = *(_BYTE *)(v9 + 4);
          }
          if ( (v18 & 0x40) == 0 )
            goto LABEL_13;
LABEL_26:
          *v8++ = *(_DWORD *)(v9 + 8);
          goto LABEL_13;
        }
        if ( v12 != 5 )
        {
          if ( v12 == 3 )
            *v8++ = 0;
          goto LABEL_13;
        }
        if ( (unsigned __int8)(*(_BYTE *)(v9 + 5) - 3) > 3u )
          goto LABEL_26;
      }
      else
      {
        v8 = v11;
      }
LABEL_13:
      a1[4].m128i_i64[0] = 0;
LABEL_14:
      v9 += 24;
      if ( v6 < v7 )
      {
        ++v6;
        if ( *(_BYTE *)(v9 + 1) )
          continue;
      }
      break;
    }
  }
  v13 = (void *)a1[1].m128i_i64[1];
  si128 = _mm_load_si128(v20);
  a1[1].m128i_i64[1] = v19;
  a1[2] = si128;
  if ( v13 )
    qfree(v13);
  return v8 - a2;
}

