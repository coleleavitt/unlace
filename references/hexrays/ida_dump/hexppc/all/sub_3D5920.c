unsigned __int64 __fastcall sub_3D5920(double a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v9; // r14
  __int64 v11; // rsi
  double v12; // rax
  double v13; // xmm1_8
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  int v23; // eax
  __int64 v25; // r12
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // r13
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // [rsp+18h] [rbp-120h]
  unsigned __int64 v44; // [rsp+18h] [rbp-120h]
  unsigned __int64 v45; // [rsp+18h] [rbp-120h]
  __m128i v46; // [rsp+20h] [rbp-118h] BYREF
  __int64 v47; // [rsp+30h] [rbp-108h]
  __int64 v48[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-E0h]
  __int64 v51[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+88h] [rbp-B0h]
  __int64 v54[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-80h]
  __int64 v57[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+F8h] [rbp-40h]

  v9 = a3[1];
  v60 = __readfsqword(0x28u);
  if ( v9 > 1 )
  {
    v11 = *a3;
    if ( *(_BYTE *)(v11 + v9 - 2) != 10 )
    {
      if ( a3[2] < v9 + 1 )
      {
        v39 = qvector_reserve(a3, v11, v9 + 1, 1);
        *a3 = v39;
        v11 = v39;
      }
      a3[1] = v9 + 1;
      *(_BYTE *)(v11 + v9 - 1) = 10;
      *(_BYTE *)(*a3 + v9) = 0;
    }
  }
  sub_F7090(a3, (__int64)"%a", a1);
  ++*a4;
  v12 = *(double *)(a5 + 64);
  v47 = 0;
  v13 = v12;
  v14 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v12 + 1496LL)),
          (__m128i)*(unsigned __int64 *)&v12);
  v46 = v14;
  sub_120C40((__int64)v48, a5, a6, 0);
  if ( !(unsigned __int8)sub_60E40(v48) || v50 )
  {
    sub_F7090(a3, (__int64)"\nUsed: ");
    sub_1B01C0(v48, a3, (__int64)&v46, *(double *)v14.m128i_i64, v13);
    ++*a4;
  }
  sub_123FE0((__int64)v51, a5, a6, 0);
  if ( !(unsigned __int8)sub_60E40(v51) || v53 )
  {
    sub_F7090(a3, (__int64)"\nDefined: ");
    sub_1B01C0(v51, a3, (__int64)&v46, *(double *)v14.m128i_i64, v13);
    ++*a4;
  }
  sub_120C40((__int64)v54, a5, a6, 1u);
  sub_60C00(v54, v48, v15, v16, v17, v18);
  sub_313AE0(&v55, (__int64)&v49);
  if ( !(unsigned __int8)sub_60E40(v54) || v56 )
  {
    sub_F7090(a3, (__int64)"\nMaybe used: ");
    sub_1B01C0(v54, a3, (__int64)&v46, *(double *)v14.m128i_i64, v13);
    ++*a4;
  }
  sub_123FE0((__int64)v57, a5, a6, 1u);
  sub_60C00(v57, v51, v19, v20, v21, v22);
  sub_313AE0(&v58, (__int64)&v52);
  if ( !(unsigned __int8)sub_60E40(v57) || v59 )
  {
    sub_F7090(a3, (__int64)"\nMaybe defined: ");
    sub_1B01C0(v57, a3, (__int64)&v46, *(double *)v14.m128i_i64, v13);
    ++*a4;
  }
  if ( !*(_DWORD *)(a6 + 4) )
    goto LABEL_27;
  sub_F7090(a3, (__int64)"\nProperties:");
  ++*a4;
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x4000) != 0 )
  {
    sub_F7090(a3, (__int64)" inverted_jx");
    v23 = *(_DWORD *)(a6 + 4);
    if ( (v23 & 0x2000) == 0 )
    {
LABEL_14:
      if ( (v23 & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_50;
    }
  }
  else if ( (v23 & 0x2000) == 0 )
  {
    goto LABEL_14;
  }
  v25 = a3[1];
  if ( v25 )
  {
    v26 = v25 + 9;
    v27 = v25 + 10;
    --v25;
  }
  else
  {
    v27 = 11;
    v26 = 10;
  }
  v28 = *a3;
  if ( a3[2] < v27 )
  {
    v45 = v27;
    v42 = qvector_reserve(a3, v28, v27, 1);
    *a3 = v42;
    v27 = v45;
    v28 = v42;
  }
  a3[1] = v27;
  *(_BYTE *)(v28 + v26) = 0;
  qmemcpy((void *)(*a3 + v25), " ignlowsrc", 10);
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x20000) == 0 )
  {
LABEL_15:
    if ( (v23 & 0x800) == 0 )
      goto LABEL_16;
    goto LABEL_55;
  }
LABEL_50:
  v29 = a3[1];
  if ( v29 )
  {
    v30 = v29 + 8;
    v31 = v29 + 9;
    --v29;
  }
  else
  {
    v31 = 10;
    v30 = 9;
  }
  v32 = *a3;
  if ( a3[2] < v31 )
  {
    v44 = v31;
    v41 = qvector_reserve(a3, v32, v31, 1);
    *a3 = v41;
    v31 = v44;
    v32 = v41;
  }
  a3[1] = v31;
  *(_BYTE *)(v32 + v30) = 0;
  v33 = *a3 + v29;
  *(_QWORD *)v33 = 0x6F7270746E6F6420LL;
  *(_BYTE *)(v33 + 8) = 112;
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x800) == 0 )
  {
LABEL_16:
    if ( (v23 & 0x200000) == 0 )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_55:
  v34 = a3[1];
  if ( v34 )
  {
    v35 = v34 + 8;
    v36 = v34 + 9;
    --v34;
  }
  else
  {
    v36 = 10;
    v35 = 9;
  }
  v37 = *a3;
  if ( a3[2] < v36 )
  {
    v43 = v36;
    v40 = qvector_reserve(a3, v37, v36, 1);
    *a3 = v40;
    v36 = v43;
    v37 = v40;
  }
  a3[1] = v36;
  *(_BYTE *)(v37 + v35) = 0;
  v38 = *a3 + v34;
  *(_QWORD *)v38 = 0x656E69626D6F6320LL;
  *(_BYTE *)(v38 + 8) = 100;
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x200000) == 0 )
  {
LABEL_17:
    if ( (v23 & 0x20) == 0 )
      goto LABEL_18;
    goto LABEL_65;
  }
LABEL_64:
  sub_3CBB60(a3, " unpaired ");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x20) == 0 )
  {
LABEL_18:
    if ( (v23 & 8) == 0 )
      goto LABEL_19;
    goto LABEL_61;
  }
LABEL_65:
  sub_3CBB60(a3, " farcall ");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 8) == 0 )
  {
LABEL_19:
    if ( (v23 & 0x1000) == 0 )
      goto LABEL_20;
    goto LABEL_62;
  }
LABEL_61:
  sub_3CBB60(a3, " popecx");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x1000) == 0 )
  {
LABEL_20:
    if ( (v23 & 0x40) == 0 )
      goto LABEL_21;
    goto LABEL_72;
  }
LABEL_62:
  sub_3CBB60(a3, " extstx");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v23 & 0x80u) == 0 )
      goto LABEL_22;
    goto LABEL_73;
  }
LABEL_72:
  sub_3CBB60(a3, " tailcall ");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x80u) == 0 )
  {
LABEL_22:
    if ( (v23 & 0x10000) == 0 )
      goto LABEL_23;
    goto LABEL_67;
  }
LABEL_73:
  sub_3CBB60(a3, " assert");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x10000) == 0 )
  {
LABEL_23:
    if ( (v23 & 0x40000) == 0 )
      goto LABEL_24;
    goto LABEL_68;
  }
LABEL_67:
  sub_3CBB60(a3, " multimov");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x40000) == 0 )
  {
LABEL_24:
    if ( (v23 & 0x8000) == 0 )
      goto LABEL_25;
LABEL_69:
    sub_3CBB60(a3, " was_noret_icall");
    v23 = *(_DWORD *)(a6 + 4);
    if ( (v23 & 0x80000) == 0 )
    {
LABEL_26:
      if ( (v23 & 0x100000) == 0 )
        goto LABEL_27;
      goto LABEL_43;
    }
    goto LABEL_70;
  }
LABEL_68:
  sub_3CBB60(a3, " not_combinable");
  v23 = *(_DWORD *)(a6 + 4);
  if ( (v23 & 0x8000) != 0 )
    goto LABEL_69;
LABEL_25:
  if ( (v23 & 0x80000) == 0 )
    goto LABEL_26;
LABEL_70:
  sub_3CBB60(a3, " mbarrier");
  if ( (*(_DWORD *)(a6 + 4) & 0x100000) != 0 )
LABEL_43:
    sub_3CBB60(a3, " unmerged");
LABEL_27:
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
  }
  qfree(v57[0]);
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
  }
  qfree(v54[0]);
  if ( v52 )
  {
    v53 = 0;
    qfree(v52);
  }
  qfree(v51[0]);
  if ( v49 )
  {
    v50 = 0;
    qfree(v49);
  }
  qfree(v48[0]);
  return v60 - __readfsqword(0x28u);
}
