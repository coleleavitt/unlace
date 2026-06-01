void __fastcall sub_21B8920(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i v10; // xmm0
  unsigned __int64 v11; // rcx
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // r14
  void *v16; // r15
  int v17; // r14d
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 8, v20);
  v3 = *(_QWORD *)a1;
  v4 = v2;
  v5 = 8LL * *(unsigned int *)(a1 + 8);
  v6 = (__int64 *)(*(_QWORD *)a1 + v5);
  if ( *(__int64 **)a1 != v6 )
  {
    v7 = *(__int64 **)a1;
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
      v18 = v4;
      do
      {
        v19 = *v7;
        *v7++ = 0;
        v18 += 8LL;
        *(_QWORD *)(v18 - 8) = v19;
      }
      while ( v6 != v7 );
    }
    v15 = *(__int64 **)a1;
    v6 = (__int64 *)(*(_QWORD *)a1 + v5);
    if ( *(__int64 **)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v16 = (void *)*--v6;
          if ( !*v6 )
            break;
          sub_21B59C0(*v6);
          operator delete(v16, 0x58u);
          if ( v15 == v6 )
            goto LABEL_11;
        }
      }
      while ( v15 != v6 );
LABEL_11:
      v6 = *(__int64 **)a1;
    }
  }
  v17 = v20[0];
  if ( (__int64 *)(a1 + 16) != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v17;
}
