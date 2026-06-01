__int64 __fastcall sub_D2F490(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  void **v6; // rbx
  char v7; // r14
  char v8; // r15
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]
  void *vars10; // [rsp+10h] [rbp+10h] BYREF
  unsigned int vars18; // [rsp+18h] [rbp+18h]
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  unsigned int vars28; // [rsp+28h] [rbp+28h]
  char vars2C; // [rsp+2Ch] [rbp+2Ch]
  void *vars30; // [rsp+30h] [rbp+30h] BYREF
  unsigned int vars38; // [rsp+38h] [rbp+38h]
  char vars3C; // [rsp+3Ch] [rbp+3Ch]
  void *vars40; // [rsp+40h] [rbp+40h] BYREF
  unsigned int vars48; // [rsp+48h] [rbp+48h]
  char vars4C; // [rsp+4Ch] [rbp+4Ch]
  void *vars50; // [rsp+50h] [rbp+50h] BYREF
  unsigned int vars58; // [rsp+58h] [rbp+58h]

  sub_D27A40((__int64)&vars0, a1, 0);
  sub_D27A40((__int64)&vars10, a2, 0);
  v6 = &vars40;
  sub_BF2AD0((__int64)&vars40, (__int64)&vars10, a3);
  sub_BF2AD0((__int64)&vars30, (__int64)&vars0, a3);
  v7 = vars3C;
  vars58 = vars38;
  if ( vars38 > 0x40 )
    sub_21E17D0(&vars50);
  else
    vars50 = vars30;
  sub_21E1C60(&vars0, &vars40);
  vars2C = v7;
  vars28 = vars58;
  vars20 = vars50;
  if ( vars38 > 0x40 && vars30 )
    operator delete[](vars30);
  if ( vars48 > 0x40 && vars40 )
    operator delete[](vars40);
  v8 = vars2C;
  sub_21E2D00(&vars0, &vars20);
  vars4C = v8;
  vars48 = vars58;
  vars40 = vars50;
  sub_CE8850(a4, (__int64)&vars40);
  sub_BF2AD0((__int64)&vars0, (__int64)&vars40, a3);
  if ( vars58 <= 0x40 )
  {
    LOBYTE(v6) = vars50 != vars20;
  }
  else
  {
    LODWORD(v6) = sub_21E2030(&vars0, &vars20) ^ 1;
    if ( vars50 )
      operator delete[](vars50);
  }
  if ( vars48 > 0x40 && vars40 )
    operator delete[](vars40);
  if ( vars28 > 0x40 && vars20 )
    operator delete[](vars20);
  if ( vars18 > 0x40 && vars10 )
    operator delete[](vars10);
  if ( vars8 > 0x40 && vars0 )
    operator delete[](vars0);
  return (unsigned int)v6;
}

