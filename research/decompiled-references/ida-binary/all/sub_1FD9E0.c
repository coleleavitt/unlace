double __fastcall sub_1FD9E0(
        __int64 a1,
        const char *a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  double result; // xmm0_8
  __int64 v16; // rax
  __int64 v17; // rdi
  double v18; // xmm4_8
  double v19; // xmm5_8

  result = qfree(*(_QWORD *)(a1 + 32), a2);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a2 )
  {
    v16 = (*(__int64 (__fastcall **)(const char *, double))(*(_QWORD *)a2 + 16LL))(a2, result);
    *(_DWORD *)(a1 + 40) = a3;
    v17 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = v16;
    sub_1FD320(v17, result, a5, a6, a7, v18, v19, a10, a11);
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(40472, 0, v13, v14, result);
    return sub_1FDA50(40472);
  }
  return result;
}
