__int64 __fastcall sub_7787B0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v2 = *a2;
  if ( *a2 != -1 )
  {
    v3 = qword_2CD44D8;
    if ( v2 < *(_QWORD *)(a1 + 56) )
    {
      v4 = a2[1];
      v5 = *(_QWORD *)(a1 + 48) + 176 * v2;
      if ( v4 < *(_QWORD *)(v5 + 32) )
        return *(_QWORD *)(*(_QWORD *)(v5 + 24) + 9 * v4);
    }
    return v3;
  }
  if ( a2[1] )
    return qword_2CD44D8;
  return qword_2CD44F8;
}
