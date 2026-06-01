void __fastcall sub_2267BE0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 *v3; // r12
  void *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rdx
  unsigned __int64 *v15; // r14
  volatile signed __int32 *v16; // rdi
  int v17; // r14d
  unsigned __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (unsigned __int64 *)(a1 + 16);
  v5 = sub_2237400(a1, (void *)(a1 + 16), a2, 8, v18);
  v6 = *(_QWORD *)a1;
  v7 = (unsigned __int64)v5;
  v8 = 8LL * *(unsigned int *)(a1 + 8);
  v9 = (unsigned __int64 *)(*(_QWORD *)a1 + v8);
  if ( *(unsigned __int64 **)a1 != v9 )
  {
    v10 = *(unsigned __int64 **)a1;
    if ( (v7 >= v6 + 16 || v6 >= v7 + 16) && (unsigned __int64)v9 - v6 - 8 > 0x10 )
    {
      v11 = (((unsigned __int64)v9 - v6 - 8) >> 3) + 1;
      v12 = 0;
      a3 = 0.0;
      do
      {
        *(__m128i *)(v7 + v12) = _mm_loadu_si128((const __m128i *)(v6 + v12));
        *(_OWORD *)(v6 + v12) = 0;
        v12 += 16;
      }
      while ( 16 * (v11 >> 1) != v12 );
      v13 = 8 * (v11 & 0xFFFFFFFFFFFFFFFELL);
      v14 = (unsigned __int64 *)(v13 + v6);
      v10 = (unsigned __int64 *)(v7 + v13);
      if ( v11 != (v11 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v11 = *v14;
        *v10 = *v14;
        *v14 = 0;
      }
    }
    else
    {
      v14 = (unsigned __int64 *)v7;
      do
      {
        v11 = *v10++;
        *v14++ = v11;
        *(v10 - 1) = 0;
      }
      while ( v9 != v10 );
    }
    v15 = *(unsigned __int64 **)a1;
    v9 = (unsigned __int64 *)(*(_QWORD *)a1 + v8);
    if ( *(unsigned __int64 **)a1 != v9 )
    {
      do
      {
        v16 = (volatile signed __int32 *)*--v9;
        if ( *v9 && !_InterlockedSub(v16 + 2, 1u) )
          (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, unsigned __int64 *, unsigned __int64 *, double))(*(_QWORD *)v16 + 8LL))(
            v16,
            v11,
            v14,
            v10,
            a3);
      }
      while ( v15 != v9 );
      v9 = *(unsigned __int64 **)a1;
    }
  }
  v17 = v18[0];
  if ( v3 != v9 )
    free(v9);
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 12) = v17;
}
