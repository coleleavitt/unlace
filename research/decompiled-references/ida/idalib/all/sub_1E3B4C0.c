unsigned __int64 __fastcall sub_1E3B4C0(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        const __m128i *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __int64 a10)
{
  __int64 v15; // rbp
  int v16; // eax
  unsigned __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // rcx
  unsigned int v21; // edx
  bool v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp+0h] [rbp-E8h]
  __int64 v53; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v54[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v56[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v57; // [rsp+98h] [rbp-50h]
  unsigned int v58; // [rsp+A0h] [rbp-48h]
  char v59; // [rsp+A4h] [rbp-44h]

  v15 = *a1;
  v51 = *(_QWORD *)(a3 + 40);
  v16 = sub_B72FF0(a3);
  v17 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
    v17 = *(_QWORD *)(v17 + 32);
  v18 = (__int64 *)sub_1DD4AE0(v15, (void **)v17, a1[4], v16, v51, 0, a7, a8);
  v19 = v18;
  if ( !v18 )
    return 0;
  v20 = *a1;
  v21 = *(_DWORD *)(a3 + 24);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v22 = 0;
    sub_168B9F0((__int64)v54, (__int64 *)(v20 + 8), v21, 0x1537u, 0);
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    {
      v23 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v23 = *(_QWORD *)v23;
      v22 = ((*(_BYTE *)(v23 + 8) + 70) & 0x7Fu) <= 3;
    }
    if ( v57 )
    {
      sub_AE9DF0(v56, v22, 2u);
      v36 = v57;
    }
    else
    {
      if ( !v59 )
      {
        v24 = *v19;
        goto LABEL_12;
      }
      v46 = sub_168B9E0(v54);
      v49 = v55;
      if ( v55 )
        v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
      v53 = v49;
      v50 = sub_1587BC0(v46, &v53, v44, v45, v47, v48);
      sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v58 + 8), v22, 2u);
      v36 = v57;
    }
    v24 = *v19;
    if ( v36 )
    {
      sub_AE9DF0(v56, *v19, 8u);
LABEL_13:
      sub_15F7200(v54);
      return 0;
    }
LABEL_12:
    if ( v59 )
    {
      v39 = sub_168B9E0(v54);
      v42 = v55;
      if ( v55 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
      v53 = v42;
      v43 = sub_1587BC0(v39, &v53, v37, v38, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v58 + 8), v24, 8u);
    }
    goto LABEL_13;
  }
  v25 = sub_BC1E30(
          *(_QWORD **)(v20 + 248),
          a1[3],
          *(_DWORD *)(a3 + 64),
          v21,
          (__int64)a2,
          *v18,
          (__int64)v18,
          *(_BYTE *)(a3 + 96) & 7,
          a5,
          a6);
  v27 = (_QWORD *)sub_B8C330(v25);
  v32 = sub_F1ED40(v27, a4, v28, v29, v30, v31);
  v33 = *(_QWORD *)(v25 + 120);
  if ( v33 && (v33 & 4) != 0 && (v34 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
    *v34 = v32;
  else
    *(_QWORD *)(v25 + 120) = v32 & 0xFFFFFFFFFFFFFFFBLL;
  if ( !a10 )
  {
    v54[0] = 0;
    sub_BC3BE0(a2, (__int64)a5, a6, (__int64)v54);
    sub_BC36A0(a2, v25, v54[0]);
  }
  v35 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 47LL) & 0x20) != 0 )
  {
    sub_17A40B0(v35, v25);
    v35 = *a1;
  }
  if ( !(unsigned __int8)sub_1DFDB20(v35, a3, v25, a1[4]) )
  {
    sub_1E3AB40(*a1, v25, a3, a1[4], a1[5], a1[3], *(double *)a7.m128_u64, a8, a9, a1[6], 0, a10);
    return v25;
  }
  return 0;
}
