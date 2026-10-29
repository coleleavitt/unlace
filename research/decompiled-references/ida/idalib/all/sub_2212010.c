__int64 __fastcall sub_2212010(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = sub_227D600(a1);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  v9[2] = 2;
  v6 = v3;
  v9[0] = v4;
  v9[1] = v5;
  sub_2211550(v3, (__int64)v9);
  v7 = sub_227D600(v6);
  return sub_227D090(v7, (unsigned int)(a2 - *(_DWORD *)(a1 + 24)));
}
