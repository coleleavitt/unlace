__int64 __fastcall sub_3282A0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 data; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rbx
  char v19; // [rsp+0h] [rbp-8h]

  v9 = BYTE2(xmmword_8BCDC0);
  v8 = sub_326FD0();
  BYTE1(v9) |= 8u;
  data = find_data(v8, v9);
  if ( data == -1 )
  {
    sub_28A960(1072, v9, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v19);
    return 0;
  }
  else
  {
    v17 = data;
    sub_28A960(1071, data, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v19);
    return (unsigned __int8)sub_192AA0(0, v17, -1, 1u);
  }
}
