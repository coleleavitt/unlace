void __fastcall sub_F5CA20(__int64 a1, __int64 a2)
{
  __int64 *v2; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rsi
  __int64 *v16; // r15
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  int v21; // r14d
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD v24[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (__int64 *)(a1 + 16);
  v4 = sub_22136C0(a1, a1 + 16, a2, 8, v24);
  v5 = *(_QWORD *)a1;
  v6 = 8LL * *(unsigned int *)(a1 + 8);
  v7 = (__int64 *)(*(_QWORD *)a1 + v6);
  if ( *(__int64 **)a1 != v7 )
  {
    v8 = *(__int64 **)a1;
    if ( (v4 >= v5 + 16 || v5 >= v4 + 16) && (unsigned __int64)v7 - v5 - 8 > 0x10 )
    {
      v9 = (((unsigned __int64)v7 - v5 - 8) >> 3) + 1;
      v10 = 0;
      do
      {
        v11 = _mm_loadu_si128((const __m128i *)(v5 + v10));
        *(_OWORD *)(v5 + v10) = 0;
        *(__m128i *)(v4 + v10) = v11;
        v10 += 16;
      }
      while ( 16 * (v9 >> 1) != v10 );
      v12 = 8 * (v9 & 0xFFFFFFFFFFFFFFFELL);
      v13 = (__int64 *)(v12 + v5);
      v14 = (_QWORD *)(v4 + v12);
      if ( v9 != (v9 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v15 = *v13;
        *v13 = 0;
        *v14 = v15;
      }
    }
    else
    {
      v22 = v4;
      do
      {
        v23 = *v8;
        *v8++ = 0;
        v22 += 8LL;
        *(_QWORD *)(v22 - 8) = v23;
      }
      while ( v7 != v8 );
    }
    v16 = *(__int64 **)a1;
    v7 = (__int64 *)(*(_QWORD *)a1 + v6);
    if ( *(__int64 **)a1 != v7 )
    {
      do
      {
        v17 = (_QWORD *)*--v7;
        if ( *v7 )
        {
          v18 = (_QWORD *)v17[10];
          if ( v18 != v17 + 12 )
            free(v18);
          v19 = (_QWORD *)v17[7];
          if ( v19 != v17 + 9 )
            free(v19);
          v20 = (_QWORD *)v17[3];
          if ( v20 != v17 + 5 )
            free(v20);
          operator delete(v17, 0x70u);
        }
      }
      while ( v16 != v7 );
      v7 = *(__int64 **)a1;
    }
  }
  v21 = v24[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v21;
}

