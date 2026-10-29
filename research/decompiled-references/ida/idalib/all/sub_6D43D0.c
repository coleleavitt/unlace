__int64 __fastcall sub_6D43D0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = qvector_reserve(a1, *a1, a2, 1);
  *a1 = result;
  return result;
}
