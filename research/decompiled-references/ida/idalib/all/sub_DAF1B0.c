void __fastcall sub_DAF1B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  void **v6; // rbx
  void **v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rcx
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  void **v15; // r14
  int v16; // r14d
  unsigned __int64 v17; // rdx
  void *v18; // rsi
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 8, v19);
  v3 = *(_QWORD *)a1;
  v4 = v2;
  v5 = 8LL * *(unsigned int *)(a1 + 8);
  v6 = (void **)(*(_QWORD *)a1 + v5);
  if ( *(void ***)a1 != v6 )
  {
    v7 = *(void ***)a1;
    if ( (v4 >= v3 + 16 || v3 >= v4 + 16) && (unsigned __int64)v6 - v3 - 8 > 0x10 )
    {
      v8 = (((unsigned __int64)v6 - v3 - 8) >> 3) + 1;
      v9 = 0;
      do
      {
        v10 = _mm_loadu_si128((const __m128i *)(v3 + v9));
        *(_OWORD *)(v3 + v9) = 0;
        *(__m128i *)(v4 + v9) = v10;
        v9 += 16;
      }
      while ( 16 * (v8 >> 1) != v9 );
      v11 = 8 * (v8 & 0xFFFFFFFFFFFFFFFELL);
      v12 = (__int64 *)(v11 + v3);
      v13 = (_QWORD *)(v4 + v11);
      if ( v8 != (v8 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v14 = *v12;
        *v12 = 0;
        *v13 = v14;
      }
    }
    else
    {
      v17 = v4;
      do
      {
        v18 = *v7;
        *v7++ = nullptr;
        v17 += 8LL;
        *(_QWORD *)(v17 - 8) = v18;
      }
      while ( v6 != v7 );
    }
    v15 = *(void ***)a1;
    v6 = (void **)(*(_QWORD *)a1 + v5);
    if ( *(void ***)a1 != v6 )
    {
      do
      {
        while ( *--v6 )
        {
          operator delete[](*v6);
          if ( v15 == v6 )
            goto LABEL_11;
        }
      }
      while ( v15 != v6 );
LABEL_11:
      v6 = *(void ***)a1;
    }
  }
  v16 = v19[0];
  if ( (void **)(a1 + 16) != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v16;
}
