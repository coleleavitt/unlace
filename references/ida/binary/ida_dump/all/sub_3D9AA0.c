unsigned __int64 __fastcall sub_3D9AA0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  int v20; // eax
  __int64 v22; // r12
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+18h] [rbp-120h]
  unsigned __int64 v41; // [rsp+18h] [rbp-120h]
  unsigned __int64 v42; // [rsp+18h] [rbp-120h]
  __m128i v43; // [rsp+20h] [rbp-118h] BYREF
  __int64 v44; // [rsp+30h] [rbp-108h]
  __int64 v45[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-E0h]
  __int64 v48[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-B0h]
  __int64 v51[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-80h]
  __int64 v54[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+F8h] [rbp-40h]

  v8 = a2[1];
  v57 = __readfsqword(0x28u);
  if ( v8 > 1 )
  {
    v10 = *a2;
    if ( *(_BYTE *)(v10 + v8 - 2) != 10 )
    {
      if ( a2[2] < v8 + 1 )
      {
        v36 = qvector_reserve();
        *a2 = v36;
        v10 = v36;
      }
      a2[1] = v8 + 1;
      *(_BYTE *)(v10 + v8 - 1) = 10;
      *(_BYTE *)(*a2 + v8) = 0;
    }
  }
  sub_FAAD0(a2);
  ++*a3;
  v11 = *(_QWORD *)(a4 + 64);
  v44 = 0;
  v43 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v11 + 1496)), (__m128i)v11);
  sub_124680((__int64)v45, a4, a5, 0);
  if ( !(unsigned __int8)sub_64880(v45) || v47 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v45, a2, (__int64)&v43);
    ++*a3;
  }
  sub_127A20((__int64)v48, a4, a5, 0);
  if ( !(unsigned __int8)sub_64880(v48) || v50 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v48, a2, (__int64)&v43);
    ++*a3;
  }
  sub_124680((__int64)v51, a4, a5, 1u);
  sub_64640(v51, v45, v12, v13, v14, v15);
  sub_317C60(&v52, (__int64)&v46);
  if ( !(unsigned __int8)sub_64880(v51) || v53 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v51, a2, (__int64)&v43);
    ++*a3;
  }
  sub_127A20((__int64)v54, a4, a5, 1);
  sub_64640(v54, v48, v16, v17, v18, v19);
  sub_317C60(&v55, (__int64)&v49);
  if ( !(unsigned __int8)sub_64880(v54) || v56 )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v54, a2, (__int64)&v43);
    ++*a3;
  }
  if ( !*(_DWORD *)(a5 + 4) )
    goto LABEL_27;
  sub_FAAD0(a2);
  ++*a3;
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x4000) != 0 )
  {
    sub_FAAD0(a2);
    v20 = *(_DWORD *)(a5 + 4);
    if ( (v20 & 0x2000) == 0 )
    {
LABEL_14:
      if ( (v20 & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_50;
    }
  }
  else if ( (v20 & 0x2000) == 0 )
  {
    goto LABEL_14;
  }
  v22 = a2[1];
  if ( v22 )
  {
    v23 = v22 + 9;
    v24 = v22 + 10;
    --v22;
  }
  else
  {
    v24 = 11;
    v23 = 10;
  }
  v25 = *a2;
  if ( a2[2] < v24 )
  {
    v42 = v24;
    v39 = qvector_reserve();
    *a2 = v39;
    v24 = v42;
    v25 = v39;
  }
  a2[1] = v24;
  *(_BYTE *)(v25 + v23) = 0;
  qmemcpy((void *)(*a2 + v22), " ignlowsrc", 10);
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x20000) == 0 )
  {
LABEL_15:
    if ( (v20 & 0x800) == 0 )
      goto LABEL_16;
    goto LABEL_55;
  }
LABEL_50:
  v26 = a2[1];
  if ( v26 )
  {
    v27 = v26 + 8;
    v28 = v26 + 9;
    --v26;
  }
  else
  {
    v28 = 10;
    v27 = 9;
  }
  v29 = *a2;
  if ( a2[2] < v28 )
  {
    v41 = v28;
    v38 = qvector_reserve();
    *a2 = v38;
    v28 = v41;
    v29 = v38;
  }
  a2[1] = v28;
  *(_BYTE *)(v29 + v27) = 0;
  v30 = *a2 + v26;
  *(_QWORD *)v30 = 0x6F7270746E6F6420LL;
  *(_BYTE *)(v30 + 8) = 112;
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x800) == 0 )
  {
LABEL_16:
    if ( (v20 & 0x200000) == 0 )
      goto LABEL_17;
    goto LABEL_64;
  }
LABEL_55:
  v31 = a2[1];
  if ( v31 )
  {
    v32 = v31 + 8;
    v33 = v31 + 9;
    --v31;
  }
  else
  {
    v33 = 10;
    v32 = 9;
  }
  v34 = *a2;
  if ( a2[2] < v33 )
  {
    v40 = v33;
    v37 = qvector_reserve();
    *a2 = v37;
    v33 = v40;
    v34 = v37;
  }
  a2[1] = v33;
  *(_BYTE *)(v34 + v32) = 0;
  v35 = *a2 + v31;
  *(_QWORD *)v35 = 0x656E69626D6F6320LL;
  *(_BYTE *)(v35 + 8) = 100;
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x200000) == 0 )
  {
LABEL_17:
    if ( (v20 & 0x20) == 0 )
      goto LABEL_18;
    goto LABEL_65;
  }
LABEL_64:
  sub_3CFCE0(a2, " unpaired ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x20) == 0 )
  {
LABEL_18:
    if ( (v20 & 8) == 0 )
      goto LABEL_19;
    goto LABEL_61;
  }
LABEL_65:
  sub_3CFCE0(a2, " farcall ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 8) == 0 )
  {
LABEL_19:
    if ( (v20 & 0x1000) == 0 )
      goto LABEL_20;
    goto LABEL_62;
  }
LABEL_61:
  sub_3CFCE0(a2, " popecx");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x1000) == 0 )
  {
LABEL_20:
    if ( (v20 & 0x40) == 0 )
      goto LABEL_21;
    goto LABEL_72;
  }
LABEL_62:
  sub_3CFCE0(a2, " extstx");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v20 & 0x80u) == 0 )
      goto LABEL_22;
    goto LABEL_73;
  }
LABEL_72:
  sub_3CFCE0(a2, " tailcall ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x80u) == 0 )
  {
LABEL_22:
    if ( (v20 & 0x10000) == 0 )
      goto LABEL_23;
    goto LABEL_67;
  }
LABEL_73:
  sub_3CFCE0(a2, " assert");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x10000) == 0 )
  {
LABEL_23:
    if ( (v20 & 0x40000) == 0 )
      goto LABEL_24;
    goto LABEL_68;
  }
LABEL_67:
  sub_3CFCE0(a2, " multimov");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x40000) == 0 )
  {
LABEL_24:
    if ( (v20 & 0x8000) == 0 )
      goto LABEL_25;
LABEL_69:
    sub_3CFCE0(a2, " was_noret_icall");
    v20 = *(_DWORD *)(a5 + 4);
    if ( (v20 & 0x80000) == 0 )
    {
LABEL_26:
      if ( (v20 & 0x100000) == 0 )
        goto LABEL_27;
      goto LABEL_43;
    }
    goto LABEL_70;
  }
LABEL_68:
  sub_3CFCE0(a2, " not_combinable");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x8000) != 0 )
    goto LABEL_69;
LABEL_25:
  if ( (v20 & 0x80000) == 0 )
    goto LABEL_26;
LABEL_70:
  sub_3CFCE0(a2, " mbarrier");
  if ( (*(_DWORD *)(a5 + 4) & 0x100000) != 0 )
LABEL_43:
    sub_3CFCE0(a2, " unmerged");
LABEL_27:
  if ( v55 )
  {
    v56 = 0;
    qfree();
  }
  qfree();
  if ( v52 )
  {
    v53 = 0;
    qfree();
  }
  qfree();
  if ( v49 )
  {
    v50 = 0;
    qfree();
  }
  qfree();
  if ( v46 )
  {
    v47 = 0;
    qfree();
  }
  qfree();
  return v57 - __readfsqword(0x28u);
}
