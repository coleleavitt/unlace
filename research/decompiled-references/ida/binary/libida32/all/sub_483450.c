__int64 __fastcall sub_483450(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( a1[2] < (unsigned __int64)(v1 + 1) )
  {
    v4 = qvector_reserve(a1, v2, v1 + 1, 24);
    v1 = a1[1];
    *a1 = v4;
    v2 = v4;
  }
  result = v2 + 24 * v1;
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  ++a1[1];
  return result;
}

