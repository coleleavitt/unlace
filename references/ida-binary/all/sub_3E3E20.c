__int64 __fastcall sub_3E3E20(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __m128i v3; // xmm0
  bool v5; // zf
  double v7; // xmm0_8
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  unsigned int isExpanded; // r13d
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+10h] [rbp-A8h]
  int v29; // [rsp+18h] [rbp-A0h]
  __int64 v30; // [rsp+20h] [rbp-98h] BYREF
  __int128 v31; // [rsp+40h] [rbp-78h]
  int v32; // [rsp+50h] [rbp-68h]
  char v33[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v34; // [rsp+68h] [rbp-50h]
  __int128 v35; // [rsp+70h] [rbp-48h]
  unsigned __int64 v36; // [rsp+88h] [rbp-30h]

  v3 = 0;
  v5 = *(_BYTE *)(a1 + 72) == 0;
  v36 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v17 = calc_number_of_children(a2, a1 + 72, a3 ^ 1u, 0.0);
    v18 = 0;
    if ( v17 >= 0 )
      v18 = v17;
    v3 = _mm_cvtsi32_si128(v18);
  }
  *(_QWORD *)&v7 = _mm_unpacklo_epi32(v3, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 312))).m128i_u64[0];
  *(double *)(a1 + 312) = v7;
  sub_3E3920(a1 + 312, 1, v7);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 16);
  if ( v9
    && (sub_3DF8D0((__int64)&v30, v8, a1, 0, v7),
        isExpanded = QT::QTreeView::isExpanded(v9, &v30, v10, v11, v12, v13, v26, v27, v28),
        (_BYTE)isExpanded) )
  {
    v19 = 16;
    v29 = 2;
    v20 = a3 + 266;
    v5 = *(_DWORD *)(a1 + 368) == 3;
    v35 = 0;
    if ( v5 )
      v19 = 10;
    HIDWORD(v26) = v19;
    v21 = *(int *)(a1 + 312);
    v22 = *(_QWORD *)(a1 + 64);
    LODWORD(v26) = v20 | 0x10;
    v23 = v33;
    HIDWORD(v28) = 0;
    if ( (int)v21 < 0 )
      v21 = 0;
    HIDWORD(v27) = v22;
    LODWORD(v27) = 1024;
    v24 = v21 - v22;
    v25 = *(_QWORD *)(a1 + 48);
    v33[0] = 8;
    v34 = a2;
    v32 = 0;
    if ( v24 > v25 )
      LODWORD(v24) = v25;
    LODWORD(v28) = v24;
    v31 = 0;
    if ( (unsigned __int8)format_cdata(0, v33, a1 + 72, &v30, &v26, v14, v26, v27, v28, v29, 0, 0, 0, 0)
      || (unsigned int)get_qerrno(0.0) == 1645 )
    {
      v23 = (const char *)v31;
      sub_3E4780(a1, v31, 0.0);
    }
    else
    {
      isExpanded = 0;
    }
    sub_3DE160(&v30, v23);
    free_idcv(v33);
  }
  else
  {
    return 1;
  }
  return isExpanded;
}
