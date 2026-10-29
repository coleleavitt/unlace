__int64 __fastcall sub_19ABD30(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128i a8,
        unsigned __int8 a9)
{
  __int64 result; // rax
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 *v19; // [rsp+18h] [rbp-50h] BYREF
  __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF

  result = 1;
  if ( a2 )
  {
    v14 = sub_1E5F010(a2, &v19);
    v15 = v19;
    v18 = v14;
    if ( !v19 )
    {
      v15 = sub_A81910(*(_QWORD **)(a1 + 248), v14, 0);
      v19 = v15;
    }
    result = sub_19AB130(a1, v15, a3, a4, a5, a6, a7, a8, a9);
    if ( result == 1 )
    {
      v16 = *v19;
      v20[1] = (__int64)(v19 + 1);
      v20[0] = v16;
      v17 = sub_F6CCB0(v20, a7);
      return sub_18C4330(a1, v17, a6, a4, a5, v18);
    }
  }
  return result;
}
