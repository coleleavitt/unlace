__int64 __fastcall sub_EAB090(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // rbp
  _QWORD *v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rbp
  _QWORD *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  char v58; // si
  __int64 v59; // rdi
  __int64 v60; // rcx
  __int64 v61; // rcx
  _QWORD *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rsi
  unsigned __int64 v65; // rbx
  int v66; // r15d
  __int64 v67; // rdi
  unsigned __int64 v68; // rbp
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rdi
  __int64 v75; // rdi
  unsigned __int8 v76; // al
  __int64 v77; // r10
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  const __m128i *v81; // rsi
  bool v82; // zf
  __int8 v83; // al
  bool v84; // bp
  const __m128i *v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // rdx
  _QWORD *v88; // rsi
  __int64 v89; // rdx
  char v90; // [rsp+0h] [rbp-58h]
  __int64 v91; // [rsp+0h] [rbp-58h]
  unsigned __int64 v92; // [rsp+0h] [rbp-58h]
  __int64 v93; // [rsp+8h] [rbp-50h]
  _QWORD v94[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = (unsigned __int8)a3;
  v7 = a1 & 7;
  v9 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (_BYTE)v10 == 42 )
  {
    v34 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v34 & 8) == 0 )
    {
      v35 = ((unsigned __int8)a1 | (unsigned __int8)v34) & 7;
      LODWORD(v12) = v35;
      v36 = sub_F44710(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v35, v10, a5);
      v37 = sub_EAB090(v36, a2, v6);
      v24 = sub_A4C2D0((__int64)a2, v37);
      return (unsigned int)v12 | v24 & 7 | v24 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v54 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    v12 = v54 | v7;
    v55 = sub_F44710(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v54, v10, a5);
    v56 = sub_EAB090(v55, a2, v6);
    v24 = sub_A4C2D0((__int64)a2, v56);
    v51 = v24;
    if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return (unsigned int)v12 | v24 & 7 | v24 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_20:
    v52 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v53 = v12 | v51 & 7;
    if ( (v51 & 8) == 0 )
      return sub_A4CF00((__int64)a2, (__int64)v52, v53);
LABEL_25:
    v53 |= v52[3];
    v52 = (_QWORD *)*v52;
    return sub_A4CF00((__int64)a2, (__int64)v52, v53);
  }
  if ( (_BYTE)v10 == 33 )
  {
    v11 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v11 & 8) == 0 )
    {
      LODWORD(v12) = ((unsigned __int8)a1 | (unsigned __int8)v11) & 7;
      v13 = sub_F44710(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v10, a5);
      v14 = sub_EAB090(v13, a2, v6);
      v15 = *(_QWORD *)(v9 + 40);
      v16 = v14;
      v17 = sub_EAAE20(a2, v15, v6);
      v21 = sub_F3DED0(v9, v15, v18, v19, v20);
      v24 = sub_A97CE0(a2, v16, (__int64)v17, v21, v22, v23);
      return (unsigned int)v12 | v24 & 7 | v24 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v12 = *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL))
        | ((unsigned __int8)v11 | (unsigned __int8)a1) & 7;
    v40 = sub_F44710(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v11 & 0xFFFFFFFFFFFFFFF0LL, a5);
    v41 = sub_EAB090(v40, a2, v6);
    v42 = *(_QWORD *)(v9 + 40);
    v43 = v41;
    v44 = sub_EAAE20(a2, v42, v6);
    v48 = sub_F3DED0(v9, v42, v45, v46, v47);
    v24 = sub_A97CE0(a2, v43, (__int64)v44, v48, v49, v50);
    v51 = v24;
    if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return (unsigned int)v12 | v24 & 7 | v24 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_20;
  }
  v26 = (unsigned int)(unsigned __int8)v10 - 43;
  if ( (unsigned int)v26 <= 1 )
  {
    v27 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
    v28 = 0;
    if ( (v27 & 8) != 0 )
      v28 = *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
    v29 = a1 | v27;
    v90 = *(_BYTE *)(v9 + 16);
    v7 = v28 | v29 & 7;
    v30 = sub_F44710(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), v29, v26, v10, a5);
    v31 = sub_EAB090(v30, a2, v6);
    if ( v90 == 43 )
      v32 = sub_A4F2F0((__int64)a2, v31, 1u);
    else
      v32 = sub_A4F090((__int64)a2, v31);
    v33 = v32 & 7;
    if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return (unsigned int)v7 | (unsigned int)v33 | v32 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_28:
    v53 = v7 | v33;
    v52 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v32 & 8) == 0 )
      return sub_A4CF00((__int64)a2, (__int64)v52, v53);
    goto LABEL_25;
  }
  if ( (_BYTE)v10 == 8 )
  {
    v91 = sub_EAB090(*(_QWORD *)(v9 + 40), a2, v6);
    v38 = sub_EAB090(*(_QWORD *)(v9 + 48), a2, v6);
    if ( (a1 & 8) != 0 )
    {
      v7 |= *(__int64 *)((char *)&qword_18 + (a1 & 0xFFFFFFFFFFFFFFF0LL));
      v32 = sub_A4DB10((__int64)a2, *(_WORD *)(v9 + 18) >> 3, v91, v38, 0);
      v39 = v32;
      if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v33 = v32 & 7;
        goto LABEL_28;
      }
    }
    else
    {
      v39 = sub_A4DB10((__int64)a2, *(_WORD *)(v9 + 18) >> 3, v91, v38, 0);
    }
    return (unsigned int)v7 | v39 & 7 | v39 & 0xFFFFFFFFFFFFFFF8LL;
  }
  LOBYTE(v57) = a1;
  v58 = a1;
  if ( (_BYTE)v10 == 46 )
  {
    while ( 1 )
    {
      v60 = *(_QWORD *)(v5 + 8);
      v26 = 0;
      if ( (v60 & 8) != 0 )
        v26 = *(__int64 *)((char *)&qword_18 + (v60 & 0xFFFFFFFFFFFFFFF0LL));
      v61 = v26 | ((unsigned __int8)v57 | (unsigned __int8)v60) & 7;
      if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
      {
        v59 = *(_QWORD *)(v9 + 48);
        if ( (v61 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_39;
      }
      else
      {
        v59 = *(_QWORD *)(v9 + 8);
        if ( (v61 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
LABEL_39:
          v62 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
          v63 = v61 | v59 & 7;
          if ( (v59 & 8) != 0 )
          {
            v63 |= *(__int64 *)((char *)&qword_18 + (v59 & 0xFFFFFFFFFFFFFFF0LL));
            v62 = (_QWORD *)*v62;
          }
          v57 = sub_A4CF00((__int64)a2, (__int64)v62, v63);
          goto LABEL_34;
        }
      }
      v10 = v59 & 7 | (unsigned int)v61;
      v57 = v10 | v59 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_34:
      v5 = v57 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) != 46 )
      {
        v58 = v57;
        v7 = v57 & 7;
        break;
      }
    }
  }
  v64 = v58 & 8;
  if ( (_DWORD)v64 )
    v7 |= *(_QWORD *)(v5 + 24);
  v65 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v66 = 6;
  v67 = *(_QWORD *)v65;
  v68 = v65;
  if ( *(_BYTE *)(*(_QWORD *)v65 + 16LL) == 24 )
  {
    v65 = *(_QWORD *)(v67 + 40);
    v68 = v65 & 0xFFFFFFFFFFFFFFF0LL;
    v66 = (unsigned __int8)(*(_WORD *)(v67 + 18) >> 3);
    v67 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v69 = sub_F46B80(v67, v64, v26, v10, a5);
  v92 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v69 )
  {
    v72 = sub_F39EB0(v69);
    v73 = v72 & 7;
    if ( v92 )
    {
      v87 = v7 | v73;
      v88 = (_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v72 & 8) != 0 )
      {
        v87 |= *(__int64 *)((char *)&qword_18 + (v72 & 0xFFFFFFFFFFFFFFF0LL));
        v88 = (_QWORD *)*v88;
      }
      v74 = sub_A4CF00((__int64)a2, (__int64)v88, v87);
    }
    else
    {
      v74 = v72 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v7 | (unsigned int)v73;
    }
    return sub_EAB090(v74, a2, v6);
  }
  v75 = *(_QWORD *)v68;
  v76 = *(_BYTE *)(*(_QWORD *)v68 + 16LL);
  if ( v76 != 53 )
  {
    v89 = (unsigned int)v76 - 47;
    if ( (unsigned int)v89 > 1 )
    {
      if ( v76 == 49 )
      {
        v94[0] = *(_QWORD *)(v75 + 32);
        v77 = sub_EFEE90(v94, 0);
      }
      else
      {
        v77 = sub_F3F530(v75);
      }
    }
    else
    {
      v77 = sub_F3D1D0(v75, v64, v89, v70, v71);
    }
    if ( !v77 )
    {
      v81 = *(const __m128i **)v68;
      v84 = 0;
      v83 = v81[1].m128i_i8[0];
LABEL_55:
      if ( (unsigned __int8)(v83 - 48) <= 1u )
      {
        v93 = v77;
        v85 = sub_EAA4D0(a2, v81, v6, v79, v80);
        v77 = v93;
        v65 = (unsigned __int64)v85 & 0xFFFFFFFFFFFFFFF0LL;
      }
      goto LABEL_57;
    }
LABEL_54:
    v78 = sub_EAA170(a2, v77, 1u, v6);
    v81 = *(const __m128i **)v68;
    v82 = v78 == nullptr;
    v77 = (__int64)v78;
    v83 = *(_BYTE *)(*(_QWORD *)v68 + 16LL);
    v84 = !v82;
    goto LABEL_55;
  }
  v77 = *(_QWORD *)(v75 + 32);
  if ( v77 )
    goto LABEL_54;
  v84 = 0;
LABEL_57:
  if ( v66 != 6 || v84 )
    v65 = sub_A52510((__int64)a2, v66, v77, v65, 0);
  v86 = v65 & 7;
  if ( v92 )
  {
    v53 = v7 | v86;
    v52 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v65 & 8) == 0 )
      return sub_A4CF00((__int64)a2, (__int64)v52, v53);
    goto LABEL_25;
  }
  return v65 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v86 | (unsigned int)v7;
}

