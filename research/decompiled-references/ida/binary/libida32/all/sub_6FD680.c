__int64 __fastcall sub_6FD680(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r13d
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  _DWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9

  v15 = a2;
  v16 = *(_QWORD *)(a2 + 104);
  if ( v16 )
  {
    if ( v16 > 7 )
      goto LABEL_3;
    goto LABEL_27;
  }
  v28 = *(_QWORD *)(a2 + 96);
  v29 = *(_QWORD *)(v28 + 88);
  v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v29 & 1) == 0 )
  {
    if ( v30 <= 3 || (v29 & 2) == 0 )
      goto LABEL_27;
    a2 = *(_QWORD *)(a2 + 96);
    v31 = sub_6C1EC0((_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL), a2, a3, a4, a5, a6);
    v30 = v31 & 0xFFFFFFFFFFFFFFFELL;
    v29 = v31 | 1;
    *(_QWORD *)(v28 + 88) = v29;
  }
  if ( v30 )
  {
    if ( (v30 & 4) != 0 )
    {
      v32 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        a3 = *(unsigned int *)(*(_QWORD *)v32 + 12LL);
        if ( v32[2] != (_DWORD)a3 )
        {
          v32[2] = a3;
          a2 = v28;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v28);
        }
      }
    }
  }
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 <= 7 )
  {
LABEL_27:
    if ( v15 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_3:
  if ( v15 == *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL) )
  {
LABEL_28:
    sub_6E4F60(v15, a2, a3, a4, a5, a6);
    sub_6E4F60(v15, a2, v34, v35, v36, v37);
    sub_6E4F60(v15, a2, v38, v39, v40, v41);
    sub_6E4F60(v15, a2, v42, v43, v44, v45);
    if ( v15 )
      goto LABEL_5;
    goto LABEL_29;
  }
  if ( v15 )
  {
LABEL_5:
    v17 = v15 + 48;
    goto LABEL_6;
  }
LABEL_29:
  v17 = 0;
LABEL_6:
  v18 = sub_6EA390(a1, v17, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( !(_BYTE)v18 )
    return 0;
  if ( (*(_BYTE *)(v15 + 29) & 1) != 0 )
  {
    v20 = nullptr;
    v21 = sub_B68690(v15);
    v26 = *(unsigned int *)(v21 + 8);
    v27 = *(_QWORD *)v21 + 8 * v26;
    if ( (*(_BYTE *)(v15 + 29) & 1) != 0 )
      v20 = *(__int64 **)sub_B68690(v15);
    if ( (__int64 *)v27 != v20 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v20, a7, a8, a9, a10, v24, v25, a13, a14, v26, v22, v23) )
      {
        if ( (__int64 *)v27 == ++v20 )
          return v18;
      }
      return 0;
    }
  }
  return v18;
}

