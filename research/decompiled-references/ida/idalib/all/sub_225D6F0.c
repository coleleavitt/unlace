__int64 __fastcall sub_225D6F0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        char a7)
{
  __int64 v11; // rax
  int v12; // eax
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h]

  v11 = *a2;
  if ( a7 )
    (*(void (__fastcall **)(__int64 *))(v11 + 48))(vars0);
  else
    (*(void (__fastcall **)(__int64 *))(v11 + 56))(vars0);
  if ( (vars10 & 1) != 0 )
  {
    v12 = vars0[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = vars0[1];
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)vars0[0] + 32LL))(
      a1,
      vars0[0],
      a3,
      a4,
      a5,
      a6);
  }
  sub_FDCFC0(vars0);
  return a1;
}
