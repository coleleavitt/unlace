__int64 __fastcall sub_ACC3C0(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x40u);
      *(_QWORD *)v5 = *(_QWORD *)v4;
      *(__m128i *)(v5 + 8) = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(_QWORD *)(v5 + 24) = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v5 + 32) = v5 + 48;
      sub_ACAAE0((_QWORD *)(v5 + 32), *(_BYTE **)(v4 + 32), *(_QWORD *)(v4 + 32) + *(_QWORD *)(v4 + 40));
      *a1 = v5;
      return 0;
    case 3:
      v6 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v7 = (_QWORD *)v6[4];
      if ( v7 != v6 + 6 )
        operator delete(v7);
      operator delete(v6, 0x40u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
