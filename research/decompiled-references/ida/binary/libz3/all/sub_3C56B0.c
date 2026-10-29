__int64 __fastcall sub_3C56B0(__int64 a1, _QWORD *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  int i; // r15d
  int v9; // r9d
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8[2]; // [rsp+8h] [rbp+8h]
  int vars10[2]; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  int vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h] BYREF
  void *vars38; // [rsp+38h] [rbp+38h]
  int vars40; // [rsp+40h] [rbp+40h]
  int vars48; // [rsp+48h] [rbp+48h]
  __int64 vars50; // [rsp+50h] [rbp+50h]
  __int64 vars58; // [rsp+58h] [rbp+58h]
  __int64 vars60; // [rsp+60h] [rbp+60h]
  __int64 vars68; // [rsp+68h] [rbp+68h]
  char vars70; // [rsp+70h] [rbp+70h]
  _BYTE vars248[80]; // [rsp+248h] [rbp+248h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)vars8 = 0;
  vars0 = v7;
  if ( *a2 )
  {
    for ( i = *(_DWORD *)(*a2 - 4LL);
          i;
          sub_647C70(
            (unsigned int)&vars0,
            *(_DWORD *)a2 + 16 * i,
            a3,
            a4,
            a5,
            a6,
            vars0,
            vars8[0],
            vars10[0],
            vars18,
            *(__int64 *)vars20,
            vars28,
            vars30,
            (__int64)vars38) )
    {
      --i;
    }
  }
  sub_3C52B0(
    (unsigned int)vars10,
    vars0,
    vars8[0],
    vars10[0],
    vars18,
    vars20[0],
    vars28,
    vars30,
    (_DWORD)vars38,
    vars40,
    vars48,
    vars50,
    vars58,
    vars60,
    vars68,
    vars70);
  sub_633760(&vars30, *(_QWORD *)(a1 + 8), 0, vars248);
  vars248[8] = 0;
  vars30 = (__int64)&off_1C4CA80;
  if ( *(_QWORD *)vars8 )
    v10 = *(_DWORD *)(*(_QWORD *)vars8 - 4LL);
  else
    v10 = 0;
  sub_157BE40(
    (int)vars20,
    (int)&vars30,
    vars10[0],
    v10,
    vars8[0],
    v9,
    vars0,
    *(__int64 *)vars8,
    vars10[0],
    vars18,
    vars20[0],
    vars28,
    vars30,
    vars38);
  v11 = *(_QWORD *)vars10;
  v12 = *(_QWORD *)vars20;
  *(_QWORD *)vars20 = *(_QWORD *)vars10;
  *(_QWORD *)vars10 = v12;
  if ( *(_QWORD *)vars20 )
  {
    v13 = vars28;
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v11);
  }
  sub_160EBE0(a4, vars10);
  std::__ostream_insert<char,std::char_traits<char>>();
  vars30 = (__int64)&off_1C4CA80;
  sub_267D20(&vars30);
  v15 = *(_QWORD *)vars10;
  if ( *(_QWORD *)vars10 )
  {
    v16 = vars18;
    v14 = (*(_DWORD *)(*(_QWORD *)vars10 + 8LL))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  return sub_2334C0(&vars0);
}

