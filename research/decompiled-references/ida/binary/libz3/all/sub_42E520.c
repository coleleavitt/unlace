char __fastcall sub_42E520(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  void *v8; // r15
  int *v9; // rax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r14
  void *v15; // r15
  int v16; // eax
  void *v17; // rbp
  int v18; // eax
  char v19; // al
  void *v20; // r12
  void *v21; // rbx
  bool v22; // al
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rsi
  char v27; // [rsp+Fh] [rbp-79h]
  _QWORD v28[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+40h] [rbp-48h] BYREF

  v8 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (*(_BYTE *)(a4 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a3, a4) )
      goto LABEL_4;
  }
  else if ( *(_DWORD *)a3 != *(_DWORD *)a4 )
  {
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || (*(_BYTE *)(a4 + 20) & 1) != 0 )
    v22 = (unsigned int)sub_182C7B0(v8, a3 + 16, a4 + 16) == 0;
  else
    v22 = *(_DWORD *)(a3 + 16) == *(_DWORD *)(a4 + 16);
  if ( v22 )
    goto LABEL_12;
LABEL_4:
  v9 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( *(_WORD *)(a2 + 4) )
  {
    if ( !v9 )
    {
LABEL_12:
      LOBYTE(v12) = 0;
      return v12;
    }
    v10 = *v9;
  }
  else
  {
    if ( !v9 )
      goto LABEL_12;
    v10 = *v9;
    if ( !*v9 )
    {
      v13 = v9[1];
      if ( v13 == 2 )
      {
        LOBYTE(v12) = 1;
        return v12;
      }
      if ( v13 != 8 || *(_DWORD *)(a2 + 24) != 1 )
        goto LABEL_12;
      v30[0] = 0;
      v14 = *(_QWORD *)(a2 + 32);
      v30[1] = 0;
      v15 = qword_1C7F2C0;
      v31[0] = 1;
      v31[1] = 0;
      if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v30, a4);
      else
        LODWORD(v30[0]) = *(_DWORD *)a4;
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
      {
        sub_182C690(v15, v31, a4 + 16);
      }
      else
      {
        v16 = *(_DWORD *)(a4 + 16);
        BYTE4(v31[0]) &= ~1u;
        LODWORD(v31[0]) = v16;
      }
      v28[0] = 0;
      v17 = qword_1C7F2C0;
      v28[1] = 0;
      v29[0] = 1;
      v29[1] = 0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v28, a3);
      else
        LODWORD(v28[0]) = *(_DWORD *)a3;
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
      {
        sub_182C690(v17, v29, a3 + 16);
      }
      else
      {
        v18 = *(_DWORD *)(a3 + 16);
        BYTE4(v29[0]) &= ~1u;
        LODWORD(v29[0]) = v18;
      }
      v19 = sub_42E520(a1, v14, (unsigned int)v28, (unsigned int)v30, a5, a6);
      v20 = qword_1C7F2C0;
      v27 = v19 ^ 1;
      sub_182CBA0(qword_1C7F2C0, v28);
      sub_182CBA0(v20, v29);
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v30);
      sub_182CBA0(v21, v31);
      LOBYTE(v12) = v27;
      return v12;
    }
  }
  if ( v10 != 5 )
    goto LABEL_12;
  v11 = v9[1];
  if ( v11 != 4 )
  {
    if ( v11 > 4 )
    {
      if ( v11 != 5 )
        goto LABEL_12;
LABEL_42:
      v23 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a4 + 20) & 1) == 0
        && *(_DWORD *)(a4 + 16) == 1
        && (*(_BYTE *)(a3 + 20) & 1) == 0
        && *(_DWORD *)(a3 + 16) == 1 )
      {
        if ( (*(_BYTE *)(a4 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
          return (unsigned int)sub_182C7B0(qword_1C7F2C0, a4, a3) >> 31;
        else
          LOBYTE(v12) = *(_DWORD *)a4 < *(_DWORD *)a3;
        return v12;
      }
      v24 = a3;
      v25 = a4;
LABEL_50:
      LOBYTE(v12) = sub_1848D40(v23, v25, v24);
      return v12;
    }
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
        goto LABEL_12;
      goto LABEL_42;
    }
  }
  v23 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1
    || (*(_BYTE *)(a4 + 20) & 1) != 0
    || *(_DWORD *)(a4 + 16) != 1 )
  {
    v24 = a4;
    v25 = a3;
    goto LABEL_50;
  }
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 || (*(_BYTE *)(a4 + 4) & 1) != 0 )
    return (unsigned int)sub_182C7B0(qword_1C7F2C0, a3, a4) >> 31;
  else
    LOBYTE(v12) = *(_DWORD *)a3 < *(_DWORD *)a4;
  return v12;
}

