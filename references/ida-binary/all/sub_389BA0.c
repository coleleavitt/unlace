__int64 __fastcall struc_stroff_data_t__::vfunc_1(__int64 a1, __int64 a2, __int64 **a3)
{
  bool v3; // zf
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __m128i v10; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = a3[1] == nullptr;
  v11 = __readfsqword(0x28u);
  if ( v3 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    v5 = **a3;
    v8 = 0;
    get_type_by_tid(&v8, *(_QWORD *)(v5 + 48));
    v6 = 0;
    v7 = 0;
    v9 = 0;
    v10 = 0;
    if ( (v8 & 0x100) != 0 )
    {
      get_tinfo_pdata(&v9, v8, 0);
      v7 = v9;
      v6 = _mm_loadu_si128(&v10);
    }
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v6;
    clear_tinfo_t(&v8);
  }
  return a1;
}
