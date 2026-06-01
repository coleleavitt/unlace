__int64 __fastcall sub_41CDC0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // ebx
  int v10; // r14d
  __int64 v11; // rdi
  int v12; // r8d
  const void *v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rbx
  _QWORD *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  _UNKNOWN **v23; // rdx
  _DWORD *v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rbp
  int v27; // ecx
  int (**v28)(const void *, const void *, size_t); // r9
  int v29; // r8d
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  _BOOL8 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  char **v36; // rcx
  _DWORD *v37; // rax
  int v38; // [rsp+8h] [rbp-40h]
  int v39; // [rsp+Ch] [rbp-3Ch] BYREF
  int v40; // [rsp+10h] [rbp-38h] BYREF
  _DWORD v41[13]; // [rsp+14h] [rbp-34h] BYREF

  v38 = 0;
  v40 = -1;
  if ( (unsigned int)(a3 - 3) > 3 )
  {
LABEL_41:
    sub_458930(a2, 1, a4, "?-nocase? ?-length int? string1 string2");
    return 1;
  }
  v9 = 1;
  if ( a3 - 2 > 1 )
  {
    v10 = a3 - 2;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a4 + 8LL * v9);
      if ( *(_QWORD *)(v11 + 8) )
      {
        v12 = *(_DWORD *)(v11 + 16);
        v13 = *(const void **)(v11 + 8);
        v41[0] = v12;
      }
      else
      {
        v35 = sub_47ACD0(v11, v41);
        v12 = v41[0];
        v13 = (const void *)v35;
      }
      if ( v12 <= 1 )
        break;
      v14 = v12;
      a6 = 8;
      if ( v12 >= 9LL )
        v14 = 8;
      if ( !memcmp(v13, "-nocase", v14) )
      {
        v38 = 1;
      }
      else
      {
        v15 = v12;
        if ( v12 >= 9LL )
          v15 = 8;
        if ( memcmp(v13, "-length", v15) )
          break;
        v16 = v9 + 1;
        if ( v9 + 1 >= v10 )
          goto LABEL_41;
        ++v9;
        if ( (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 8LL * v16), &v40) )
          return 1;
      }
      if ( v10 <= ++v9 )
        goto LABEL_18;
    }
    sub_48B710(a2, (unsigned int)"bad option \"", (_DWORD)v13, (unsigned int)"\": must be -nocase or -length", 0, a6);
    return 1;
  }
LABEL_18:
  v18 = a4 + 8LL * a3;
  v19 = (_QWORD *)(v18 - 16);
  if ( !v40 || (v20 = *(_QWORD *)(v18 - 16), v21 = *(_QWORD *)(v18 - 8), v20 == v21) )
  {
    v33 = 1;
    goto LABEL_39;
  }
  if ( !v38 )
  {
    v36 = *(char ***)(v20 + 24);
    if ( v36 == &off_653DC0 && !*(_QWORD *)(v20 + 8) && *(char ***)(v21 + 24) == v36 && !*(_QWORD *)(v21 + 8) )
    {
      v24 = sub_40D5E0(v20, &v39);
      v37 = sub_40D5E0(*(_QWORD *)(v18 - 8), v41);
      v28 = &memcmp;
      v29 = v41[0];
      v26 = (__int64)v37;
LABEL_47:
      v27 = v40;
      goto LABEL_28;
    }
  }
  v22 = *v19;
  v23 = *(_UNKNOWN ***)(*v19 + 24LL);
  if ( v23 == &off_656580 && *(_UNKNOWN ***)(v19[1] + 24LL) == v23 )
  {
    v24 = (_DWORD *)sub_48F2D0(v22, &v39);
    v26 = sub_48F2D0(v19[1], v41);
    if ( v38 )
      v28 = (int (**)(const void *, const void *, size_t))Tcl_UniCharNcasecmp;
    else
      v28 = (int (**)(const void *, const void *, size_t))Tcl_UniCharNcmp;
    v29 = v41[0];
    goto LABEL_47;
  }
  if ( *(_QWORD *)(v22 + 8) )
  {
    v24 = *(_DWORD **)(v22 + 8);
    v39 = *(_DWORD *)(v22 + 16);
  }
  else
  {
    v24 = (_DWORD *)sub_47ACD0(v22, &v39);
  }
  v25 = v19[1];
  if ( *(_QWORD *)(v25 + 8) )
  {
    v26 = *(_QWORD *)(v25 + 8);
    v41[0] = *(_DWORD *)(v25 + 16);
  }
  else
  {
    v26 = sub_47ACD0(v25, v41);
  }
  v27 = v40;
  if ( (((unsigned int)v40 >> 31) & (v38 == 0)) != 0 )
  {
    v28 = (int (**)(const void *, const void *, size_t))TclpUtfNcmp2;
    v29 = v41[0];
  }
  else
  {
    v39 = sub_49BD60(v24);
    v29 = sub_49BD60(v26);
    v41[0] = v29;
    if ( v38 )
      v28 = (int (**)(const void *, const void *, size_t))Tcl_UtfNcasecmp;
    else
      v28 = (int (**)(const void *, const void *, size_t))Tcl_UtfNcmp;
    v27 = v40;
  }
LABEL_28:
  if ( v27 >= 0 )
  {
    v30 = v39;
LABEL_30:
    v31 = v29;
    if ( v29 > v30 )
      v31 = v30;
    if ( v27 <= 0 || v27 >= v31 )
    {
      if ( v27 < 0 )
        v40 = v31 + 1;
    }
    else
    {
      v31 = v27;
    }
    v32 = ((__int64 (__fastcall *)(_DWORD *, __int64, _QWORD))v28)(v24, v26, (unsigned int)v31);
    if ( !v32 && v40 > v31 )
      v32 = v39 - v41[0];
    goto LABEL_38;
  }
  v30 = v39;
  v32 = 1;
  if ( v39 == v29 )
    goto LABEL_30;
LABEL_38:
  v33 = v32 == 0;
LABEL_39:
  v34 = sub_47BD00(v33);
  sub_48AFD0(a2, v34);
  return 0;
}

