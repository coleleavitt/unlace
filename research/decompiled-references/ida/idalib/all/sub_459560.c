unsigned __int64 sub_459560(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, ...)
{
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdi
  gcc_va_list va; // [rsp+18h] [rbp-120h] BYREF
  __m128i v11; // [rsp+30h] [rbp-108h] BYREF
  void *reg_save_area; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v13; // [rsp+48h] [rbp-F0h]

  va_start(va, a4);
  v13 = __readfsqword(0x28u);
  v6 = *(__int64 **)(a1 + 32);
  v7 = &v6[*(_QWORD *)(a1 + 40)];
  while ( v7 != v6 )
  {
    v8 = *v6++;
    v11 = _mm_loadu_si128((const __m128i *)va);
    reg_save_area = va[0].reg_save_area;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v8 + 56LL))(v8, a2, a3, a4, &v11);
  }
  return v13 - __readfsqword(0x28u);
}
