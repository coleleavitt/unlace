__int64 __fastcall clang_visitCXXBaseClasses(
        unsigned int (__fastcall *a1)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __m128i v10; // xmm0
  __int32 v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rcx
  _DWORD *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rax
  __m128i si128; // xmm0
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rdx
  __int64 v47; // r14
  _DWORD *v48; // rdx
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // r14
  _DWORD *v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdi
  int v59; // eax
  __int64 v60; // rdi
  int v61; // eax
  __int64 v62; // rdi
  int v63; // edx
  __m128i v64; // [rsp+0h] [rbp-98h]
  __m128i v65; // [rsp+0h] [rbp-98h]
  __m128i v66; // [rsp+0h] [rbp-98h]
  __m128i v67; // [rsp+10h] [rbp-88h]
  __m128i v68; // [rsp+20h] [rbp-78h] BYREF
  __m128i v69; // [rsp+30h] [rbp-68h] BYREF
  __m128i v70; // [rsp+40h] [rbp-58h] BYREF
  __m128i v71[4]; // [rsp+50h] [rbp-48h] BYREF

  v8 = a2;
  v10 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getTypeDeclaration((int)&v68, a2, a3, a4, a5, a6, v10.m128i_i32[0], v10.m128i_i64[1], a8);
  v11 = v68.m128i_i32[0];
  if ( (unsigned int)clang_isInvalid(v68.m128i_u32[0]) )
    return 0;
  v64 = _mm_load_si128(&v68);
  v17 = sub_63A250(v11, a2, v12, v13, v14, v15, v64.m128i_i32[0], v64.m128i_i64[1]);
  v21 = v17;
  if ( !v17 || (*(_BYTE *)(v17 + 28) & 0x7Fu) - 57 > 2 || *(char *)(v17 + 28) < 0 )
    return 0;
  v22 = *(_QWORD *)(v17 + 128);
  if ( !v22 )
  {
    v51 = *(_QWORD *)(v21 + 104);
    v52 = *(_QWORD *)(v51 + 96);
    v53 = v52 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v52 & 1) != 0 )
    {
      if ( !v53 )
        return 0;
    }
    else
    {
      if ( v53 <= 3 || (v52 & 2) == 0 )
        return 0;
      v54 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
      v55 = v54[2275];
      if ( !v55 )
      {
        *(_QWORD *)(v51 + 96) = v51 & 0xFFFFFFFFFFFFFFFALL | 1;
        v22 = *(_QWORD *)(v21 + 128);
        goto LABEL_61;
      }
      v18 = v54[274];
      v54[284] += 24LL;
      v53 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v53 + 24;
      if ( v54[275] >= v53 + 24 && v18 )
      {
        v54[274] = a2;
      }
      else
      {
        a2 = 24;
        v53 = sub_6288B0((__int64)(v54 + 274), 24, 3);
      }
      *(_QWORD *)v53 = v55;
      v52 = v53 | 5;
      *(_DWORD *)(v53 + 8) = 0;
      *(_QWORD *)(v53 + 16) = v51;
      *(_QWORD *)(v51 + 96) = v53 | 5;
      LOBYTE(v53) = v53 & 0xFA | 4;
    }
    if ( (v53 & 4) != 0 )
    {
      v56 = (_DWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v56 )
      {
        v62 = *(_QWORD *)v56;
        v63 = *(_DWORD *)(*(_QWORD *)v56 + 12LL);
        if ( v56[2] != v63 )
        {
          v56[2] = v63;
          a2 = v51;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 144LL))(v62, v51);
        }
      }
    }
    v22 = *(_QWORD *)(v21 + 128);
LABEL_61:
    if ( v22 )
      goto LABEL_7;
    return 0;
  }
LABEL_7:
  v23 = *(_QWORD *)(v22 + 88);
  if ( !v23 || *(char *)(v23 + 28) < 0 )
    return 0;
  v24 = *(_QWORD *)(v23 + 104);
  v25 = *(_QWORD *)(v24 + 96);
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v25 & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_11;
  }
  else
  {
    if ( v26 <= 3 || (v25 & 2) == 0 )
      goto LABEL_11;
    v46 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
    v47 = v46[2275];
    if ( !v47 )
    {
      *(_QWORD *)(v24 + 96) = v24 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_11;
    }
    v18 = v46[274];
    v46[284] += 24LL;
    v26 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v26 + 24;
    if ( v46[275] >= v26 + 24 && v18 )
    {
      v46[274] = a2;
    }
    else
    {
      a2 = 24;
      v26 = sub_6288B0((__int64)(v46 + 274), 24, 3);
    }
    *(_QWORD *)v26 = v47;
    v25 = v26 | 5;
    *(_DWORD *)(v26 + 8) = 0;
    *(_QWORD *)(v26 + 16) = v24;
    *(_QWORD *)(v24 + 96) = v26 | 5;
    LOBYTE(v26) = v26 & 0xFA | 4;
  }
  if ( (v26 & 4) != 0 )
  {
    v48 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v48 )
    {
      v49 = *(_QWORD *)v48;
      v50 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
      if ( v48[2] != v50 )
      {
        v48[2] = v50;
        a2 = v24;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 144LL))(v49, v24);
      }
    }
  }
LABEL_11:
  v27 = *(_QWORD *)(v23 + 128);
  if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
    v28 = sub_7A2E20(v27, a2);
  else
    v28 = *(_QWORD *)(v27 + 24);
  v29 = *(_QWORD *)(v23 + 104);
  v30 = *(_QWORD *)(v29 + 96);
  v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v30 & 1) != 0 )
  {
    if ( v31 )
      goto LABEL_21;
LABEL_37:
    v18 = *(_QWORD *)(v23 + 128);
    v37 = v28 + 24LL * *(unsigned int *)(v18 + 16);
    goto LABEL_38;
  }
  if ( v31 <= 3 )
  {
    if ( v31 )
      goto LABEL_24;
    goto LABEL_37;
  }
  if ( (v30 & 2) == 0 )
  {
    v36 = *(_QWORD *)(v23 + 128);
    v37 = v28 + 24LL * *(unsigned int *)(v36 + 16);
    goto LABEL_29;
  }
  v32 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
  v33 = v32[2275];
  if ( !v33 )
  {
    *(_QWORD *)(v29 + 96) = v29 & 0xFFFFFFFFFFFFFFFALL | 1;
    v29 = *(_QWORD *)(v23 + 104);
    goto LABEL_24;
  }
  v34 = v32[274];
  v32[284] += 24LL;
  v31 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = v31 + 24;
  if ( v32[275] >= v31 + 24 && v34 )
  {
    v32[274] = a2;
  }
  else
  {
    a2 = 24;
    v31 = sub_6288B0((__int64)(v32 + 274), 24, 3);
  }
  *(_QWORD *)v31 = v33;
  v30 = v31 | 5;
  *(_DWORD *)(v31 + 8) = 0;
  *(_QWORD *)(v31 + 16) = v29;
  *(_QWORD *)(v29 + 96) = v31 | 5;
  LOBYTE(v31) = v31 & 0xFA | 4;
LABEL_21:
  if ( (v31 & 4) != 0 )
  {
    v35 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v35 )
    {
      v60 = *(_QWORD *)v35;
      v61 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
      if ( v35[2] != v61 )
      {
        v35[2] = v61;
        a2 = v29;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 144LL))(v60, v29);
      }
    }
  }
  v29 = *(_QWORD *)(v23 + 104);
LABEL_24:
  v18 = *(_QWORD *)(v23 + 128);
  v30 = *(_QWORD *)(v29 + 96);
  v36 = v18;
  v37 = v28 + 24LL * *(unsigned int *)(v18 + 16);
  v38 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v30 & 1) != 0 )
  {
    if ( v38 )
    {
LABEL_26:
      if ( (v38 & 4) != 0 )
      {
        v30 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v30 )
        {
          v58 = *(_QWORD *)v30;
          v59 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
          if ( *(_DWORD *)(v30 + 8) != v59 )
          {
            *(_DWORD *)(v30 + 8) = v59;
            a2 = v29;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 144LL))(v58, v29);
          }
        }
        v36 = *(_QWORD *)(v23 + 128);
        goto LABEL_29;
      }
      v18 = *(_QWORD *)(v23 + 128);
    }
  }
  else if ( v38 > 3 )
  {
    if ( (v30 & 2) == 0 )
      goto LABEL_29;
    v30 &= 0xFFFFFFFFFFFFFFFCLL;
    v57 = *(_QWORD *)(v30 + 18200);
    if ( v57 )
    {
      v18 = *(_QWORD *)(v30 + 2192);
      *(_QWORD *)(v30 + 2272) += 24LL;
      v38 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v38 + 24;
      if ( *(_QWORD *)(v30 + 2200) >= v38 + 24 && v18 )
      {
        *(_QWORD *)(v30 + 2192) = a2;
      }
      else
      {
        a2 = 24;
        v38 = sub_6288B0(v30 + 2192, 24, 3);
      }
      *(_QWORD *)v38 = v57;
      *(_DWORD *)(v38 + 8) = 0;
      v30 = v38 | 5;
      *(_QWORD *)(v38 + 16) = v29;
      *(_QWORD *)(v29 + 96) = v38 | 5;
      LOBYTE(v38) = v38 & 0xFA | 4;
      goto LABEL_26;
    }
    *(_QWORD *)(v29 + 96) = v29 & 0xFFFFFFFFFFFFFFFALL | 1;
    v18 = *(_QWORD *)(v23 + 128);
  }
LABEL_38:
  v36 = v18;
LABEL_29:
  if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
    v39 = sub_7A2E20(v36, a2);
  else
    v39 = *(_QWORD *)(v36 + 24);
  for ( ; v37 != v39; v39 += 24 )
  {
    v65 = _mm_load_si128(&v68);
    v67 = _mm_load_si128(&v69);
    v40 = sub_63A300(
            v36,
            a2,
            v30,
            v18,
            v19,
            v20,
            v65.m128i_i32[0],
            v65.m128i_i32[2],
            v67.m128i_i32[0],
            v67.m128i_i64[1]);
    LODWORD(a2) = v39;
    sub_639E80(&v70, v39, v40);
    LODWORD(v36) = v8;
    v66 = _mm_load_si128(&v70);
    si128 = _mm_load_si128(v71);
    if ( !a1(v8, v39, v42, v43, v44, v45, v66.m128i_i64[0], v66.m128i_i64[1], si128.m128i_i64[0], si128.m128i_i64[1]) )
      break;
  }
  return 1;
}

