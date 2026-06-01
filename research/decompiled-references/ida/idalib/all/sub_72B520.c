__int64 __fastcall sub_72B520(__int64 *a1)
{
  __int64 *v1; // r13
  __int64 *v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax

  v1 = a1 + 13;
  v2 = a1 + 7;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = a1[14];
      v5 = a1[13];
      if ( a1[15] < (unsigned __int64)(v4 + 1) )
      {
        v6 = qvector_reserve(v1, v5, v4 + 1, 8);
        a1[13] = v6;
        v5 = v6;
        v4 = a1[14];
      }
      *(_QWORD *)(v5 + 8 * v4) = v3;
      ++a1[14];
    }
    ++v2;
  }
  while ( v2 != v1 );
  result = sub_837E00(v2);
  *a1 = result;
  return result;
}
