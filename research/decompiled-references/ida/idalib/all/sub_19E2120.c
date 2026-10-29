unsigned __int16 *__fastcall sub_19E2120(
        __int64 *a1,
        unsigned __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9,
        __int64 a10)
{
  _QWORD *v14; // rax
  __int64 *v15; // rsi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v19[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v19[0] = a4;
  v14 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = nullptr;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v15 = sub_A81910(v14, a2, 0);
  if ( a3 )
  {
    v16 = v19[0];
    v17 = v19[0];
  }
  else
  {
    v17 = 0;
    v16 = v19[0];
  }
  return sub_19E15D0(a1, v15, a2, v17, a5, a6, a7, a8, v16, v19, 1u, v16, a9, a10, 1);
}
