char __fastcall sub_88D020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  int v6; // ebp
  int v7; // ebx
  void *v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // eax
  char result; // al
  unsigned int v14; // eax
  unsigned int v15; // eax
  void *v16; // rdi
  int v17; // eax
  void *v18; // r15
  void *v19; // rdi
  void *v20; // r15
  void *v21; // rbx
  bool v22; // al
  void *v23; // rbx
  void *v24; // rbx
  void *v25; // rbx
  int v26; // eax
  void *v27; // rdi
  void *v28; // r15
  void *v29; // rbx
  bool v30; // r12
  void *v31; // rbx
  void *v32; // rbx
  bool v33; // r12
  void *v34; // rbx
  void *v35; // rbx
  unsigned int v36; // [rsp+Ch] [rbp-BCh]
  void *v38; // [rsp+18h] [rbp-B0h]
  void *v39; // [rsp+18h] [rbp-B0h]
  unsigned int v40; // [rsp+20h] [rbp-A8h]
  char v41; // [rsp+27h] [rbp-A1h]
  void *v42; // [rsp+28h] [rbp-A0h]
  void *v43; // [rsp+28h] [rbp-A0h]
  __int64 v44; // [rsp+30h] [rbp-98h] BYREF
  __int64 v45; // [rsp+38h] [rbp-90h]
  __int64 v46; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+48h] [rbp-80h]
  int v48; // [rsp+50h] [rbp-78h] BYREF
  char v49; // [rsp+54h] [rbp-74h]
  __int64 v50; // [rsp+58h] [rbp-70h]
  int v51; // [rsp+60h] [rbp-68h] BYREF
  char v52; // [rsp+64h] [rbp-64h]
  __int64 v53; // [rsp+68h] [rbp-60h]
  __int64 v54; // [rsp+70h] [rbp-58h] BYREF
  __int64 v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h] BYREF
  __int64 v57; // [rsp+88h] [rbp-40h]

  v4 = a3 + 24;
  v5 = a2 + 24;
  v6 = *(_DWORD *)(a2 + 56);
  v7 = *(_DWORD *)(a3 + 56);
  v36 = *(_DWORD *)(a2 + 8);
  v40 = *(_DWORD *)(a3 + 8);
  v41 = *(_BYTE *)(a2 + 20);
  v8 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (*(_BYTE *)(a3 + 28) & 1) != 0 )
  {
    v8 = qword_1C7F2C0;
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a2 + 24, a3 + 24) )
      goto LABEL_4;
  }
  else if ( *(_DWORD *)(a2 + 24) != *(_DWORD *)(a3 + 24) )
  {
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a2 + 44) & 1) != 0 || (*(_BYTE *)(a3 + 44) & 1) != 0 )
    result = (unsigned int)sub_182C7B0(v8, a2 + 40, a3 + 40) == 0;
  else
    result = *(_DWORD *)(a2 + 40) == *(_DWORD *)(a3 + 40);
  if ( v7 == v6 && result )
    return result;
LABEL_4:
  if ( v6 )
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(a2 + 44) & 1) != 0
        || *(_DWORD *)(a2 + 40) != 1
        || (*(_BYTE *)(a3 + 44) & 1) != 0
        || *(_DWORD *)(a3 + 40) != 1 )
      {
        LOBYTE(v14) = sub_1848D40(qword_1C7F2C0, v5, v4);
      }
      else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (*(_BYTE *)(a3 + 28) & 1) != 0 )
      {
        v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) >> 31;
      }
      else
      {
        LOBYTE(v14) = *(_DWORD *)(a2 + 24) < *(_DWORD *)(a3 + 24);
      }
      if ( (_BYTE)v14 )
        goto LABEL_9;
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(a2 + 44) & 1) != 0
      || *(_DWORD *)(a2 + 40) != 1
      || (*(_BYTE *)(a3 + 44) & 1) != 0
      || *(_DWORD *)(a3 + 40) != 1 )
    {
      LOBYTE(v12) = sub_1848D40(qword_1C7F2C0, v5, v4);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (*(_BYTE *)(a3 + 28) & 1) != 0 )
    {
      v12 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) >> 31;
    }
    else
    {
      LOBYTE(v12) = *(_DWORD *)(a2 + 24) < *(_DWORD *)(a3 + 24);
    }
    if ( !(_BYTE)v12 )
      goto LABEL_14;
    result = sub_88CE90(a1, v36 ^ 1, v40 ^ 1);
    if ( !v41 )
      return result;
    v44 = 1;
    v45 = 0;
    v46 = 1;
    v47 = 0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    BYTE4(v46) &= ~1u;
    LODWORD(v46) = 1;
    v54 = 0;
    v25 = qword_1C7F2C0;
    v55 = 0;
    v56 = 1;
    v57 = 0;
    if ( (*(_BYTE *)(a3 + 28) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v54, v4);
    else
      LODWORD(v54) = *(_DWORD *)(a3 + 24);
    if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
    {
      sub_182C690(v25, &v56, a3 + 40);
    }
    else
    {
      v26 = *(_DWORD *)(a3 + 40);
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = v26;
    }
    if ( (v56 & 0x100000000LL) != 0 || (_DWORD)v56 != 1 || (v46 & 0x100000000LL) != 0 || (_DWORD)v46 != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v54, &v44);
    }
    else
    {
      v43 = qword_1C7F2C0;
      sub_1832A70(qword_1C7F2C0, &v54, &v44);
      sub_182CBA0(v43, &v56);
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = 1;
    }
    v49 &= 0xFCu;
    v52 &= 0xFCu;
    v48 = 0;
    v27 = qword_1C7F2C0;
    v50 = 0;
    v51 = 1;
    v53 = 0;
    if ( (v54 & 0x100000000LL) != 0 )
    {
      v42 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v48, &v54);
      v27 = v42;
    }
    else
    {
      v48 = v54;
    }
    if ( (v56 & 0x100000000LL) != 0 )
    {
      sub_182C690(v27, &v51, &v56);
    }
    else
    {
      v52 &= ~1u;
      v51 = v56;
    }
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v54);
    sub_182CBA0(v28, &v56);
    v29 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (v49 & 1) != 0 )
    {
      if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v5, &v48) )
        goto LABEL_89;
    }
    else if ( *(_DWORD *)(a2 + 24) == v48 )
    {
LABEL_89:
      if ( (*(_BYTE *)(a2 + 44) & 1) != 0 || (v52 & 1) != 0 )
        v30 = (unsigned int)sub_182C7B0(v29, a2 + 40, &v51) == 0;
      else
        v30 = *(_DWORD *)(a2 + 40) == v51;
      v31 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v48);
      sub_182CBA0(v31, &v51);
      v32 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v44);
      result = sub_182CBA0(v32, &v46);
      if ( !v30 )
        return result;
LABEL_14:
      v10 = v40;
      v11 = v36;
      return sub_88CE90(a1, v11, v10);
    }
LABEL_47:
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v23, &v51);
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    return sub_182CBA0(v24, &v46);
  }
  if ( !v7 )
  {
    if ( (*(_BYTE *)(a2 + 44) & 1) != 0
      || *(_DWORD *)(a2 + 40) != 1
      || (*(_BYTE *)(a3 + 44) & 1) != 0
      || *(_DWORD *)(a3 + 40) != 1 )
    {
      LOBYTE(v9) = sub_1848D40(qword_1C7F2C0, v5, v4);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (*(_BYTE *)(a3 + 28) & 1) != 0 )
    {
      v9 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, v4) >> 31;
    }
    else
    {
      LOBYTE(v9) = *(_DWORD *)(a2 + 24) < *(_DWORD *)(a3 + 24);
    }
    if ( !(_BYTE)v9 )
    {
LABEL_9:
      v10 = v40;
      v11 = v36 ^ 1;
      return sub_88CE90(a1, v11, v10);
    }
LABEL_26:
    v11 = v36;
    v10 = v40 ^ 1;
    return sub_88CE90(a1, v11, v10);
  }
  if ( (*(_BYTE *)(a3 + 44) & 1) != 0
    || *(_DWORD *)(a3 + 40) != 1
    || (*(_BYTE *)(a2 + 44) & 1) != 0
    || *(_DWORD *)(a2 + 40) != 1 )
  {
    LOBYTE(v15) = sub_1848D40(qword_1C7F2C0, v4, v5);
  }
  else if ( (*(_BYTE *)(a3 + 28) & 1) != 0 || (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    v15 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v4, v5) >> 31;
  }
  else
  {
    LOBYTE(v15) = *(_DWORD *)(a3 + 24) < *(_DWORD *)(a2 + 24);
  }
  if ( !(_BYTE)v15 )
    goto LABEL_14;
  result = sub_88CE90(a1, v36 ^ 1, v40 ^ 1);
  if ( v41 )
  {
    v44 = 1;
    v45 = 0;
    v46 = 1;
    v47 = 0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    BYTE4(v46) &= ~1u;
    LODWORD(v46) = 1;
    v54 = 0;
    v16 = qword_1C7F2C0;
    v55 = 0;
    v56 = 1;
    v57 = 0;
    if ( (*(_BYTE *)(a3 + 28) & 1) != 0 )
    {
      v38 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v54, v4);
      v16 = v38;
    }
    else
    {
      LODWORD(v54) = *(_DWORD *)(a3 + 24);
    }
    if ( (*(_BYTE *)(a3 + 44) & 1) != 0 )
    {
      sub_182C690(v16, &v56, a3 + 40);
    }
    else
    {
      v17 = *(_DWORD *)(a3 + 40);
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = v17;
    }
    v18 = qword_1C7F2C0;
    if ( (_DWORD)v54 )
    {
      if ( (v56 & 0x100000000LL) != 0 || (_DWORD)v56 != 1 || (v46 & 0x100000000LL) != 0 || (_DWORD)v46 != 1 )
      {
        sub_1851D20(qword_1C7F2C0, &v54, &v44, &v54);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, &v54, &v44, &v54);
        sub_182CBA0(v18, &v56);
        BYTE4(v56) &= ~1u;
        LODWORD(v56) = 1;
      }
    }
    else
    {
      BYTE4(v54) &= ~1u;
      LODWORD(v54) = v44;
      if ( (v46 & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v56, &v46);
      }
      else
      {
        BYTE4(v56) &= ~1u;
        LODWORD(v56) = v46;
      }
    }
    v49 &= 0xFCu;
    v52 &= 0xFCu;
    v48 = 0;
    v19 = qword_1C7F2C0;
    v50 = 0;
    v51 = 1;
    v53 = 0;
    if ( (v54 & 0x100000000LL) != 0 )
    {
      v39 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v48, &v54);
      v19 = v39;
    }
    else
    {
      v48 = v54;
    }
    if ( (v56 & 0x100000000LL) != 0 )
    {
      sub_182C690(v19, &v51, &v56);
    }
    else
    {
      v52 &= ~1u;
      v51 = v56;
    }
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v54);
    sub_182CBA0(v20, &v56);
    v21 = qword_1C7F2C0;
    if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (v49 & 1) != 0 )
      v22 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v5, &v48) == 0;
    else
      v22 = *(_DWORD *)(a2 + 24) == v48;
    if ( !v22 )
      goto LABEL_47;
    v33 = (*(_BYTE *)(a2 + 44) & 1) != 0 || (v52 & 1) != 0
        ? (unsigned int)sub_182C7B0(v21, a2 + 40, &v51) == 0
        : *(_DWORD *)(a2 + 40) == v51;
    v34 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    sub_182CBA0(v34, &v51);
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    result = sub_182CBA0(v35, &v46);
    if ( v33 )
      goto LABEL_14;
  }
  return result;
}

