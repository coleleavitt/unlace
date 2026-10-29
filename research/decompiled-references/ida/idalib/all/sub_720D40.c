__int64 __fastcall sub_720D40(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rax
  bool (__fastcall *v17)(__int64); // rdx
  __int64 v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  __int64 v28; // r13

  v13 = *(__int64 **)(a2 + 88);
  if ( v13 && !(unsigned __int8)sub_717AC0(a1, *v13, (__int64)(v13 + 1), *v13, a13, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v14 = *(__int64 **)(a2 + 96);
  v15 = &v14[*(unsigned int *)(a2 + 104)];
  if ( v14 != v15 )
  {
    while ( !*v14 || (unsigned __int8)sub_709840(a1, *v14, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( v15 == ++v14 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v16 = *(_QWORD *)a2;
  v17 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v17 == sub_6EE910 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 1) == 0 && !*(_QWORD *)(a2 + 112) )
      goto LABEL_10;
  }
  else
  {
    if ( !v17(a2) )
      goto LABEL_10;
    v16 = *(_QWORD *)a2;
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(v16 + 64))(a2);
  if ( !(unsigned __int8)sub_70DBE0(a1, v18, 0, a3, a4, a5, a6, v19, v20, a9, a10) )
    return 0;
LABEL_10:
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v21 = nullptr;
    v22 = sub_B8C3D0(a2);
    v27 = *(unsigned int *)(v22 + 8);
    v28 = *(_QWORD *)v22 + 8 * v27;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v21 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v28 != v21 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v21, a3, a4, a5, a6, v25, v26, a9, a10, v27, v23, v24) )
      {
        if ( (__int64 *)v28 == ++v21 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
