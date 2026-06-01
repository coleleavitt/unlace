_BYTE *__fastcall sub_E16840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int16 v6; // ax
  char *v7; // rsi
  unsigned __int16 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _BYTE *v14; // rax
  __int64 **v15; // rax
  __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  _BYTE *result; // rax
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // r13
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v3 = *(_QWORD *)(a2 + 2320);
  v4 = sub_F43FF0(a3);
  v5 = sub_A5C940(a2, v4);
  v6 = sub_A3F390(a2, v4);
  v7 = "__vtptrauth";
  v8 = v6;
  sub_E15850(*(_QWORD *)(a1 + 8), "__vtptrauth", 0xBu);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_BYTE **)(v13 + 32);
  if ( *(_BYTE **)(v13 + 24) == v14 )
  {
    v7 = "I";
    sub_22581D0(*(_QWORD *)(a1 + 8), "I", 1);
  }
  else
  {
    *v14 = 73;
    ++*(_QWORD *)(v13 + 32);
  }
  if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
    goto LABEL_10;
  v15 = (__int64 **)sub_B68690(v5, (__int64)v7, v9, v10, v11, v12);
  v16 = *v15;
  v17 = (unsigned __int64)&(*v15)[*((unsigned int *)v15 + 2)];
  if ( (unsigned __int64)v16 < v17 )
  {
    v26 = v16;
    while ( *(_WORD *)(*v26 + 36) != 393 )
    {
      if ( (__int64 *)v17 == ++v26 )
        goto LABEL_10;
    }
    if ( (__int64 *)v17 != v26 )
      goto LABEL_21;
LABEL_10:
    v20 = sub_971800(v13, "Lj");
    sub_2257BD0(v20, 0);
    v21 = sub_971800(v13, "Lb");
    sub_2257BD0(v21, (*(_BYTE *)(v3 + 16) & 0x10) != 0);
    goto LABEL_11;
  }
  if ( v16 == (__int64 *)v17 )
    goto LABEL_10;
  if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 393 )
  {
    v18 = (__int64 *)(v17 + 8);
    while ( v16 != v18 )
    {
      v19 = *v18++;
      if ( *(_WORD *)(v19 + 36) == 393 )
        goto LABEL_21;
    }
    goto LABEL_10;
  }
LABEL_21:
  v27 = *v16;
  if ( *(_WORD *)(*v16 + 36) != 393 )
  {
    v28 = v16 + 1;
    do
      v27 = *v28++;
    while ( *(_WORD *)(v27 + 36) != 393 );
  }
  v29 = sub_971800(v13, "Lj");
  sub_2257BF0(v29, *(int *)(v27 + 40));
  if ( *(_DWORD *)(v27 + 44) )
  {
    v33 = sub_971800(v13, "Lb");
    sub_2257BF0(v33, *(_DWORD *)(v27 + 44) == 2);
    v31 = *(_DWORD *)(v27 + 48);
    if ( v31 != 1 )
      goto LABEL_26;
LABEL_31:
    v34 = sub_971800(v13, "Lj");
    sub_2257BF0(v34, 0);
    goto LABEL_13;
  }
  v30 = sub_971800(v13, "Lb");
  sub_2257BD0(v30, (*(_BYTE *)(v3 + 16) & 0x10) != 0);
  v31 = *(_DWORD *)(v27 + 48);
  if ( v31 == 1 )
    goto LABEL_31;
LABEL_26:
  switch ( v31 )
  {
    case 0:
LABEL_11:
      v22 = v13;
      if ( (*(_BYTE *)(v3 + 16) & 0x20) == 0 )
      {
        v25 = sub_971800(v13, "Lj");
        sub_2257BF0(v25, 0);
        result = *(_BYTE **)(v13 + 32);
        if ( *(_BYTE **)(v13 + 24) == result )
          return (_BYTE *)sub_22581D0(v13, "E", 1);
        goto LABEL_16;
      }
      goto LABEL_12;
    case 2:
      v22 = v13;
LABEL_12:
      v23 = sub_971800(v22, "Lj");
      sub_2257BD0(v23, v8);
      break;
    case 3:
      v32 = sub_971800(v13, "Lj");
      sub_2257BF0(v32, *(int *)(v27 + 52));
      break;
  }
LABEL_13:
  result = *(_BYTE **)(v13 + 32);
  if ( *(_BYTE **)(v13 + 24) == result )
    return (_BYTE *)sub_22581D0(v13, "E", 1);
LABEL_16:
  *result = 69;
  ++*(_QWORD *)(v13 + 32);
  return result;
}

