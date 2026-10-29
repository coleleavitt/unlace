__int64 __fastcall sub_19622C0(
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
  unsigned __int16 *v12; // rsi
  __int64 v13; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbp
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-120h]
  unsigned __int64 v43; // [rsp+8h] [rbp-120h]
  __int64 v44; // [rsp+10h] [rbp-118h]
  unsigned __int64 v45; // [rsp+10h] [rbp-118h]
  __int64 v46; // [rsp+18h] [rbp-110h]
  unsigned __int64 v47; // [rsp+18h] [rbp-110h]
  __int64 v48; // [rsp+20h] [rbp-108h]
  __int64 v49; // [rsp+28h] [rbp-100h]
  unsigned __int64 v50; // [rsp+28h] [rbp-100h]
  unsigned __int64 v51; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v52; // [rsp+40h] [rbp-E8h]
  __int64 v53; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v54; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-D0h]
  _BYTE v57[64]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v58[136]; // [rsp+A0h] [rbp-88h] BYREF

  v9 = a2;
  v10 = *a1;
  v11 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v11 )
  {
    sub_18C79E0(*a1, 6, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v33 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v33 + 601) = 1;
      *(_BYTE *)(v33 + 603) = 1;
    }
  }
  v12 = *(unsigned __int16 **)(a2 + 8);
  if ( v12 )
  {
    v13 = sub_1961D20(a1, v12, 0, a3, a4, a6, a7, a8);
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
  v42 = sub_1961D20(a1, *(unsigned __int16 **)(v9 + 16), 0, a3, a4, a6, a7, a8);
  if ( v42 == 1 )
    goto LABEL_4;
  v18 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  ptr = v57;
  v56 = 0x800000000LL;
  if ( *(_DWORD *)(v18 + 520) )
    sub_1900F90(&ptr, (char **)(v18 + 512));
  v44 = sub_1961D20(a1, *(unsigned __int16 **)(v9 + 24), 0, a3, a4, v15, v16, v17);
  if ( v44 == 1 )
    goto LABEL_23;
  v46 = sub_1961D20(a1, *(unsigned __int16 **)(v9 + 32), 0, a3, a4, v19, v20, v21);
  if ( v46 == 1 )
    goto LABEL_23;
  v22 = sub_1944E10(a1, *(unsigned __int16 **)(v9 + 40), a3, a4);
  if ( v22 == 1 )
    goto LABEL_23;
  v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v23 )
    goto LABEL_15;
  v34 = sub_19179E0(*a1, *(_DWORD *)(v9 + 80), v23, 0, a3, a4);
  if ( v34 == 1 )
    goto LABEL_23;
  if ( (v34 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v48 = sub_19A3EF0(*a1, v34 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v48 = 0;
  v24 = sub_1944E10(a1, *(unsigned __int16 **)(v9 + 48), a3, a4);
  if ( v24 == 1 )
    goto LABEL_23;
  v28 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v49 = v28;
  if ( v28 )
    v49 = sub_19A3EF0(*a1, v28);
  v29 = sub_1961D20(a1, *(unsigned __int16 **)(v9 + 56), 0, a3, a4, v25, v26, v27);
  if ( v29 == 1 )
    goto LABEL_23;
  v30 = v49;
  v50 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v52 = v30 & 0xFFFFFFFFFFFFFFFELL;
  v51 = v46 & 0xFFFFFFFFFFFFFFFELL;
  v47 = v44 & 0xFFFFFFFFFFFFFFFELL;
  v45 = v42 & 0xFFFFFFFFFFFFFFFELL;
  v43 = v29 & 0xFFFFFFFFFFFFFFFELL;
  v31 = sub_19016D0(
          a1,
          *(_DWORD *)(v9 + 72),
          *(_DWORD *)(v9 + 76),
          v13 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(v9 + 80),
          v45,
          *(double *)a3.m128_u64,
          v47,
          v51,
          v48 & 0xFFFFFFFFFFFFFFFELL,
          v30 & 0xFFFFFFFFFFFFFFFELL,
          v29 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)(v9 + 84),
          (__int64)ptr,
          (unsigned int)v56);
  v32 = *a1;
  if ( v31 == 1 && *(_QWORD *)(v9 + 56) != v43 )
  {
    sub_17A5050(v32, *(_QWORD *)(v43 + 8));
LABEL_23:
    v9 = 1;
    goto LABEL_24;
  }
  v35 = v31 & 0xFFFFFFFFFFFFFFFELL;
  sub_18C0BC0((__int64)v58, *(const __m128i **)(v32 + 744), 1);
  *(double *)a3.m128_u64 = sub_1AAA2E0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(v9 + 72), v9, v35);
  v39 = sub_1961D20(a1, *(unsigned __int16 **)(v9 + 64), 0, a3, a4, v36, v37, v38);
  if ( v39 == 1 )
    goto LABEL_33;
  v53 = v39;
  sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(v9 + 72), v39);
  v40 = v53 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(v9 + 64) == (v53 & 0xFFFFFFFFFFFFFFFELL) || v35 != v9 )
  {
LABEL_37:
    if ( v9 != v35 )
      v9 = sub_1C3E180(*a1, v35, v40);
    goto LABEL_34;
  }
  v54 = v53 & 0xFFFFFFFFFFFFFFFELL;
  v41 = sub_19016D0(
          a1,
          *(_DWORD *)(v9 + 72),
          *(_DWORD *)(v9 + 76),
          v50,
          *(_DWORD *)(v9 + 80),
          v45,
          *(double *)a3.m128_u64,
          v47,
          v51,
          v48 & 0xFFFFFFFFFFFFFFFELL,
          v52,
          v43,
          *(_DWORD *)(v9 + 84),
          (__int64)ptr,
          (unsigned int)v56);
  if ( v41 != 1 )
  {
    v40 = v54;
    v35 = v41 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_37;
  }
LABEL_33:
  v9 = 1;
LABEL_34:
  sub_15354C0((__int64)v58);
LABEL_24:
  if ( ptr != v57 )
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
