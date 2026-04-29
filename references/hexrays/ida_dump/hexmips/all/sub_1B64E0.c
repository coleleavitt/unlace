char *__fastcall sub_1B64E0(char **a1, _DWORD *a2)
{
  char *v3; // r12
  char *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  char *v7; // r8
  unsigned __int64 v8; // rdx
  char *v10; // rdx
  char *result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  char *v14; // r14
  signed __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  char *v20; // rax
  char *v21; // rsi
  char *v22; // r15
  signed __int64 v23; // rdx
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v3 = a1[9];
  v4 = a1[5];
  v5 = v3 - v4;
  v6 = (v3 - v4) >> 3;
  if ( (((v3 == nullptr) + v6 - 1) << 7) + ((a1[4] - a1[2]) >> 2) + ((a1[6] - a1[7]) >> 2) == 0x1FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  v7 = *a1;
  v8 = (unsigned __int64)a1[1];
  if ( v8 - ((v3 - *a1) >> 3) <= 1 )
  {
    v13 = 2 * (v6 + 2);
    if ( v13 >= v8 )
    {
      v17 = 1;
      if ( v8 )
        v17 = v8;
      v18 = v17 + v8;
      v19 = v18 + 2;
      if ( (v18 + 2) >> 60 )
      {
        if ( v19 > 0x1FFFFFFFFFFFFFFFLL )
          sub_5DF44(v13, v4, v18, 0x1FFFFFFFFFFFFFFFLL);
        std::__throw_bad_alloc();
      }
      v24 = v18;
      v20 = (char *)operator new(8 * v19);
      v21 = a1[5];
      v22 = v20;
      v14 = &v20[8 * ((v24 - v6) >> 1)];
      v23 = a1[9] + 8 - v21;
      if ( v23 <= 8 )
      {
        if ( v23 == 8 )
          *(_QWORD *)v14 = *(_QWORD *)v21;
      }
      else
      {
        memmove(v14, v21, v23);
      }
      operator delete(*a1, 8LL * (_QWORD)a1[1]);
      *a1 = v22;
      a1[1] = (char *)v19;
    }
    else
    {
      v14 = &v7[8 * ((v8 - (v6 + 2)) >> 1)];
      v15 = v3 + 8 - v4;
      if ( v14 < v4 )
      {
        if ( v15 <= 8 )
        {
          if ( v15 == 8 )
            *(_QWORD *)v14 = *(_QWORD *)v4;
        }
        else
        {
          memmove(v14, v4, v15);
        }
      }
      else if ( v15 <= 8 )
      {
        if ( v15 == 8 )
          *(_QWORD *)&v14[v5] = *(_QWORD *)v4;
      }
      else
      {
        memmove(v14, v4, v3 + 8 - v4);
      }
    }
    a1[5] = v14;
    v16 = *(_QWORD *)v14;
    v3 = &v14[v5];
    a1[9] = &v14[v5];
    *(__m128i *)(a1 + 3) = _mm_unpacklo_epi64((__m128i)v16, (__m128i)(v16 + 512));
    *(__m128i *)(a1 + 7) = _mm_unpacklo_epi64(
                             (__m128i)*(unsigned __int64 *)&v14[v5],
                             (__m128i)(unsigned __int64)(*(_QWORD *)&v14[v5] + 512LL));
  }
  *((_QWORD *)v3 + 1) = operator new(0x200u);
  *(_DWORD *)a1[6] = *a2;
  v10 = a1[9] + 8;
  a1[9] = v10;
  result = *(char **)v10;
  v12 = *(_QWORD *)v10 + 512LL;
  a1[7] = result;
  a1[8] = (char *)v12;
  a1[6] = result;
  return result;
}
