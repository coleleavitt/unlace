__int64 __fastcall sub_1264BB0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, void *, __int64); // r14
  __int64 v7; // r14
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+0h] [rbp-178h] BYREF
  __int16 v10; // [rsp+20h] [rbp-158h]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __m128i si128; // [rsp+38h] [rbp-140h]
  _BYTE v13[304]; // [rsp+48h] [rbp-130h] BYREF

  if ( (unsigned __int8)sub_1131B70((__int64)a2) )
  {
    v9[0] = "-u";
    v9[2] = "__llvm_profile_runtime";
    v10 = 1283;
    v5 = *a2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v6 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v5 + 16);
    ptr = v13;
    v9[3] = 22;
    sub_22538C0(v9, &ptr);
    v7 = v6(a2, ptr, si128.m128i_i64[0]);
    if ( ptr != v13 )
      free(ptr);
    v8 = *(unsigned int *)(a3 + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v8 + 1, 8);
      v8 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v7;
    ++*(_DWORD *)(a3 + 8);
  }
  return sub_1133870(a1, (__int64)a2, a3);
}
