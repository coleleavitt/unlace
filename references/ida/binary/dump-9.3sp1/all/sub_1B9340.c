__int64 __fastcall sub_1B9340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // r8
  char v11; // al
  char v12; // al
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // r13
  void *v18; // r12
  unsigned __int64 v19; // rax
  __m128i si128; // xmm0
  __int64 v21; // rdi
  size_t v22; // rbp
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rax
  int v25; // ebp
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ebp
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // ebp
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)a3 >= *(_DWORD *)(v3 + 64) )
    sub_1B81F0();
  v4 = *(_QWORD *)(a1 + 16);
  v5 = (__int64 *)a2;
  v6 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( *(_QWORD *)(v4 + 8) )
      v7 = *(_QWORD *)(v6 + 8);
LABEL_5:
    while ( v6 != v7 )
    {
      a2 = v7 + 24;
      if ( (_DWORD)a3 == *(_DWORD *)(v7 + 32) )
        goto LABEL_12;
      v4 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 2) != 0 )
      {
        while ( (_DWORD)a3 != *(_DWORD *)(v7 + 32) )
          ;
LABEL_12:
        a3 = (unsigned int)a3;
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * (unsigned int)a3) + 56LL);
        if ( v7 == -24 )
          goto LABEL_23;
        if ( v8 && *(_DWORD *)v8 == 53 )
        {
          if ( !under_debugger )
            sub_383060(52923);
          BUG();
        }
        return 0;
      }
      a2 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)a2 & 2) != 0 )
      {
        v4 &= 0xFFFFFFFFFFFFFFFCLL;
        a2 = *(_QWORD *)v4;
        if ( (*(_QWORD *)v4 & 2) == 0 )
        {
          while ( *(_QWORD *)(v4 + 16) == v7 )
          {
            v7 = v4;
            v10 = a2 & 0xFFFFFFFFFFFFFFFCLL;
            a2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (a2 & 2) != 0 )
            {
              v7 = v10;
              goto LABEL_5;
            }
            v4 = v10;
          }
        }
        v7 = v4;
      }
      else
      {
        do
        {
          v7 = a2;
          a2 = *(_QWORD *)(a2 + 8);
        }
        while ( (*(_BYTE *)a2 & 2) == 0 );
      }
    }
  }
  a3 = (unsigned int)a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * (unsigned int)a3) + 56LL);
LABEL_23:
  if ( !v8 )
    return 1;
  switch ( *(_DWORD *)v8 )
  {
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      v11 = *(_BYTE *)(v8 + 64);
      if ( v11 == 7 )
      {
        v27 = v5[1];
        v28 = *(_DWORD *)(v8 + 72);
        v29 = *v5;
        if ( v5[2] < (unsigned __int64)(v27 + 1) )
        {
          v33 = qvector_reserve((__int64)v5, v29, v27 + 1, 4);
          *v5 = v33;
          v29 = v33;
          v27 = v5[1];
        }
        *(_DWORD *)(v29 + 4 * v27) = v28;
        ++v5[1];
      }
      else if ( v11 == 6 )
      {
        v23 = *(_QWORD *)(v8 + 72);
        if ( v23 != -1 )
        {
          v24 = sub_670B0(v3, v23);
          if ( v24 )
          {
            v25 = *((_DWORD *)v24 + 18);
            v26 = v5[1];
            if ( v5[2] < (unsigned __int64)(v26 + 1) )
            {
              *v5 = qvector_reserve((__int64)v5, *v5, v26 + 1, 4);
              v26 = v5[1];
            }
            *(_DWORD *)(*v5 + 4 * v26) = v25;
            ++v5[1];
          }
        }
      }
      return 1;
    case '5':
      v17 = *(_QWORD *)(v8 + 56);
      v18 = nullptr;
      v19 = *(_QWORD *)(v17 + 32);
      si128 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      if ( v19 )
      {
        v22 = 4 * v19;
        v35[0] = si128;
        v18 = (void *)qalloc_or_throw(4 * v19, a2, a3, v4);
        memcpy(v18, *(const void **)(v17 + 24), v22);
        si128 = _mm_load_si128(v35);
      }
      v21 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        v35[0] = si128;
        qfree(v21);
        si128 = _mm_load_si128(v35);
      }
      *v5 = (__int64)v18;
      *(__m128i *)(v5 + 1) = si128;
      return 0;
    case '6':
    case ':':
      return 0;
    case '7':
      v12 = *(_BYTE *)(v8 + 32);
      if ( v12 == 7 )
      {
        v30 = v5[1];
        v31 = *(_DWORD *)(v8 + 40);
        v32 = *v5;
        if ( v5[2] < (unsigned __int64)(v30 + 1) )
        {
          v34 = qvector_reserve((__int64)v5, v32, v30 + 1, 4);
          *v5 = v34;
          v32 = v34;
          v30 = v5[1];
        }
        *(_DWORD *)(v32 + 4 * v30) = v31;
        ++v5[1];
      }
      else if ( v12 == 6 )
      {
        v13 = *(_QWORD *)(v8 + 40);
        if ( v13 != -1 )
        {
          v14 = sub_670B0(v3, v13);
          if ( v14 )
          {
            v15 = *((_DWORD *)v14 + 18);
            v16 = v5[1];
            if ( v5[2] < (unsigned __int64)(v16 + 1) )
            {
              *v5 = qvector_reserve((__int64)v5, *v5, v16 + 1, 4);
              v16 = v5[1];
            }
            *(_DWORD *)(*v5 + 4 * v16) = v15;
            ++v5[1];
          }
        }
      }
      return 0;
    case '8':
    case '9':
      result = (unsigned int)sub_11C750((int *)v8, *(_QWORD *)(v3 + 1504), 0) ^ 1;
      break;
    default:
      return 1;
  }
  return result;
}
