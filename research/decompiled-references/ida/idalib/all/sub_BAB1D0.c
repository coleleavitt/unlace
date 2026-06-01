unsigned __int64 __fastcall sub_BAB1D0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // r14d
  int v10; // r13d
  double v11; // rbp
  __int64 v12; // rax
  double *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r12
  double v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v9 = a5;
  v10 = a6;
  v11 = *(double *)&a3;
  *(_QWORD *)&v17[0] = a4;
  if ( !a3 )
  {
    v14 = sub_B902D0(136, a1, a2, 0);
    goto LABEL_12;
  }
  v12 = *(_QWORD *)(a3 + 120);
  if ( v12 )
  {
    v13 = (double *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v13 )
    {
LABEL_4:
      v14 = sub_B902D0(136, a1, a2, 0);
      goto LABEL_5;
    }
  }
  else
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), a3, a4, a5, a6);
    v13 = (double *)(*(_QWORD *)(*(_QWORD *)&v11 + 120LL) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v13 )
      goto LABEL_4;
  }
  v11 = *v13;
  v14 = sub_B902D0(136, a1, a2, 0);
  if ( v11 == 0.0 )
  {
LABEL_12:
    v15 = 0;
    goto LABEL_7;
  }
LABEL_5:
  v15 = *(_QWORD *)(*(_QWORD *)&v11 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)&v11 + 40LL) & 7) != 0 )
    v15 = 0;
LABEL_7:
  sub_B725B0(v14, 0x15u, a2, v9);
  *(_QWORD *)(v14 + 40) = v15;
  *(_QWORD *)v14 = &off_2B4A650;
  sub_B8E080(v14 + 48, 21);
  v17[1] = v11;
  *(_QWORD *)(v14 + 80) = 0;
  *(_DWORD *)(v14 + 60) = v10;
  *(_QWORD *)v14 = &off_2C03CF0;
  *(__m128 *)(v14 + 88) = _mm_loadh_ps(v17);
  *(_DWORD *)(v14 + 104) = a7;
  *(_QWORD *)(v14 + 120) = 0;
  *(_DWORD *)(v14 + 108) = a8;
  *(_DWORD *)(v14 + 128) = 0;
  *(_DWORD *)(v14 + 112) = a9;
  *(_BYTE *)(v14 + 132) &= 0xFCu;
  return v14;
}
