void __fastcall sub_1730690(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // r13
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r9

  if ( (char *)a2 - (char *)a1 <= 2352 )
  {
    sub_17021E0(a1, a2, a3, a4, a5, a6, a7, *((unsigned int **)&a7 + 1), a8);
  }
  else
  {
    v8 = (__int64)(0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3)) >> 1;
    v9 = 168 * v8;
    v10 = (__m128i *)((char *)a1 + 168 * v8);
    sub_1730690((_DWORD)a1, (_DWORD)a1 + 168 * v8, 5 * v8, a4, a5, a6, a7, *((__int64 *)&a7 + 1), a8);
    sub_1730690((_DWORD)v10, (_DWORD)a2, v11, v12, v13, v14, a7, *((__int64 *)&a7 + 1), a8);
    sub_17301D0(
      a1,
      v10,
      (__int64)a2,
      0xCF3CF3CF3CF3CF3DLL * (v9 >> 3),
      0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)v10) >> 3),
      v15,
      a7,
      a8);
  }
}
