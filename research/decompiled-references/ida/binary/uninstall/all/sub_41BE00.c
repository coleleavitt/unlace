__int64 __fastcall sub_41BE00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  int v8; // edx
  int *v9; // rdi
  __int64 v10; // rax
  _WORD *v11; // r12
  __int64 v12; // r15
  __int64 v13; // r14
  int v14; // edx
  int i; // ebp
  unsigned __int16 *v16; // rax
  int v17; // ebp
  int v18; // ecx
  _WORD *v19; // r13
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  const void *v22; // r9
  __int64 v24; // rax
  int v25; // kr00_4
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rdx
  _QWORD *v29; // rax
  int v30; // edx
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  _WORD *v36; // r13
  __int16 v37; // bp
  __int64 v38; // rbx
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall *v40)(); // [rsp+10h] [rbp-B8h]
  _WORD *v41; // [rsp+18h] [rbp-B0h]
  _WORD *v42; // [rsp+20h] [rbp-A8h]
  __int64 v43; // [rsp+28h] [rbp-A0h]
  int *v44; // [rsp+30h] [rbp-98h]
  int v45; // [rsp+3Ch] [rbp-8Ch]
  int v46; // [rsp+40h] [rbp-88h]
  int v47; // [rsp+44h] [rbp-84h]
  unsigned int v49; // [rsp+50h] [rbp-78h] BYREF
  int v50; // [rsp+54h] [rbp-74h] BYREF
  _QWORD *v51; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v52[4]; // [rsp+64h] [rbp-64h] BYREF
  int v53; // [rsp+68h] [rbp-60h] BYREF
  int v54; // [rsp+6Ch] [rbp-5Ch] BYREF
  _BYTE v55[88]; // [rsp+70h] [rbp-58h] BYREF

  v47 = 0;
  v46 = 0;
  v45 = 0;
  if ( (unsigned int)(a3 - 3) > 1 )
  {
    sub_458930(a2, 1, a4, "?-nocase? charMap string");
    return 1;
  }
  if ( a3 == 4 )
  {
    v20 = *(_QWORD *)(a4 + 8);
    if ( *(_QWORD *)(v20 + 8) )
    {
      LODWORD(v21) = *(_DWORD *)(v20 + 16);
      v22 = *(const void **)(v20 + 8);
      v54 = v21;
    }
    else
    {
      v24 = sub_47ACD0(v20, &v54);
      LODWORD(v21) = v54;
      v22 = (const void *)v24;
    }
    if ( (int)v21 <= 1 )
      goto LABEL_36;
    v21 = (int)v21;
    if ( (int)v21 >= 9LL )
      v21 = 8;
    v47 = 1;
    if ( memcmp(v22, "-nocase", v21) )
    {
LABEL_36:
      sub_48B710(a2, (unsigned int)"bad option \"", (_DWORD)v22, (unsigned int)"\": must be -nocase", 0, (_DWORD)v22);
      return 1;
    }
  }
  v6 = *(_QWORD *)(a4 + 8LL * a3 - 16);
  if ( *(char ***)(v6 + 24) != &off_6554A0 || *(_QWORD *)(v6 + 8) )
  {
    v7 = *(_QWORD *)(a4 + 8LL * a3 - 16);
    if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
    {
      v28 = *(_QWORD *)(v7 + 32);
      v29 = (_QWORD *)(v28 + 16);
      v8 = *(_DWORD *)(v28 + 8);
      v51 = v29;
      v53 = v8;
      if ( v8 )
      {
LABEL_7:
        if ( (v8 & 1) != 0 )
        {
          v35 = sub_48DF10("char map list unbalanced", 0xFFFFFFFF);
          sub_48AFD0(a2, v35);
          return 1;
        }
        goto LABEL_8;
      }
    }
    else
    {
      if ( (unsigned int)sub_46FD90(a2, v7, &v53, &v51) )
        return 1;
      LOBYTE(v8) = v53;
      if ( v53 )
        goto LABEL_7;
    }
LABEL_54:
    sub_48AFD0(a2, *(_QWORD *)(a4 + 8LL * a3 - 8));
    return 0;
  }
  sub_4408B0(a2, v6, &v53);
  v30 = v53;
  if ( !v53 )
    goto LABEL_54;
  v46 = 1;
  v53 *= 2;
  v31 = 2;
  v32 = sub_4495F0(a2, 16LL * v30);
  v33 = *(_QWORD *)(a4 + 8LL * a3 - 16);
  v51 = (_QWORD *)v32;
  sub_440900(a2, v33, v55, v32, v32 + 8, v52);
  if ( v53 > 2 )
  {
    do
    {
      v34 = v31;
      v31 += 2;
      sub_440A10(v55, &v51[v34], &v51[v34 + 1], v52);
    }
    while ( v31 < v53 );
  }
  sub_4409E0(v55);
LABEL_8:
  v9 = *(int **)(a4 + 8LL * a3 - 8);
  v44 = v9;
  if ( *(int **)(a4 + 8LL * a3 - 16) == v9 )
  {
    v45 = 1;
    v44 = (int *)sub_47B2A0(v9);
    v10 = sub_48F2D0(v44, &v50);
  }
  else
  {
    v10 = sub_48F2D0(v9, &v50);
  }
  v11 = (_WORD *)v10;
  if ( !v50 )
    goto LABEL_47;
  v41 = (_WORD *)(v10 + 2LL * v50);
  if ( v47 )
    v40 = Tcl_UniCharNcasecmp;
  else
    v40 = (__int64 (__fastcall *)())Tcl_UniCharNcmp;
  v43 = sub_48E750(v10, 0);
  if ( v53 == 2 )
  {
    v36 = (_WORD *)sub_48F2D0(*v51, &v54);
    v42 = v11;
    if ( v54 <= v50 && v54 )
    {
      v37 = 0;
      v38 = sub_48F2D0(v51[1], &v49);
      if ( v47 )
        v37 = sub_49C170((unsigned __int16)*v36);
      while ( v11 < v41 )
      {
        if ( (*v11 == *v36 || v47 && (unsigned __int16)sub_49C170((unsigned __int16)*v11) == v37)
          && (v54 == 1 || !((unsigned int (__fastcall *)(_WORD *, _WORD *, _QWORD))v40)(v11, v36, v54)) )
        {
          if ( v42 == v11 )
          {
            v42 += v54;
          }
          else
          {
            sub_48EA90(v43, v42, v11 - v42);
            v42 = &v11[v54];
          }
          v11 = v42;
          sub_48EA90(v43, v38, v49);
        }
        else
        {
          ++v11;
        }
      }
    }
    else
    {
      v11 = v41;
    }
    goto LABEL_44;
  }
  v39 = 0;
  v12 = sub_4495F0(a2, 16LL * v53);
  v13 = sub_4495F0(a2, 8LL * v53);
  if ( v47 )
    v39 = sub_4495F0(a2, 2LL * v53);
  v14 = v53;
  for ( i = 0; i < v53; v14 = v53 )
  {
    v16 = (unsigned __int16 *)sub_48F2D0(v51[i], v13 + 4LL * i);
    *(_QWORD *)(v12 + 8LL * i) = v16;
    if ( v47 && (i & 1) == 0 )
    {
      v25 = i++;
      *(_WORD *)(v39 + 2LL * (v25 / 2)) = sub_49C170(*v16);
    }
    else
    {
      ++i;
    }
  }
  v42 = v11;
  if ( v11 >= v41 )
    goto LABEL_41;
  while ( 2 )
  {
    v17 = 0;
    if ( v14 <= 0 )
      goto LABEL_28;
    while ( 1 )
    {
      v19 = *(_WORD **)(v12 + 8LL * v17);
      v54 = *(_DWORD *)(v13 + 4LL * v17);
      v18 = v54;
      if ( v54 > 0 )
      {
        if ( *v11 == *v19 )
          goto LABEL_63;
        if ( v47 )
          break;
      }
      v17 += 2;
LABEL_27:
      if ( v17 >= v14 )
        goto LABEL_28;
    }
    if ( (unsigned __int16)sub_49C170((unsigned __int16)*v11) != *(_WORD *)(v39 + 2LL * (v17 / 2)) )
      goto LABEL_61;
    v18 = v54;
LABEL_63:
    if ( v41 - v11 < v18
      || v18 != 1 && ((unsigned int (__fastcall *)(_WORD *, _WORD *, _QWORD))v40)(v19, v11, (unsigned int)v18) )
    {
LABEL_61:
      v14 = v53;
      v17 += 2;
      goto LABEL_27;
    }
    if ( v42 == v11 )
    {
      v42 += v54;
    }
    else
    {
      sub_48EA90(v43, v42, v11 - v42);
      v42 = &v11[v54];
    }
    v11 = v42 - 1;
    sub_48EA90(v43, *(_QWORD *)(v12 + 8LL * v17 + 8), *(unsigned int *)(v13 + 4LL * v17 + 4));
LABEL_28:
    if ( ++v11 < v41 )
    {
      v14 = v53;
      continue;
    }
    break;
  }
LABEL_41:
  if ( v47 )
    sub_449510(a2, v39);
  sub_449510(a2, v13);
  sub_449510(a2, v12);
LABEL_44:
  if ( v42 != v11 )
    sub_48EA90(v43, v42, (unsigned int)(v11 - v42));
  sub_48AFD0(a2, v43);
LABEL_47:
  if ( v46 )
    sub_449510(a2, v51);
  if ( v45 )
  {
    v26 = *v44 - 1;
    v27 = *v44 == 1;
    *v44 = v26;
    if ( v26 < 0 || v27 )
      sub_47B120(v44);
  }
  return 0;
}

