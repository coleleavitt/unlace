__int64 __fastcall sub_621B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v5; // rcx
  size_t v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rbx
  size_t v9; // r9
  __int64 v10; // r8
  void *v11; // r11
  size_t v12; // r10
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbp
  const char *v16; // rbx
  void *v17; // rdi
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  void *v20; // rax
  unsigned int v21; // ebx
  unsigned int utf8_char; // eax
  int v24; // eax
  void *v25; // rdi
  unsigned int v26; // [rsp+8h] [rbp-C0h]
  __int64 v27; // [rsp+8h] [rbp-C0h]
  void *v28; // [rsp+10h] [rbp-B8h]
  size_t v29; // [rsp+18h] [rbp-B0h]
  __int64 v30; // [rsp+20h] [rbp-A8h]
  size_t v31; // [rsp+28h] [rbp-A0h]
  const char *v32; // [rsp+38h] [rbp-90h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i v34; // [rsp+48h] [rbp-80h] BYREF
  void *src; // [rsp+60h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-60h]
  _BYTE v37[8]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    return 1;
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 )
    {
      v5 = *(const char **)a2;
      v6 = v2 - 1;
      ptr = nullptr;
      src = nullptr;
      v7 = v2 - 1;
      v32 = v5;
      v34 = 0;
      *(_OWORD *)n = 0;
      if ( v2 != 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v2 - 1, 1);
        if ( n[1] < v6 )
          src = (void *)qvector_reserve(&src, src, v6, 1);
      }
    }
    else
    {
      v7 = 0;
      ptr = nullptr;
      v32 = haystack;
      src = nullptr;
      n[1] = 0;
      v34 = 0;
    }
    while ( 1 )
    {
      n[0] = 0;
      v8 = convert_encoding();
      if ( v8 < 0 )
        break;
      v9 = n[0];
      v10 = v34.m128i_i64[0];
      v11 = src;
      v12 = n[0];
      if ( v34.m128i_i64[0] )
      {
        v10 = v34.m128i_i64[0] - 1;
        v12 = n[0] + v34.m128i_i64[0] - 1;
      }
      v13 = ptr;
      v14 = v12 + 1;
      if ( v34.m128i_i64[1] < v12 + 1 )
      {
        v31 = v12;
        v30 = v10;
        v29 = n[0];
        v28 = src;
        v27 = v12 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
        v12 = v31;
        v13 = ptr;
        v10 = v30;
        v9 = v29;
        v11 = v28;
        v14 = v27;
      }
      v34.m128i_i64[0] = v14;
      v15 = v7 - v8;
      v13[v12] = 0;
      memmove((char *)ptr + v10, v11, v9);
      v16 = &v32[v8];
      v32 = v16;
      if ( v15 > 0 )
      {
        utf8_char = get_utf8_char(&v32);
        if ( utf8_char == -1 )
        {
          v26 = -1;
          ++v32;
        }
        else
        {
          v26 = utf8_char;
        }
        sub_357520((__int64 *)&ptr);
        v24 = *(_DWORD *)(a1 + 36);
        if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
        {
          if ( put_utf8_char(v37, v26) > 0 )
            sub_365330();
          *(_DWORD *)(a1 + 36) |= 4u;
        }
        v7 = v15 - (v32 - v16);
        if ( v7 > 0 )
          continue;
      }
      v17 = *(void **)a2;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v19 = _mm_loadu_si128(&v34);
      *(_QWORD *)a2 = ptr;
      v20 = src;
      ptr = v17;
      *(__m128i *)(a2 + 8) = v19;
      v34 = v18;
      if ( v20 )
      {
        n[0] = 0;
        qfree(v20);
        v17 = ptr;
      }
      if ( v17 )
      {
        v34.m128i_i64[0] = 0;
        qfree(v17);
      }
      return 1;
    }
    if ( (*(_BYTE *)(a1 + 36) & 2) != 0 )
      sub_365330();
    *(_DWORD *)(a1 + 32) = 1;
    v25 = *(void **)(a1 + 8);
    if ( v25 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v25);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( ptr )
    {
      v34.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return v21;
}

