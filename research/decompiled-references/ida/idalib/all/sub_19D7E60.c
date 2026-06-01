unsigned __int16 *__fastcall sub_19D7E60(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6)
{
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v11; // rax

  v8 = sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
  {
    v9 = sub_19A26C0(*a1, a3, a4 == 0 ? 135 : 149);
  }
  else
  {
    v11 = sub_18C1B30(*a1, a3, a4);
    v9 = sub_160A600(
           *a1,
           v11 & 0xFFFFFFFFFFFFFFFELL,
           *(_QWORD *)(v8 + 18640),
           0x1Cu,
           0,
           0,
           *(double *)a5.m128_u64,
           *(double *)a6.m128_u64,
           0);
  }
  return sub_19D7B40(a1, a2, v9 & 0xFFFFFFFFFFFFFFFELL, a5, a6);
}
