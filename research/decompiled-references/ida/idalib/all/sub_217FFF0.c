__int64 __fastcall sub_217FFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-10h] BYREF

  v4 = sub_2195B10(a1, a2, a3, a4);
  sub_2220500(&v7, 3, v4);
  v5 = v7;
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v5;
  return a1;
}
