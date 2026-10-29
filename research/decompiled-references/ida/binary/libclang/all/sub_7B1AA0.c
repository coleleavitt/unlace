bool __fastcall sub_7B1AA0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rsi
  const __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 *v16; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-40h] BYREF
  __m128i v24; // [rsp+10h] [rbp-38h]
  __int64 *v25; // [rsp+20h] [rbp-28h]

  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 73) >> 5 == 1 )
      return 1;
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 && (*(_BYTE *)(v2 + 10) & 0x20) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 1) != 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( ((**(_BYTE **)(a1 + 128) >> 1) & 0x3Fu) > 0x1F )
      return 0;
    if ( sub_7868A0(a1) )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v4 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v4 + 96) & 1) != 0 )
      return 0;
    if ( *(_QWORD *)(v4 + 96) )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 20LL) )
      return 0;
    v5 = sub_7AF2F0(a1);
    if ( sub_7AF3A0(a1) - v5 > 0 )
      return 0;
    v6 = sub_79C190(a1 + 64);
    if ( v6 )
    {
      while ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 33 > 3 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v7 <= 7 )
          goto LABEL_21;
      }
LABEL_16:
      if ( (unsigned __int8)sub_788920((_QWORD *)v6, (__int64)&v23, 0) && (*(_BYTE *)(v6 + 29) & 2) == 0 )
        return 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 8);
        v6 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v8 <= 7 )
          break;
        if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 33 <= 3 )
          goto LABEL_16;
      }
    }
LABEL_21:
    v9 = sub_7A95C0(a1);
    if ( v9 && !(*(_BYTE *)(a1 + 73) >> 5) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v10 = (_QWORD *)*v10;
      if ( !sub_79BBC0((__int64)v10) )
      {
        v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v11 = *(_QWORD *)v11;
        v12 = *(_BYTE *)(v11 + 8) & 0x7F;
        if ( v12 )
        {
          while ( v12 != 22 )
          {
            v11 = sub_79A330(v11);
            v12 = *(_BYTE *)(v11 + 8) & 0x7F;
            if ( !v12 )
              goto LABEL_40;
          }
          goto LABEL_32;
        }
LABEL_40:
        v19 = *(_QWORD *)(a1 + 40);
        if ( (v19 & 7) == 0 )
        {
          v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            v21 = *(unsigned int **)(v20 + 16);
            v22 = *v21;
            if ( v22 == 8 )
            {
              if ( *((_QWORD *)v21 + 2) == 0x6E776F6E6B6E5549LL
                && *(_DWORD *)(v9 + 36) == 36
                && !memcmp(*(const void **)(v9 + 40), "00000000-0000-0000-C000-000000000046", 0x24u) )
              {
                break;
              }
              goto LABEL_32;
            }
            if ( v22 == 9
              && !memcmp(v21 + 4, "IDispatch", 9u)
              && *(_DWORD *)(v9 + 36) == 36
              && !memcmp(*(const void **)(v9 + 40), "00020400-0000-0000-C000-000000000046", 0x24u) )
            {
              break;
            }
          }
        }
      }
    }
LABEL_32:
    v13 = *(_QWORD *)(a1 + 104);
    sub_6E77B0((unsigned __int64 *)(v13 + 96), v13);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) == 1 )
    {
      v14 = (const __m128i *)sub_7B19E0(a1);
      v15 = _mm_loadu_si128(v14);
      v16 = (__int64 *)v14[1].m128i_i64[0];
      v24 = v15;
      v25 = v16;
      if ( (v15.m128i_i8[12] & 1) == 0
        && !((~v15.m128i_i8[12] & 0xC) != 0 ? ((unsigned __int8)v15.m128i_i8[12] >> 2) & 3 : v15.m128i_i8[12] & 2) )
      {
        v23 = *v25;
        v18 = sub_6B3060(&v23, v13);
        a1 = sub_B0E910(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
        if ( *(_BYTE *)(a1 + 73) >> 5 != 1 )
          continue;
      }
    }
    return 0;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  return *(_DWORD *)(*(_QWORD *)(a1 + 128) + 16LL) == 0;
}

