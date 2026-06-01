__int64 __fastcall sub_4E4B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int64 *v9; // rsi
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  void *v15; // r15
  char v16; // al
  char *v17; // rax
  char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 n; // [rsp+8h] [rbp-70h]
  __int64 ptr; // [rsp+10h] [rbp-68h] BYREF
  void *ptr_8[2]; // [rsp+18h] [rbp-60h]
  char v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 160);
  v27 = __readfsqword(0x28u);
  v6 = *v4 + 48 * a2;
  v7 = *(_QWORD *)(v6 + 32);
  if ( !v7 )
  {
    if ( !under_debugger )
      interr(2877);
    goto LABEL_45;
  }
  v8 = *v4 + 48 * a3;
  v9 = *(unsigned __int64 **)(v8 + 32);
  if ( v9 )
  {
    if ( *(_QWORD *)(a1 + 184) - 1LL == *(_QWORD *)v7 )
    {
      if ( *v9 >= *(_QWORD *)(a1 + 32) )
        return sub_4E4140(a1, v9, a4);
      v10 = *(_DWORD *)(v7 + 80);
      if ( *(_QWORD *)(a1 + 56) )
      {
        *(_DWORD *)(a1 + 72) = v10;
      }
      else
      {
        *(_BYTE *)(v6 + 24) = 6;
        *(_QWORD *)(v6 + 8) = 0;
        ptr = 0xFFFFFFFFLL;
        ptr_8[0] = (void *)v10;
        v12 = *(_QWORD *)v6;
        v13 = *(_QWORD *)(v6 + 16);
        if ( (unsigned __int64)&ptr >= *(_QWORD *)v6 && (unsigned __int64)&ptr < v12 + 16 * v13 )
        {
          if ( !v13 )
          {
            v21 = qvector_reserve(v6, v12, 1, 16);
            v22 = *(_QWORD *)(v6 + 8);
            *(_QWORD *)v6 = v21;
            v12 = v21 + 16 * v22;
          }
          *(_DWORD *)(v12 + 8) = v10;
          *(_QWORD *)v12 = 0xFFFFFFFFLL;
          *(_DWORD *)(v12 + 12) = 0;
        }
        else
        {
          if ( !v13 )
          {
            v19 = qvector_reserve(v6, v12, 1, 16);
            v20 = *(_QWORD *)(v6 + 8);
            *(_QWORD *)v6 = v19;
            v12 = v19 + 16 * v20;
          }
          *(__m128i *)v12 = _mm_load_si128((const __m128i *)&ptr);
        }
        ++*(_QWORD *)(v6 + 8);
        *(_QWORD *)(v7 + 8) = -1;
        *(_DWORD *)(v7 + 16) = 0;
      }
      return 1;
    }
    if ( !under_debugger )
      interr(2878);
LABEL_45:
    BUG();
  }
  ptr = 0;
  *(_OWORD *)ptr_8 = 0;
  v15 = *(void **)(v8 + 8);
  if ( v15 )
  {
    ptr_8[1] = *(void **)(v8 + 8);
    ptr = qalloc_or_throw(16LL * (_QWORD)v15, nullptr);
    memcpy((void *)ptr, *(const void **)v8, 16LL * (_QWORD)v15);
    ptr_8[0] = v15;
  }
  v26 = *(_BYTE *)(v8 + 24);
  v16 = v26;
  if ( (unsigned __int8)(v26 - 10) <= 3u )
  {
    if ( !(_DWORD)a4 )
    {
LABEL_32:
      result = (unsigned int)sub_4DFAD0(v7, v6, (__int64)&ptr, a3, a4) ^ 1;
      goto LABEL_24;
    }
    v17 = (char *)ptr;
    v18 = (char *)(ptr + 16 * (__int64)ptr_8[0]);
    if ( (char *)ptr != v18 )
    {
      if ( ((16 * LOBYTE(ptr_8[0])) & 0x10) == 0 || (*(_QWORD *)ptr += (unsigned int)a4, v17 += 16, v17 != v18) )
      {
        do
        {
          *(_QWORD *)v17 += (unsigned int)a4;
          *((_QWORD *)v17 + 2) += (unsigned int)a4;
          v17 += 32;
        }
        while ( v17 != v18 );
      }
    }
    sub_4DE040((__int64)&ptr);
    v16 = v26;
  }
  if ( v16 == 2 )
  {
    if ( !under_debugger )
      interr(2876);
    goto LABEL_45;
  }
  if ( !v16 )
  {
    if ( !under_debugger )
      interr(2887);
    goto LABEL_45;
  }
  if ( v16 != 1 )
  {
    if ( (unsigned __int8)(v16 - 3) <= 6u )
    {
      *(_QWORD *)(v7 + 8) = a3;
      result = 1;
      *(_DWORD *)(v7 + 16) = 0;
      goto LABEL_24;
    }
    goto LABEL_32;
  }
  result = 0;
LABEL_24:
  if ( ptr )
  {
    n = result;
    ptr_8[0] = nullptr;
    qfree((void *)ptr);
    return n;
  }
  return result;
}

