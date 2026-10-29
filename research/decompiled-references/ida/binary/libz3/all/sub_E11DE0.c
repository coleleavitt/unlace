__int64 __fastcall sub_E11DE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = *a3;
  *(_QWORD *)(a1 + 32) = *a3;
  return result;
}

