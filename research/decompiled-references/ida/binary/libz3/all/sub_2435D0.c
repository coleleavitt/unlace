__int64 __fastcall sub_2435D0(_QWORD *a1, const __m128i **a2, int a3)
{
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  const __m128i *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  void (__fastcall *v10)(__int64, const __m128i *, __int64); // rax
  void (__fastcall *v11)(__int64, const __m128i *, __int64); // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *a2;
        break;
      case 2:
        v7 = *a2;
        v8 = operator new(0x40u);
        *(_QWORD *)(v8 + 16) = 0;
        v9 = v8;
        *(_QWORD *)(v8 + 24) = 0;
        *(_OWORD *)v8 = 0;
        v10 = (void (__fastcall *)(__int64, const __m128i *, __int64))v7[1].m128i_i64[0];
        if ( v10 )
        {
          v10(v9, v7, 2);
          *(__m128i *)(v9 + 16) = _mm_loadu_si128(v7 + 1);
        }
        v11 = (void (__fastcall *)(__int64, const __m128i *, __int64))v7[3].m128i_i64[0];
        *(_QWORD *)(v9 + 48) = 0;
        *(_QWORD *)(v9 + 56) = 0;
        *(_OWORD *)(v9 + 32) = 0;
        if ( v11 )
        {
          v11(v9 + 32, v7 + 2, 2);
          *(__m128i *)(v9 + 48) = _mm_loadu_si128(v7 + 3);
        }
        *a1 = v9;
        break;
      case 3:
        v3 = (_QWORD *)*a1;
        if ( *a1 )
        {
          v4 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v3[6];
          if ( v4 )
            v4(v3 + 4, v3 + 4, 3);
          v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v3[2];
          if ( v5 )
            v5(v3, v3, 3);
          operator delete(v3, 0x40u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = &off_1C638F8;
    return 0;
  }
}

