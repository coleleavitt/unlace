__int64 __fastcall sub_2E220(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)(result + 64) = a2;
  *(_QWORD *)(result + 40) = a3;
  return result;
}
