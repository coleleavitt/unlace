__int64 __fastcall sub_E701E0(__int64 a1, _QWORD **a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  void *v11; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  char vars8; // [rsp+10h] [rbp+8h] BYREF
  __int64 *vars18; // [rsp+20h] [rbp+18h] BYREF
  __int16 vars38; // [rsp+40h] [rbp+38h]
  __int64 (__fastcall **vars48)(); // [rsp+50h] [rbp+48h] BYREF
  int vars50; // [rsp+58h] [rbp+50h]
  __int128 vars58; // [rsp+60h] [rbp+58h]
  __int64 vars68; // [rsp+70h] [rbp+68h]
  char vars70; // [rsp+78h] [rbp+70h]
  int vars74; // [rsp+7Ch] [rbp+74h]
  void **vars78; // [rsp+80h] [rbp+78h]
  __int64 (__fastcall **vars88)(); // [rsp+90h] [rbp+88h] BYREF
  int vars90; // [rsp+98h] [rbp+90h]
  __int128 vars98; // [rsp+A0h] [rbp+98h]
  __int64 varsA8; // [rsp+B0h] [rbp+A8h]
  char varsB0; // [rsp+B8h] [rbp+B0h]
  int varsB4; // [rsp+BCh] [rbp+B4h]
  __int64 varsB8; // [rsp+C0h] [rbp+B8h]
  __int64 *varsD8; // [rsp+E0h] [rbp+D8h]

  varsD8 = &vars0;
  vars8 = 0;
  vars0 = 0;
  v11 = &vars8;
  vars48 = &off_2BEBE68;
  vars50 = 0;
  vars70 = 0;
  vars74 = 1;
  vars68 = 0;
  vars58 = 0;
  vars78 = &v11;
  sub_227B8B0(&vars48, 0, 0, 0);
  v9 = 0;
  if ( a3 && (*(_BYTE *)(a3 + 28) & 0x7D) == 0x24 )
    v9 = a3 & 0xFFFFFFFFFFFFFFF8LL | a4;
  sub_E6F990(*a2, v9, 0, (__int64)&vars48, v7, v8);
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  vars98 = 0;
  vars90 = 0;
  varsB0 = 0;
  varsB4 = 1;
  varsA8 = 0;
  vars88 = &off_2BEBE68;
  varsB8 = a1;
  sub_227B8B0(&vars88, 0, 0, 0);
  vars38 = 260;
  vars18 = &vars0;
  sub_209E5E0(&vars88, &vars18, a2 + 1);
  vars88 = &off_2BEBE68;
  sub_227B7A0(&vars88);
  vars48 = &off_2BEBE68;
  sub_227B7A0(&vars48);
  if ( v11 != &vars0 )
    operator delete(v11);
  return a1;
}
