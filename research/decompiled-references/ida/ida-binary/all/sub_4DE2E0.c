__int64 __fastcall sub_4DE2E0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = *a1;
  *a1 = *a2;
  v3 = a2[1];
  *a2 = v2;
  v4 = a1[1];
  a1[1] = v3;
  v5 = a2[2];
  a2[1] = v4;
  result = a1[2];
  a1[2] = v5;
  a2[2] = result;
  return result;
}
