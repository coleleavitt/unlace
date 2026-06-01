__int64 __fastcall sub_2AA500(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0;
  if ( a2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 440);
    if ( (unsigned __int64)a2 < *(_QWORD *)(v3 + 24) )
      return *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL * a2 + 8);
  }
  return result;
}
