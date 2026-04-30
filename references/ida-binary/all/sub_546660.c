__int64 __fastcall sub_546660(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *a3;
  *a3 = 0;
  *a2 = v3;
  v4 = a3[1];
  a3[1] = 0;
  a2[1] = v4;
  result = a3[2];
  a3[2] = 0;
  a2[2] = result;
  return result;
}
