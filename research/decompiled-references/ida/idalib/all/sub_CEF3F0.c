__int64 (__fastcall *__fastcall sub_CEF3F0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5))(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __m128 v9; // xmm0
  __int64 (__fastcall *v10[2])(__int64, __int64, __int64); // [rsp+0h] [rbp-10h] BYREF

  v5 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v5;
  LODWORD(v5) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 16) = v5 + 16;
  if ( BYTE4(a4) )
  {
    v6 = a4;
    v7 = a4 + 8;
  }
  else
  {
    v7 = 8;
    v6 = 0;
  }
  *(_DWORD *)(a1 + 24) = v6;
  *(_WORD *)(a1 + 56) = 1;
  v10[0] = sub_CEB6A0;
  *(_DWORD *)(a1 + 28) = v7;
  *(_QWORD *)(a1 + 32) = 0;
  v9 = _mm_loadh_ps((const double *)v10);
  *(_QWORD *)(a1 + 40) = a3;
  *(_BYTE *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 58) = a5;
  *(_DWORD *)(a1 + 59) = 256;
  *(__m128 *)(a1 + 64) = v9;
  *(_QWORD *)(a1 + 80) = sub_CEB740;
  return sub_CEB740;
}
