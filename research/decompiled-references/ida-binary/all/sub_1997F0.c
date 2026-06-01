__int64 __fastcall del_bpt_ah_t__::vfunc_4(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 bpt_kernel_interface; // rax
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(bpt_kernel_interface, a3);
  if ( !(_BYTE)v6 )
    return v6;
  v8 = *a2;
  if ( (unsigned __int64)a2[2] <= 0x1C )
  {
    v10 = qvector_reserve(a2, v8, 29, 1);
    *a2 = v10;
    v8 = v10;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC520);
  a2[1] = 29;
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 12) = _mm_load_si128((const __m128i *)&xmmword_5DC530);
  *(_BYTE *)(*a2 + 28) = 0;
  return v6;
}
