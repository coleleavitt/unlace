__int64 __fastcall sub_489FE0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = a1[3];
  a1[3] = a2[3];
  v3 = a2[4];
  a2[3] = v2;
  v4 = a1[4];
  a1[4] = v3;
  v5 = *a2;
  a2[4] = v4;
  v6 = *a1;
  v7 = a1[1];
  result = a1[2];
  *a1 = v5;
  a1[1] = a2[1];
  a1[2] = a2[2];
  *a2 = v6;
  a2[1] = v7;
  a2[2] = result;
  return result;
}
