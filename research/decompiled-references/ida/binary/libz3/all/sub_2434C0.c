__int64 __fastcall sub_2434C0(__int64 *a1, __int64 *a2, int a3)
{
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *a2;
        break;
      case 2:
        v6 = *a2;
        v7 = operator new(0x28u);
        sub_1858590(v7, v6);
        v8 = *(void (__fastcall **)(__int64, __int64, __int64))(v6 + 24);
        *(_QWORD *)(v7 + 24) = 0;
        *(_QWORD *)(v7 + 32) = 0;
        *(_OWORD *)(v7 + 8) = 0;
        if ( v8 )
        {
          v8(v7 + 8, v6 + 8, 2);
          *(__m128i *)(v7 + 24) = _mm_loadu_si128((const __m128i *)(v6 + 24));
        }
        *a1 = v7;
        break;
      case 3:
        v3 = (_QWORD *)*a1;
        if ( *a1 )
        {
          v4 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v3[3];
          if ( v4 )
            v4(v3 + 1, v3 + 1, 3);
          sub_18572D0(v3);
          operator delete(v3, 0x28u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__int64)&off_1C63908;
    return 0;
  }
}

