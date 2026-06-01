__int64 __fastcall sub_55AF50(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 license_manager; // r14
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // r12
  const char *v17; // rsi
  unsigned __int8 v18; // bl
  double v19; // xmm4_8
  double v20; // xmm5_8

  license_manager = get_license_manager(a2);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 2392LL);
  v12 = *(_QWORD *)(v11 + 184);
  v13 = sub_552140(v12 + 624);
  if ( v13 == -1 )
    v16 = 0;
  else
    v16 = *(_QWORD *)(v12 + 816) + 152 * v13;
  if ( !v10 || *(_DWORD *)v10 != *(_DWORD *)v16 || *(_WORD *)(v10 + 4) != *(_WORD *)(v16 + 4) )
  {
    sub_5527E0(v12, a2, a3, a4, a5, v14, v15, a8, a9);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(
            license_manager,
            0,
            0);
  }
  v17 = nullptr;
  if ( *(_BYTE *)(v12 + 1009) )
    v17 = (const char *)(v12 + 1016);
  v18 = sub_55AD50((int *)v10, v17, a2, a3, a4, a5, v14, v15, a8, a9);
  if ( v16 )
    sub_55A340(v12, v11, *(_QWORD *)v16, 6, a2, a3, a4, a5, v19, v20, a8, a9);
  return v18;
}
