__int64 __fastcall sub_177BF60(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // r14
  char v10; // r15
  unsigned __int16 *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  _BYTE *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  const __m128i *v39; // rax
  __int32 v40; // edx
  bool v41; // zf
  __int64 v42; // rdx
  const __m128i *v43; // rdi
  __int8 v44; // dl
  __int16 v45; // dx
  __m128i v46; // xmm0
  __int64 v47; // rsi
  double v48; // xmm0_8
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // [rsp+10h] [rbp-118h]
  unsigned __int64 v59; // [rsp+10h] [rbp-118h]
  __int64 v60; // [rsp+18h] [rbp-110h]
  unsigned __int64 v61; // [rsp+18h] [rbp-110h]
  unsigned int v62; // [rsp+18h] [rbp-110h]
  unsigned int v63; // [rsp+18h] [rbp-110h]
  __int64 v64; // [rsp+20h] [rbp-108h]
  unsigned __int64 v65; // [rsp+20h] [rbp-108h]
  __int64 v66; // [rsp+28h] [rbp-100h]
  unsigned __int64 v67; // [rsp+28h] [rbp-100h]
  unsigned __int64 v68; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v69; // [rsp+38h] [rbp-F0h]
  __int64 v70; // [rsp+48h] [rbp-E0h]
  const __m128i *v71; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v72; // [rsp+48h] [rbp-E0h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-D0h]
  _BYTE dest[64]; // [rsp+60h] [rbp-C8h] BYREF
  const __m128i *v76; // [rsp+A0h] [rbp-88h] BYREF
  __int32 v77; // [rsp+A8h] [rbp-80h]
  __int64 v78; // [rsp+B0h] [rbp-78h]
  __int64 v79; // [rsp+B8h] [rbp-70h] BYREF
  unsigned int v80; // [rsp+C0h] [rbp-68h]
  __int8 v81; // [rsp+C4h] [rbp-64h]
  char v82; // [rsp+C8h] [rbp-60h]
  __int16 v83; // [rsp+D0h] [rbp-58h]
  __m128i v84; // [rsp+D8h] [rbp-50h]
  char v85; // [rsp+E8h] [rbp-40h]

  v9 = *a1;
  v10 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1;
  if ( v10 )
  {
    sub_18C74E0(*a1, 6, 0, 4);
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 2LL) & 1) != 0 )
    {
      v53 = *(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640;
      *(_BYTE *)(v53 + 601) = 1;
      *(_BYTE *)(v53 + 603) = 1;
    }
  }
  v11 = *(unsigned __int16 **)(a2 + 8);
  if ( v11 )
  {
    v12 = sub_177B9C0(a1, v11, 0, a3, a5, a6, a7);
    if ( v12 == 1 )
    {
LABEL_4:
      v13 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v12 = 0;
  }
  v58 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a5, a6, a7);
  if ( v58 == 1 )
    goto LABEL_4;
  v17 = *a1;
  v18 = dest;
  ptr = dest;
  v19 = *(_QWORD *)(v17 + 4616) + 640LL * *(unsigned int *)(v17 + 4624) - 640;
  v20 = *(unsigned int *)(v19 + 520);
  v74 = 0x800000000LL;
  if ( (_DWORD)v20 && &ptr != (void **)(v19 + 512) )
  {
    v54 = 8LL * (unsigned int)v20;
    if ( (unsigned int)v20 <= 8uLL
      || (v63 = v20,
          sub_2237220(&ptr, dest, (unsigned int)v20, 8),
          v18 = ptr,
          v20 = v63,
          (v54 = 8LL * *(unsigned int *)(v19 + 520)) != 0) )
    {
      v62 = v20;
      memcpy(v18, *(const void **)(v19 + 512), v54);
      v20 = v62;
    }
    LODWORD(v74) = v20;
  }
  v24 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, v15, v20, v16);
  if ( v24 == 1 )
    goto LABEL_32;
  v60 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 32), 0, a3, v21, v22, v23);
  if ( v60 == 1 )
    goto LABEL_32;
  v25 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 40));
  if ( v25 == 1 )
    goto LABEL_32;
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v26 )
    goto LABEL_14;
  v55 = sub_19179E0(*a1, *(unsigned int *)(a2 + 80), v26, 0);
  if ( v55 == 1 )
    goto LABEL_32;
  if ( (v55 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    v64 = sub_19A3EF0(*a1, v55 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_14:
    v64 = 0;
  v27 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 48));
  if ( v27 != 1 )
  {
    v31 = v27 & 0xFFFFFFFFFFFFFFFELL;
    v66 = v31;
    if ( v31 )
      v66 = sub_19A3EF0(*a1, v31);
    v32 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 56), 0, a3, v28, v29, v30);
    if ( v32 != 1 )
    {
      v33 = *a1;
      v68 = v24 & 0xFFFFFFFFFFFFFFFELL;
      v34 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v35 = v32 & 0xFFFFFFFFFFFFFFFELL;
      v69 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
      v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
      v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
      v36 = v66 & 0xFFFFFFFFFFFFFFFELL;
      v67 = v66 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632)
        && *(_QWORD *)(a2 + 8) == v34
        && *(_QWORD *)(a2 + 16) == v59
        && *(_QWORD *)(a2 + 24) == v68
        && *(_QWORD *)(a2 + 32) == v61
        && *(_QWORD *)(a2 + 40) == v65
        && *(_QWORD *)(a2 + 48) == v36
        && *(_QWORD *)(a2 + 56) == v35 )
      {
        v38 = a2 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v37 = sub_174A650(
              a1,
              *(_DWORD *)(a2 + 72),
              *(_DWORD *)(a2 + 76),
              v69,
              *(_DWORD *)(a2 + 80),
              v59,
              a3,
              v68,
              v61,
              v65,
              v67,
              v35,
              *(_DWORD *)(a2 + 84),
              (__int64)ptr,
              (unsigned int)v74);
      if ( v37 != 1 )
      {
        v33 = *a1;
        v38 = v37 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_23;
      }
      v33 = *a1;
      if ( *(_QWORD *)(a2 + 56) == v35 )
      {
        v38 = 0;
LABEL_23:
        v39 = *(const __m128i **)(v33 + 744);
        v40 = v39[2].m128i_i32[0];
        v41 = v39[4].m128i_i8[0] == 0;
        v76 = v39;
        v77 = v40;
        v42 = v39[2].m128i_i64[1];
        v82 = 0;
        v78 = v42;
        if ( v41 )
        {
          v43 = v39;
        }
        else
        {
          v80 = v39[3].m128i_u32[2];
          if ( v80 > 0x40 )
          {
            v71 = v39;
            sub_2205510(&v79);
            v39 = v71;
            v43 = *(const __m128i **)(*a1 + 744);
          }
          else
          {
            v43 = v39;
            v79 = v39[3].m128i_i64[0];
          }
          v44 = v39[3].m128i_i8[12];
          v82 = 1;
          v81 = v44;
        }
        v45 = v39[4].m128i_i16[4];
        v46 = _mm_loadu_si128(v39 + 5);
        v85 = 1;
        v47 = *(unsigned int *)(a2 + 72);
        v83 = v45;
        v84 = v46;
        v48 = sub_1AAA2E0(v43, v47, a2, v38);
        v52 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 64), 0, v48, v49, v50, v51);
        if ( v52 == 1 )
          goto LABEL_28;
        v70 = v52;
        sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 72), v52);
        v56 = v70 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_QWORD *)(a2 + 64) != (v70 & 0xFFFFFFFFFFFFFFFELL) && a2 == v38 )
        {
          v72 = v70 & 0xFFFFFFFFFFFFFFFELL;
          v57 = sub_174A650(
                  a1,
                  *(_DWORD *)(a2 + 72),
                  *(_DWORD *)(a2 + 76),
                  v69,
                  *(_DWORD *)(a2 + 80),
                  v59,
                  v48,
                  v68,
                  v61,
                  v65,
                  v67,
                  v35,
                  *(_DWORD *)(a2 + 84),
                  (__int64)ptr,
                  (unsigned int)v74);
          if ( v57 == 1 )
          {
LABEL_28:
            v13 = 1;
LABEL_29:
            sub_15354C0((__int64)&v76);
            goto LABEL_33;
          }
          v56 = v72;
          v38 = v57 & 0xFFFFFFFFFFFFFFFELL;
        }
        if ( a2 == v38 )
          v13 = a2;
        else
          v13 = sub_1C3E180(*a1, v38, v56);
        goto LABEL_29;
      }
      sub_17A5050(v33, *(_QWORD *)(v35 + 8));
    }
  }
LABEL_32:
  v13 = 1;
LABEL_33:
  if ( ptr != dest )
  {
    free(ptr);
    if ( !v10 )
      return v13;
LABEL_35:
    sub_190D5E0(v9);
    return v13;
  }
LABEL_5:
  if ( v10 )
    goto LABEL_35;
  return v13;
}
