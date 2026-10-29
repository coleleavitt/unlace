__int64 __fastcall sub_DB07A0(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // r14
  unsigned int v5; // edx
  unsigned int v6; // r13d
  _QWORD *v7; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 i; // rax
  _BYTE v14[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_EE4F60("aig");
  sub_EE4940(v14, "aig", *a2);
  sub_DAFFA0(a1, a2);
  *((_DWORD *)*a2 + 30) = (*((_DWORD *)*a2 + 30) + 1) & 0x3FFFFFF | (*a2)[15] & 0xFC000000;
  v4 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v4 + 8);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a3 + 12);
  if ( v5 >= v6 )
  {
    v9 = 2 * v6;
    v10 = sub_186B270(8 * v9);
    v5 = *(_DWORD *)(a3 + 8);
    v11 = *(_QWORD **)a3;
    v7 = (_QWORD *)v10;
    if ( v5 )
    {
      if ( v5 - 1 <= 2 || (_QWORD *)v10 == v11 + 1 )
      {
        for ( i = 0; i != v5; ++i )
          v7[i] = v11[i];
      }
      else
      {
        v12 = 0;
        do
        {
          *(__m128i *)&v7[v12] = _mm_loadu_si128((const __m128i *)&v11[v12]);
          v12 += 2;
        }
        while ( 2LL * (v5 >> 1) != v12 );
        if ( (v5 & 1) != 0 )
          v7[v5 & 0xFFFFFFFE] = v11[v5 & 0xFFFFFFFE];
      }
    }
    if ( v11 != (_QWORD *)(a3 + 16) && v11 )
    {
      sub_186B220(v11);
      v5 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v7;
    *(_DWORD *)(a3 + 12) = v9;
  }
  else
  {
    v7 = *(_QWORD **)a3;
  }
  v7[v5] = v4;
  *(_DWORD *)(a3 + 8) = v5 + 1;
  return sub_EE4A00(v14);
}

