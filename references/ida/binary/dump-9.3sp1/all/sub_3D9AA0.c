unsigned __int64 __fastcall sub_3D9AA0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  int v24; // eax
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+18h] [rbp-120h]
  unsigned __int64 v45; // [rsp+18h] [rbp-120h]
  unsigned __int64 v46; // [rsp+18h] [rbp-120h]
  __m128i v47; // [rsp+20h] [rbp-118h] BYREF
  __int64 v48; // [rsp+30h] [rbp-108h]
  __int64 v49[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-E0h]
  __int64 v52[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+88h] [rbp-B0h]
  __int64 v55[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-80h]
  __int64 v58[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+F8h] [rbp-40h]

  v8 = a2[1];
  v61 = __readfsqword(0x28u);
  if ( v8 > 1 )
  {
    v10 = *a2;
    if ( *(_BYTE *)(v10 + v8 - 2) != 10 )
    {
      if ( a2[2] < v8 + 1 )
      {
        v40 = qvector_reserve((__int64)a2, v10, v8 + 1, 1);
        *a2 = v40;
        v10 = v40;
      }
      a2[1] = v8 + 1;
      *(_BYTE *)(v10 + v8 - 1) = 10;
      *(_BYTE *)(*a2 + v8) = 0;
    }
  }
  sub_FAAD0(a2);
  ++*a3;
  v11 = *(_QWORD *)(a4 + 64);
  v48 = 0;
  v47 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v11 + 1496)), (__m128i)v11);
  sub_124680((__int64)v49, a4, a5, 0);
  if ( !(unsigned __int8)sub_64880(v49) || v51 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v49, a2, (__int64)&v47);
    ++*a3;
  }
  sub_127A20((__int64)v52, a4, a5, 0, v12, v13);
  if ( !(unsigned __int8)sub_64880(v52) || v54 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v52, a2, (__int64)&v47);
    ++*a3;
  }
  sub_124680((__int64)v55, a4, a5, 1u);
  sub_64640(v55, v49, v14, v15, v16, v17);
  sub_317C60(&v56, (__int64)&v50);
  if ( !(unsigned __int8)sub_64880(v55) || v57 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v55, a2, (__int64)&v47);
    ++*a3;
  }
  sub_127A20((__int64)v58, a4, a5, 1, v18, v19);
  sub_64640(v58, v52, v20, v21, v22, v23);
  sub_317C60(&v59, (__int64)&v53);
  if ( !(unsigned __int8)sub_64880(v58) || v60 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v58, a2, (__int64)&v47);
    ++*a3;
  }
  if ( !*(_DWORD *)(a5 + 4) )
    goto LABEL_27;
  sub_FAAD0(a2);
  ++*a3;
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x4000) != 0 )
  {
    sub_FAAD0(a2);
    v24 = *(_DWORD *)(a5 + 4);
    if ( (v24 & 0x2000) == 0 )
    {
LABEL_14:
      if ( (v24 & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_50;
    }
  }
  else if ( (v24 & 0x2000) == 0 )
  {
    goto LABEL_14;
  }
  v26 = a2[1];
  if ( v26 )
  {
    v27 = v26 + 9;
    v28 = v26 + 10;
    --v26;
  }
  else
  {
    v28 = 11;
    v27 = 10;
  }
  v29 = *a2;
  if ( a2[2] < v28 )
  {
    v46 = v28;
    v43 = qvector_reserve((__int64)a2, v29, v28, 1);
    *a2 = v43;
    v28 = v46;
    v29 = v43;
  }
  a2[1] = v28;
  *(_BYTE *)(v29 + v27) = 0;
  qmemcpy((void *)(*a2 + v26), " ignlowsrc", 10);
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x20000) == 0 )
  {
LABEL_15:
    if ( (v24 & 0x800) == 0 )
      goto LABEL_16;
    goto LABEL_55;
  }
LABEL_50:
  v30 = a2[1];
  if ( v30 )
  {
    v31 = v30 + 8;
    v32 = v30 + 9;
    --v30;
  }
  else
  {
    v32 = 10;
    v31 = 9;
  }
  v33 = *a2;
  if ( a2[2] < v32 )
  {
    v45 = v32;
    v42 = qvector_reserve((__int64)a2, v33, v32, 1);
    *a2 = v42;
    v32 = v45;
    v33 = v42;
  }
  a2[1] = v32;
  *(_BYTE *)(v33 + v31) = 0;
  v34 = *a2 + v30;
  *(_QWORD *)v34 = 0x6F7270746E6F6420LL;
  *(_BYTE *)(v34 + 8) = 112;
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x800) == 0 )
  {
LABEL_16:
    if ( (v24 & 0x200000) == 0 )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_55:
  v35 = a2[1];
  if ( v35 )
  {
    v36 = v35 + 8;
    v37 = v35 + 9;
    --v35;
  }
  else
  {
    v37 = 10;
    v36 = 9;
  }
  v38 = *a2;
  if ( a2[2] < v37 )
  {
    v44 = v37;
    v41 = qvector_reserve((__int64)a2, v38, v37, 1);
    *a2 = v41;
    v37 = v44;
    v38 = v41;
  }
  a2[1] = v37;
  *(_BYTE *)(v38 + v36) = 0;
  v39 = *a2 + v35;
  *(_QWORD *)v39 = 0x656E69626D6F6320LL;
  *(_BYTE *)(v39 + 8) = 100;
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x200000) == 0 )
  {
LABEL_17:
    if ( (v24 & 0x20) == 0 )
      goto LABEL_18;
    goto LABEL_65;
  }
LABEL_64:
  sub_3CFCE0(a2, " unpaired ");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x20) == 0 )
  {
LABEL_18:
    if ( (v24 & 8) == 0 )
      goto LABEL_19;
    goto LABEL_61;
  }
LABEL_65:
  sub_3CFCE0(a2, " farcall ");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 8) == 0 )
  {
LABEL_19:
    if ( (v24 & 0x1000) == 0 )
      goto LABEL_20;
    goto LABEL_62;
  }
LABEL_61:
  sub_3CFCE0(a2, " popecx");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x1000) == 0 )
  {
LABEL_20:
    if ( (v24 & 0x40) == 0 )
      goto LABEL_21;
    goto LABEL_72;
  }
LABEL_62:
  sub_3CFCE0(a2, " extstx");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v24 & 0x80u) == 0 )
      goto LABEL_22;
    goto LABEL_73;
  }
LABEL_72:
  sub_3CFCE0(a2, " tailcall ");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x80u) == 0 )
  {
LABEL_22:
    if ( (v24 & 0x10000) == 0 )
      goto LABEL_23;
    goto LABEL_67;
  }
LABEL_73:
  sub_3CFCE0(a2, " assert");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x10000) == 0 )
  {
LABEL_23:
    if ( (v24 & 0x40000) == 0 )
      goto LABEL_24;
    goto LABEL_68;
  }
LABEL_67:
  sub_3CFCE0(a2, " multimov");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x40000) == 0 )
  {
LABEL_24:
    if ( (v24 & 0x8000) == 0 )
      goto LABEL_25;
LABEL_69:
    sub_3CFCE0(a2, " was_noret_icall");
    v24 = *(_DWORD *)(a5 + 4);
    if ( (v24 & 0x80000) == 0 )
    {
LABEL_26:
      if ( (v24 & 0x100000) == 0 )
        goto LABEL_27;
      goto LABEL_43;
    }
    goto LABEL_70;
  }
LABEL_68:
  sub_3CFCE0(a2, " not_combinable");
  v24 = *(_DWORD *)(a5 + 4);
  if ( (v24 & 0x8000) != 0 )
    goto LABEL_69;
LABEL_25:
  if ( (v24 & 0x80000) == 0 )
    goto LABEL_26;
LABEL_70:
  sub_3CFCE0(a2, " mbarrier");
  if ( (*(_DWORD *)(a5 + 4) & 0x100000) != 0 )
LABEL_43:
    sub_3CFCE0(a2, " unmerged");
LABEL_27:
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
  }
  qfree(v58[0]);
  if ( v56 )
  {
    v57 = 0;
    qfree(v56);
  }
  qfree(v55[0]);
  if ( v53 )
  {
    v54 = 0;
    qfree(v53);
  }
  qfree(v52[0]);
  if ( v50 )
  {
    v51 = 0;
    qfree(v50);
  }
  qfree(v49[0]);
  return v61 - __readfsqword(0x28u);
}
