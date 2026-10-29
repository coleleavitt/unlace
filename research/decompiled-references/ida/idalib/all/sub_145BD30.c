void __fastcall sub_145BD30(__int64 a1, __int64 **a2, __int64 a3, __int64 *a4, _BYTE *a5, signed __int64 a6)
{
  void *vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  unsigned __int8 *vars40[17]; // [rsp+40h] [rbp+40h] BYREF

  sub_FC70B0((__int64)vars40, *(_QWORD *)(*(_QWORD *)a1 + 48LL), *(_DWORD *)(*(_QWORD *)a1 + 780LL), 1366);
  sub_FEEE60((__int64)vars0, *a2, 0);
  sub_AEC220(vars40, (_BYTE *)vars0[0], (signed __int64)vars0[1]);
  sub_FEEE60((__int64)vars20, a4, 0);
  sub_AEC220(vars40, (_BYTE *)vars20[0], (signed __int64)vars20[1]);
  sub_AEC220(vars40, a5, a6);
  if ( vars20[0] != &_30 )
    operator delete(vars20[0]);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
  sub_AEA040((__int64)vars40);
}
