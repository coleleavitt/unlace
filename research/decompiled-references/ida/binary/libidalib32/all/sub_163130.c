__int64 __fastcall sub_163130(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12,
        char a13,
        __int64 a14)
{
  __int64 v14; // r8
  unsigned int v17; // r12d
  char v19; // [rsp+0h] [rbp-28h]

  v14 = a13 & 1;
  if ( (_DWORD)v14 )
  {
    sub_10DDF0((__int64)"Searching", a10, (__int64)a11, a12, v14, a14, a1, a2, a3, a4, a5, a6, a7, a8, v19);
    v17 = search();
  }
  else
  {
    sub_10DDF0((__int64)"Searching", a10, (__int64)a11, a12, v14, a14, a1, a2, a3, a4, a5, a6, a7, a8, v19);
    v17 = search();
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a11 + 24LL))(*(_QWORD *)a11, *(_QWORD *)a12);
    a11[2] = *(_DWORD *)(a12 + 8);
  }
  sub_10D850();
  return v17;
}

