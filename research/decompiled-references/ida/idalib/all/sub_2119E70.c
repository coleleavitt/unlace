__int64 __fastcall sub_2119E70(__int64 a1, unsigned int a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6, char a7)
{
  __m128i *v11; // rax
  __int128 v13; // [rsp-10h] [rbp-48h]

  v11 = sub_2102F60(*(_QWORD *)(a1 + 8));
  *((_QWORD *)&v13 + 1) = a6;
  *(_QWORD *)&v13 = a5;
  return sub_20FFEE0((__int64)v11, a1, a2, a3, a4, a7, v13);
}
