__int64 *__fastcall __Block_byref_object_copy__9(__int64 a1, __int64 a2)
{
  __int64 *v2; // x1
  __int64 *result; // x0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // x8

  v2 = (__int64 *)(a2 + 40);
  *(_OWORD *)(a1 + 40) = 0u;
  result = (__int64 *)(a1 + 40);
  *((_OWORD *)result + 1) = 0u;
  if ( result != v2 )
  {
    v4 = *result;
    *result = *v2;
    *v2 = v4;
    v6 = result[1];
    v5 = result[2];
    v7 = v2[2];
    result[1] = v2[1];
    result[2] = v7;
    v2[2] = v5;
    v8 = result[3];
    result[3] = v2[3];
    v2[3] = v8;
    v2[1] = v6;
  }
  return result;
}
