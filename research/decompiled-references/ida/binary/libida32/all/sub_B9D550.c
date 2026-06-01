_QWORD *__fastcall sub_B9D550(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r12
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  int v11; // r12d
  __int64 *v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]

  v2 = (_QWORD *)*a1;
  v3 = *((_DWORD *)a1 + 5) & 0x1FFFFFFF;
  if ( !*a1 )
  {
    v6 = (_QWORD *)sub_B9D510((__int64 *)(a2 + 2352), 24 * v3, 3u);
    v2 = v6;
    v10 = &v6[3 * v3];
    if ( v3 )
    {
      do
      {
        *v6 &= 0xFFFFFFFE00000000LL;
        v6 += 3;
        *(v6 - 2) = 0;
      }
      while ( v10 != v6 );
    }
    v11 = *((_DWORD *)a1 + 5);
    v12 = a1 + 3;
    *a1 = (__int64)v2;
    v13 = (__int64)&a1[(v11 & 0x1FFFFFFF) + 3];
    if ( (__int64 *)v13 != a1 + 3 )
    {
      do
      {
        v14 = *v12++;
        v2 += 3;
        sub_A5D0A0((__int64)&v16, a2, v14, v7, v8, v9);
        v15 = v17;
        *(__m128i *)(v2 - 3) = _mm_load_si128(&v16);
        *(v2 - 1) = v15;
      }
      while ( (__int64 *)v13 != v12 );
      return (_QWORD *)*a1;
    }
  }
  return v2;
}

