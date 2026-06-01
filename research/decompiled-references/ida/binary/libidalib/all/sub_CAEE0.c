__int64 __fastcall sub_CAEE0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  _QWORD *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = qword_2521D0;
  v2 = xmmword_2521D8;
  v3 = 0;
  if ( !(_QWORD)xmmword_2521D8 )
    goto LABEL_7;
  v4 = 0;
  do
  {
    if ( !*(_QWORD *)(qword_2521D0 + 24 * v4 + 8) )
      break;
    v4 = (int)++v3;
  }
  while ( (int)v3 < (unsigned __int64)xmmword_2521D8 );
  if ( (_QWORD)xmmword_2521D8 == v4 )
  {
LABEL_7:
    v10 = xmmword_2521D8;
    if ( *((_QWORD *)&xmmword_2521D8 + 1) < (unsigned __int64)(xmmword_2521D8 + 1) )
    {
      qword_2521D0 = qvector_reserve();
      v1 = qword_2521D0;
      v10 = xmmword_2521D8;
    }
    v4 = v2;
    v11 = v1 + 24 * v10;
    *(_QWORD *)v11 = 0;
    v1 = qword_2521D0;
    *(_OWORD *)(v11 + 8) = 0;
    *(_QWORD *)&xmmword_2521D8 = xmmword_2521D8 + 1;
  }
  v5 = 3 * v4;
  v6 = *a1;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v8 = (_QWORD *)(v1 + 8 * v5);
  *a1 = *v8;
  a1[1] = v8[1];
  a1[2] = v8[2];
  *v8 = v6;
  *(__m128i *)(v8 + 1) = v7;
  return v3;
}

