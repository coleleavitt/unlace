void __fastcall sub_9E6D30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  void **v13; // r13
  int v14; // ebp
  __int64 v15; // rcx
  _QWORD v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 8, v16);
  v3 = *(_QWORD *)a1;
  v4 = v2;
  v5 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(__int64 **)a1 != v5 )
  {
    v6 = *(__int64 **)a1;
    if ( (v2 >= v3 + 16 || v3 >= v2 + 16) && (unsigned __int64)v5 - v3 - 8 > 0x10 )
    {
      v7 = (((unsigned __int64)v5 - v3 - 8) >> 3) + 1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D00);
      v9 = 0;
      do
      {
        *(__m128i *)(v4 + v9) = _mm_loadu_si128((const __m128i *)(v3 + v9));
        *(__m128i *)(v3 + v9) = si128;
        v9 += 16;
      }
      while ( 16 * (v7 >> 1) != v9 );
      v10 = 8 * (v7 & 0xFFFFFFFFFFFFFFFELL);
      v11 = (_QWORD *)(v3 + v10);
      v12 = (_QWORD *)(v4 + v10);
      if ( v7 != (v7 & 0xFFFFFFFFFFFFFFFELL) )
      {
        *v12 = *v11;
        *v11 = 1;
      }
    }
    else
    {
      do
      {
        v15 = *v6++;
        v2 += 8LL;
        *(_QWORD *)(v2 - 8) = v15;
        *(v6 - 1) = 1;
      }
      while ( v5 != v6 );
    }
    do
    {
      v13 = (void **)*--v5;
      if ( (*v5 & 1) == 0 && v13 )
      {
        if ( *v13 != v13 + 2 )
          free(*v13);
        operator delete(v13, 0x48u);
      }
    }
    while ( (__int64 *)v3 != v5 );
    v5 = *(__int64 **)a1;
  }
  v14 = v16[0];
  if ( (__int64 *)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v14;
}
