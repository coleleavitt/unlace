__int64 __fastcall sub_21709A0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  sub_21708D0((__int64)&vars0, (__int64)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (vars8 & 1) != 0 )
  {
    v13 = vars0;
    *(_BYTE *)(a1 + 8) |= 1u;
    vars0 = 0;
    *(_QWORD *)a1 = v13;
  }
  else if ( (_DWORD)vars0 )
  {
    sub_216F990(a1, a2, (unsigned int)vars0, v10, v11, v12);
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = 0;
  }
  sub_A0AE90(&vars0);
  return a1;
}
