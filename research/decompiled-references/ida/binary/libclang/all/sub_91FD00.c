__int64 __fastcall sub_91FD00(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // eax
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]
  void *vars10; // [rsp+10h] [rbp+10h] BYREF
  unsigned int vars18; // [rsp+18h] [rbp+18h]

  vars10 = a2;
  vars18 = 64;
  sub_2587E20(&vars0, &vars10, a3);
  if ( vars18 > 0x40 && vars10 )
    operator delete[](vars10);
  v3 = vars8;
  *(_DWORD *)(a1 + 8) = vars8;
  if ( v3 <= 0x40 )
  {
    *(_QWORD *)a1 = vars0;
    return a1;
  }
  sub_2585B30(a1);
  if ( vars8 <= 0x40 || !vars0 )
    return a1;
  operator delete[](vars0);
  return a1;
}

