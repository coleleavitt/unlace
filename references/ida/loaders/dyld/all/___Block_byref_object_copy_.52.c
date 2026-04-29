__n128 __fastcall __Block_byref_object_copy__52(__int64 a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q1
  __int128 v4; // q2

  result = *(__n128 *)(a2 + 40);
  v3 = *(_OWORD *)(a2 + 56);
  v4 = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 72) = v4;
  *(_OWORD *)(a1 + 56) = v3;
  *(__n128 *)(a1 + 40) = result;
  return result;
}
