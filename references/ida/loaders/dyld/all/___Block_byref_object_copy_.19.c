__n128 __fastcall __Block_byref_object_copy__19(__int64 a1, __int64 a2)
{
  __n128 result; // q0

  result = *(__n128 *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(__n128 *)(a1 + 40) = result;
  return result;
}
