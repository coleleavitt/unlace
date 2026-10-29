__int64 __fastcall sub_19DDE10(
        __int64 **a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        _QWORD *a10)
{
  _QWORD *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  __int64 *v17; // r8
  __int64 *v19; // [rsp+8h] [rbp-40h] BYREF

  v19 = nullptr;
  v14 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = sub_1E5F010(a8, &v19);
  v16 = v15;
  if ( !a6 )
  {
    sub_19D64C0(a1, v15, (unsigned __int64)a10);
    v17 = v19;
    if ( v19 )
      return sub_19DD340((__int64 *)a1, a5, a6, a7, v17, a10, a2, a3);
LABEL_5:
    v17 = sub_A81910(v14, v16, a5);
    v19 = v17;
    return sub_19DD340((__int64 *)a1, a5, a6, a7, v17, a10, a2, a3);
  }
  v17 = v19;
  if ( !v19 )
    goto LABEL_5;
  return sub_19DD340((__int64 *)a1, a5, a6, a7, v17, a10, a2, a3);
}
