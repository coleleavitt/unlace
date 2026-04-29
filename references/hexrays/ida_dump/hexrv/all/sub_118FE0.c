__int64 __fastcall sub_118FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1188E0(a1);
  *(_BYTE *)a1 = 11;
  result = qstrdup(a2);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
