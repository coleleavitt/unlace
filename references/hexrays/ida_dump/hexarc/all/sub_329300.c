__int64 __fastcall sub_329300(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  result = 1;
  if ( *(_QWORD *)(a1 + 8) <= v2 )
    return (unsigned int)-(*(_QWORD *)(a1 + 8) < v2);
  return result;
}
