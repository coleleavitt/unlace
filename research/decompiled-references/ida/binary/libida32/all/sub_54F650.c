__int64 __fastcall sub_54F650(__int64 a1, char **a2, char **a3)
{
  char *v3; // rax
  char *v5; // r13
  unsigned int v6; // r13d
  char *v8; // r14
  char *v9; // rax
  char *v10; // r15
  char v11; // r8
  int v12; // eax
  char *v13; // rdx
  char *v14; // r13
  char *v15; // r14
  char v16; // r14
  char v17; // r8
  char v18; // al
  int v19; // eax
  char v20; // r8
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  char v23; // cl
  char *v24; // rax
  char *v25; // rax
  char v26; // al
  char v27; // al
  char v28; // al
  char *v29; // r15
  signed __int64 v30; // rax
  int v31; // eax
  char *v32; // rax
  char v33; // al
  char argloc; // al
  char v35; // [rsp+0h] [rbp-68h]
  char v36; // [rsp+0h] [rbp-68h]
  char v37; // [rsp+0h] [rbp-68h]
  char v38; // [rsp+0h] [rbp-68h]
  char v39; // [rsp+0h] [rbp-68h]
  char *v40; // [rsp+0h] [rbp-68h]
  char v41; // [rsp+0h] [rbp-68h]
  char v42; // [rsp+0h] [rbp-68h]
  char v43; // [rsp+Fh] [rbp-59h]
  int v44; // [rsp+18h] [rbp-50h] BYREF
  int v45; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v46[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  v46[1] = __readfsqword(0x28u);
  *a2 = v3 + 1;
  if ( !v3[1] )
    return 0;
  v5 = *a3 + 1;
  *a3 = v5;
  if ( !*v5 )
    return 0;
  v8 = *a2;
  *a2 = sub_54DA40(*a2, nullptr, nullptr);
  v9 = sub_54DA40(*a3, nullptr, nullptr);
  *a3 = v9;
  v10 = *a2;
  if ( v9 == nullptr
    || *a2 == nullptr
    || (_DWORD)v10 - (_DWORD)v8 != (_DWORD)v9 - (_DWORD)v5
    || memcmp(v8, v5, (int)v10 - (int)v8) )
  {
    return 0;
  }
  v11 = 0;
  *a2 = v10 + 1;
  LOBYTE(v12) = *v10 & 0xF0;
  if ( (_BYTE)v12 == 0xC0 )
  {
    if ( !(unsigned __int8)sub_693030(a2, &v44) )
      return 0;
    v12 = v44;
    v11 = 0;
  }
  else
  {
    v12 = (unsigned __int8)v12;
  }
  v13 = *a3;
  v44 = v12;
  *a3 = v13 + 1;
  LOBYTE(v13) = *v13 & 0xF0;
  if ( (_BYTE)v13 == 0xC0 )
  {
    if ( !(unsigned __int8)sub_693030(a3, &v45) )
      return 0;
    LODWORD(v13) = v45;
    v12 = v44;
    v11 = 0;
  }
  else
  {
    LODWORD(v13) = (unsigned __int8)v13;
  }
  v45 = (int)v13;
  if ( !v12 )
    return 0;
  if ( (_DWORD)v13 != v12 )
  {
    if ( *(_BYTE *)(a1 + 8) != 1 || !(_DWORD)v13 )
      return 0;
    if ( v12 == 16 )
    {
      v32 = *a2;
      v44 = (int)v13;
      *a2 = *a3;
      *a3 = v32;
    }
    else if ( (_DWORD)v13 != 16 )
    {
      return 0;
    }
    v11 = 1;
  }
  v14 = *a2;
  v15 = *a3;
  if ( **a2 == -2 )
  {
    v38 = v11;
    if ( !(unsigned __int8)sub_51F860((const char **)a2, nullptr, nullptr) )
      return 0;
    v29 = *a3;
    v11 = v38;
    if ( **a3 != -2 )
      goto LABEL_55;
  }
  else if ( *v15 != -2 )
  {
    goto LABEL_21;
  }
  v39 = v11;
  if ( !(unsigned __int8)sub_51F860((const char **)a3, nullptr, nullptr) )
    return 0;
  v29 = *a3;
  v11 = v39;
LABEL_55:
  v30 = *a2 - v14;
  if ( (_DWORD)v30 != (_DWORD)v29 - (_DWORD)v15 )
    return 0;
  v43 = v11;
  v40 = *a2;
  v31 = memcmp(v14, v15, (int)v30);
  v11 = v43;
  if ( v31 )
    return 0;
  v15 = v29;
  v14 = v40;
LABEL_21:
  if ( !*v14 || !*v15 )
    return 0;
  v16 = 0;
  if ( (unsigned int)(v44 - 208) <= 0x2F )
  {
    v42 = v11;
    v33 = sub_54F5C0(*(_QWORD *)a1, a2);
    v11 = v42;
    v16 = v33 + 1;
  }
  v35 = v11;
  v6 = sub_54FAC0(a1, a2, a3, 0xFFFFFFFFLL);
  if ( !(_BYTE)v6 )
    return 0;
  v17 = v35;
  if ( v44 == 32 )
  {
    if ( v35 )
      LOBYTE(v6) = (unsigned int)sub_692FE0(a3) == 0;
    return v6;
  }
  if ( v16 == 1 )
  {
    if ( !v35 )
    {
      v18 = sub_548CC0(a2, a3);
      v17 = 0;
      if ( v18 )
        goto LABEL_30;
      return 0;
    }
    argloc = extract_argloc(0, a2, 0);
    v17 = v35;
    if ( !argloc )
      return 0;
  }
LABEL_30:
  v36 = v17;
  v46[0] = *a2;
  v19 = sub_692FE0(v46);
  v20 = v36;
  v21 = v19;
  if ( v19 == -1 )
    return 0;
  v22 = v46[0];
  while ( 1 )
  {
    v25 = *a2;
    if ( (unsigned __int64)*a2 >= v22 )
      break;
    *a2 = v25 + 1;
    v23 = *v25;
    v24 = (*a3)++;
    if ( v23 != *v24 )
      return 0;
  }
  if ( v21 )
  {
    while ( 1 )
    {
      v27 = *v25;
      if ( (**a3 == -2) != (v27 == -2) )
        break;
      if ( v27 == -2 )
      {
        v41 = v20;
        sub_693030(a2, 0);
        sub_693030(a3, 0);
        v20 = v41;
      }
      v37 = v20;
      if ( !(unsigned __int8)sub_54FAC0(a1, a2, a3, 0xFFFFFFFFLL) )
        break;
      v20 = v37;
      if ( v16 )
      {
        if ( v37 )
        {
          v28 = extract_argloc(0, a2, 0);
          v20 = v37;
          if ( !v28 )
            return 0;
        }
        else
        {
          v26 = sub_548CC0(a2, a3);
          v20 = 0;
          if ( !v26 )
            return 0;
        }
      }
      if ( !--v21 )
        return v6;
      v25 = *a2;
    }
    return 0;
  }
  return v6;
}

