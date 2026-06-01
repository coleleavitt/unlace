__int64 __fastcall sub_D0AFD0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rsi
  char v8; // bp
  _BYTE *v9; // rax
  bool v10; // cc
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  unsigned int vars28; // [rsp+28h] [rbp+28h]

  sub_D0AF80((__int64)&vars20, *(_QWORD *)(a1 + 176));
  sub_D0AF80((__int64)&vars0, *(_QWORD *)(a1 + 176));
  v5 = *(_QWORD *)(a1 + 176);
  v6 = sub_21EE7D0(&vars0, &vars20);
  v7 = 0;
  if ( v6 )
    v7 = (unsigned int)(v6 >= 0) + 2;
  v8 = a2(a3, v7);
  v9 = (_BYTE *)sub_E216C0(v5, 8);
  v10 = vars8 <= 0x40;
  *v9 = v8;
  if ( !v10 && vars0 )
    operator delete[](vars0);
  if ( vars28 > 0x40 && vars20 )
    operator delete[](vars20);
  return 1;
}
