void __fastcall sub_12E53B0(__int64 a1, __int64 a2, __m128 a3, double a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // r14
  int v15; // r14d
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_2237400(a1, a1 + 16, a2, 8, v16);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = 8LL * *(unsigned int *)(a1 + 8);
  v8 = (unsigned __int64 *)(*(_QWORD *)a1 + v7);
  if ( *(unsigned __int64 **)a1 != v8 )
  {
    v9 = *(unsigned __int64 **)a1;
    if ( (v6 >= v5 + 16 || v5 >= v6 + 16) && (unsigned __int64)v8 - v5 - 8 > 0x10 )
    {
      v10 = (((unsigned __int64)v8 - v5 - 8) >> 3) + 1;
      v11 = 0;
      a4 = 0.0;
      do
      {
        a3 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + v11));
        *(_OWORD *)(v5 + v11) = 0;
        *(__m128 *)(v6 + v11) = a3;
        v11 += 16;
      }
      while ( 16 * (v10 >> 1) != v11 );
      v12 = 8 * (v10 & 0xFFFFFFFFFFFFFFFELL);
      v13 = (unsigned __int64 *)(v12 + v5);
      v9 = (unsigned __int64 *)(v6 + v12);
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v10 = *v13;
        *v13 = 0;
        *v9 = v10;
      }
    }
    else
    {
      v13 = (unsigned __int64 *)v6;
      do
      {
        v10 = *v9;
        *v9++ = 0;
        *v13++ = v10;
      }
      while ( v8 != v9 );
    }
    v14 = *(unsigned __int64 **)a1;
    v8 = (unsigned __int64 *)(*(_QWORD *)a1 + v7);
    if ( *(unsigned __int64 **)a1 != v8 )
    {
      do
      {
        while ( *--v8 )
        {
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64 *, unsigned __int64 *, double, double))(*(_QWORD *)*v8 + 8LL))(
            *v8,
            v10,
            v13,
            v9,
            *(double *)a3.m128_u64,
            a4);
          if ( v14 == v8 )
            goto LABEL_11;
        }
      }
      while ( v14 != v8 );
LABEL_11:
      v8 = *(unsigned __int64 **)a1;
    }
  }
  v15 = v16[0];
  if ( (unsigned __int64 *)(a1 + 16) != v8 )
    free(v8);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v15;
}
