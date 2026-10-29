__int64 __fastcall sub_166640(__int64 *a1, __int64 a2, _OWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm0

  v3 = sub_1663E0((__int64)a1, a2, a3);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = *(_QWORD *)(a2 + 8);
    if ( v5 > 1 )
      return v4;
    if ( v5 )
      sub_1663E0((__int64)a1, a2, *(_OWORD **)a2);
    v7 = *a1;
    v8 = 0xAAAAAAAAAAAAAAABLL * ((a2 - *a1) >> 3);
    if ( (v8 & 0x80000000) == 0LL && (int)v8 < (unsigned __int64)a1[1] )
    {
      v9 = (_QWORD *)(v7 + 24LL * (int)v8);
      if ( *v9 )
      {
        v9[1] = 0;
        qfree();
        v7 = *a1;
      }
      v10 = a1[1];
      v11 = v9 + 3;
      v12 = 0xAAAAAAAAAAAAAAABLL * ((v7 + 24 * v10 - (__int64)v9) >> 3) - 2;
      if ( v12 >= 0 )
      {
        do
        {
          v13 = *v11;
          v14 = _mm_loadu_si128((const __m128i *)(v11 + 1));
          *v11 = 0;
          v11 += 3;
          *(v11 - 1) = 0;
          *(v11 - 6) = v13;
          *(__m128i *)(v11 - 5) = v14;
        }
        while ( v12-- != 0 );
        v10 = a1[1];
      }
      a1[1] = v10 - 1;
      return v4;
    }
    sub_8F740((__int64)"Coherency check failed: ok\n");
  }
  return 0;
}

