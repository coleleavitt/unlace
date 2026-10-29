__int64 __fastcall sub_62FAA0(char *a1)
{
  char *v1; // rsi
  char *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v11; // ebx
  int v12; // eax
  __int16 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars2; // [rsp+2h] [rbp+2h]
  _BYTE _3[3]; // [rsp+3h] [rbp+3h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v1 = a1;
  v2 = a1 + 1520;
  v3 = (int)sub_7BE950(v2, v1, &loc_41B994, &vars0, 22, 83);
  if ( (unsigned __int8)is_cvt64(v2, v1, v4) )
  {
    if ( v3 != 22 )
      goto LABEL_37;
    if ( vars0 != 17481 || (v7 = 0, vars2 != 65) )
      v7 = 1;
    v8 = strcmp((const char *)&vars0, "ida");
    if ( v7 )
    {
      if ( v8 )
        goto LABEL_37;
    }
    else
    {
      v9 = *(unsigned __int16 *)_3;
      if ( v8 )
      {
LABEL_8:
        if ( (_WORD)v9 )
        {
          if ( v9 > 920 )
            sub_387C60(1341);
          if ( v9 != 920 )
            byte_2CCC2F9 = 1;
          return (unsigned int)v9;
        }
LABEL_37:
        sub_378C70((__int64)"Conversion failed: cannot read database version");
      }
    }
    v9 = *(unsigned __int16 *)&_3[1];
    goto LABEL_8;
  }
  if ( v3 <= 0 )
    return 920;
  if ( v3 != 22 )
LABEL_26:
    sub_387D20(1339, (__int64)v1, v5, v6);
  if ( vars0 != 17481 || (v11 = 0, vars2 != 65) )
    v11 = 1;
  v1 = "ida";
  v12 = strcmp((const char *)&vars0, "ida");
  if ( v11 )
  {
    if ( v12 )
      goto LABEL_26;
    goto LABEL_19;
  }
  v9 = *(unsigned __int16 *)_3;
  if ( !v12 )
LABEL_19:
    v9 = *(unsigned __int16 *)&_3[1];
  if ( !(_WORD)v9 )
    goto LABEL_26;
  if ( v9 <= 919 )
  {
    if ( !byte_2CCC2FA )
      sub_590EC0(1, 1340, (unsigned int)v9, 920);
    if ( v9 <= 24 )
      sub_62F980();
  }
  else if ( v9 != 920 )
  {
    sub_387D20(1341, (__int64)"ida", v5, v6);
  }
  return (unsigned int)v9;
}
