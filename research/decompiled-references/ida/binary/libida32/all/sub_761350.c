void *__fastcall sub_761350(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // r12
  __int64 v5; // rdx
  const char *v6; // rsi
  size_t v7; // r12
  void *v8; // r15
  __int64 v9; // rbp
  size_t v10; // r13
  __int64 v11; // rsi
  __int64 v13; // rax
  size_t v14; // r14
  __int64 v15; // r13
  size_t v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 32) == 0;
  v3 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v5 = 0;
    ptr = nullptr;
    v6 = haystack;
    *(_OWORD *)n = 0;
    if ( v3 )
    {
      v6 = *(const char **)a2;
      v5 = (unsigned int)(v3 - 1);
    }
    if ( !(unsigned __int8)utf8_utf16(&ptr, v6, v5) )
    {
      if ( !under_debugger )
        interr(274);
      BUG();
    }
    v7 = n[0];
    v8 = &unk_2394CF8;
    if ( n[0] )
    {
      v8 = ptr;
      v7 = 2 * n[0] - 2;
    }
    v9 = a1[1];
    v10 = v7;
    if ( v9 )
      v10 = --v9 + v7;
    v11 = *a1;
    if ( a1[2] < v10 + 1 )
    {
      v13 = qvector_reserve(a1, v11, v10 + 1, 1);
      *a1 = v13;
      v11 = v13;
    }
    a1[1] = v10 + 1;
    *(_BYTE *)(v11 + v10) = 0;
    memmove((void *)(v9 + *a1), v8, v7);
    if ( ptr )
    {
      n[0] = 0;
      qfree(ptr);
    }
    return (void *)(v21 - __readfsqword(0x28u));
  }
  if ( !v3 )
    return (void *)(v21 - __readfsqword(0x28u));
  v14 = v3 - 1;
  if ( v3 == 1 )
    return (void *)(v21 - __readfsqword(0x28u));
  v15 = a1[1];
  v16 = v3 - 1;
  if ( v15 )
  {
    --v15;
    v16 = v14 + v15;
    v3 += v15;
  }
  v17 = *a1;
  if ( a1[2] < v3 )
  {
    v18 = qvector_reserve(a1, v17, v3, 1);
    *a1 = v18;
    v17 = v18;
  }
  a1[1] = v3;
  *(_BYTE *)(v17 + v16) = 0;
  return memcpy((void *)(v15 + *a1), *(const void **)a2, v14);
}

