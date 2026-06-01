__int64 __fastcall sub_1BA4CA0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbx
  __int64 v10; // r15
  char v11; // r14
  _WORD *v12; // rsi
  __int64 v13; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbp
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r10
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-120h]
  unsigned __int64 v49; // [rsp+8h] [rbp-120h]
  __int64 v50; // [rsp+10h] [rbp-118h]
  unsigned __int64 v51; // [rsp+10h] [rbp-118h]
  __int64 v52; // [rsp+18h] [rbp-110h]
  unsigned __int64 v53; // [rsp+18h] [rbp-110h]
  __int64 v54; // [rsp+20h] [rbp-108h]
  __int64 v55; // [rsp+28h] [rbp-100h]
  unsigned __int64 v56; // [rsp+28h] [rbp-100h]
  unsigned __int64 v57; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v58; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v59; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v60; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-D0h]
  _BYTE v63[64]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v64[136]; // [rsp+A0h] [rbp-88h] BYREF

  v9 = a2;
  v10 = *a1;
  v11 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v11 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v39 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v39 + 601) = 1;
      *(_BYTE *)(v39 + 603) = 1;
    }
  }
  v12 = *(_WORD **)(a2 + 8);
  if ( v12 )
  {
    v13 = sub_1B7AA40(a1, v12, 0, a3, a4, a6, a7, a8);
    if ( v13 == 1 )
    {
LABEL_4:
      v9 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = 0;
  }
  v48 = sub_1B7AA40(a1, *(_WORD **)(v9 + 16), 0, a3, a4, a6, a7, a8);
  if ( v48 == 1 )
    goto LABEL_4;
  v18 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  ptr = v63;
  v62 = 0x800000000LL;
  if ( *(_DWORD *)(v18 + 520) )
    sub_1900F90(&ptr, (char **)(v18 + 512));
  v50 = sub_1B7AA40(a1, *(_WORD **)(v9 + 24), 0, a3, a4, v15, v16, v17);
  if ( v50 == 1 )
    goto LABEL_23;
  v52 = sub_1B7AA40(a1, *(_WORD **)(v9 + 32), 0, a3, a4, v19, v20, v21);
  if ( v52 == 1 )
    goto LABEL_23;
  v25 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v9 + 40), a3, a4, v22, v23, v24);
  if ( v25 == 1 )
    goto LABEL_23;
  v29 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v29 )
    goto LABEL_15;
  v40 = sub_19179E0(*a1, *(_DWORD *)(v9 + 80), v29, 0, a3, a4);
  if ( v40 == 1 )
    goto LABEL_23;
  if ( (v40 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v54 = sub_19A3EF0(*a1, v40 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v54 = 0;
  v30 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v9 + 48), a3, a4, v26, v27, v28);
  if ( v30 == 1 )
    goto LABEL_23;
  v34 = v30 & 0xFFFFFFFFFFFFFFFELL;
  v55 = v34;
  if ( v34 )
    v55 = sub_19A3EF0(*a1, v34);
  v35 = sub_1B7AA40(a1, *(_WORD **)(v9 + 56), 0, a3, a4, v31, v32, v33);
  if ( v35 == 1 )
    goto LABEL_23;
  v36 = v55;
  v56 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v58 = v36 & 0xFFFFFFFFFFFFFFFELL;
  v57 = v52 & 0xFFFFFFFFFFFFFFFELL;
  v53 = v50 & 0xFFFFFFFFFFFFFFFELL;
  v51 = v48 & 0xFFFFFFFFFFFFFFFELL;
  v49 = v35 & 0xFFFFFFFFFFFFFFFELL;
  v37 = sub_1B26A40(
          a1,
          *(_DWORD *)(v9 + 72),
          *(_DWORD *)(v9 + 76),
          v13 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(v9 + 80),
          v51,
          a3,
          a4,
          v53,
          v57,
          v54 & 0xFFFFFFFFFFFFFFFELL,
          v36 & 0xFFFFFFFFFFFFFFFELL,
          v35 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(v9 + 84),
          (__int64)ptr,
          (unsigned int)v62);
  v38 = *a1;
  if ( v37 == 1 && *(_QWORD *)(v9 + 56) != v49 )
  {
    sub_17A5050(v38, *(_QWORD *)(v49 + 8));
LABEL_23:
    v9 = 1;
    goto LABEL_24;
  }
  v41 = v37 & 0xFFFFFFFFFFFFFFFELL;
  sub_18C0BC0((__int64)v64, *(const __m128i **)(v38 + 744), 1);
  sub_1AAA2E0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(v9 + 72), v9, v41);
  v45 = sub_1B7AA40(a1, *(_WORD **)(v9 + 64), 0, a3, a4, v42, v43, v44);
  if ( v45 == 1 )
    goto LABEL_33;
  v59 = v45;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(v9 + 72), v45, *(double *)a3.m128_u64);
  v46 = v59 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(v9 + 64) == (v59 & 0xFFFFFFFFFFFFFFFELL) || v41 != v9 )
  {
LABEL_37:
    if ( v9 != v41 )
      v9 = sub_1C3E180(*a1, v41, v46);
    goto LABEL_34;
  }
  v60 = v59 & 0xFFFFFFFFFFFFFFFELL;
  v47 = sub_1B26A40(
          a1,
          *(_DWORD *)(v9 + 72),
          *(_DWORD *)(v9 + 76),
          v56,
          *(_DWORD *)(v9 + 80),
          v51,
          a3,
          a4,
          v53,
          v57,
          v54 & 0xFFFFFFFFFFFFFFFELL,
          v58,
          v49,
          *(_DWORD *)(v9 + 84),
          (__int64)ptr,
          (unsigned int)v62);
  if ( v47 != 1 )
  {
    v46 = v60;
    v41 = v47 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_37;
  }
LABEL_33:
  v9 = 1;
LABEL_34:
  sub_15354C0((__int64)v64);
LABEL_24:
  if ( ptr != v63 )
  {
    free(ptr);
    if ( !v11 )
      return v9;
LABEL_26:
    sub_190D5E0(v10, a3);
    return v9;
  }
LABEL_5:
  if ( v11 )
    goto LABEL_26;
  return v9;
}
