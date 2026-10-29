unsigned __int64 __fastcall sub_218C190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *v9; // [rsp+0h] [rbp-38h] BYREF
  char v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 *v11; // [rsp+10h] [rbp-28h] BYREF
  char v12; // [rsp+18h] [rbp-20h]

  sub_216F990((__int64)&v11, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v12 & 1) != 0 )
  {
    v6 = v11;
    v10 |= 1u;
    v11 = nullptr;
    v9 = v6;
  }
  else
  {
    sub_217BF40((__int64)&v9, (_QWORD *)(a1 + 56), v11, HIDWORD(a2));
  }
  sub_216FA80((__int64 *)&v11);
  if ( (v10 & 1) != 0 )
  {
    v11 = v9;
    v9 = nullptr;
    sub_2220CA0(&v11, 1);
  }
  v7 = v9[2];
  sub_218A810((__int64 *)&v9);
  return _byteswap_uint64(v7);
}
