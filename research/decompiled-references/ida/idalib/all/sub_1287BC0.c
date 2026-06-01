const char *__fastcall sub_1287BC0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, void *, __int64); // r13
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD v12[4]; // [rsp+0h] [rbp-178h] BYREF
  __int16 v13; // [rsp+20h] [rbp-158h]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __m128i si128; // [rsp+38h] [rbp-140h]
  _BYTE v16[304]; // [rsp+48h] [rbp-130h] BYREF

  if ( !*(_BYTE *)(a1 + 3904) )
  {
    sub_1173DC0(a1 + 2832, *(__int64 **)(a1 + 2760), a1 + 2768, *(_QWORD *)(a1 + 2824), 1, 0);
    *(_BYTE *)(a1 + 3904) = 1;
  }
  v4 = *(_QWORD *)(a1 + 3128);
  v5 = *(_QWORD *)(a1 + 3120);
  v12[0] = "-libpath:";
  v12[3] = v4;
  v13 = 1285;
  v6 = *a2;
  v12[2] = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v7 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v6 + 16);
  v12[1] = 9;
  ptr = v16;
  sub_22538C0(v12, &ptr);
  v8 = v7(a2, ptr, si128.m128i_i64[0]);
  if ( ptr != v16 )
    free(ptr);
  v9 = *((unsigned int *)a3 + 2);
  if ( v9 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, v9 + 2, 8);
    v9 = *((unsigned int *)a3 + 2);
  }
  v10 = *a3;
  *(_QWORD *)(v10 + 8 * v9) = v8;
  *(_QWORD *)(v10 + 8 * v9 + 8) = "amdhip64.lib";
  *((_DWORD *)a3 + 2) += 2;
  return "amdhip64.lib";
}
