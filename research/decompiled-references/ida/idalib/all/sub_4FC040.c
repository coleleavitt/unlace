__int64 __fastcall sub_4FC040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 *v12; // rsi
  void *v13; // rbp
  __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  void *v17; // r15
  char v18; // al
  char *v19; // rax
  char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 n; // [rsp+8h] [rbp-70h]
  __int64 ptr; // [rsp+10h] [rbp-68h] BYREF
  void *ptr_8[2]; // [rsp+18h] [rbp-60h]
  char v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v6 = (_QWORD *)a1[24];
  v29 = __readfsqword(0x28u);
  v8 = *v6 + 48 * a2;
  v9 = *(_QWORD **)(v8 + 32);
  if ( !v9 )
  {
    if ( !under_debugger )
      interr(2877);
    goto LABEL_45;
  }
  v10 = a4;
  v11 = *v6 + 48 * a3;
  v12 = *(unsigned __int64 **)(v11 + 32);
  if ( v12 )
  {
    if ( a1[27] - 1LL == *v9 )
    {
      if ( *v12 >= a1[4] )
        return sub_4FB600((__int64)a1, v12, a4);
      v13 = (void *)v9[10];
      if ( a1[7] )
      {
        a1[9] = v13;
      }
      else
      {
        *(_BYTE *)(v8 + 24) = 6;
        *(_QWORD *)(v8 + 8) = 0;
        ptr = -1;
        ptr_8[0] = v13;
        LODWORD(ptr_8[1]) = 0;
        v15 = *(_QWORD *)v8;
        v16 = *(_QWORD *)(v8 + 16);
        if ( (unsigned __int64)&ptr >= *(_QWORD *)v8 && (unsigned __int64)&ptr < v15 + 24 * v16 )
        {
          if ( !v16 )
          {
            v23 = qvector_reserve(v8, v15, 1, 24);
            v24 = *(_QWORD *)(v8 + 8);
            *(_QWORD *)v8 = v23;
            v15 = v23 + 24 * v24;
          }
          *(_QWORD *)v15 = -1;
          *(_QWORD *)(v15 + 8) = v13;
          *(_DWORD *)(v15 + 16) = 0;
        }
        else
        {
          if ( !v16 )
          {
            v21 = qvector_reserve(v8, v15, 1, 24);
            v22 = *(_QWORD *)(v8 + 8);
            *(_QWORD *)v8 = v21;
            v15 = v21 + 24 * v22;
          }
          *(__m128i *)v15 = _mm_load_si128((const __m128i *)&ptr);
          *(void **)(v15 + 16) = ptr_8[1];
        }
        ++*(_QWORD *)(v8 + 8);
        v9[1] = -1;
        v9[2] = 0;
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
  v17 = *(void **)(v11 + 8);
  if ( v17 )
  {
    ptr_8[1] = *(void **)(v11 + 8);
    ptr = qalloc_or_throw(24LL * (_QWORD)v17);
    v12 = *(unsigned __int64 **)v11;
    memcpy((void *)ptr, *(const void **)v11, 24LL * (_QWORD)v17);
    ptr_8[0] = v17;
  }
  v28 = *(_BYTE *)(v11 + 24);
  v18 = v28;
  if ( (unsigned __int8)(v28 - 10) <= 3u )
  {
    if ( !v10 )
    {
LABEL_32:
      result = (unsigned int)sub_4F68C0(v9, v8, (__int64)&ptr, a3, v10) ^ 1;
      goto LABEL_24;
    }
    v19 = (char *)ptr;
    v20 = (char *)(ptr + 24 * (__int64)ptr_8[0]);
    if ( (char *)ptr != v20 )
    {
      a4 = (24 * LOBYTE(ptr_8[0])) & 8;
      if ( ((24 * LOBYTE(ptr_8[0])) & 8) == 0 || (*(_QWORD *)ptr += v10, v19 += 24, v20 != v19) )
      {
        do
        {
          *(_QWORD *)v19 += v10;
          *((_QWORD *)v19 + 3) += v10;
          v19 += 48;
        }
        while ( v20 != v19 );
      }
    }
    sub_4FB280((__int64)&ptr, (__int64)v12, (__int64)v20, a4, a5, a6);
    v18 = v28;
  }
  if ( v18 == 2 )
  {
    if ( !under_debugger )
      interr(2876);
    goto LABEL_45;
  }
  if ( !v18 )
  {
    if ( !under_debugger )
      interr(2887);
    goto LABEL_45;
  }
  if ( v18 != 1 )
  {
    if ( (unsigned __int8)(v18 - 3) <= 6u )
    {
      v9[1] = a3;
      result = 1;
      v9[2] = 0;
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
