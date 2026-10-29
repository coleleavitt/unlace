__int64 __fastcall sub_9B96E0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  _BYTE *v6; // r13
  signed __int64 v7; // r12
  _BYTE *v8; // rax
  unsigned __int16 v9; // r12
  __int64 v10; // rdx
  size_t v11; // r12
  _BYTE *v12; // rcx
  size_t *v13; // r13
  size_t v14; // r12
  size_t v15; // rdx
  void *v17; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v21[80]; // [rsp+28h] [rbp-50h] BYREF

  v2 = *(_WORD *)a2 & 0x1FF;
  if ( v2 == 9 )
  {
    v9 = *(_WORD *)(a2 + 2);
    n[0] = 1;
    LOWORD(n[1]) = 34;
    v10 = *(unsigned int *)(a2 + 4);
    ptr = &n[1];
    v11 = *(_DWORD *)(a2 + 16) * ((v9 >> 6) & 7u);
    v12 = (_BYTE *)(a2 + 4 * v10 + 20);
    if ( v11 + 1 > 0xF )
    {
      sub_974DF0((__int64)&ptr, 1u, 0, v12, v11);
      v13 = (size_t *)ptr;
    }
    else
    {
      v13 = &n[1];
      if ( v11 )
      {
        if ( v11 == 1 )
          BYTE1(n[1]) = *v12;
        else
          memcpy((char *)&n[1] + 1, v12, v11);
      }
    }
    n[0] = v11 + 1;
    *((_BYTE *)v13 + v11 + 1) = 0;
    v14 = n[0];
    if ( n[0] == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    if ( ptr == &n[1] )
      v15 = 15;
    else
      v15 = n[1];
    if ( n[0] + 1 > v15 )
      sub_974DF0((__int64)&ptr, n[0], 0, "\"", 1u);
    else
      *((_BYTE *)ptr + n[0]) = 34;
    n[0] = v14 + 1;
    *((_BYTE *)ptr + v14 + 1) = 0;
    *(_QWORD *)a1 = a1 + 16;
    if ( ptr == &n[1] )
    {
      *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&n[1]);
    }
    else
    {
      *(_QWORD *)a1 = ptr;
      *(_QWORD *)(a1 + 16) = n[1];
    }
    *(_QWORD *)(a1 + 8) = n[0];
    return a1;
  }
  if ( v2 == 52 )
  {
    v3 = *(void **)(a2 + 16);
    v4 = *(unsigned int *)(a2 + 24);
    v5 = (unsigned __int64)(v4 + 63) >> 6;
    if ( v5 > 1 )
    {
      sub_21E18D0(&v17, v4, v5, v3);
    }
    else
    {
      v18 = v4;
      if ( (unsigned int)v4 > 0x40 )
        sub_21E1730(&v17, v3, 0);
      else
        v17 = v3;
    }
    ptr = v21;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
    sub_21E7D50((unsigned int)&v17, (unsigned int)&ptr, 10, 1, 0, 1, 0);
    v6 = ptr;
    v7 = n[0];
    v8 = (_BYTE *)(a1 + 16);
    *(_QWORD *)a1 = a1 + 16;
    if ( &v6[v7] && !v6 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v7 > 0xF )
    {
      if ( v7 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v8 = (_BYTE *)operator new(v7 + 1);
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)a1 = v8;
    }
    else
    {
      if ( v7 == 1 )
      {
        *(_BYTE *)(a1 + 16) = *v6;
LABEL_11:
        *(_QWORD *)(a1 + 8) = v7;
        v8[v7] = 0;
        if ( ptr != v21 )
          free(ptr);
        if ( v18 > 0x40 )
        {
          if ( v17 )
            operator delete[](v17);
        }
        return a1;
      }
      if ( !v7 )
        goto LABEL_11;
    }
    memcpy(v8, v6, v7);
    v8 = *(_BYTE **)a1;
    goto LABEL_11;
  }
  strcpy((char *)(a1 + 16), "#lit");
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 4;
  return a1;
}

