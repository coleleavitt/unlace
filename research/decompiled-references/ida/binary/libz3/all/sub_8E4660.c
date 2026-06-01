__int64 __fastcall sub_8E4660(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rbx
  void (__fastcall *v4)(__m128i *, __int64, __int64); // rax
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 result; // rax
  __m128i v9; // [rsp+10h] [rbp-38h] BYREF
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 7496LL);
  if ( !v3 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v9.m128i_i64, "user propagator must be initialized");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v9);
    sub_233E40((__int64)&v9);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v4 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  v10 = nullptr;
  v11 = 0;
  v9 = 0;
  if ( v4 )
  {
    v4(&v9, a2, 2);
    v5 = *(_QWORD *)(a2 + 24);
    v4 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a2 + 16);
  }
  else
  {
    v5 = 0;
  }
  v6 = _mm_load_si128(&v9);
  v9 = _mm_loadu_si128((const __m128i *)(v3 + 328));
  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v3 + 344);
  *(__m128i *)(v3 + 328) = v6;
  v10 = v7;
  *(_QWORD *)(v3 + 344) = v4;
  result = *(_QWORD *)(v3 + 352);
  v11 = result;
  *(_QWORD *)(v3 + 352) = v5;
  if ( v7 )
    return v7(&v9, &v9, 3);
  return result;
}

