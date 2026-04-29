unsigned __int64 __fastcall sub_2F5230(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __m128i v11[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]
  int (__fastcall *v14)(__m128i *, unsigned __int64, __int64); // [rsp+48h] [rbp-50h]
  unsigned __int64 v15; // [rsp+58h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 4352 )
  {
    v5 = a2;
    while ( a3 )
    {
      sub_2CE5B0((__int64)v11, a4);
      sub_2CE5B0((__int64)&v12, v11);
      v6 = a1 + 272;
      sub_2F5150(a1, a1 + 272, a1 + 272 * ((__int64)(0xF0F0F0F0F0F0F0F1LL * (v4 >> 4)) >> 1), v5 - 272, (__int64)&v12);
      sub_66650((__int64)&v12);
      sub_2CE5B0((__int64)&v12, v11);
      v7 = v5;
      while ( 1 )
      {
        if ( !v13 )
LABEL_23:
          std::__throw_bad_function_call();
        while ( v14(&v12, v6, a1) < 0 )
        {
          v6 += 272LL;
          if ( !v13 )
            goto LABEL_23;
        }
        v7 -= 272LL;
        if ( !v13 )
LABEL_22:
          std::__throw_bad_function_call();
        while ( v14(&v12, a1, v7) < 0 )
        {
          v7 -= 272LL;
          if ( !v13 )
            goto LABEL_22;
        }
        if ( v6 >= v7 )
          break;
        sub_2F4D30(v6, v7);
        v6 += 272LL;
      }
      --a3;
      sub_66650((__int64)&v12);
      sub_66650((__int64)v11);
      sub_2CE5B0((__int64)&v12, a4);
      sub_2F5230(v6, v5, a3, &v12);
      sub_66650((__int64)&v12);
      v4 = v6 - a1;
      if ( (__int64)(v6 - a1) <= 4352 )
        return v15 - __readfsqword(0x28u);
      v5 = v6;
    }
    sub_2CE5B0((__int64)v11, a4);
    sub_2CE5B0((__int64)&v12, v11);
    sub_2F40A0(a1, v5, &v12);
    sub_66650((__int64)&v12);
    while ( v5 - a1 > 272 )
    {
      v5 -= 272;
      sub_2F46E0(a1, v5, v5, v11);
    }
    sub_66650((__int64)v11);
  }
  return v15 - __readfsqword(0x28u);
}
