void __fastcall sub_383DA0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        int a11,
        __int64 a12,
        _QWORD *a13)
{
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rbp
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 bpt_kernel_interface; // rax
  __int64 v30; // rsi

  if ( a10 && !a11 )
  {
    v15 = *a10;
    v16 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v15 + 8))(a10, 0);
    v23 = a13[19];
    v24 = a13 + 18;
    v25 = v17 + 1;
    if ( !v23 )
      goto LABEL_10;
    v26 = a13 + 18;
    do
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v23 + 16);
        v16 = *(_QWORD *)(v23 + 24);
        if ( v25 <= *(_DWORD *)(v23 + 32) )
          break;
        v23 = *(_QWORD *)(v23 + 24);
        if ( !v16 )
          goto LABEL_8;
      }
      v26 = (_QWORD *)v23;
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( v18 );
LABEL_8:
    if ( v24 != v26 && v25 >= *((_DWORD *)v26 + 8) )
    {
      if ( *(_DWORD *)(v26[5] + 32LL) )
      {
        bpt_kernel_interface = get_bpt_kernel_interface(v24, v16);
        v30 = v26[5];
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 120LL))(bpt_kernel_interface, v30);
        sub_383B60(a13, v30);
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr(40246, v16, v23, v18, *(double *)a1.m128_u64);
        sub_383E90();
      }
    }
    else
    {
LABEL_10:
      sub_239910(1, v16, v23, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8);
      sub_19C7C0((__int64)a13, (__int64 *)0xFFFFFFFFFFFFFFFFLL, *(double *)a1.m128_u64, a2, a3, a4, v27, v28, a7, a8);
      sub_383B60(a13, -1);
    }
  }
}
