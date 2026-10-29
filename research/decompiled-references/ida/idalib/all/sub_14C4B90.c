__int64 __fastcall sub_14C4B90(const __m128i *a1, __int64 a2, __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rbp
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( a1[2].m128i_i16[0] == 3 )
  {
    v3 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v3 + 760) )
    {
      *(_BYTE *)(v3 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v3 + 48) + 6LL) = 1;
    }
    v4 = a1[6].m128i_i64[0];
    v5 = 0;
    v6 = a1[3].m128i_i8[8] == 0;
    a1[2].m128i_i16[0] = 1;
    v7 = *(_QWORD *)(v4 + 656);
    if ( !v6 && a1[1].m128i_i32[0] == a1[3].m128i_i32[3] )
    {
      v5 = a1[4].m128i_i64[0];
      if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v9 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))a1[4].m128i_i64[1];
        v5 = 0;
        if ( v9 )
        {
          v10 = v9(a1[5].m128i_i64[0], a2, 0);
          v4 = a1[6].m128i_i64[0];
          v5 = v10;
        }
      }
    }
    sub_172C2C0(v7, *(_QWORD *)(v4 + 608), v5, 0);
    return 1;
  }
  else
  {
    v11 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a3);
    return sub_14BE680(a1, v11, 3, a3);
  }
}
