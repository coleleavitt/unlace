__int64 __fastcall sub_21785D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h]

  sub_216E690((__int64)vars0, a2, a3, a4, a5, a6);
  if ( (vars10 & 1) != 0 )
  {
    v8 = vars0[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    vars0[0] = 0;
    *(_QWORD *)a1 = v8;
  }
  else
  {
    sub_21782D0(a1, a2, a3, vars0[0], vars0[1], v7);
  }
  sub_20EAA70(vars0);
  return a1;
}
