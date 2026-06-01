__int64 __fastcall sub_218BED0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 *v10; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 *v12; // [rsp+10h] [rbp-28h] BYREF
  char v13; // [rsp+18h] [rbp-20h]

  v6 = *(__int64 (**)(void))(*a1 + 456LL);
  if ( v6 != sub_218C190 )
    return v6();
  sub_216F990((__int64)&v12, a1 + 7, (unsigned int)a2, a4, a5, a6);
  if ( (v13 & 1) != 0 )
  {
    v7 = v12;
    v11 |= 1u;
    v12 = nullptr;
    v10 = v7;
  }
  else
  {
    sub_217BF40((__int64)&v10, a1 + 7, v12, HIDWORD(a2));
  }
  sub_216FA80((__int64 *)&v12);
  if ( (v11 & 1) != 0 )
  {
    v12 = v10;
    v10 = nullptr;
    sub_2220CA0(&v12, 1);
  }
  v8 = v10[2];
  sub_218A810((__int64 *)&v10);
  return _byteswap_uint64(v8);
}
