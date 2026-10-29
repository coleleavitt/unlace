__int64 __fastcall sub_6C7B20(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        _BYTE *a5,
        __m128 a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v17; // rcx
  char v20; // dl
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  double v25; // xmm4_8
  double v26; // xmm5_8
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r13
  _DWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  double v35; // xmm4_8
  double v36; // xmm5_8
  __int128 *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 *v43; // r13
  unsigned int v44; // eax
  double v45; // xmm4_8
  double v46; // xmm5_8
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // eax
  char v50; // dl
  _BYTE *v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+20h] [rbp-78h] BYREF
  __int64 v61; // [rsp+28h] [rbp-70h] BYREF
  __int128 v62; // [rsp+30h] [rbp-68h] BYREF
  __int64 v63; // [rsp+40h] [rbp-58h] BYREF
  int v64; // [rsp+48h] [rbp-50h]
  __int16 v65; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v66; // [rsp+58h] [rbp-40h]

  v17 = *(_QWORD *)(a4 + 48);
  v66 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_6C67C0(a1, a2, a3, v17, 1u, a4, *(double *)a6.m128_u64, a7, a8, a9, a10, a11, a12, a13) )
    return 0;
  v20 = *(_BYTE *)(a2 + 88);
  v21 = v20 & 0xF0;
  if ( (v20 & 0xF0) == 0xC0 )
    v21 = *(_DWORD *)(a2 + 28);
  if ( v21 <= 0x10 && (unsigned int)getinf(99) == 16 )
  {
    v49 = getinf(99);
    v50 = *(_BYTE *)(a2 + 88) & 0xF;
    if ( (v49 & 0xFFFFFF0F) != 0 || v49 == 192 )
    {
      *(_DWORD *)(a2 + 28) = v49;
      *(_BYTE *)(a2 + 88) = v50 | 0xC0;
    }
    else
    {
      *(_DWORD *)(a2 + 28) = 0;
      *(_BYTE *)(a2 + 88) = v49 | v50;
    }
  }
  if ( (unsigned __int8)sub_B73CB0(a4) )
    *(_DWORD *)(a2 + 24) |= 0x10u;
  v27 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( v27 == 36 )
  {
    create_tinfo(a2 + 32, 1, 7, 0);
  }
  else
  {
    if ( v27 == 38 )
    {
      if ( *a5 )
      {
        a6 = 0;
        v60 = 0;
        v62 = 0;
        v61 = 0;
        copy_tinfo_t((char *)&v62 + 8);
        v63 = 0;
        copy_tinfo_t(&v63);
        v64 = 0;
        v65 = 0;
        clear_tinfo_t(&v61);
        clear_tinfo_t(&v60);
        copy_tinfo_t(&v62);
        create_tinfo(a2 + 32, 10, 10, &v62);
        clear_tinfo_t(&v63);
        clear_tinfo_t((char *)&v62 + 8);
        clear_tinfo_t(&v62);
        goto LABEL_13;
      }
      v28 = sub_B74A20(a4);
    }
    else
    {
      v47 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v47 + 16) - 25 > 1 || !v47 )
        v47 = sub_F3F310(v47, a2, v22, v23, v24);
      v28 = *(_QWORD *)(v47 + 24);
    }
    sub_6C3AF0((__int64 *)&v62, (__int64)a1, v28, v23, *(double *)a6.m128_u64, a7, a8, a9, v25, v26, a12, a13);
    copy_tinfo_t(a2 + 32);
    clear_tinfo_t(&v62);
    if ( !*(_BYTE *)(a2 + 32) )
      return 0;
  }
LABEL_13:
  if ( (unsigned __int8)sub_B73CB0(a4) )
    goto LABEL_28;
  v29 = *(_QWORD *)(a2 + 8);
  v30 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v29 + 1) )
  {
    v59 = qvector_reserve(a2, v30, v29 + 1, 80);
    v29 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v59;
    v30 = v59;
  }
  a6 = 0;
  v31 = v30 + 80 * v29;
  *(_QWORD *)(v31 + 16) = 0;
  *(_OWORD *)(v31 + 24) = 0;
  *(_DWORD *)v31 = 0;
  *(_QWORD *)(v31 + 8) = 0;
  *(_QWORD *)(v31 + 40) = 0;
  *(_QWORD *)(v31 + 64) = 0;
  *(_DWORD *)(v31 + 72) = 0;
  *(_OWORD *)(v31 + 48) = 0;
  ++*(_QWORD *)(a2 + 8);
  v32 = *(_DWORD **)(v31 + 16);
  if ( *(_QWORD *)(v31 + 32) <= 4u )
  {
    v58 = qvector_reserve(v31 + 16, v32, 5, 1);
    *(_QWORD *)(v31 + 16) = v58;
    v32 = (_DWORD *)v58;
  }
  *(_QWORD *)(v31 + 24) = 5;
  *v32 = 1936287860;
  *(_BYTE *)(*(_QWORD *)(v31 + 16) + 4LL) = 0;
  *(_DWORD *)(v31 + 72) |= 1u;
  if ( !*a5 )
  {
    v33 = sub_B74A20(a4);
    sub_6C3AF0((__int64 *)&v62, (__int64)a1, v33, v34, 0.0, a7, a8, a9, v35, v36, a12, a13);
    v37 = &v62;
    copy_tinfo_t(v31 + 64);
    clear_tinfo_t(&v62);
    if ( *(_BYTE *)(v31 + 64) )
      goto LABEL_20;
    return 0;
  }
  v51 = a5;
  copy_tinfo_t(v31 + 64);
  v54 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v55 = *(unsigned __int8 *)(v54 + 16);
  if ( (unsigned int)(v55 - 25) <= 1 && v54 )
  {
    if ( (_BYTE)v55 == 26 )
      goto LABEL_50;
  }
  else
  {
    v56 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL), v51, v55, v52, v53);
    v54 = v56;
    if ( *(_BYTE *)(v56 + 16) == 26 && v56 )
    {
LABEL_50:
      if ( (*(_BYTE *)(v54 + 18) & 0x20) != 0 )
      {
        v57 = *(_QWORD *)(v31 + 64);
        if ( (_BYTE)v57 )
          *(_QWORD *)(v31 + 64) = v57 | 0x40;
      }
      goto LABEL_47;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && sub_F3F310(v54, v51, v55, v52, v53) )
  {
    goto LABEL_50;
  }
LABEL_47:
  a6 = 0;
  v60 = 0;
  v62 = 0;
  v61 = 0;
  copy_tinfo_t((char *)&v62 + 8);
  v63 = 0;
  copy_tinfo_t(&v63);
  v64 = 0;
  v65 = 0;
  clear_tinfo_t(&v61);
  clear_tinfo_t(&v60);
  copy_tinfo_t(&v62);
  v37 = (_OWORD *)(byte_9 + 1);
  create_tinfo(v31 + 64, 10, 10, &v62);
  clear_tinfo_t(&v63);
  clear_tinfo_t((char *)&v62 + 8);
  clear_tinfo_t(&v62);
LABEL_20:
  v40 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v41 = *(unsigned __int8 *)(v40 + 16);
  if ( (unsigned int)(v41 - 25) <= 1 && v40 )
  {
    if ( (_BYTE)v41 == 26 )
      goto LABEL_25;
  }
  else
  {
    v48 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL), v37, v41, v38, v39);
    v40 = v48;
    if ( *(_BYTE *)(v48 + 16) == 26 && v48 )
    {
LABEL_25:
      if ( (*(_BYTE *)(v40 + 18) & 0x20) != 0 )
      {
        v42 = *(_QWORD *)(v31 + 64);
        if ( (_BYTE)v42 )
          *(_QWORD *)(v31 + 64) = v42 | 0x40;
      }
      goto LABEL_28;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && sub_F3F310(v40, v37, v41, v38, v39) )
  {
    goto LABEL_25;
  }
LABEL_28:
  v43 = *(__int64 **)(a4 + 120);
  *(double *)a6.m128_u64 = sub_B52330(a4);
  return sub_6C70C0((__int64)a1, (__int64 *)a2, v43, v44, a4, a6, a7, a8, a9, v45, v46, a12, a13);
}

