void __fastcall sub_1522580(__int64 a1, __int64 *a2, __int64 a3, unsigned int *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  unsigned int v9; // r14d
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int16 vars10; // [rsp+10h] [rbp+10h]
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  unsigned __int8 *vars40[15]; // [rsp+40h] [rbp+40h] BYREF

  sub_14634E0(a2, &vars0);
  if ( vars10 == 2 )
  {
    sub_FC70B0((__int64)vars40, a2[6], vars0, 1868);
    sub_1520A40(vars40, (__int64)"clang optimize");
    sub_1520C80(vars40, 1);
    sub_1520A40(vars40, (__int64)"'on' or 'off'");
    sub_AEA040((__int64)vars40);
    return;
  }
  if ( vars10 == 5 )
  {
    v6 = *(_QWORD *)(vars8 + 16);
    if ( (unsigned int)*(_QWORD *)v6 == 2 )
    {
      if ( *(_WORD *)(v6 + 16) == 28271 )
      {
        v9 = 1;
LABEL_11:
        sub_14634E0(a2, &vars0);
        if ( vars10 == 2 )
        {
          sub_16665E0(*(_QWORD *)(a1 + 40), v9, *a4);
          return;
        }
        v7 = a2[6];
        v8 = 1869;
        goto LABEL_6;
      }
    }
    else if ( (unsigned int)*(_QWORD *)v6 == 3 && *(_WORD *)(v6 + 16) == 26223 )
    {
      v9 = 0;
      if ( *(_BYTE *)(v6 + 18) == 102 )
        goto LABEL_11;
    }
  }
  v7 = a2[6];
  v8 = 1870;
LABEL_6:
  sub_FC70B0((__int64)vars40, v7, vars0, v8);
  sub_13D35F0((__int64)vars20, (__int64)&vars0, a2[11], a2[7], nullptr);
  sub_AEC220(vars40, (_BYTE *)vars20[0], (signed __int64)vars20[1]);
  if ( vars20[0] != &_30 )
    operator delete(vars20[0]);
  sub_AEA040((__int64)vars40);
}
