__m128i *__fastcall sub_1A95C30(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        __int32 a9,
        __int64 a10,
        __int32 a11,
        char a12,
        unsigned int *a13,
        __int16 a14,
        unsigned __int64 a15,
        __int64 *a16,
        int a17)
{
  __int64 v19; // r10
  __int64 v20; // r13
  __int64 v21; // rsi
  __m128i *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rbp
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int16 v29; // dx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int16 v32; // r15
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r10
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // [rsp+8h] [rbp-110h]
  __int64 v58; // [rsp+8h] [rbp-110h]
  __int64 v59; // [rsp+8h] [rbp-110h]
  __int64 v60; // [rsp+8h] [rbp-110h]
  __int64 v61; // [rsp+10h] [rbp-108h]
  __int64 v62; // [rsp+10h] [rbp-108h]
  __int64 v63; // [rsp+10h] [rbp-108h]
  __int64 v64; // [rsp+10h] [rbp-108h]
  __int64 v65; // [rsp+10h] [rbp-108h]
  __int64 v66; // [rsp+10h] [rbp-108h]
  int v70; // [rsp+2Ch] [rbp-ECh]
  char v71; // [rsp+3Fh] [rbp-D9h] BYREF
  __int64 v72; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v74[200]; // [rsp+50h] [rbp-C8h] BYREF

  v19 = *(_QWORD *)(*a1 + 544);
  v70 = a4;
  v20 = v19 - 48;
  v57 = a6;
  if ( !v19 )
    v20 = 0;
  v21 = 0;
  if ( !*(_DWORD *)(a5 + 56) )
    v21 = *(_QWORD *)(a5 + 64);
  v22 = *(__m128i **)(v20 + 88);
  if ( !v22 )
  {
    sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v20 + 24), 0xDB0u, 0);
    sub_15F7200(v74);
    return v22;
  }
  v23 = 2;
  if ( (a14 & 0x4000) == 0 )
  {
    LOBYTE(v23) = (*a13 & 0x4000) != 0;
    v23 = (unsigned int)(v23 + 1);
  }
  v61 = *(_QWORD *)(*a1 + 544);
  v24 = sub_BAD570((__int64)v22, v21, v23, a4, a5, a6);
  v25 = v61;
  v26 = v24;
  if ( !v24 )
  {
    v22 = sub_1A93A20(a1, a2, v20, a3, v70, a5, a7, a8, a6, a9, a10, a11, a12, *a13, a14, a15, a16, a17, v61);
    sub_168B6C0((__int64)a1);
    sub_1A942A0(a1, (__int64)v22, a7, *(double *)a8.m128i_i64);
    return v22;
  }
  v27 = *(_QWORD *)(v24 + 16);
  v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v27 & 4) != 0 )
    v28 = *(_QWORD *)v28;
  if ( (*(_BYTE *)(v28 + 8) & 0x7F) == 0x17 )
  {
    sub_168B9F0((__int64)v74, a1, a3, 0xE85u, 0);
    sub_15F7200(v74);
    sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v26 + 24), 0x189Au, 0);
    v22 = nullptr;
    sub_15F7200(v74);
    return v22;
  }
  v29 = *(_WORD *)(v26 + 72);
  if ( (v29 & 1) == 0 || !a12 )
  {
    v39 = 5384;
    if ( (*(_BYTE *)a13 & 8) != 0 )
      v39 = ((*(_BYTE *)(v26 + 74) & 8) != 0) + 5384;
    sub_168B9F0((__int64)v74, a1, a3, v39, 0);
    v73 = v22[2].m128i_i64[1];
    sub_15894B0((__int64)v74, &v73);
    goto LABEL_35;
  }
  v30 = *(_QWORD *)(v26 + 80);
  if ( v30 == a6 )
  {
    v31 = *a13;
  }
  else
  {
    if ( (a14 & 2) != 0 )
    {
      v58 = v61;
      sub_168B9F0((__int64)v74, a1, a3, 0x1C82u, 0);
      v72 = *(_QWORD *)(v26 + 80);
      v44 = sub_19D6730((__int64)v74, &v72);
      v45 = v61;
      v46 = v44;
      if ( *(_BYTE *)(v44 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v44 + 32), a6, 9u);
        v45 = v61;
      }
      else if ( *(_BYTE *)(v44 + 132) )
      {
        v49 = sub_168B9E0((_QWORD *)v44);
        v52 = v61;
        v53 = a6;
        v54 = v49;
        v55 = *(_QWORD *)(v46 + 16);
        if ( v55 )
        {
          v65 = v54;
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
          v53 = a6;
          v54 = v65;
          v52 = v58;
        }
        v60 = v52;
        v66 = v53;
        v73 = v55;
        v56 = sub_1587BC0(v54, &v73, v50, v54, v51, v53);
        sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * *(unsigned int *)(v46 + 128) + 8), v66, 9u);
        v45 = v60;
      }
      v59 = v45;
      sub_15F7200(v74);
      v21 = (__int64)a1;
      sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v26 + 24), 0x189Au, 0);
      sub_15F7200(v74);
      v30 = *(_QWORD *)(v26 + 80);
      v25 = v59;
    }
    v57 = v30;
    v31 = *a13 | 2;
    *a13 = v31;
    v29 = *(_WORD *)(v26 + 72);
  }
  v32 = v29 & 0xE34;
  if ( (v29 & 0x804) != 0 )
    v32 = v29 & 0x630 | 0x804;
  v33 = v31 & 0xE34;
  if ( (v31 & 0x804) != 0 )
    v33 |= 0x804u;
  if ( v32 && v33 != v32 )
  {
    if ( (a14 & 0xE34) != 0 )
    {
      v63 = v25;
      sub_168B9F0((__int64)v74, a1, a3, 0x1C7Du, 0);
      sub_15F7200(v74);
      v21 = (__int64)a1;
      sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v26 + 24), 0x189Au, 0);
      sub_15F7200(v74);
      v25 = v63;
      v31 = *a13;
    }
    v31 = v32 | v31 & 0xFFFFF1CB;
    *a13 = v31;
  }
  if ( (v31 & 0x200) != 0 && (*(_BYTE *)(v26 + 75) & 2) == 0 )
  {
    v40 = *(_QWORD *)(v26 + 56);
    v41 = v40 & 0xFFFFFFFFFFFFFFF0LL;
    v42 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v42 + 16) != 34 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v47 + 16) != 34 )
        goto LABEL_28;
      v64 = v25;
      v48 = sub_F63050(v42, v21, v47, v41);
      v25 = v64;
      if ( !v48 )
        goto LABEL_49;
      v40 = *(_QWORD *)(v26 + 56);
    }
    v43 = *(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v43 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v43 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    {
      v62 = v25;
      sub_168B9F0((__int64)v74, a1, a3, 0x1C80u, 0);
      sub_15F7200(v74);
      sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v26 + 24), 0x189Au, 0);
      sub_15F7200(v74);
      v25 = v62;
      v31 = *a13;
      goto LABEL_28;
    }
LABEL_49:
    v31 = *a13;
  }
LABEL_28:
  v22 = sub_1A93A20(a1, a2, v20, a3, v70, a5, a7, a8, v57, a9, a10, a11, 1, v31, a14, a15, a16, a17, v25);
  sub_168B6C0((__int64)a1);
  v34 = *(_QWORD *)&byte_8[v22[3].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL];
  v35 = *(_QWORD *)&byte_8[*(_QWORD *)(v26 + 56) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v35 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)*(_QWORD *)(v26 + 56)) & 7) != (v34 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v34 | (unsigned __int8)v22[3].m128i_i64[1]) & 7) )
  {
    v72 = 0;
    v36 = *(_QWORD *)(v26 + 56);
    v71 = 0;
    v37 = *(_QWORD *)&byte_8[v22[3].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL];
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
      || *(_BYTE *)(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
      || !(unsigned __int8)sub_1BD2CB0(
                             *a1,
                             v37 & 0xFFFFFFFFFFFFFFF8LL
                           | ((unsigned __int8)v37 | (unsigned __int8)v22[3].m128i_i64[1]) & 7,
                             *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                           | ((unsigned __int8)*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v36)
                           & 7,
                             &v72,
                             &v71)
      || v71 )
    {
      sub_168B9F0((__int64)v74, a1, a3, 0x1452u, 0);
      v73 = v22[3].m128i_i64[1];
      sub_162B6D0((__int64)v74, &v73);
LABEL_35:
      v22 = nullptr;
      sub_15F7200(v74);
      sub_168B9F0((__int64)v74, a1, *(_DWORD *)(v26 + 24), 0x189Au, 0);
      sub_15F7200(v74);
      return v22;
    }
  }
  sub_1A959F0(*a1, v26, (__int64)v22, 1);
  sub_1A942A0(a1, (__int64)v22, a7, *(double *)a8.m128i_i64);
  return v22;
}
