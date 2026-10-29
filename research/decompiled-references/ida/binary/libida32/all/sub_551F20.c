__int64 __fastcall sub_551F20(__int64 a1, __int64 a2, double a3, double a4)
{
  char *v4; // rax
  char v5; // bp
  unsigned int v6; // r13d
  __int64 v7; // r8
  char v8; // r13
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int8 v13; // bp
  int v14[2]; // [rsp+8h] [rbp-40h] BYREF
  int v15; // [rsp+14h] [rbp-34h] BYREF
  int v16[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v16 = __readfsqword(0x28u);
  *(_QWORD *)v14 = a2 + 1;
  if ( !*(_BYTE *)(a2 + 1) )
    return 0;
  v4 = sub_54DA40((char *)(a2 + 1), nullptr, nullptr);
  if ( !v4 )
    return 0;
  *(_QWORD *)v14 = v4 + 1;
  LOBYTE(v4) = *v4 & 0xF0;
  if ( (_BYTE)v4 == 0xC0 )
  {
    if ( !(unsigned __int8)sub_693030(v14, &v15) )
      return 0;
    LODWORD(v4) = v15;
  }
  else
  {
    LODWORD(v4) = (unsigned __int8)v4;
  }
  v15 = (int)v4;
  if ( !(_DWORD)v4 )
    return 0;
  v5 = **(_BYTE **)v14;
  if ( **(_BYTE **)v14 == 0xFE )
  {
    sub_51F860((const char **)v14, nullptr, nullptr);
    v5 = **(_BYTE **)v14;
  }
  if ( !v5 )
    return 0;
  v6 = v15 - 208;
  if ( (unsigned __int8)sub_54F5C0(*(_QWORD *)(a1 + 24), (char **)v14) )
  {
    v8 = 2 * (v6 <= 0x2F);
    if ( v15 == 32 )
      return *(_QWORD *)v14;
  }
  else
  {
    v13 = v5 & 0xF;
    if ( v13 > 0xCu )
    {
      if ( (unsigned __int8)(v13 - 14) <= 1u )
        return 0;
    }
    else if ( v13 > 0xAu )
    {
      return 0;
    }
    if ( sub_551530(a1, (__int64 *)v14, nullptr, nullptr, v7, a3, a4) == -1 )
      return 0;
    if ( v15 == 32 )
      return *(_QWORD *)v14;
    if ( v6 > 0x2F )
    {
      v8 = 0;
    }
    else
    {
      if ( !(unsigned __int8)extract_argloc(0, v14, 0) )
        return 0;
      v8 = 1;
    }
  }
  v9 = sub_692FE0(v14);
  v11 = v9;
  if ( v9 != 1 )
  {
    if ( v9 != -1 )
    {
      if ( v9 )
        goto LABEL_22;
      return *(_QWORD *)v14;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_54F5C0(*(_QWORD *)(a1 + 24), (char **)v14) )
  {
LABEL_22:
    while ( (**(_BYTE **)v14 != 0xFF || (unsigned __int8)sub_693030(v14, 0))
         && sub_551530(a1, (__int64 *)v14, nullptr, nullptr, v10, a3, a4) != -1
         && (!v8 || (unsigned __int8)extract_argloc(0, v14, 0)) )
    {
      if ( !--v11 )
        return *(_QWORD *)v14;
    }
    return 0;
  }
  if ( (v15 & 0xFFFFFFF0) != 0x40 && (v15 & 0xFFFFFFF0) != 0xD0 )
    return *(_QWORD *)v14;
  return 0;
}

