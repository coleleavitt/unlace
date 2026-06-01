bool __fastcall sub_F57EA0(__int64 a1)
{
  __int64 v1; // rax
  char v3[9]; // [rsp+Fh] [rbp-9h] BYREF

  v3[0] = 1;
  v1 = sub_F567A0(v3, a1);
  return v1 && (unsigned int)*(unsigned __int8 *)(v1 + 16) - 25 <= 1;
}
