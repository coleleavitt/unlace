__int64 __fastcall sub_173E350(
        __m128i *a1,
        __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128i *v12; // r15
  int v13; // r8d
  int v14; // r9d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v10 = (__int64)(0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3) + 1) / 2;
  v11 = 168 * v10;
  v12 = (__m128i *)((char *)a1 + 168 * v10);
  if ( v10 <= a4 )
  {
    sub_1702C60((__int64)a1, (__m128i *)((char *)a1 + 168 * v10), a3, a4, a5, a6, a7, a8);
    sub_1702C60((__int64)v12, a2, a3, v16, v17, v18, a7, a8);
  }
  else
  {
    sub_173E350((_DWORD)a1, (_DWORD)a1 + 168 * v10, (_DWORD)a3, a4, a5, a6, a7, *((__int64 *)&a7 + 1), a8);
    sub_173E350((_DWORD)v12, (_DWORD)a2, (_DWORD)a3, a4, v13, v14, a7, *((__int64 *)&a7 + 1), a8);
  }
  return sub_173D2B0(
           a1,
           v12,
           a2,
           0xCF3CF3CF3CF3CF3DLL * (v11 >> 3),
           0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)v12) >> 3),
           a3,
           a4,
           a7,
           a8);
}
