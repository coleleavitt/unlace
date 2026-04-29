__int64 __fastcall sub_1B5900(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  char v14; // al
  char v15; // al
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rax
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r13
  void *v21; // r12
  unsigned __int64 v22; // rax
  __m128i si128; // xmm0
  __int64 v24; // rdi
  size_t v25; // rbp
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rax
  int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ebp
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ebp
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( a3 >= *(_DWORD *)(v3 + 64) )
    sub_1B47B0();
  v4 = *(_QWORD **)(a1 + 16);
  v6 = (_QWORD *)*v4;
  if ( *v4 )
  {
    v7 = (_QWORD *)*v4;
    if ( v4[1] )
      v7 = (_QWORD *)v6[1];
LABEL_5:
    while ( v6 != v7 )
    {
      if ( a3 == *((_DWORD *)v7 + 8) )
        goto LABEL_12;
      if ( (*v7 & 2) != 0 )
      {
        while ( a3 != *((_DWORD *)v7 + 8) )
          ;
LABEL_12:
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a3) + 56LL);
        if ( v7 == (_QWORD *)-24LL )
          goto LABEL_23;
        if ( v9 && *(_DWORD *)v9 == 53 )
        {
          if ( !under_debugger )
            sub_37EEE0(52923);
          BUG();
        }
        return 0;
      }
      v8 = (_QWORD *)v7[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
      {
        v11 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v12 = *v11;
        if ( (*v11 & 2) == 0 )
        {
          while ( (_QWORD *)v11[2] == v7 )
          {
            v7 = v11;
            v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
            v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v12 & 2) != 0 )
            {
              v7 = (_QWORD *)v13;
              goto LABEL_5;
            }
            v11 = (_QWORD *)v13;
          }
        }
        v7 = v11;
      }
      else
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
      }
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a3) + 56LL);
LABEL_23:
  if ( !v9 )
    return 1;
  switch ( *(_DWORD *)v9 )
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
      v14 = *(_BYTE *)(v9 + 64);
      if ( v14 == 7 )
      {
        v30 = a2[1];
        v31 = *(_DWORD *)(v9 + 72);
        v32 = *a2;
        if ( a2[2] < (unsigned __int64)(v30 + 1) )
        {
          v36 = qvector_reserve(a2, v32, v30 + 1, 4);
          *a2 = v36;
          v32 = v36;
          v30 = a2[1];
        }
        *(_DWORD *)(v32 + 4 * v30) = v31;
        ++a2[1];
      }
      else if ( v14 == 6 )
      {
        v26 = *(_QWORD *)(v9 + 72);
        if ( v26 != -1 )
        {
          v27 = sub_63670(v3, v26);
          if ( v27 )
          {
            v28 = *((_DWORD *)v27 + 18);
            v29 = a2[1];
            if ( a2[2] < (unsigned __int64)(v29 + 1) )
            {
              *a2 = qvector_reserve(a2, *a2, v29 + 1, 4);
              v29 = a2[1];
            }
            *(_DWORD *)(*a2 + 4 * v29) = v28;
            ++a2[1];
          }
        }
      }
      return 1;
    case '5':
      v20 = *(_QWORD *)(v9 + 56);
      v21 = nullptr;
      v22 = *(_QWORD *)(v20 + 32);
      si128 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
      if ( v22 )
      {
        v25 = 4 * v22;
        v38[0] = si128;
        v21 = (void *)qalloc_or_throw(4 * v22);
        memcpy(v21, *(const void **)(v20 + 24), v25);
        si128 = _mm_load_si128(v38);
      }
      v24 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        v38[0] = si128;
        qfree(v24);
        si128 = _mm_load_si128(v38);
      }
      *a2 = (__int64)v21;
      *(__m128i *)(a2 + 1) = si128;
      return 0;
    case '6':
    case ':':
      return 0;
    case '7':
      v15 = *(_BYTE *)(v9 + 32);
      if ( v15 == 7 )
      {
        v33 = a2[1];
        v34 = *(_DWORD *)(v9 + 40);
        v35 = *a2;
        if ( a2[2] < (unsigned __int64)(v33 + 1) )
        {
          v37 = qvector_reserve(a2, v35, v33 + 1, 4);
          *a2 = v37;
          v35 = v37;
          v33 = a2[1];
        }
        *(_DWORD *)(v35 + 4 * v33) = v34;
        ++a2[1];
      }
      else if ( v15 == 6 )
      {
        v16 = *(_QWORD *)(v9 + 40);
        if ( v16 != -1 )
        {
          v17 = sub_63670(v3, v16);
          if ( v17 )
          {
            v18 = *((_DWORD *)v17 + 18);
            v19 = a2[1];
            if ( a2[2] < (unsigned __int64)(v19 + 1) )
            {
              *a2 = qvector_reserve(a2, *a2, v19 + 1, 4);
              v19 = a2[1];
            }
            *(_DWORD *)(*a2 + 4 * v19) = v18;
            ++a2[1];
          }
        }
      }
      return 0;
    case '8':
    case '9':
      result = (unsigned int)sub_118D10((int *)v9, *(_QWORD *)(v3 + 1504), 0) ^ 1;
      break;
    default:
      return 1;
  }
  return result;
}
