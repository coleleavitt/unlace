__int64 __fastcall find_selector(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  result = a1;
  v2 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL);
  v3 = *(_QWORD **)(v2 + 24);
  v4 = &v3[2 * *(_QWORD *)(v2 + 32)];
  if ( v3 != v4 )
  {
    while ( a1 != v3[1] )
    {
      v3 += 2;
      if ( v4 == v3 )
        return result;
    }
    return *v3;
  }
  return result;
}
