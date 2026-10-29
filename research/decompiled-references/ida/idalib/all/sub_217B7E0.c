__int64 __fastcall sub_217B7E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h]

  sub_216EAB0((__int64)vars0, a2, a3, a4, a5, a6);
  if ( (vars10 & 1) != 0 )
  {
    v7 = vars0[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    vars0[0] = 0;
    *(_QWORD *)a1 = v7;
  }
  else
  {
    sub_217B4D0(a1, a2, a3, vars0[0], vars0[1]);
  }
  sub_216F970(vars0);
  return a1;
}
