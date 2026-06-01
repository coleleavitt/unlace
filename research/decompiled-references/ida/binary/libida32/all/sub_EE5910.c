__int64 __fastcall sub_EE5910(__int64 *a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rsi
  bool v10; // cl
  char **v11; // rbp
  unsigned __int16 v12; // dx
  char **v13; // r14
  __int64 **v14; // r12
  __int64 *v15; // r15
  char *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v26[32]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v27; // [rsp+50h] [rbp-48h]

  sub_971800(*a1, "_Generic(");
  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    v9 = *(char **)(a2 + 32);
    if ( v9 )
      sub_EE16F0(a1, v9, v5, v6, v7, v8, a3);
    else
      sub_EE0C80(a1);
  }
  else
  {
    v23 = *a1;
    v24 = **(_QWORD **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32);
    v27 = 257;
    v25 = v24;
    sub_F50AF0(&v25, v23, a1 + 3, v26, 0);
  }
  v10 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v11 = (char **)(a2 + 8LL * v10 + 32);
  v12 = *(_WORD *)(a2 + 16) & 0x7FFF;
  v13 = &v11[v12];
  v14 = (__int64 **)(8LL * (unsigned __int16)(v12 + v10) + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0) + 32 + a2);
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      v15 = *v14;
      v16 = *v11;
      sub_971800(*a1, ", ");
      if ( !v15 )
        break;
      v17 = *a1;
      v25 = *v15;
      if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_13;
      v27 = 257;
      sub_F50AF0(&v25, v17, a1 + 3, v26, 0);
LABEL_8:
      sub_971800(*a1, ": ");
      if ( v16 )
      {
        ++v11;
        ++v14;
        sub_EE16F0(a1, v16, v18, v19, v20, v21, a3);
        if ( v13 == v11 )
          return sub_971800(*a1, ")");
      }
      else
      {
        ++v11;
        ++v14;
        sub_EE0C80(a1);
        if ( v13 == v11 )
          return sub_971800(*a1, ")");
      }
    }
    v25 = 0;
    v17 = *a1;
LABEL_13:
    sub_971800(v17, "default");
    goto LABEL_8;
  }
  return sub_971800(*a1, ")");
}

