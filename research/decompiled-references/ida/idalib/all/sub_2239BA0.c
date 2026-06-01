__int64 __fastcall sub_2239BA0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a2;
  *a2 = 0;
  *a1 = v2;
  a1[1] = a2[1];
  result = a2[2];
  a1[2] = result;
  a2[1] = 0;
  return result;
}
