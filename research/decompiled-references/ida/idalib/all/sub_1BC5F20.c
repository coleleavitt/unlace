__int64 __fastcall sub_1BC5F20(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r14
  char v11; // r15
  const __m128i *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r10
  __int64 v51; // rax
  __int64 v52; // [rsp+8h] [rbp-120h]
  unsigned __int64 v53; // [rsp+8h] [rbp-120h]
  __int64 v54; // [rsp+10h] [rbp-118h]
  unsigned __int64 v55; // [rsp+10h] [rbp-118h]
  __int64 v56; // [rsp+18h] [rbp-110h]
  unsigned __int64 v57; // [rsp+18h] [rbp-110h]
  __int64 v58; // [rsp+20h] [rbp-108h]
  unsigned __int64 v59; // [rsp+20h] [rbp-108h]
  __int64 v60; // [rsp+28h] [rbp-100h]
  unsigned __int64 v61; // [rsp+28h] [rbp-100h]
  unsigned __int64 v62; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v63; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v64; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v65; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-D0h]
  _BYTE v68[64]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v69[136]; // [rsp+A0h] [rbp-88h] BYREF

  v10 = *a1;
  v11 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v11 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v48 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v48 + 601) = 1;
      *(_BYTE *)(v48 + 603) = 1;
    }
  }
  v12 = *(const __m128i **)(a2 + 8);
  if ( v12 )
  {
    v13 = sub_1B71AD0(a1, v12, 0, a3, a4, a6, a7, a8);
    if ( v13 == 1 )
    {
LABEL_4:
      v14 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = 0;
  }
  v52 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v52 == 1 )
    goto LABEL_4;
  v19 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  v20 = *(_DWORD *)(v19 + 520);
  ptr = v68;
  v67 = 0x800000000LL;
  if ( v20 )
    sub_1900F90(&ptr, (char **)(v19 + 512));
  v54 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 24), 0, a3, a4, v16, v17, v18);
  if ( v54 == 1 )
    goto LABEL_29;
  v56 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 32), 0, a3, a4, v21, v22, v23);
  if ( v56 == 1 )
    goto LABEL_29;
  v27 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 40), v24, a3, a4, v25, v26);
  if ( v27 == 1 )
    goto LABEL_29;
  v31 = v27 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v31 )
    goto LABEL_15;
  v49 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v31, 0, a3, a4);
  if ( v49 == 1 )
    goto LABEL_29;
  if ( (v49 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v58 = sub_19A3EF0(*a1, v49 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v58 = 0;
  v32 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 48), v28, a3, a4, v29, v30);
  if ( v32 != 1 )
  {
    v36 = v32 & 0xFFFFFFFFFFFFFFFELL;
    v60 = v36;
    if ( v36 )
      v60 = sub_19A3EF0(*a1, v36);
    v37 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 56), 0, a3, a4, v33, v34, v35);
    if ( v37 != 1 )
    {
      v38 = *a1;
      v39 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v63 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v62 = v54 & 0xFFFFFFFFFFFFFFFELL;
      v40 = v52;
      v53 = v37 & 0xFFFFFFFFFFFFFFFELL;
      v55 = v40 & 0xFFFFFFFFFFFFFFFELL;
      v57 = v56 & 0xFFFFFFFFFFFFFFFELL;
      v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v41 = v60 & 0xFFFFFFFFFFFFFFFELL;
      v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632)
        && v39 == *(_QWORD *)(a2 + 8)
        && *(_QWORD *)(a2 + 16) == v55
        && *(_QWORD *)(a2 + 24) == v62
        && *(_QWORD *)(a2 + 32) == v57
        && *(_QWORD *)(a2 + 40) == v59
        && *(_QWORD *)(a2 + 48) == v41
        && *(_QWORD *)(a2 + 56) == v53 )
      {
        v43 = a2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_24;
      }
      v42 = sub_1B263D0(
              a1,
              *(_DWORD *)(a2 + 72),
              *(_DWORD *)(a2 + 76),
              v63,
              *(_DWORD *)(a2 + 80),
              v55,
              a3,
              a4,
              v62,
              v57,
              v59,
              v61,
              v53,
              *(_DWORD *)(a2 + 84),
              (__int64)ptr,
              (unsigned int)v67);
      if ( v42 != 1 )
      {
        v38 = *a1;
        v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_24;
      }
      v38 = *a1;
      if ( *(_QWORD *)(a2 + 56) == v53 )
      {
        v43 = 0;
LABEL_24:
        sub_18C0BC0((__int64)v69, *(const __m128i **)(v38 + 744), 1);
        sub_1AAA2E0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 72), a2, v43);
        v47 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 64), 0, a3, a4, v44, v45, v46);
        if ( v47 == 1 )
        {
LABEL_25:
          v14 = 1;
LABEL_26:
          sub_15354C0((__int64)v69);
          goto LABEL_30;
        }
        v64 = v47;
        sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v47, *(double *)a3.m128_u64);
        v50 = v64 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_QWORD *)(a2 + 64) != (v64 & 0xFFFFFFFFFFFFFFFELL) && v43 == a2 )
        {
          v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
          v51 = sub_1B263D0(
                  a1,
                  *(_DWORD *)(a2 + 72),
                  *(_DWORD *)(a2 + 76),
                  v63,
                  *(_DWORD *)(a2 + 80),
                  v55,
                  a3,
                  a4,
                  v62,
                  v57,
                  v59,
                  v61,
                  v53,
                  *(_DWORD *)(a2 + 84),
                  (__int64)ptr,
                  (unsigned int)v67);
          if ( v51 == 1 )
            goto LABEL_25;
          v50 = v65;
          v43 = v51 & 0xFFFFFFFFFFFFFFFELL;
        }
        if ( a2 == v43 )
          v14 = a2;
        else
          v14 = sub_1C3E180(*a1, v43, v50);
        goto LABEL_26;
      }
      sub_17A5050(v38, *(_QWORD *)(v53 + 8));
    }
  }
LABEL_29:
  v14 = 1;
LABEL_30:
  if ( ptr != v68 )
  {
    free(ptr);
    if ( !v11 )
      return v14;
LABEL_32:
    sub_190D5E0(v10, a3);
    return v14;
  }
LABEL_5:
  if ( v11 )
    goto LABEL_32;
  return v14;
}
