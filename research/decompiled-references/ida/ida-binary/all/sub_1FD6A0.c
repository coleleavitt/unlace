__int64 __fastcall sub_1FD6A0(
        __int64 a1,
        const char *a2,
        int a3,
        char a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rdi
  double v16; // xmm0_8
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax

  v15 = *(_QWORD *)(a1 + 8);
  if ( !v15 )
  {
    if ( !a2 )
      return sub_1FD320(*(_QWORD *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
LABEL_4:
    v20 = (*(__int64 (__fastcall **)(const char *, double))(*(_QWORD *)a2 + 16LL))(a2, a5);
    v21 = *(_QWORD *)(a1 + 32) == 0;
    *(_DWORD *)(a1 + 16) = a3;
    *(_QWORD *)(a1 + 8) = v20;
    *(_BYTE *)(a1 + 24) = a4;
    if ( v21 )
    {
      v22 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)a2 + 16LL))(a2);
      *(_DWORD *)(a1 + 40) = a3;
      *(_QWORD *)(a1 + 32) = v22;
      return sub_1FD320(*(_QWORD *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
    }
LABEL_9:
    if ( !under_debugger )
      interr(40472, a2, v18, v19, a5);
    BUG();
  }
  v16 = qfree(v15, a2);
  *(_DWORD *)(a1 + 16) = 0;
  v17 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = 0;
  a5 = qfree(v17, a2, v16);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_9;
    goto LABEL_4;
  }
  return sub_1FD320(*(_QWORD *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
}
