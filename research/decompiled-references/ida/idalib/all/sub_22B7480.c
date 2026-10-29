__int64 __fastcall sub_22B7480(__int64 *a1)
{
  __int64 v1; // rax
  char v3; // [rsp+Fh] [rbp-19h] BYREF
  __int64 v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = *a1;
  v3 = 45;
  v4[0] = v1;
  v4[1] = a1[1];
  sub_2246AB0(v4, &v3, 1u, 0);
  return v4[0];
}
