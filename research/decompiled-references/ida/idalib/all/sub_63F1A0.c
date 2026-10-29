__int64 __fastcall sub_63F1A0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a2;
  a1[1] = 0;
  *a1 = v2;
  result = qstrdup(a2[1]);
  a1[1] = result;
  return result;
}
