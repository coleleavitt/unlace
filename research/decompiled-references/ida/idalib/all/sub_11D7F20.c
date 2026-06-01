__int64 __fastcall sub_11D7F20(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  _BYTE *v6; // rax
  void *v7; // r14
  size_t v8; // rbp
  __int64 v9; // rax
  __m128i *v11; // r14
  size_t v12; // rax
  __int64 v13; // rax
  __int8 *v14; // rbp
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  _OWORD v21[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2 + 16;
  if ( *(_DWORD *)(a1 + 8) < *(_DWORD *)(a1 + 12) )
  {
    src = v21;
    if ( *(_QWORD *)a2 == v2 )
    {
      v21[0] = _mm_load_si128((const __m128i *)(a2 + 16));
    }
    else
    {
      src = *(void **)a2;
      *(_QWORD *)&v21[0] = *(_QWORD *)(a2 + 16);
    }
    v3 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)a2 = v2;
    n = v3;
    v4 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v5 = *(_QWORD *)a1 + 40 * v4;
    v6 = (_BYTE *)(v5 + 16);
    *(_QWORD *)v5 = v5 + 16;
    v7 = src;
    v8 = n;
    if ( (char *)src + n && !src )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v6 = (_BYTE *)operator new(n + 1);
      *(_QWORD *)(v5 + 16) = n;
      *(_QWORD *)v5 = v6;
    }
    else
    {
      if ( n == 1 )
      {
        *(_BYTE *)(v5 + 16) = *(_BYTE *)src;
LABEL_9:
        *(_QWORD *)(v5 + 8) = v8;
        v6[v8] = 0;
        *(_BYTE *)(v5 + 32) = 0;
        if ( src != v21 )
          operator delete(src);
        v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v9;
        return *(_QWORD *)a1 + 40 * v9 - 40;
      }
      if ( !n )
        goto LABEL_9;
    }
    memcpy(v6, v7, v8);
    v6 = *(_BYTE **)v5;
    goto LABEL_9;
  }
  v11 = (__m128i *)sub_2237400(a1, a1 + 16, 0, 40, &v18);
  src = v21;
  if ( *(_QWORD *)a2 == v2 )
  {
    v21[0] = _mm_load_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    src = *(void **)a2;
    *(_QWORD *)&v21[0] = *(_QWORD *)(a2 + 16);
  }
  v12 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)a2 = v2;
  n = v12;
  v13 = *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  v14 = &v11->m128i_i8[40 * v13];
  *(_QWORD *)v14 = v14 + 16;
  sub_11D7A40(v14, src, (__int64)src + n);
  v14[32] = 0;
  if ( src != v21 )
    operator delete(src);
  sub_11D7550(a1, v11);
  v15 = v18;
  if ( a1 + 16 != *(_QWORD *)a1 )
    free(*(void **)a1);
  v16 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)a1 = v11;
  *(_DWORD *)(a1 + 12) = v15;
  v17 = (unsigned int)(v16 + 1);
  *(_DWORD *)(a1 + 8) = v17;
  return (__int64)&v11[-2] + 40 * v17 - 8;
}
