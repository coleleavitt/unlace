__int64 (__fastcall *__fastcall sub_CEF340(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9))(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rax
  unsigned int v10; // r9d
  void *v12; // [rsp+0h] [rbp-10h] BYREF

  v9 = *a2;
  *(_QWORD *)(a1 + 8) = a3;
  v12 = sub_CEB500;
  *(_QWORD *)a1 = v9;
  LODWORD(v9) = *(_DWORD *)(a4 + 28);
  *(_QWORD *)(a1 + 32) = 0;
  LODWORD(v9) = v9 + 16;
  *(_QWORD *)(a1 + 40) = a4;
  v10 = v9 * a6;
  *(_DWORD *)(a1 + 16) = v9;
  *(_BYTE *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 59) = 256;
  if ( !BYTE4(a5) )
    LODWORD(a5) = 0;
  *(_DWORD *)(a1 + 20) = v10;
  if ( v10 < 8 )
    v10 = 8;
  *(_DWORD *)(a1 + 24) = a5;
  *(_BYTE *)(a1 + 56) = a7;
  *(_DWORD *)(a1 + 28) = a5 + v10;
  *(_BYTE *)(a1 + 57) = a9;
  *(_BYTE *)(a1 + 58) = a8;
  v12 = sub_CEB6A0;
  *(_QWORD *)(a1 + 80) = sub_CEB740;
  *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)&v12);
  return sub_CEB740;
}
