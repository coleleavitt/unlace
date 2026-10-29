void __fastcall sub_10E3AB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  void **v4; // rbx
  __int64 v5; // r14
  void **v6; // r13
  __int64 v7; // rbp
  __m128i si128; // xmm1
  __int128 v9; // xmm0
  void *v10; // rdi
  unsigned __int64 v11; // r12
  void *v12; // rsi
  void **v13; // rbx
  int v14; // ebx
  size_t v15; // rdx
  void **v16; // [rsp+8h] [rbp-50h]
  __int64 v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v16 = (void **)(a1 + 16);
  v3 = sub_22136C0(a1, a1 + 16, a2, 152, v17);
  v4 = *(void ***)a1;
  v5 = v3;
  v6 = (void **)(*(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v6 )
  {
    v7 = v3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v9 = 0;
    do
    {
      v10 = (void *)(v7 + 24);
      *(__m128i *)(v7 + 8) = si128;
      v11 = (unsigned __int64)v4[1];
      *(_QWORD *)v7 = v7 + 24;
      if ( (void **)v7 != v4 && v11 )
      {
        v12 = v4 + 3;
        if ( *v4 == v4 + 3 )
        {
          v15 = v11;
          if ( v11 <= 0x80
            || (sub_22130D0(v7, v7 + 24, v11, 1),
                v15 = (size_t)v4[1],
                v12 = *v4,
                v9 = 0,
                v10 = *(void **)v7,
                si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00),
                v15) )
          {
            memcpy(v10, v12, v15);
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
            v9 = 0;
          }
          *(_QWORD *)(v7 + 8) = v11;
          v4[1] = nullptr;
        }
        else
        {
          *(_QWORD *)v7 = *v4;
          *(_QWORD *)(v7 + 8) = v11;
          *(_QWORD *)(v7 + 16) = v4[2];
          *v4 = v12;
          *(_OWORD *)(v4 + 1) = v9;
        }
      }
      v4 += 19;
      v7 += 152;
    }
    while ( v6 != v4 );
    v13 = *(void ***)a1;
    v6 = (void **)(*(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 19;
          if ( *v6 == v6 + 3 )
            break;
          free(*v6);
          if ( v6 == v13 )
          {
            v6 = *(void ***)a1;
            goto LABEL_12;
          }
        }
      }
      while ( v6 != v13 );
      v6 = *(void ***)a1;
    }
  }
LABEL_12:
  v14 = v17[0];
  if ( v16 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v14;
}

