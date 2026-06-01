__int64 __fastcall ask_offset_dialog_t__::vfunc_11(__m128i **a1, const __m128i **a2, int a3)
{
  __m128i *v3; // rbx
  void (__fastcall *v4)(__m128i *, __m128i *, __int64); // rax
  const __m128i *v6; // r12
  __m128i *v7; // rax
  __m128i *v8; // rbp
  void (__fastcall *v9)(__m128i *, const __m128i *, __int64); // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = (__m128i *)*a2;
        break;
      case 2:
        v6 = *a2;
        v7 = (__m128i *)operator new(0x20u);
        v7[1].m128i_i64[0] = 0;
        v8 = v7;
        v7[1].m128i_i64[1] = 0;
        *v7 = 0;
        v9 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v6[1].m128i_i64[0];
        if ( v9 )
        {
          v9(v8, v6, 2);
          v8[1] = _mm_loadu_si128(v6 + 1);
        }
        *a1 = v8;
        break;
      case 3:
        v3 = *a1;
        if ( *a1 )
        {
          v4 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v3[1].m128i_i64[0];
          if ( v4 )
            v4(*a1, *a1, 3);
          operator delete(v3, 0x20u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__m128i *)&`typeinfo for'enum_type_data_t::for_all_constants(std::function<int ()(unsigned long,unsigned long,int)>)::{lambda(unsigned long,int)#1};
    return 0;
  }
}
