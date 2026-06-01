__int64 __fastcall sub_742EF0(__int64 a1, __int64 a2)
{
  char **v2; // rdx
  int v3; // ebp
  char *v4; // rax
  char *v5; // rcx
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  __int64 v9; // rdi
  int v10; // edx
  unsigned int v11; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = &qword_2CAA5C0;
  v13 = __readfsqword(0x28u);
  v3 = a1;
  v4 = qword_2CAA5C0;
  v5 = ++qword_2CAA5C0;
  v6 = *v4 - 65;
  if ( v6 <= 0x13 )
  {
    v2 = (char **)byte_2393E68;
    a1 = v6 >> 1;
    v7 = byte_2393E68[a1];
    if ( !v7 )
      goto LABEL_3;
    v11 = 0;
    if ( v3 == 40961 && !v6 )
    {
      dword_2CAA5C8 |= 9u;
      if ( (_DWORD)a2 )
        return (unsigned int)sub_74E340(11);
      return v11;
    }
    if ( v3 )
    {
      v10 = dword_2CAA5C8 | v7;
      dword_2CAA5C8 = v10;
      if ( !(_DWORD)a2 )
      {
        if ( (v6 & 1) != 0 )
          dword_2CAA5C8 = v10 | 0x10;
        return v11;
      }
    }
    else if ( !(_DWORD)a2 )
    {
      return v11;
    }
    v9 = (unsigned int)(a1 + 1);
    if ( (unsigned int)v9 > 5 )
      v9 = (unsigned int)(v7 != 11) + 6;
    v11 = sub_74E340(v9);
    if ( (v6 & 1) != 0 )
    {
      if ( v3 )
        dword_2CAA5C8 |= 0x10u;
      v12 = sub_74E340(12);
      sub_7506B0(&v11, &v12);
    }
    return v11;
  }
  if ( *v4 != 119 )
LABEL_3:
    sub_74E200(a1, a2, v2, v5);
  if ( (_DWORD)a1 )
    dword_2CAA5C8 |= 0xEu;
  return sub_74E340(13);
}

