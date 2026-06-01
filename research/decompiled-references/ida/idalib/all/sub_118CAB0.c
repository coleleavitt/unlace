__int64 __fastcall sub_118CAB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  const char *v10; // r12
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  size_t v23; // r14
  const char *v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  size_t v27; // rax
  int v28; // eax
  int v29; // r14d
  __int64 v30; // rax
  void *s1c; // [rsp+10h] [rbp-B8h]
  void *s1; // [rsp+10h] [rbp-B8h]
  _QWORD *s1a; // [rsp+10h] [rbp-B8h]
  char *s1b; // [rsp+10h] [rbp-B8h]
  __int64 v35; // [rsp+18h] [rbp-B0h]
  char *v36; // [rsp+20h] [rbp-A8h] BYREF
  signed __int64 v37; // [rsp+28h] [rbp-A0h]
  void *v38; // [rsp+30h] [rbp-98h] BYREF
  size_t n; // [rsp+38h] [rbp-90h]
  const char *v40; // [rsp+40h] [rbp-88h] BYREF
  int v41; // [rsp+48h] [rbp-80h]
  const char *v42; // [rsp+50h] [rbp-78h]
  size_t v43; // [rsp+58h] [rbp-70h]
  __int16 v44; // [rsp+60h] [rbp-68h]

  v4 = *(_QWORD *)(a1 + 24);
  v36 = nullptr;
  v5 = *(__int64 **)(v4 + 8);
  v4 += 16;
  v37 = 0;
  v38 = nullptr;
  n = 0;
  sub_1152ED0(a2, (_DWORD *)v4, (const char **)&v36, (char **)&v38);
  sub_10DC5D0(a3, (__int64)"-target-abi");
  sub_10DC5D0(a3, (__int64)v38);
  if ( (unsigned int)sub_1153A30(v5, a2, v4) == 1 )
  {
    sub_10DC5D0(a3, (__int64)"-msoft-float");
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    sub_10DC5D0(a3, (__int64)"soft");
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    sub_10DC5D0(a3, (__int64)"hard");
  }
  v6 = sub_10DE660(a2, 0x999u, 0xA46u);
  if ( v6 && (unsigned __int8)sub_21B9810(v6, 2630) )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    sub_10DC5D0(a3, (__int64)"-mno-ldc1-sdc1");
  }
  v7 = sub_10DE660(a2, 0x904u, 0xA02u);
  if ( v7 && (unsigned __int8)sub_21B9810(v7, 2562) )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    sub_10DC5D0(a3, (__int64)"-mno-check-zero-division");
  }
  if ( sub_10DCD30(a2, 0x942u) )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    sub_10DC5D0(a3, (__int64)"-mfix4300");
  }
  v8 = sub_10DCD30(a2, 0x830u);
  v9 = v8;
  if ( v8 )
  {
    v10 = **(const char ***)(v8 + 48);
    v11 = 0;
    if ( v10 )
      v11 = j__strlen(v10);
    s1c = (void *)v11;
    sub_10DC5D0(a3, (__int64)"-mllvm");
    v42 = v10;
    v40 = "-mips-ssection-threshold=";
    v44 = 1283;
    v43 = (size_t)s1c;
    v12 = sub_10DA6C0(a2, (__int64)&v40);
    sub_10DC5D0(a3, v12);
    v13 = *(_QWORD *)(v9 + 16);
    if ( !v13 )
      v13 = v9;
    *(_BYTE *)(v13 + 44) |= 1u;
  }
  v14 = sub_10DE660(a2, 0x95Eu, 0xA34u);
  v15 = sub_10DE660(a2, 0x8AFu, 0x9CDu);
  s1 = (void *)v15;
  if ( v15 && (unsigned __int8)sub_21B9810(v15, 2509) )
  {
    sub_11C59A0(&v40, *(_QWORD *)(a1 + 24), a2);
LABEL_20:
    if ( !v14 || (unsigned __int8)sub_21B9810(v14, 2398) )
      goto LABEL_22;
LABEL_41:
    v20 = *(_QWORD *)(v14 + 16);
    if ( !v20 )
      v20 = v14;
    *(_BYTE *)(v20 + 44) |= 1u;
    goto LABEL_44;
  }
  sub_11C59A0(&v40, *(_QWORD *)(a1 + 24), a2);
  if ( v41 || (v27 = j__strlen("n64"), n != v27) )
  {
    if ( !v14 )
      goto LABEL_44;
    if ( !(unsigned __int8)sub_21B9810(v14, 2398) )
      goto LABEL_41;
    goto LABEL_60;
  }
  if ( !n )
    goto LABEL_20;
  v28 = memcmp(v38, "n64", n);
  v29 = v28;
  if ( v14 )
  {
    if ( !(unsigned __int8)sub_21B9810(v14, 2398) )
      goto LABEL_41;
    if ( !v29 )
      goto LABEL_22;
LABEL_60:
    sub_FC70B0((__int64)&v40, *v5, 0, 602);
    sub_AE9DF0((unsigned __int8 **)&v40, s1 == nullptr, 2u);
    sub_AEA040((__int64)&v40);
    v26 = *(_QWORD *)(v14 + 16);
    if ( !v26 )
      v26 = v14;
    *(_BYTE *)(v26 + 44) |= 1u;
    goto LABEL_44;
  }
  if ( v28 )
    goto LABEL_44;
LABEL_22:
  sub_10DC5D0(a3, (__int64)"-mllvm");
  sub_10DC5D0(a3, (__int64)"-mgpopt");
  v16 = sub_10DE660(a2, 0x9A2u, 0xA48u);
  s1a = (_QWORD *)sub_10DE660(a2, 0x936u, 0xA1Du);
  v35 = sub_10DE660(a2, 0x92Bu, 0xA17u);
  if ( v16 )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    if ( (unsigned __int8)sub_21B9810(v16, 2466) )
      sub_10DC5D0(a3, (__int64)"-mlocal-sdata=1");
    else
      sub_10DC5D0(a3, (__int64)"-mlocal-sdata=0");
    v17 = *(_QWORD *)(v16 + 16);
    if ( !v17 )
      v17 = v16;
    *(_BYTE *)(v17 + 44) |= 1u;
  }
  if ( s1a )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    if ( (unsigned __int8)sub_21B9810(s1a, 2358) )
      sub_10DC5D0(a3, (__int64)"-mextern-sdata=1");
    else
      sub_10DC5D0(a3, (__int64)"-mextern-sdata=0");
    v18 = (_QWORD *)s1a[2];
    if ( !v18 )
      v18 = s1a;
    *((_BYTE *)v18 + 44) |= 1u;
  }
  if ( v35 )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    if ( (unsigned __int8)sub_21B9810(v35, 2347) )
      sub_10DC5D0(a3, (__int64)"-membedded-data=1");
    else
      sub_10DC5D0(a3, (__int64)"-membedded-data=0");
    v19 = *(_QWORD *)(v35 + 16);
    if ( !v19 )
      v19 = v35;
    *(_BYTE *)(v19 + 44) |= 1u;
  }
  if ( v14 )
    goto LABEL_41;
LABEL_44:
  v21 = sub_10DCD30(a2, 0x90Eu);
  v22 = v21;
  if ( !v21 )
    goto LABEL_54;
  v23 = 0;
  v24 = **(const char ***)(v21 + 48);
  s1b = (char *)v24;
  if ( v24 )
    v23 = j__strlen(v24);
  if ( !sub_1154370((__int64)&v36) )
  {
    sub_FC70B0((__int64)&v40, *v5, 0, 629);
    sub_AEC220((unsigned __int8 **)&v40, v36, v37);
    sub_AEA040((__int64)&v40);
    goto LABEL_54;
  }
  if ( v23 == j__strlen("never") )
  {
    if ( !v23 || !memcmp(s1b, "never", v23) )
      goto LABEL_75;
    if ( j__strlen("always") != v23 )
      goto LABEL_52;
  }
  else
  {
    if ( v23 != j__strlen("always") )
    {
      if ( v23 != j__strlen("optimal") )
        goto LABEL_53;
      if ( !v23 )
        goto LABEL_75;
      goto LABEL_78;
    }
    if ( !v23 )
      goto LABEL_75;
  }
  if ( memcmp(s1b, "always", v23) )
  {
LABEL_52:
    if ( j__strlen("optimal") != v23 )
    {
LABEL_53:
      sub_FC70B0((__int64)&v40, *v5, 0, 497);
      sub_AEC220((unsigned __int8 **)&v40, *(_BYTE **)(v22 + 24), *(_QWORD *)(v22 + 32));
      sub_AEC220((unsigned __int8 **)&v40, s1b, v23);
      sub_AEA040((__int64)&v40);
      goto LABEL_54;
    }
LABEL_78:
    if ( memcmp(s1b, "optimal", v23) )
      goto LABEL_53;
  }
LABEL_75:
  sub_10DC5D0(a3, (__int64)"-mllvm");
  v44 = 1283;
  v40 = "-mips-compact-branches=";
  v43 = v23;
  v42 = s1b;
  v30 = sub_10DA6C0(a2, (__int64)&v40);
  sub_10DC5D0(a3, v30);
LABEL_54:
  result = sub_10DE660(a2, 0xB14u, 0xA8Au);
  if ( result )
  {
    result = sub_21B9810(result, 2698);
    if ( (_BYTE)result )
    {
      sub_10DC5D0(a3, (__int64)"-mllvm");
      return sub_10DC5D0(a3, (__int64)"-mips-jalr-reloc=0");
    }
  }
  return result;
}
