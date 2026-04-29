__int64 __fastcall sub_11CEE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_11C7E0(a1);
  *(_BYTE *)a1 = 11;
  result = qstrdup(a2);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
