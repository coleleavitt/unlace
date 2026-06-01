__int64 __fastcall sub_1998AA0(
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
  unsigned __int16 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-120h]
  unsigned __int64 v46; // [rsp+8h] [rbp-120h]
  __int64 v47; // [rsp+10h] [rbp-118h]
  unsigned __int64 v48; // [rsp+10h] [rbp-118h]
  __int64 v49; // [rsp+18h] [rbp-110h]
  unsigned __int64 v50; // [rsp+18h] [rbp-110h]
  __int64 v51; // [rsp+20h] [rbp-108h]
  unsigned __int64 v52; // [rsp+20h] [rbp-108h]
  __int64 v53; // [rsp+28h] [rbp-100h]
  unsigned __int64 v54; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v55; // [rsp+38h] [rbp-F0h]
  __int64 v56; // [rsp+40h] [rbp-E8h]
  __int64 v57; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v58; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-D0h]
  _BYTE v61[64]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v62[136]; // [rsp+A0h] [rbp-88h] BYREF

  v10 = *a1;
  v11 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v11 )
  {
    sub_18C79E0(*a1, 6, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v41 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v41 + 601) = 1;
      *(_BYTE *)(v41 + 603) = 1;
    }
  }
  v12 = *(unsigned __int16 **)(a2 + 8);
  if ( v12 )
  {
    v13 = sub_1998500(a1, v12, 0, a3, a4, a6, a7, a8);
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
  v45 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v45 == 1 )
    goto LABEL_4;
  v19 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
  ptr = v61;
  v60 = 0x800000000LL;
  if ( *(_DWORD *)(v19 + 520) )
    sub_1900F90(&ptr, (char **)(v19 + 512));
  v47 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, v16, v17, v18);
  if ( v47 == 1 )
    goto LABEL_28;
  v49 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 32), 0, a3, a4, v20, v21, v22);
  if ( v49 == 1 )
    goto LABEL_28;
  v23 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 40), *(double *)a3.m128_u64, a4);
  if ( v23 == 1 )
    goto LABEL_28;
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v24 )
    goto LABEL_15;
  v42 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v24, 0, a3, a4);
  if ( v42 == 1 )
    goto LABEL_28;
  if ( (v42 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v51 = sub_19A3EF0(*a1, v42 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_15:
    v51 = 0;
  v25 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 48), *(double *)a3.m128_u64, a4);
  if ( v25 != 1 )
  {
    v29 = v25 & 0xFFFFFFFFFFFFFFFELL;
    v53 = v29;
    if ( v29 )
      v53 = sub_19A3EF0(*a1, v29);
    v30 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 56), 0, a3, a4, v26, v27, v28);
    if ( v30 != 1 )
    {
      v31 = v13;
      v32 = v45;
      v46 = v30 & 0xFFFFFFFFFFFFFFFELL;
      v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
      v55 = v31 & 0xFFFFFFFFFFFFFFFELL;
      v48 = v47 & 0xFFFFFFFFFFFFFFFELL;
      v56 = v33;
      v54 = v49 & 0xFFFFFFFFFFFFFFFELL;
      v50 = v51 & 0xFFFFFFFFFFFFFFFELL;
      v52 = v53 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v31 & 0xFFFFFFFFFFFFFFFELL) == *(_QWORD *)(a2 + 8)
        && v33 == *(_QWORD *)(a2 + 16)
        && *(_QWORD *)(a2 + 24) == v48
        && *(_QWORD *)(a2 + 32) == v54
        && *(_QWORD *)(a2 + 40) == v50
        && *(_QWORD *)(a2 + 48) == (v53 & 0xFFFFFFFFFFFFFFFELL)
        && *(_QWORD *)(a2 + 56) == v46 )
      {
        v35 = *a1;
        v36 = a2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v34 = sub_18E5FB0(
              a1,
              *(_DWORD *)(a2 + 72),
              *(_DWORD *)(a2 + 76),
              v55,
              *(_DWORD *)(a2 + 80),
              v33,
              *(double *)a3.m128_u64,
              v48,
              v54,
              v50,
              v52,
              v46,
              *(_DWORD *)(a2 + 84),
              (__int64)ptr,
              (unsigned int)v60);
      if ( v34 != 1 )
      {
        v35 = *a1;
        v36 = v34 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v35 = *a1;
      if ( *(_QWORD *)(a2 + 56) == v46 )
      {
        v36 = 0;
LABEL_23:
        sub_18C0BC0((__int64)v62, *(const __m128i **)(v35 + 744), 1);
        *(double *)a3.m128_u64 = sub_1AAA2E0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 72), a2, v36);
        v40 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 64), 0, a3, a4, v37, v38, v39);
        if ( v40 == 1 )
        {
LABEL_24:
          v14 = 1;
LABEL_25:
          sub_15354C0((__int64)v62);
          goto LABEL_29;
        }
        v57 = v40;
        sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 72), v40);
        v43 = v57 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_QWORD *)(a2 + 64) != (v57 & 0xFFFFFFFFFFFFFFFELL) && v36 == a2 )
        {
          v58 = v57 & 0xFFFFFFFFFFFFFFFELL;
          v44 = sub_18E5FB0(
                  a1,
                  *(_DWORD *)(a2 + 72),
                  *(_DWORD *)(a2 + 76),
                  v55,
                  *(_DWORD *)(a2 + 80),
                  v56,
                  *(double *)a3.m128_u64,
                  v48,
                  v54,
                  v50,
                  v52,
                  v46,
                  *(_DWORD *)(a2 + 84),
                  (__int64)ptr,
                  (unsigned int)v60);
          if ( v44 == 1 )
            goto LABEL_24;
          v43 = v58;
          v36 = v44 & 0xFFFFFFFFFFFFFFFELL;
        }
        if ( a2 == v36 )
          v14 = a2;
        else
          v14 = sub_1C3E180(*a1, v36, v43);
        goto LABEL_25;
      }
      sub_17A5050(v35, *(_QWORD *)(v46 + 8));
    }
  }
LABEL_28:
  v14 = 1;
LABEL_29:
  if ( ptr != v61 )
  {
    free(ptr);
    if ( !v11 )
      return v14;
LABEL_31:
    sub_190D5E0(v10, a3);
    return v14;
  }
LABEL_5:
  if ( v11 )
    goto LABEL_31;
  return v14;
}
