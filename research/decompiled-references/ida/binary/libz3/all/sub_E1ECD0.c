__int64 (__fastcall *__fastcall sub_E1ECD0(__int64 a1, __int64 a2, double a3, double a4))(_BYTE *, _BYTE *, __int64)
{
  _DWORD *v4; // rdx
  __int64 v5; // rbp
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbp
  _DWORD *v11; // r13
  __int64 (__fastcall *result)(_BYTE *, _BYTE *, __int64); // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // rbp
  _QWORD *exception; // rbx
  _BYTE v17[16]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  __m128i v19; // [rsp+20h] [rbp-48h] BYREF
  __m128i v20; // [rsp+30h] [rbp-38h]

  v4 = *(_DWORD **)(a1 + 56);
  if ( !v4 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "set-simplifier needs a simplifier argument");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_E1DC80((__int64)v17, (struct _Unwind_Exception *)a2, v4, a3, a4);
  sub_DFBCB0(a2);
  v20 = 0u;
  v5 = *(_QWORD *)(a2 + 864);
  v19 = 0;
  if ( v18.m128i_i64[0] )
  {
    ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v18.m128i_i64[0])(&v19, v17, 2);
    v6 = _mm_load_si128(&v18);
  }
  else
  {
    v6 = 0;
  }
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 816));
  *(__m128i *)(a2 + 816) = _mm_load_si128(&v19);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 832));
  v19 = v7;
  v20 = v8;
  *(__m128i *)(a2 + 832) = v6;
  if ( v8.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v8.m128i_i64[0])(&v19, &v19, 3);
  if ( v5 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 232LL))(v5) )
    {
      v14 = __cxa_allocate_exception(0x30u);
      sub_305660(v14, "set-simplifier cannot be invoked if there are already assertions");
      __cxa_throw(v14, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 208LL))(v5) )
    {
      v15 = __cxa_allocate_exception(0x30u);
      sub_305660(v15, "set-simplifier cannot be invoked above base scope level");
      __cxa_throw(v15, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v9 = sub_E4FC20(v5, v17);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 48);
    v11 = *(_DWORD **)(a2 + 864);
    if ( v11 )
    {
      if ( v11[12]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v11)(v11);
        sub_186B220(v11);
      }
    }
    result = (__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v18.m128i_i64[0];
    *(_QWORD *)(a2 + 864) = v10;
    if ( result )
      return (__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))result(v17, v17, 3);
  }
  else
  {
    result = (__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v18.m128i_i64[0];
    if ( v18.m128i_i64[0] )
      return (__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))v18.m128i_i64[0])(
                                                                  v17,
                                                                  v17,
                                                                  3);
  }
  return result;
}

