__int64 __fastcall sub_AA6E60(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x40u);
      *(_BYTE *)v5 = *(_BYTE *)v4;
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v5 + 16) = v5 + 32;
      sub_AA6DA0((_QWORD *)(v5 + 16), *(_BYTE **)(v4 + 16), *(_QWORD *)(v4 + 16) + *(_QWORD *)(v4 + 24));
      v6 = _mm_loadu_si128((const __m128i *)(v4 + 48));
      *a1 = v5;
      *(__m128i *)(v5 + 48) = v6;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (_QWORD *)v7[2];
      if ( v8 != v7 + 4 )
        operator delete(v8);
      operator delete(v7, 0x40u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}

