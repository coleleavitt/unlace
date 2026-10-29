__int64 __fastcall sub_200E10(
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
  __int32 v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // edx
  int v18; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == 1 )
  {
    v15 = 0;
    goto LABEL_9;
  }
  if ( !a1[60].m128i_i8[8] )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( a1[26].m128i_i64[1] )
  {
    v13 = a1[26].m128i_i32[0];
    if ( v13 == 2 )
    {
      v14 = a1[56].m128i_i64[0];
    }
    else if ( v13 == 3 )
    {
      v14 = a1[56].m128i_i64[1];
    }
    else
    {
      v14 = 0;
      if ( v13 == 1 )
        v14 = a1[55].m128i_i64[1];
    }
LABEL_8:
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 208LL))(v14, 1);
    v16 = 0;
    if ( v15 < 0 )
      return v16;
LABEL_9:
    v18 = v15;
    sub_2006B0(a1, 0, (__int64)&v18, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    return 1;
  }
  sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
  return sub_200F00(a1);
}
