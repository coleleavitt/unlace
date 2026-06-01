__int64 __fastcall sub_1109510(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdx
  void *vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 304LL))(vars0);
  v2 = (_BYTE *)sub_2266D20(vars0[0], vars0[1], 0);
  *(_QWORD *)a1 = a1 + 16;
  if ( v2 )
  {
    sub_1107830((_QWORD *)a1, v2, (__int64)&v2[v3]);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
  return a1;
}

