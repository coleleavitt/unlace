__int64 __fastcall sub_200BD0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  bool v12; // zf
  __int32 v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v22; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-10h]

  v12 = a1[60].m128i_i8[8] == 0;
  v23 = __readfsqword(0x28u);
  if ( v12 )
  {
    v15 = 0;
  }
  else
  {
    if ( !a1[26].m128i_i64[1] )
    {
      sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
      return sub_200CC0();
    }
    v14 = a1[26].m128i_i32[0];
    if ( v14 == 2 )
    {
      v15 = a1[56].m128i_i64[0];
    }
    else if ( v14 == 3 )
    {
      v15 = a1[56].m128i_i64[1];
    }
    else
    {
      v15 = 0;
      if ( v14 == 1 )
        v15 = a1[55].m128i_i64[1];
    }
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 176LL))(v15, 0);
  v17 = 0;
  if ( *(_QWORD *)(v16 + 16) > 1u )
  {
    v22 = tag_strlen(*(_QWORD *)(v16 + 8));
    sub_2006B0(a1, (__int64)&v22, 0, v18, a5, a6, a7, a8, v19, v20, a11, a12);
    return 1;
  }
  return v17;
}
