__int64 __fastcall sub_1EAF8B0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  sub_A0B360((__int64)&vars0, a2, *(_DWORD *)(a2 + 36));
  v2 = (vars8 & 1) == 0;
  v3 = vars0;
  *(_BYTE *)(a1 + 8) = vars8 & 1 | *(_BYTE *)(a1 + 8) & 0xFE;
  if ( v2 )
  {
    *(_DWORD *)a1 = v3;
  }
  else
  {
    vars0 = 0;
    *(_QWORD *)a1 = v3;
  }
  sub_A0AE70(&vars0);
  return a1;
}
