unsigned __int64 __fastcall form_actions_impl_t__::vfunc_13(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  char v8; // [rsp+Fh] [rbp-29h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( sub_4F9180(a1, a2, &v8, &v9) && v8 == 98 )
  {
    v5 = *(__int64 **)(v9 + 40);
    v6 = *v5;
    v7 = _mm_loadu_si128((const __m128i *)(v5 + 1));
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    *a3 = v6;
    *(__m128i *)(a3 + 1) = v7;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2);
  }
  return v10 - __readfsqword(0x28u);
}
