__int64 __fastcall sub_459D30(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int *v3; // rbx
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rsi
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned __int64 v17; // r12

  merge_handler_perform_diff(a1);
  result = a1[13];
  if ( result )
  {
    v3 = (unsigned int *)a1[12];
    v4 = (__int64)&v3[8 * result - 8];
    v5 = *(_DWORD *)(a1[10] + 12LL);
    v6 = *(_QWORD *)(v4 + 8);
    v7 = *(_DWORD *)(a1[11] + 12LL);
    if ( v6 != -1 )
    {
      *(_QWORD *)(v4 + 8) = (unsigned int)sub_455320(a1[1], v6, 0xFFFFFFFF, v5, v7);
      v3 = (unsigned int *)a1[12];
    }
    result = (unsigned int)sub_4556E0(a1[1], *v3, 0, v5, v7);
    *(_QWORD *)v3 = (unsigned int)result;
    v8 = a1[13] - 1LL;
    if ( a1[13] != 1 )
    {
      v9 = 0;
      do
      {
        result = (unsigned __int8)sub_459990(a1, v8);
        v9 += (unsigned __int8)result;
        --v8;
      }
      while ( v8 );
      if ( v9 )
      {
        v10 = a1[13];
        v11 = 0;
        v12 = (int)v10;
        if ( !(_DWORD)v10 )
        {
LABEL_18:
          if ( !under_debugger )
            interr(2434);
          goto LABEL_22;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = a1[12];
            v14 = v13 + 32 * v11;
            if ( !*(_DWORD *)(v14 + 24) )
              break;
            v15 = v8;
            ++v11;
            ++v8;
            v16 = 32 * v15 + v13;
            *(__m128i *)v16 = _mm_loadu_si128((const __m128i *)v14);
            *(__m128i *)(v16 + 12) = _mm_loadu_si128((const __m128i *)(v14 + 12));
            if ( v11 == v12 )
              goto LABEL_18;
          }
          if ( !--v9 )
            break;
          if ( ++v11 == v12 )
            goto LABEL_18;
        }
        if ( v11 < v8 )
        {
          if ( !under_debugger )
            interr(2433);
LABEL_22:
          BUG();
        }
        v17 = v11 + 1;
        memmove((void *)(32 * v8 + v13), (const void *)(v13 + 32 * v11 + 32), 32 * (a1[13] - (v11 + 1)));
        result = (__int64)(32 * (v17 - v8)) >> 5;
        a1[13] -= result;
      }
    }
  }
  return result;
}

