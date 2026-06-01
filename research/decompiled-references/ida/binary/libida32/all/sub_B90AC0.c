__int64 __fastcall sub_B90AC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  const char *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int *v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r13d
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rax
  int v32; // r9d
  int v33; // r10d
  __int64 v34; // [rsp-10h] [rbp-78h]
  unsigned __int64 v35; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v36[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v37; // [rsp+30h] [rbp-38h]

  sub_B8EE40(a1, (const char *)a2, a3, a4, a5, a6);
  v7 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 68) & 2) == 0 )
    {
      if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
        goto LABEL_4;
      goto LABEL_22;
    }
    sub_971800(*(_QWORD *)a1, "mutable ");
    v7 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
    {
LABEL_22:
      sub_971800(v7, "__module_private__ ");
      v7 = *(_QWORD *)a1;
    }
  }
LABEL_4:
  v8 = sub_B685F0(a2);
  v9 = sub_B8FF10(v8, *(_QWORD *)(a2 + 48));
  v10 = *(unsigned int *)(a1 + 32);
  v35 = v9;
  v11 = *(_QWORD *)(a2 + 40);
  if ( (v11 & 7) != 0 )
  {
    v13 = 0;
    v12 = &byte_22CD811;
  }
  else
  {
    v12 = &byte_22CD811;
    v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13 )
    {
      v14 = *(unsigned int **)(v13 + 16);
      v13 = *v14;
      v12 = (const char *)(v14 + 4);
    }
  }
  v36[0] = v12;
  v37 = 261;
  v36[1] = v13;
  sub_F50AF0(&v35, v7, a1 + 8, v36, v10);
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
  {
    v26 = *(_QWORD *)a1;
    sub_971800(*(_QWORD *)a1, " : ");
    v30 = *(_BYTE *)(a2 + 68);
    if ( (v30 & 1) != 0 )
      v27 = v30 & 0xC;
    v31 = sub_B8EB60(v26, "\n", v27, v28, v29, *(_QWORD *)(a1 + 24));
    sub_EE3EC0(v33, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), v32, (__int64)"\n", v31);
  }
  result = sub_B54370(a2);
  v19 = result;
  if ( (*(_BYTE *)(a1 + 10) & 1) == 0 && result )
  {
    v20 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a2 + 68) & 0xC) != 0xC && ((*(_BYTE *)(a2 + 68) >> 2) & 3) == 2 )
      sub_971800(v20, " ");
    else
      sub_971800(v20, " = ");
    v24 = sub_B8EB60(v20, "\n", v21, v22, v23, *(_QWORD *)(a1 + 24));
    sub_EE3EC0(v19, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), v25, (__int64)"\n", v24);
    result = v34;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    return sub_B8E960((const char **)a1, a2, 0, v16, v17, v18);
  return result;
}

