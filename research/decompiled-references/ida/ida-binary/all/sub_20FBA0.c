__int64 __fastcall sub_20FBA0(__int64 *a1)
{
  int i; // ebx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int16 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int16 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax

  for ( i = 0; i < (int)get_segm_qty(); ++i )
  {
    v3 = getnseg((unsigned int)i);
    if ( v3 )
    {
      v4 = *(_WORD *)(v3 + 42);
      v5 = *(_QWORD *)v3;
      v6 = *(_QWORD *)(v3 + 8);
      v7 = a1[1];
      v8 = __ROL2__(v4, 8);
      v9 = *a1;
      if ( a1[2] < (unsigned __int64)(v7 + 1) )
      {
        v10 = qvector_reserve(a1, v9, v7 + 1, 80);
        *a1 = v10;
        v9 = v10;
        v7 = a1[1];
      }
      v2 = 80 * v7 + v9;
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 40) = 0;
      *(_QWORD *)(v2 + 64) = 0;
      *(_WORD *)(v2 + 72) = v8;
      *(__m128i *)v2 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
      *(_OWORD *)(v2 + 24) = 0;
      *(_OWORD *)(v2 + 48) = 0;
      ++a1[1];
    }
  }
  return 1;
}
