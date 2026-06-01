__int64 __fastcall sub_205F2E0(size_t n, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  char *v5; // r13
  __int64 v6; // rax
  __int64 result; // rax
  void *v8; // rdi
  unsigned __int8 v9; // al
  _QWORD *v10; // rdx
  char *v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  char v14; // al
  unsigned int v15; // edx
  char v16; // al
  _QWORD *v17; // rdx
  char *v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  char *v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rdx
  char v26; // al
  unsigned int v27; // edx
  __int64 v28; // [rsp+8h] [rbp-D0h]
  void *v29; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-C0h]
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v33[160]; // [rsp+38h] [rbp-A0h] BYREF

  if ( *(_BYTE *)a2 == 5 )
  {
    if ( (unsigned __int8)sub_20C2F40(*(_QWORD *)(a2 + 8), 8) )
    {
      v4 = *(_QWORD **)(a2 + 24);
      if ( *(_DWORD *)(a2 + 32) > 0x40u )
        v4 = (_QWORD *)*v4;
      ptr = v33;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
      if ( (unsigned int)n > 0x10uLL )
      {
        sub_2236E10(&ptr, v33, (unsigned int)n, 1);
        memset(ptr, (unsigned __int8)v4, (unsigned int)n);
        si128.m128i_i64[0] = (unsigned int)n;
        v5 = (char *)ptr;
      }
      else
      {
        if ( (_DWORD)n )
          memset(v33, (unsigned __int8)v4, (unsigned int)n);
        si128.m128i_i64[0] = (unsigned int)n;
        v5 = v33;
      }
      v6 = sub_20CB0D0(a2);
      result = sub_2057370(v6, v5, (unsigned int)n);
      v8 = ptr;
      if ( ptr != v33 )
      {
LABEL_10:
        v28 = result;
        free(v8);
        return v28;
      }
    }
    else if ( (unsigned __int8)sub_20C2F40(*(_QWORD *)(a2 + 8), 16) )
    {
      v10 = *(_QWORD **)(a2 + 24);
      if ( *(_DWORD *)(a2 + 32) > 0x40u )
        v10 = (_QWORD *)*v10;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
      ptr = v33;
      sub_2053720(&ptr, (unsigned int)n, (unsigned __int16)v10);
      v11 = (char *)ptr;
      v12 = si128.m128i_i64[0];
      v13 = sub_20CB0D0(a2);
      result = sub_2057340(v13, v11, v12);
      v8 = ptr;
      if ( ptr != v33 )
        goto LABEL_10;
    }
    else
    {
      v16 = sub_20C2F40(*(_QWORD *)(a2 + 8), 32);
      v17 = *(_QWORD **)(a2 + 24);
      if ( v16 )
      {
        if ( *(_DWORD *)(a2 + 32) > 0x40u )
          v17 = (_QWORD *)*v17;
        si128.m128i_i64[0] = 0x1000000000LL;
        ptr = &si128.m128i_u64[1];
        sub_20539B0((__int64)&ptr, (unsigned int)n, (unsigned int)v17);
        v18 = (char *)ptr;
        v19 = si128.m128i_u32[0];
        v20 = sub_20CB0D0(a2);
        result = sub_2057300(v20, v18, v19);
        v8 = ptr;
        if ( ptr != &si128.m128i_u64[1] )
          goto LABEL_10;
      }
      else
      {
        if ( *(_DWORD *)(a2 + 32) > 0x40u )
          v17 = (_QWORD *)*v17;
        si128.m128i_i64[0] = 0x1000000000LL;
        ptr = &si128.m128i_u64[1];
        sub_2053BA0((__int64)&ptr, (unsigned int)n, (__int64)v17);
        v21 = (char *)ptr;
        v22 = si128.m128i_u32[0];
        v23 = sub_20CB0D0(a2);
        result = sub_20572C0(v23, v21, v22);
        v8 = ptr;
        if ( ptr != &si128.m128i_u64[1] )
          goto LABEL_10;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)a2 != 6 )
      goto LABEL_16;
    v9 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + 8LL);
    if ( v9 < 2u )
    {
      sub_1F6DD40((__int64)&v29, (_QWORD *)(a2 + 24), a3);
      v14 = sub_9EC640((__int64)&v29, 0xFFFFFFFFFFFFFFFFLL);
      v15 = 0xFFFF;
      if ( !v14 )
      {
        if ( v30 <= 0x40 )
          v15 = (unsigned __int16)v29;
        else
          v15 = *(unsigned __int16 *)v29;
      }
      ptr = v33;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
      sub_2053720(&ptr, (unsigned int)n, v15);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      result = sub_2057290(*(_QWORD *)(a2 + 8), (char *)ptr, si128.m128i_i64[0]);
      v8 = ptr;
      if ( ptr != v33 )
        goto LABEL_10;
      return result;
    }
    if ( v9 == 2 )
    {
      sub_1F6DD40((__int64)&v29, (_QWORD *)(a2 + 24), a3);
      v26 = sub_9EC640((__int64)&v29, 0xFFFFFFFFFFFFFFFFLL);
      v27 = -1;
      if ( !v26 )
      {
        v27 = (unsigned int)v29;
        if ( v30 > 0x40 )
          v27 = *(_DWORD *)v29;
      }
      ptr = &si128.m128i_u64[1];
      si128.m128i_i64[0] = 0x1000000000LL;
      sub_20539B0((__int64)&ptr, (unsigned int)n, v27);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      result = sub_2057260(*(_QWORD *)(a2 + 8), (char *)ptr, si128.m128i_u32[0]);
      v8 = ptr;
      if ( ptr != &si128.m128i_u64[1] )
        goto LABEL_10;
      return result;
    }
    if ( v9 != 3 )
    {
LABEL_16:
      LODWORD(ptr) = n;
      BYTE4(ptr) = 0;
      return sub_205EF10((__int64)ptr, a2);
    }
    sub_1F6DD40((__int64)&v29, (_QWORD *)(a2 + 24), a3);
    v24 = sub_9EC640((__int64)&v29, 0xFFFFFFFFFFFFFFFFLL);
    v25 = -1;
    if ( !v24 )
    {
      v25 = (__int64)v29;
      if ( v30 > 0x40 )
        v25 = *(_QWORD *)v29;
    }
    ptr = &si128.m128i_u64[1];
    si128.m128i_i64[0] = 0x1000000000LL;
    sub_2053BA0((__int64)&ptr, (unsigned int)n, v25);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    result = sub_2057230(*(_QWORD *)(a2 + 8), (char *)ptr, si128.m128i_u32[0]);
    v8 = ptr;
    if ( ptr != &si128.m128i_u64[1] )
      goto LABEL_10;
  }
  return result;
}
