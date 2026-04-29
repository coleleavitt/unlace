unsigned __int64 __fastcall sub_3CE3C0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5)
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
  __int64 v22; // rax
  __m128i v23; // [rsp+10h] [rbp-118h] BYREF
  __int64 v24; // [rsp+20h] [rbp-108h]
  __int64 v25[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-E0h]
  __int64 v28[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+78h] [rbp-B0h]
  __int64 v31[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-80h]
  __int64 v34[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v8 = a2[1];
  v37 = __readfsqword(0x28u);
  if ( v8 > 1 )
  {
    v10 = *a2;
    if ( *(_BYTE *)(v10 + v8 - 2) != 10 )
    {
      if ( a2[2] < v8 + 1 )
      {
        v22 = qvector_reserve();
        *a2 = v22;
        v10 = v22;
      }
      a2[1] = v8 + 1;
      *(_BYTE *)(v10 + v8 - 1) = 10;
      *(_BYTE *)(*a2 + v8) = 0;
    }
  }
  sub_F3E30(a2);
  ++*a3;
  v11 = *(_QWORD *)(a4 + 64);
  v24 = 0;
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v11 + 1496)), (__m128i)v11);
  sub_122180((__int64)v25, a4, a5, 0);
  if ( !(unsigned __int8)sub_63F80(v25) || v27 )
  {
    sub_F3E30(a2);
    sub_1B1310(v25, a2, &v23);
    ++*a3;
  }
  sub_125510((__int64)v28, a4, a5, 0);
  if ( !(unsigned __int8)sub_63F80(v28) || v30 )
  {
    sub_F3E30(a2);
    sub_1B1310(v28, a2, &v23);
    ++*a3;
  }
  sub_122180((__int64)v31, a4, a5, 1u);
  sub_63D40(v31, v25, v12, v13, v14, v15);
  sub_314710(&v32, &v26);
  if ( !(unsigned __int8)sub_63F80(v31) || v33 )
  {
    sub_F3E30(a2);
    sub_1B1310(v31, a2, &v23);
    ++*a3;
  }
  sub_125510((__int64)v34, a4, a5, 1);
  sub_63D40(v34, v28, v16, v17, v18, v19);
  sub_314710(&v35, &v29);
  if ( !(unsigned __int8)sub_63F80(v34) || v36 )
  {
    sub_F3E30(a2);
    sub_1B1310(v34, a2, &v23);
    ++*a3;
  }
  if ( !*(_DWORD *)(a5 + 4) )
    goto LABEL_27;
  sub_F3E30(a2);
  ++*a3;
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x4000) != 0 )
  {
    sub_F3E30(a2);
    v20 = *(_DWORD *)(a5 + 4);
    if ( (v20 & 0x2000) == 0 )
    {
LABEL_14:
      if ( (v20 & 0x20000) == 0 )
        goto LABEL_15;
      goto LABEL_46;
    }
  }
  else if ( (v20 & 0x2000) == 0 )
  {
    goto LABEL_14;
  }
  sub_3C5F10(a2, " ignlowsrc");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x20000) == 0 )
  {
LABEL_15:
    if ( (v20 & 0x800) == 0 )
      goto LABEL_16;
    goto LABEL_47;
  }
LABEL_46:
  sub_3C5F10(a2, " dontprop");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x800) == 0 )
  {
LABEL_16:
    if ( (v20 & 0x200000) == 0 )
      goto LABEL_17;
    goto LABEL_48;
  }
LABEL_47:
  sub_3C5F10(a2, " combined");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x200000) == 0 )
  {
LABEL_17:
    if ( (v20 & 0x20) == 0 )
      goto LABEL_18;
    goto LABEL_49;
  }
LABEL_48:
  sub_3C5F10(a2, " unpaired ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x20) == 0 )
  {
LABEL_18:
    if ( (v20 & 8) == 0 )
      goto LABEL_19;
    goto LABEL_50;
  }
LABEL_49:
  sub_3C5F10(a2, " farcall ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 8) == 0 )
  {
LABEL_19:
    if ( (v20 & 0x1000) == 0 )
      goto LABEL_20;
    goto LABEL_51;
  }
LABEL_50:
  sub_3C5F10(a2, " popecx");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x1000) == 0 )
  {
LABEL_20:
    if ( (v20 & 0x40) == 0 )
      goto LABEL_21;
    goto LABEL_52;
  }
LABEL_51:
  sub_3C5F10(a2, " extstx");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x40) == 0 )
  {
LABEL_21:
    if ( (v20 & 0x80u) == 0 )
      goto LABEL_22;
    goto LABEL_53;
  }
LABEL_52:
  sub_3C5F10(a2, " tailcall ");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x80u) == 0 )
  {
LABEL_22:
    if ( (v20 & 0x10000) == 0 )
      goto LABEL_23;
    goto LABEL_54;
  }
LABEL_53:
  sub_3C5F10(a2, " assert");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x10000) == 0 )
  {
LABEL_23:
    if ( (v20 & 0x40000) == 0 )
      goto LABEL_24;
    goto LABEL_55;
  }
LABEL_54:
  sub_3C5F10(a2, " multimov");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x40000) == 0 )
  {
LABEL_24:
    if ( (v20 & 0x8000) == 0 )
      goto LABEL_25;
LABEL_56:
    sub_3C5F10(a2, " was_noret_icall");
    v20 = *(_DWORD *)(a5 + 4);
    if ( (v20 & 0x80000) == 0 )
    {
LABEL_26:
      if ( (v20 & 0x100000) == 0 )
        goto LABEL_27;
      goto LABEL_43;
    }
    goto LABEL_57;
  }
LABEL_55:
  sub_3C5F10(a2, " not_combinable");
  v20 = *(_DWORD *)(a5 + 4);
  if ( (v20 & 0x8000) != 0 )
    goto LABEL_56;
LABEL_25:
  if ( (v20 & 0x80000) == 0 )
    goto LABEL_26;
LABEL_57:
  sub_3C5F10(a2, " mbarrier");
  if ( (*(_DWORD *)(a5 + 4) & 0x100000) != 0 )
LABEL_43:
    sub_3C5F10(a2, " unmerged");
LABEL_27:
  if ( v35 )
  {
    v36 = 0;
    qfree();
  }
  qfree();
  if ( v32 )
  {
    v33 = 0;
    qfree();
  }
  qfree();
  if ( v29 )
  {
    v30 = 0;
    qfree();
  }
  qfree();
  if ( v26 )
  {
    v27 = 0;
    qfree();
  }
  qfree();
  return v37 - __readfsqword(0x28u);
}
