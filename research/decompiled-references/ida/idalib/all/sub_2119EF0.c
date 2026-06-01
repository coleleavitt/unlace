__int64 __fastcall sub_2119EF0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  __m128i *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdi
  __m128i *v14; // rax
  const char *v16; // [rsp+0h] [rbp-68h] BYREF
  __int16 v17; // [rsp+20h] [rbp-48h]

  v11 = sub_2102F60(*(_QWORD *)(a1 + 8));
  v12 = sub_20FF1A0((__int64)v11, a3);
  v13 = *(_QWORD *)(a1 + 8);
  if ( v12 )
  {
    v14 = sub_2102F60(v13);
    return sub_20FF460((__int64)v14, a2, a3, a4, a5, a6);
  }
  else
  {
    v16 = "parent function id not introduced by .cv_func_id or .cv_inline_site_id";
    v17 = 259;
    sub_2100A30(v13, a7, (__int64)&v16);
    return 1;
  }
}
