__int64 __fastcall sub_6080E0(__int64 a1, _QWORD *a2, char *a3, int a4)
{
  char *v4; // r14
  __int64 v5; // r13
  unsigned int v7; // eax
  unsigned int v8; // r15d
  char v9; // al
  _BYTE *i; // rbx
  char *v11; // rax
  char v12; // dl
  char *v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD v16[73]; // [rsp+0h] [rbp-248h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v16[65] = __readfsqword(0x28u);
  v7 = sub_605890(v5, a2, (int)a3, a4);
  if ( (_BYTE)v7 )
    return 1;
  v8 = v7;
  v9 = *v4;
  if ( *v4 == 106 )
  {
    if ( v4[1] != 95 )
      goto LABEL_6;
    if ( (unsigned __int8)sub_605890(v5, a2, (int)v4 + 2, a4) && (get_tinfo_property(*a2, 2) & 0xF) == 0xC )
      return 1;
    v9 = v4[2];
    v4 += 2;
  }
  for ( i = v4; v9 == 95; ++i )
    v9 = i[1];
  if ( v9 == 105 && i[1] == 109 && i[2] == 112 && i[3] == 95 )
  {
    v4 = i + 4;
    if ( (unsigned __int8)sub_605890(v5, a2, (int)i + 4, a4) )
    {
      if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xC )
        return 1;
    }
    if ( i[4] == 95 && (unsigned __int8)sub_605890(v5, a2, (int)i + 5, a4) && (get_tinfo_property(*a2, 2) & 0xF) == 0xC )
      return 1;
  }
LABEL_6:
  v11 = strrchr(v4, 95);
  if ( !v11 )
    return v8;
  v12 = v11[1];
  v13 = v11 + 1;
  if ( !v12 )
  {
LABEL_10:
    v14 = v11 - v4 + 1;
    if ( v14 > 0x200 )
      v14 = 512;
    qstrncpy(v16, v4, v14);
    if ( !(unsigned __int8)sub_605890(v5, a2, (int)v16, a4) || (get_tinfo_property(*a2, 2) & 0xF) != 0xC )
      return v8;
    return 1;
  }
  while ( (unsigned __int8)(v12 - 48) <= 9u )
  {
    v12 = *++v13;
    if ( !v12 )
      goto LABEL_10;
  }
  return v8;
}
