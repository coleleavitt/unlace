__int64 __fastcall sub_B33DD0(__int64 *a1, __int64 *a2, int a3)
{
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, __int64, __int64); // rax

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
        v8 = *(_QWORD *)v6;
        *(_QWORD *)(v7 + 24) = 0;
        *(_QWORD *)v7 = v8;
        v9 = *(void (__fastcall **)(__int64, __int64, __int64))(v6 + 24);
        *(_QWORD *)(v7 + 32) = 0;
        *(_OWORD *)(v7 + 8) = 0;
        if ( v9 )
        {
          v9(v7 + 8, v6 + 8, 2);
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
          operator delete(v3, 0x28u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__int64)&`typeinfo for'smt::theory_user_propagator::register_on_binding(std::function<bool ()(void *,user_propagator::callback *,expr *,expr *)> &)::{lambda(quantifier *,expr *)#1};
    return 0;
  }
}

