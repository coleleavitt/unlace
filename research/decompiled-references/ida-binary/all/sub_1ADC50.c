unsigned __int64 __fastcall strpath_chooser_t__::vfunc_6(
        __int64 *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rax
  _QWORD *v7; // r12
  __int64 *v8; // rbx
  __int64 tinfo_size; // rax
  __int64 v10; // rdx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rsi
  __int64 *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __m128i v21; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v5 = a1[28];
  v22 = __readfsqword(0x28u);
  if ( a5 >= v5 )
  {
    if ( a5 >= v5 + a1[31] )
      return v22 - __readfsqword(0x28u);
    v7 = (_QWORD *)(a1[30] + 24 * (a5 - v5));
  }
  else
  {
    v7 = (_QWORD *)(a1[27] + 24 * a5);
  }
  if ( v7 )
  {
    v18 = 0;
    get_type_by_tid(&v18, *(_QWORD *)*v7);
    v20 = 0;
    v21 = 0;
    if ( (v18 & 0x100) != 0 )
      get_tinfo_pdata(&v20, v18, 0);
    if ( !(unsigned __int8)sub_1ADBB0(*a2, *((_DWORD *)v7 + 2), &v18, a1[24], (__int64)&v20) )
    {
      v12 = v7[1];
      v19 = a1[24];
      append_struct_fields(&v20, &v19, 0, *v7, v12, 0, a1[25], 1);
      v13 = *a2;
      v14 = **a2;
      v15 = _mm_loadu_si128((const __m128i *)(*a2 + 1));
      *v13 = v20;
      v16 = v19;
      v20 = v14;
      *(__m128i *)(v13 + 1) = v21;
      v17 = *a2;
      v21 = v15;
      append_disp(v17, v16, 0);
    }
    v8 = *a2 + 3;
    tinfo_size = get_tinfo_size(0, v18, 0);
    sub_169A50(v8, (__int64)"%04zX", tinfo_size);
    if ( v20 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v20, "%04zX", v10);
    }
    clear_tinfo_t(&v18);
  }
  return v22 - __readfsqword(0x28u);
}
