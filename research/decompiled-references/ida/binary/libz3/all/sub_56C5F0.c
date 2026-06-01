_QWORD *__fastcall sub_56C5F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 *a8)
{
  _QWORD *v11; // rbx
  _DWORD *v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rsi
  size_t v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rsi
  unsigned int i; // r13d
  __int64 v22; // r15
  unsigned int *v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // ebp
  unsigned int v27; // [rsp+8h] [rbp-40h]

  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) || a1 != *(_QWORD *)(a4 + 8) )
    return nullptr;
  v11 = (_QWORD *)sub_186B270(0x30u);
  *v11 = &off_1C514F8;
  v11[1] = 0;
  v12 = (_DWORD *)*a7;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  if ( v12 )
  {
    v13 = *(v12 - 1);
    v14 = (unsigned int)*(v12 - 2);
    v27 = v14;
    v15 = sub_186B270(4 * v14 + 8);
    v11[5] = v15 + 8;
    v16 = (_DWORD *)*a7;
    *(_QWORD *)v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v13)).m128i_u64[0];
    if ( v16 )
    {
      v17 = 4LL * (unsigned int)*(v16 - 1);
      if ( v17 <= 4 )
      {
        if ( v17 == 4 )
          *(_DWORD *)(v15 + 8) = *v16;
      }
      else
      {
        memmove((void *)(v15 + 8), v16, v17);
      }
    }
  }
  v18 = *(_QWORD *)(a3 + 16);
  if ( v18 )
    v19 = *(_DWORD *)(v18 - 4);
  else
    v19 = 0;
  v20 = *a5;
  for ( i = 0; *a5; ++i )
  {
    if ( i >= *(_DWORD *)(v20 - 4) )
      break;
    v22 = 4LL * i;
    v23 = (unsigned int *)(v22 + v20);
    if ( *(_DWORD *)(*a6 + v22) >= v19 )
    {
      sub_56C550(v11 + 3, v23);
      sub_56C550(v11 + 4, (unsigned int *)(v22 + *a6));
    }
    else
    {
      sub_56C550(v11 + 1, v23);
      sub_56C550(v11 + 2, (unsigned int *)(v22 + *a6));
    }
    v20 = *a5;
  }
  v24 = *a8;
  if ( *a8 )
  {
    v25 = 0;
    do
    {
      if ( v25 >= *(_DWORD *)(v24 - 4) )
        break;
      sub_56C550(v11 + 4, (unsigned int *)(v24 + 4LL * v25++));
      v24 = *a8;
    }
    while ( *a8 );
  }
  return v11;
}

