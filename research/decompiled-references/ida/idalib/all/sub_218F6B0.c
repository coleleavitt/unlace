__int64 __fastcall sub_218F6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rax
  char v9; // bl
  unsigned int *v11; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+8h] [rbp-30h]
  unsigned int *v13; // [rsp+10h] [rbp-28h] BYREF
  char v14; // [rsp+18h] [rbp-20h]

  sub_216F6A0((__int64)&v13, (__int64 *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v14 & 1) != 0 )
  {
    v8 = v13;
    v12 |= 1u;
    v13 = nullptr;
    v11 = v8;
  }
  else
  {
    sub_2175B50((__int64)&v11, (__int64 *)(a1 + 56), v13, HIDWORD(a2), v6, v7);
  }
  sub_216F7A0((__int64 *)&v13);
  if ( (v12 & 1) != 0 )
  {
    v13 = v11;
    v11 = nullptr;
    sub_2220CA0(&v13, 1);
  }
  v9 = *((_BYTE *)v11 + 12);
  sub_218AE00((__int64 *)&v11);
  return v9 & 0xF;
}
