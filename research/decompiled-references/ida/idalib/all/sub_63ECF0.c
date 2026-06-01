__int64 __fastcall sub_63ECF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v5; // rcx
  size_t v6; // rbx
  __int64 v7; // rbp
  bool v8; // zf
  const char *v9; // rdx
  __int64 v10; // rbx
  size_t v11; // r9
  __int64 v12; // r8
  void *v13; // r11
  size_t v14; // r10
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbp
  const char *v18; // rbx
  void *v19; // rdi
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  void *v22; // rax
  unsigned int v23; // ebx
  unsigned int utf8_char; // eax
  int v26; // eax
  void *v27; // rdi
  unsigned int v28; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+8h] [rbp-C0h]
  void *v30; // [rsp+10h] [rbp-B8h]
  size_t v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  size_t v33; // [rsp+28h] [rbp-A0h]
  const char *v34; // [rsp+38h] [rbp-90h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __m128i v36; // [rsp+48h] [rbp-80h] BYREF
  void *src; // [rsp+60h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-60h]
  _BYTE v39[8]; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v40 = __readfsqword(0x28u);
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
      v34 = v5;
      v36 = 0;
      *(_OWORD *)n = 0;
      if ( v2 != 1 )
      {
        ptr = (void *)qvector_reserve(&ptr, 0, v2 - 1, 1);
        if ( n[1] >= v6 )
        {
          v5 = v34;
        }
        else
        {
          src = (void *)qvector_reserve(&src, src, v6, 1);
          v5 = v34;
        }
      }
    }
    else
    {
      v5 = haystack;
      v7 = 0;
      ptr = nullptr;
      v34 = haystack;
      src = nullptr;
      n[1] = 0;
      v36 = 0;
    }
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 16) == 0;
      v9 = haystack;
      n[0] = 0;
      if ( !v8 )
        v9 = *(const char **)(a1 + 8);
      v10 = convert_encoding(&src, "UTF-8", v9, v5, v7, 0);
      if ( v10 < 0 )
        break;
      v11 = n[0];
      v12 = v36.m128i_i64[0];
      v13 = src;
      v14 = n[0];
      if ( v36.m128i_i64[0] )
      {
        v12 = v36.m128i_i64[0] - 1;
        v14 = n[0] + v36.m128i_i64[0] - 1;
      }
      v15 = ptr;
      v16 = v14 + 1;
      if ( v36.m128i_i64[1] < v14 + 1 )
      {
        v33 = v14;
        v32 = v12;
        v31 = n[0];
        v30 = src;
        v29 = v14 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
        v14 = v33;
        v15 = ptr;
        v12 = v32;
        v11 = v31;
        v13 = v30;
        v16 = v29;
      }
      v36.m128i_i64[0] = v16;
      v17 = v7 - v10;
      v15[v14] = 0;
      memmove((char *)ptr + v12, v13, v11);
      v18 = &v34[v10];
      v34 = v18;
      if ( v17 > 0 )
      {
        utf8_char = get_utf8_char(&v34);
        if ( utf8_char == -1 )
        {
          v28 = -1;
          ++v34;
        }
        else
        {
          v28 = utf8_char;
        }
        sub_35A910((__int64 *)&ptr);
        v26 = *(_DWORD *)(a1 + 36);
        if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
        {
          if ( put_utf8_char(v39, v28) > 0 )
            sub_368890();
          *(_DWORD *)(a1 + 36) |= 4u;
        }
        v5 = v34;
        v7 = v17 - (v34 - v18);
        if ( v7 > 0 )
          continue;
      }
      v19 = *(void **)a2;
      v20 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v21 = _mm_loadu_si128(&v36);
      *(_QWORD *)a2 = ptr;
      v22 = src;
      ptr = v19;
      *(__m128i *)(a2 + 8) = v21;
      v36 = v20;
      if ( v22 )
      {
        n[0] = 0;
        qfree(v22);
        v19 = ptr;
      }
      if ( v19 )
      {
        v36.m128i_i64[0] = 0;
        qfree(v19);
      }
      return 1;
    }
    if ( (*(_BYTE *)(a1 + 36) & 2) != 0 )
      sub_368890();
    *(_DWORD *)(a1 + 32) = 1;
    v27 = *(void **)(a1 + 8);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v27);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( ptr )
    {
      v36.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return v23;
}
