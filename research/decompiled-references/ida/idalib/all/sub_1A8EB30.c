void __fastcall sub_1A8EB30(__int64 *a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  double vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h]
  char vars14; // [rsp+14h] [rbp+14h]

  v6 = *a1;
  vars0[0] = 0.0;
  vars10 = 0;
  vars0[1] = 0.0;
  vars14 = 0;
  if ( (unsigned __int8)sub_1A85D70(v6, a2, (__int64)vars0, a4) )
  {
    v7 = sub_1A881F0(*a1 + 248, a3, vars0);
    if ( v7 )
      sub_1A8E3C0(*a1, v7, (__int64)vars0, v8, v9, a4);
  }
}
