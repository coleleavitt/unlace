__int64 __fastcall sub_1D66A20(
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
  _WORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  _BYTE *v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rbx
  const __m128i *v46; // rax
  __int32 v47; // edx
  bool v48; // zf
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int8 v51; // dl
  __int16 v52; // dx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r10
  __int64 v62; // rax
  __int64 v63; // [rsp+10h] [rbp-118h]
  unsigned __int64 v64; // [rsp+10h] [rbp-118h]
  __int64 v65; // [rsp+18h] [rbp-110h]
  unsigned __int64 v66; // [rsp+18h] [rbp-110h]
  unsigned int v67; // [rsp+18h] [rbp-110h]
  unsigned int v68; // [rsp+18h] [rbp-110h]
  __int64 v69; // [rsp+20h] [rbp-108h]
  unsigned __int64 v70; // [rsp+20h] [rbp-108h]
  __int64 v71; // [rsp+28h] [rbp-100h]
  unsigned __int64 v72; // [rsp+28h] [rbp-100h]
  unsigned __int64 v73; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v75; // [rsp+48h] [rbp-E0h]
  const __m128i *v76; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v77; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+58h] [rbp-D0h]
  _BYTE dest[64]; // [rsp+60h] [rbp-C8h] BYREF
  const __m128i *v81; // [rsp+A0h] [rbp-88h] BYREF
  __int32 v82; // [rsp+A8h] [rbp-80h]
  __int64 v83; // [rsp+B0h] [rbp-78h]
  __int64 v84; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v85; // [rsp+C0h] [rbp-68h]
  __int8 v86; // [rsp+C4h] [rbp-64h]
  char v87; // [rsp+C8h] [rbp-60h]
  __int16 v88; // [rsp+D0h] [rbp-58h]
  __m128 v89; // [rsp+D8h] [rbp-50h]
  char v90; // [rsp+E8h] [rbp-40h]

  v10 = *a1;
  v11 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v11 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v58 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v58 + 601) = 1;
      *(_BYTE *)(v58 + 603) = 1;
    }
  }
  v12 = *(_WORD **)(a2 + 8);
  if ( v12 )
  {
    v13 = sub_1D42130(a1, v12, 0, a3, a4, a6, a7, a8);
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
  v63 = sub_1D42130(a1, *(_WORD **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v63 == 1 )
    goto LABEL_4;
  v18 = *a1;
  v19 = dest;
  ptr = dest;
  v20 = *(_QWORD *)(v18 + 4616) + 640LL * *(unsigned int *)(v18 + 4624) - 640;
  v21 = *(unsigned int *)(v20 + 520);
  v79 = 0x800000000LL;
  if ( (_DWORD)v21 && &ptr != (void **)(v20 + 512) )
  {
    v59 = 8LL * (unsigned int)v21;
    if ( (unsigned int)v21 <= 8uLL
      || (v68 = v21,
          sub_2237220(&ptr, dest, (unsigned int)v21, 8),
          v19 = ptr,
          v21 = v68,
          (v59 = 8LL * *(unsigned int *)(v20 + 520)) != 0) )
    {
      v67 = v21;
      memcpy(v19, *(const void **)(v20 + 512), v59);
      v21 = v67;
    }
    LODWORD(v79) = v21;
  }
  v25 = sub_1D42130(a1, *(_WORD **)(a2 + 24), 0, a3, a4, v16, v21, v17);
  if ( v25 == 1 )
    goto LABEL_32;
  v65 = sub_1D42130(a1, *(_WORD **)(a2 + 32), 0, a3, a4, v22, v23, v24);
  if ( v65 == 1 )
    goto LABEL_32;
  v29 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 40), a3, a4, v26, v27, v28);
  if ( v29 == 1 )
    goto LABEL_32;
  v33 = v29 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v33 )
    goto LABEL_14;
  v60 = sub_19179E0(*a1, *(_DWORD *)(a2 + 80), v33, 0, a3, a4);
  if ( v60 == 1 )
    goto LABEL_32;
  if ( (v60 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v69 = sub_19A3EF0(*a1, v60 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_14:
    v69 = 0;
  v34 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 48), a3, a4, v30, v31, v32);
  if ( v34 != 1 )
  {
    v38 = v34 & 0xFFFFFFFFFFFFFFFELL;
    v71 = v38;
    if ( v38 )
      v71 = sub_19A3EF0(*a1, v38);
    v39 = sub_1D42130(a1, *(_WORD **)(a2 + 56), 0, a3, a4, v35, v36, v37);
    if ( v39 != 1 )
    {
      v40 = *a1;
      v73 = v25 & 0xFFFFFFFFFFFFFFFELL;
      v41 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v42 = v39 & 0xFFFFFFFFFFFFFFFELL;
      v74 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v64 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
      v70 = v69 & 0xFFFFFFFFFFFFFFFELL;
      v43 = v71 & 0xFFFFFFFFFFFFFFFELL;
      v72 = v71 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632)
        && *(_QWORD *)(a2 + 8) == v41
        && *(_QWORD *)(a2 + 16) == v64
        && *(_QWORD *)(a2 + 24) == v73
        && *(_QWORD *)(a2 + 32) == v66
        && *(_QWORD *)(a2 + 40) == v70
        && *(_QWORD *)(a2 + 48) == v43
        && *(_QWORD *)(a2 + 56) == v42 )
      {
        v45 = a2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v44 = sub_1D3F2C0(
              a1,
              *(unsigned int *)(a2 + 72),
              *(_DWORD *)(a2 + 76),
              v74,
              *(_DWORD *)(a2 + 80),
              v64,
              a3,
              a4,
              v73,
              v66,
              v70,
              v72,
              v42,
              *(_DWORD *)(a2 + 84),
              (__int64 *)ptr,
              (unsigned int)v79);
      if ( v44 != 1 )
      {
        v40 = *a1;
        v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v40 = *a1;
      if ( *(_QWORD *)(a2 + 56) == v42 )
      {
        v45 = 0;
LABEL_23:
        v46 = *(const __m128i **)(v40 + 744);
        v47 = v46[2].m128i_i32[0];
        v48 = v46[4].m128i_i8[0] == 0;
        v81 = v46;
        v82 = v47;
        v49 = v46[2].m128i_i64[1];
        v87 = 0;
        v83 = v49;
        if ( v48 )
        {
          v50 = (__int64)v46;
        }
        else
        {
          v85 = v46[3].m128i_u32[2];
          if ( v85 > 0x40 )
          {
            v76 = v46;
            sub_2205510(&v84);
            v46 = v76;
            v50 = *(_QWORD *)(*a1 + 744);
          }
          else
          {
            v50 = (__int64)v46;
            v84 = v46[3].m128i_i64[0];
          }
          v51 = v46[3].m128i_i8[12];
          v87 = 1;
          v86 = v51;
        }
        v52 = v46[4].m128i_i16[4];
        a3 = (__m128)_mm_loadu_si128(v46 + 5);
        v90 = 1;
        v53 = *(unsigned int *)(a2 + 72);
        v88 = v52;
        v89 = a3;
        sub_1AAA2E0(v50, v53, a2, v45);
        v57 = sub_1D42130(a1, *(_WORD **)(a2 + 64), 0, a3, a4, v54, v55, v56);
        if ( v57 == 1 )
          goto LABEL_28;
        v75 = v57;
        sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 72), v57, *(double *)a3.m128_u64);
        v61 = v75 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_QWORD *)(a2 + 64) != (v75 & 0xFFFFFFFFFFFFFFFELL) && a2 == v45 )
        {
          v77 = v75 & 0xFFFFFFFFFFFFFFFELL;
          v62 = sub_1D3F2C0(
                  a1,
                  *(unsigned int *)(a2 + 72),
                  *(_DWORD *)(a2 + 76),
                  v74,
                  *(_DWORD *)(a2 + 80),
                  v64,
                  a3,
                  a4,
                  v73,
                  v66,
                  v70,
                  v72,
                  v42,
                  *(_DWORD *)(a2 + 84),
                  (__int64 *)ptr,
                  (unsigned int)v79);
          if ( v62 == 1 )
          {
LABEL_28:
            v14 = 1;
LABEL_29:
            sub_15354C0((__int64)&v81);
            goto LABEL_33;
          }
          v61 = v77;
          v45 = v62 & 0xFFFFFFFFFFFFFFFELL;
        }
        if ( a2 == v45 )
          v14 = a2;
        else
          v14 = sub_1C3E180(*a1, v45, v61);
        goto LABEL_29;
      }
      sub_17A5050(v40, *(_QWORD *)(v42 + 8));
    }
  }
LABEL_32:
  v14 = 1;
LABEL_33:
  if ( ptr != dest )
  {
    free(ptr);
    if ( !v11 )
      return v14;
LABEL_35:
    sub_190D5E0(v10, a3);
    return v14;
  }
LABEL_5:
  if ( v11 )
    goto LABEL_35;
  return v14;
}
