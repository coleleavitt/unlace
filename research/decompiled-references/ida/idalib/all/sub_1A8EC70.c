void __fastcall sub_1A8EC70(__int64 *a1, __int64 a2, double a3)
{
  void *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // r14
  char *v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int8 *v13; // rax
  bool v14; // zf
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  int v17; // edx
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  unsigned __int64 *v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rcx
  size_t v33; // rax
  __int64 v34; // [rsp+10h] [rbp-60h] BYREF
  void *s1; // [rsp+18h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-50h]
  int v37; // [rsp+28h] [rbp-48h]
  char v38; // [rsp+2Ch] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 26) & 0xFD) != 1 )
    return;
  v34 = sub_C9AC10(a2);
  if ( (v34 & 3) == 1 )
    return;
  v5 = (void *)sub_FDE9A0(&v34, 0);
  v36 = v6;
  s1 = v5;
  v7 = sub_2246F60(&s1, 95, 0);
  if ( v7 >= v36 )
    return;
  v8 = v36 - v7;
  v9 = (unsigned __int8 *)s1 + v7;
  s1 = v9;
  v36 = v8;
  if ( v8 <= 2 )
    return;
  if ( *(_WORD *)v9 == 25971 && v9[2] == 116 )
  {
    v12 = v8 - 3;
    v13 = v9 + 3;
    s1 = v13;
    v36 = v12;
    goto LABEL_14;
  }
  if ( *(_WORD *)v9 != 25697 || v9[2] != 100 )
    return;
  if ( (unsigned int)sub_FDE930(&v34) == 1 )
  {
    v33 = j__strlen("addOperationWithBlock");
    v10 = v36;
    v11 = (char *)s1;
    if ( v33 <= v36 && (!v33 || !memcmp(s1, "addOperationWithBlock", v33)) )
      return;
  }
  else
  {
    v10 = v36;
    v11 = (char *)s1;
  }
  if ( v10 > 2 )
  {
    v12 = v10 - 3;
    v13 = (unsigned __int8 *)(v11 + 3);
    s1 = v11 + 3;
    v36 = v10 - 3;
LABEL_14:
    if ( v12 && (byte_2411740[2 * *v13] & 0x40) != 0 )
      return;
  }
  v14 = *(_BYTE *)(a2 + 26) == 1;
  v37 = 0;
  s1 = nullptr;
  v15 = *a1;
  v36 = 0;
  v38 = 0;
  if ( v14 )
  {
    if ( !(unsigned __int8)sub_1A85D70(v15, *(_QWORD *)(a2 + 40), (__int64)&s1, a3) )
      return;
    goto LABEL_20;
  }
  v16 = sub_15F1670(v15);
  v17 = *(unsigned __int8 *)(a2 + 26);
  s1 = *(void **)(v16 + 120);
  if ( (unsigned int)(v17 - 2) > 1 )
  {
    v37 = 0;
LABEL_36:
    v18 = 0;
    if ( v17 == 2 )
      v18 = *(_DWORD *)(a2 + 28);
    goto LABEL_19;
  }
  v18 = *(_DWORD *)(a2 + 28);
  v37 = v18;
  if ( v17 != 3 )
    goto LABEL_36;
LABEL_19:
  LODWORD(v36) = v18;
  HIDWORD(v36) = v18;
LABEL_20:
  v19 = 0;
  if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
    v19 = *(_QWORD *)(a2 + 16);
  if ( !*(_WORD *)(a2 + 24) )
    return;
  v20 = 0;
  v21 = 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 24) - 1) + 8;
  while ( 1 )
  {
    v24 = sub_1A881F0(*a1 + 248, *(_QWORD *)(a2 + v20 + 48), (const double *)&s1);
    if ( !v24 )
      goto LABEL_33;
    if ( !v19 )
      goto LABEL_27;
    v27 = *(_QWORD *)(*(_QWORD *)(v19 + 96) + v20);
    if ( (*(_BYTE *)(v27 + 29) & 1) == 0 )
      goto LABEL_27;
    v28 = sub_B8C3D0(v27, v24, v22, v23, v25, v26);
    v29 = (__int64 *)*v28;
    v23 = *v28 + 8LL * *((unsigned int *)v28 + 2);
    if ( *v28 >= v23 )
      break;
    v30 = *v28;
    while ( *(_WORD *)(*(_QWORD *)v30 + 36LL) != 421 )
    {
      v30 += 8LL;
      if ( v23 == v30 )
        goto LABEL_27;
    }
    if ( v23 == v30 )
      goto LABEL_27;
LABEL_33:
    v20 += 8;
    if ( v21 == v20 )
      return;
  }
  if ( v29 == (__int64 *)v23 )
    goto LABEL_27;
  if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 421 )
    goto LABEL_33;
  v31 = (__int64 *)(v23 + 8);
  while ( 1 )
  {
    v23 = (unsigned __int64)v31;
    if ( v29 == v31 )
      break;
    v32 = *v31++;
    if ( *(_WORD *)(v32 + 36) == 421 )
      goto LABEL_33;
  }
LABEL_27:
  sub_1A8E3C0(*a1, v24, (__int64)&s1, v23, v25, a3);
}
