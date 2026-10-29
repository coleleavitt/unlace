__int64 __fastcall sub_21CBAB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  char vars18; // [rsp+18h] [rbp+18h]
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  __int64 vars40[4]; // [rsp+40h] [rbp+40h] BYREF
  __int16 vars60; // [rsp+60h] [rbp+60h]

  sub_21CB9D0((__int64)&vars0, a2, a3);
  if ( (vars8 & 1) != 0 )
  {
    v6 = vars0;
    vars0 = 0;
    if ( v6 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v6;
      goto LABEL_4;
    }
  }
  sub_2253560(vars20, a4);
  if ( !vars20[1] )
  {
    v8 = 0;
LABEL_7:
    v9 = vars0;
    vars40[0] = v8;
    vars0 = 0;
    vars10 = v9;
    sub_21CB060(a1, &vars10, vars40);
    if ( vars10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)vars10 + 8LL))(vars10);
    if ( vars40[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)vars40[0] + 8LL))(vars40[0]);
    goto LABEL_11;
  }
  vars60 = 260;
  vars40[0] = (__int64)vars20;
  sub_21CB9D0((__int64)&vars10, (__int64)vars40, a3);
  v8 = vars10;
  if ( (vars18 & 1) == 0 || (vars10 = 0, !v8) )
  {
    vars10 = 0;
    sub_111E0C0(&vars10);
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v8;
  sub_111E0C0(&vars10);
LABEL_11:
  if ( vars20[0] != &_30 )
    operator delete(vars20[0]);
LABEL_4:
  sub_111E0C0(&vars0);
  return a1;
}
