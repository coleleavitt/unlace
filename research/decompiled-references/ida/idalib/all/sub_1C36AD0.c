unsigned __int64 __fastcall sub_1C36AD0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax

  v8 = sub_1907C70(a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
  if ( v8 == 1 )
    return 1;
  v12 = 0;
  v13 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v14 = v13;
  if ( v13 )
    v12 = (unsigned int)sub_C00A40(v13, (__int64)a2, 0, v9, v10);
  v15 = sub_19B4A30(a1, v14, v12, 0, 0, 0, a7, a8);
  if ( v15 == 1 )
    return 1;
  else
    return v15 & 0xFFFFFFFFFFFFFFFELL;
}
