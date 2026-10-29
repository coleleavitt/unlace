__int64 __fastcall sub_218E2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v11; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+8h] [rbp-30h]
  _QWORD *v13; // [rsp+10h] [rbp-28h] BYREF
  char v14; // [rsp+18h] [rbp-20h]

  sub_216F820((__int64)&v13, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v14 & 1) != 0 )
  {
    v8 = v13;
    v12 |= 1u;
    v13 = nullptr;
    v11 = v8;
  }
  else
  {
    sub_2178D10((__int64)&v11, (_QWORD *)(a1 + 56), v13, HIDWORD(a2), v6, v7);
  }
  sub_216F910((__int64 *)&v13);
  if ( (v12 & 1) != 0 )
  {
    v13 = v11;
    v11 = nullptr;
    sub_2220CA0(&v13, 1);
  }
  v9 = v11[2];
  sub_218AB00((__int64 *)&v11);
  return v9;
}
