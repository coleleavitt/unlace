__int64 __fastcall sub_1837800(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = a1[5];
  a1[5] = (__int64)a2;
  result = sub_BEB170(a1, a2);
  a1[5] = v2;
  return result;
}
