__int64 __fastcall sub_577680(const __m128i *a1, __int64 *a2, int a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  int v7; // r15d
  int v8; // r13d
  __int64 *v9; // rbx
  __int64 v10; // r12
  __int32 v11; // r9d
  char v12; // al
  void *v13; // rdi
  __m128i si128; // xmm2
  __int64 v15; // rax
  int v16; // eax
  __int64 wide_byte; // rax
  char v18; // al
  __int32 v19; // [rsp+Ch] [rbp-5Ch]
  __int64 v20; // [rsp+18h] [rbp-50h]
  __m128i v21[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1[38].m128i_i64[1] + 32);
  if ( (~a1[45].m128i_i16[0] & 0x600) != 0 )
  {
    if ( (unsigned int)(a3 + 1) <= 1 )
    {
      if ( (unsigned __int8)is_loaded(a1[1].m128i_i64[0]) )
      {
        v15 = a1[45].m128i_i64[0];
        if ( (v15 & 0x600) == 0x400 )
        {
          v16 = v15 & 0xF0000000;
          switch ( v16 )
          {
            case 0:
              wide_byte = get_wide_byte(a1[1].m128i_i64[0]);
LABEL_25:
              *a2 = wide_byte;
              return 1;
            case 268435456:
              wide_byte = get_wide_word(a1[1].m128i_i64[0]);
              goto LABEL_25;
            case 536870912:
              wide_byte = get_wide_dword(a1[1].m128i_i64[0]);
              goto LABEL_25;
            case 805306368:
              wide_byte = *(_QWORD *)(v4 + 16) & get_qword(a1[1].m128i_i64[0]);
              goto LABEL_25;
          }
        }
      }
    }
    return 0;
  }
  v6 = a3 & 0xF;
  v20 = a1[1].m128i_i64[1];
  v21[0] = _mm_loadu_si128(a1 + 2);
  if ( (_DWORD)v6 == 15 )
  {
    v8 = 8;
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v7 = v6 + 1;
    v8 = v6 + 1;
  }
  v9 = a2;
  a1[1].m128i_i64[1] = 0;
  v10 = (__int64)&a1[16].m128i_i64[5 * v6 + 1];
  a1[2] = 0;
  if ( a1[16].m128i_i8[40 * v6 + 9] )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v10 + 4) & 8) == 0 )
        goto LABEL_14;
      v11 = a1[4].m128i_i32[2];
      a1[4].m128i_i64[0] = (__int64)v9;
      a1[4].m128i_i32[2] = 4;
      v19 = v11;
      sub_3792E0(0x13u, a1, v10);
      a1[4].m128i_i32[2] = v19;
      if ( (__int64 *)a1[4].m128i_i64[0] != v9 )
      {
        do
          *v9++ &= *(_QWORD *)(v4 + 16);
        while ( (__int64 *)a1[4].m128i_i64[0] != v9 );
        goto LABEL_13;
      }
      v12 = *(_BYTE *)(v10 + 1);
      if ( v12 == 4 )
        break;
      if ( v12 != 5 )
      {
        if ( v12 == 3 )
          *v9++ = 0;
        goto LABEL_13;
      }
      if ( (unsigned __int8)(*(_BYTE *)(v10 + 5) - 3) > 3u )
        goto LABEL_27;
LABEL_13:
      a1[4].m128i_i64[0] = 0;
LABEL_14:
      v10 += 40;
      if ( v7 < v8 )
      {
        ++v7;
        if ( *(_BYTE *)(v10 + 1) )
          continue;
      }
      goto LABEL_16;
    }
    v18 = *(_BYTE *)(v10 + 4);
    if ( v18 >= 0 )
    {
      *v9++ = *(_QWORD *)(v4 + 16) & *(_QWORD *)(v10 + 16);
      v18 = *(_BYTE *)(v10 + 4);
    }
    if ( (v18 & 0x40) == 0 )
      goto LABEL_13;
LABEL_27:
    *v9++ = *(_QWORD *)(v4 + 16) & *(_QWORD *)(v10 + 8);
    goto LABEL_13;
  }
LABEL_16:
  v13 = (void *)a1[1].m128i_i64[1];
  si128 = _mm_load_si128(v21);
  a1[1].m128i_i64[1] = v20;
  a1[2] = si128;
  if ( v13 )
    qfree(v13);
  return v9 - a2;
}
