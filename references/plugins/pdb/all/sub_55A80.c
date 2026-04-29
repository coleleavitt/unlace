__int64 __fastcall sub_55A80(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = a2[1];
  if ( result != 1 )
  {
    v3 = *(unsigned int *)(*a2 + 4 * result - 4);
    *(_DWORD *)(*(_QWORD *)(*a1 + 8 * v3) + 68LL) = ((__int64)(a1[1] - *a1) >> 3) - 1 - v3;
    result = a2[1];
    if ( result )
      a2[1] = --result;
  }
  return result;
}
