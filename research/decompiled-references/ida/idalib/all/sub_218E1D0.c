__int64 __fastcall sub_218E1D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v6)(void); // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD *v12; // [rsp+0h] [rbp-38h] BYREF
  char v13; // [rsp+8h] [rbp-30h]
  _QWORD *v14; // [rsp+10h] [rbp-28h] BYREF
  char v15; // [rsp+18h] [rbp-20h]

  v6 = *(__int64 (**)(void))(*a1 + 456LL);
  if ( v6 != sub_218E2A0 )
    return v6();
  sub_216F820((__int64)&v14, a1 + 7, (unsigned int)a2, a4, a5, a6);
  if ( (v15 & 1) != 0 )
  {
    v9 = v14;
    v13 |= 1u;
    v14 = nullptr;
    v12 = v9;
  }
  else
  {
    sub_2178D10((__int64)&v12, a1 + 7, v14, HIDWORD(a2), v7, v8);
  }
  sub_216F910((__int64 *)&v14);
  if ( (v13 & 1) != 0 )
  {
    v14 = v12;
    v12 = nullptr;
    sub_2220CA0(&v14, 1);
  }
  v10 = v12[2];
  sub_218AB00((__int64 *)&v12);
  return v10;
}
