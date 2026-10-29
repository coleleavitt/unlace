char __fastcall sub_13AE790(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int16 v9; // ax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  size_t v15; // r13
  _BYTE *v17; // r15
  bool v18; // dl
  bool v19; // r8
  bool v20; // si
  char v21; // cl
  char v22; // al
  char v23; // si
  char v24; // dl
  __int64 v25; // r14
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 *v28; // r10
  __int64 v29; // r9
  __int64 *v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 *v33; // r10
  __int64 v34; // r8
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned int v38; // ebp
  __int64 v39; // rax
  _QWORD *v40; // rcx
  char *v41; // rdx
  _QWORD *v42; // r11
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v57; // [rsp+0h] [rbp-68h]
  __int64 *v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+0h] [rbp-68h]
  int v60; // [rsp+0h] [rbp-68h]
  int v61; // [rsp+0h] [rbp-68h]
  __int64 v62; // [rsp+0h] [rbp-68h]
  __int64 *v63; // [rsp+8h] [rbp-60h]
  __int64 *v64; // [rsp+8h] [rbp-60h]
  __int64 *v65; // [rsp+8h] [rbp-60h]
  __int64 *v66; // [rsp+8h] [rbp-60h]
  _QWORD *v67; // [rsp+10h] [rbp-58h]
  __int64 *v68; // [rsp+10h] [rbp-58h]
  __int64 *v69; // [rsp+18h] [rbp-50h]
  __int64 *v70; // [rsp+20h] [rbp-48h] BYREF
  int v71; // [rsp+28h] [rbp-40h]

  v9 = *(_WORD *)(a4 + 16);
  if ( v9 != 6 )
  {
    v10 = a5 + a6;
    v11 = *(unsigned int *)(a3 + 8);
    v12 = *(unsigned int *)(a3 + 12);
    if ( (unsigned __int16)(v9 - 7) > 0xCu )
    {
      if ( v12 > v11 )
      {
        v13 = (unsigned int *)(*(_QWORD *)a3 + 12 * v11);
        *v13 = a5;
        v13[1] = v10;
        v13[2] = 3;
        ++*(_DWORD *)(a3 + 8);
        return (char)v13;
      }
      v52 = v11 + 1;
      LODWORD(v70) = a5;
      HIDWORD(v70) = a5 + a6;
      v71 = 3;
      if ( v12 >= v11 + 1 )
        goto LABEL_81;
      goto LABEL_83;
    }
    v14 = 3 * v11;
    if ( v12 <= v11 )
    {
      v52 = v11 + 1;
      LODWORD(v70) = a5;
      HIDWORD(v70) = a5 + a6;
      v71 = 2;
      if ( v12 >= v11 + 1 )
      {
LABEL_81:
        v46 = 3 * v11;
        goto LABEL_48;
      }
LABEL_83:
      sub_2237220(a3, a3 + 16, v52, 12);
      v11 = *(unsigned int *)(a3 + 8);
      goto LABEL_81;
    }
    goto LABEL_7;
  }
  v15 = *(unsigned int *)(a4 + 4);
  v17 = *(_BYTE **)(a4 + 8);
  v18 = v15 != 12;
  switch ( v15 )
  {
    case 4uLL:
      v19 = 1;
      v20 = *(_DWORD *)v17 == 1702195828;
      break;
    case 5uLL:
      if ( *(_DWORD *)v17 != 1936482662 || (v47 = 0, v17[4] != 101) )
        v47 = 1;
      v22 = v47 == 0;
      v21 = v18 | v22;
      if ( v18 | (unsigned __int8)v22 )
        goto LABEL_19;
      v21 = 1;
LABEL_53:
      v22 = *(_QWORD *)v17 == 0x795F636A626F5F5FLL && *((_DWORD *)v17 + 2) == 1600090981;
      goto LABEL_55;
    case 7uLL:
      if ( *(_DWORD *)v17 != 1819047278 || *((_WORD *)v17 + 2) != 29808 || (v22 = 1, v17[6] != 114) )
        v22 = 0;
      v21 = 1;
      goto LABEL_19;
    default:
      v19 = v15 != 11;
      if ( v15 == 8 )
      {
        v21 = 1;
        v22 = *(_QWORD *)v17 == 0x5F5F636E75665F5FLL;
        goto LABEL_19;
      }
      v20 = 0;
      break;
  }
  v21 = v19;
  v22 = v20 || v18;
  if ( !v20 && !v18 )
    goto LABEL_53;
  v21 = v20 || v19;
  if ( !v20 && !v19 )
  {
    if ( *(_QWORD *)v17 == 0x6E5F636A626F5F5FLL && *((_WORD *)v17 + 4) == 24431 && v17[10] == 95 )
    {
LABEL_57:
      v21 |= v22;
      goto LABEL_22;
    }
    v23 = v15 != 13;
    v22 = 0;
LABEL_56:
    if ( !v23 )
    {
      if ( *(_QWORD *)v17 == 0x4E44434E55465F5FLL && *((_DWORD *)v17 + 2) == 1598377281 )
      {
        if ( v17[12] == 95 )
          goto LABEL_45;
        v24 = v22 | v18;
      }
      else
      {
        v24 = v22 | v18;
      }
      goto LABEL_23;
    }
    goto LABEL_57;
  }
  v22 = v20;
  v21 = v19;
LABEL_19:
  if ( v15 != 6 || v22 )
  {
LABEL_55:
    v23 = v22 | (v15 != 13);
    goto LABEL_56;
  }
  if ( *(_DWORD *)v17 == 1970167647 && *((_WORD *)v17 + 2) == 27756 )
    goto LABEL_45;
LABEL_22:
  v24 = v22 | v18;
  if ( v21 )
  {
LABEL_23:
    if ( (v24 || *(_QWORD *)v17 != 0x4954434E55465F5FLL || *((_DWORD *)v17 + 2) != 1600081487) && !v22 )
      goto LABEL_25;
LABEL_45:
    v36 = *(unsigned int *)(a3 + 8);
    v44 = *(unsigned int *)(a3 + 12);
    v10 = a5 + a6;
    v14 = 3 * v36;
    if ( v36 < v44 )
    {
LABEL_7:
      v13 = (unsigned int *)(*(_QWORD *)a3 + 4 * v14);
      *v13 = a5;
      v13[1] = v10;
      v13[2] = 2;
      ++*(_DWORD *)(a3 + 8);
      return (char)v13;
    }
    v45 = v36 + 1;
    LODWORD(v70) = a5;
    HIDWORD(v70) = a5 + a6;
    v71 = 2;
    if ( v44 < v36 + 1 )
      goto LABEL_93;
    goto LABEL_47;
  }
  if ( *(_QWORD *)v17 == 0x4953434E55465F5FLL && *((_WORD *)v17 + 4) == 24391 && v17[10] == 95
    || *(_QWORD *)v17 == 0x4953434E55465F5FLL && *((_WORD *)v17 + 4) == 24391 && v17[10] == 95 )
  {
    goto LABEL_45;
  }
LABEL_25:
  v25 = *a1;
  v57 = a2;
  v26 = sub_2244B30(v17, v15);
  v27 = sub_2244CB0(v25 + 552, v17, v15, v26);
  v28 = v57;
  v29 = v27;
  v30 = (__int64 *)(*(_QWORD *)(v25 + 552) + 8LL * v27);
  if ( *v30 )
  {
    if ( *v30 != -8 )
    {
      sub_989490(&v70, v30, 0);
      v32 = v70;
      v33 = v57;
      goto LABEL_28;
    }
    --*(_DWORD *)(v25 + 568);
  }
  v39 = *(_QWORD *)(v25 + 576);
  *(_QWORD *)(v25 + 656) += v15 + 17;
  v40 = (_QWORD *)((v39 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v41 = (char *)v40 + v15 + 17;
  if ( *(_QWORD *)(v25 + 584) >= (unsigned __int64)v41 && v39 )
  {
    *(_QWORD *)(v25 + 576) = v41;
  }
  else
  {
    v68 = v57;
    v65 = v30;
    v61 = v29;
    v54 = sub_986170(v25 + 576, v15 + 17, v15 + 17, 3, (__int64)v30, v29);
    v28 = v68;
    v30 = v65;
    v40 = (_QWORD *)v54;
    LODWORD(v29) = v61;
  }
  v42 = v40 + 2;
  if ( v15 )
  {
    v69 = v28;
    v67 = v40;
    v64 = v30;
    v60 = v29;
    v53 = memcpy(v40 + 2, v17, v15);
    v28 = v69;
    v40 = v67;
    v30 = v64;
    LODWORD(v29) = v60;
    v42 = v53;
  }
  *((_BYTE *)v42 + v15) = 0;
  *v40 = v15;
  v40[1] = 0;
  *v30 = (__int64)v40;
  ++*(_DWORD *)(v25 + 564);
  v58 = v28;
  v43 = sub_22450D0(v25 + 552, (unsigned int)v29);
  sub_989490(&v70, (__int64 *)(*(_QWORD *)(v25 + 552) + 8LL * v43), 0);
  v32 = v70;
  v33 = v58;
LABEL_28:
  v34 = *v32;
  v35 = *(_QWORD *)(*v32 + 8);
  if ( !v35 )
  {
    v48 = *(_QWORD *)(v25 + 672);
    if ( !v48
      || (v63 = v33,
          v59 = *v32,
          v49 = (*(__int64 (__fastcall **)(__int64, _BYTE *, size_t))(*(_QWORD *)v48 + 16LL))(v48, v17, v15),
          v34 = v59,
          v33 = v63,
          v35 = v49,
          (*(_QWORD *)(v59 + 8) = v49) == 0) )
    {
      v50 = *(_QWORD *)(v25 + 576);
      *(_QWORD *)(v25 + 656) += 24LL;
      v35 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v25 + 584) >= v35 + 24 && v50 )
      {
        *(_QWORD *)(v25 + 576) = v35 + 24;
      }
      else
      {
        v66 = v33;
        v62 = v34;
        v55 = sub_986170(v25 + 576, 24, 24, 3, v34, v31);
        v33 = v66;
        v34 = v62;
        v35 = v55;
      }
      v51 = *(_QWORD *)v35 & 0xFFFFF80000000000LL;
      *(_QWORD *)(v35 + 8) = 0;
      *(_QWORD *)v35 = v51 | 0x1FFFC05;
      *(_QWORD *)(v34 + 8) = v35;
      *(_QWORD *)(v35 + 16) = v34;
    }
  }
  LOBYTE(v13) = sub_FDE0B0((_WORD *)v35, *v33);
  if ( (_BYTE)v13 )
  {
    v36 = *(unsigned int *)(a3 + 8);
    v37 = *(unsigned int *)(a3 + 12);
    v38 = a5 + a6;
    if ( v36 < v37 )
    {
      v13 = (unsigned int *)(*(_QWORD *)a3 + 12 * v36);
      *v13 = a5;
      v13[1] = v38;
      v13[2] = 4;
      ++*(_DWORD *)(a3 + 8);
      return (char)v13;
    }
    v45 = v36 + 1;
    v70 = (__int64 *)__PAIR64__(v38, a5);
    v71 = 4;
    if ( v37 < v36 + 1 )
    {
LABEL_93:
      sub_2237220(a3, a3 + 16, v45, 12);
      v36 = *(unsigned int *)(a3 + 8);
    }
LABEL_47:
    v46 = 3 * v36;
LABEL_48:
    v13 = (unsigned int *)(*(_QWORD *)a3 + 4 * v46);
    *(_QWORD *)v13 = v70;
    v13[2] = v71;
    ++*(_DWORD *)(a3 + 8);
  }
  return (char)v13;
}
