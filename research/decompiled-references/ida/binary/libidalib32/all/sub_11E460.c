__int64 __fastcall sub_11E460(
        int a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v11; // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // rdi
  __int64 v15; // rax

  v11 = a2;
  v12 = *(__int64 (__fastcall **)(__int64))(*a2 + 72);
  if ( v12 == sub_1044F0 )
  {
    v13 = (_QWORD *)a2[4];
  }
  else
  {
    v15 = ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64 *))v12)(a2, a2, a2);
    v11 = a2;
    v13 = (_QWORD *)v15;
  }
  sub_11E1E0(v13, a1, v11, a3, a4, a5, a6, a7, a8, a9, a10);
  return 1;
}

