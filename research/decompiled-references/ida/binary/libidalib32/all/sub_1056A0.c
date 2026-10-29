__int64 __fastcall sub_1056A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = sub_105590(a1, a2, 2);
  if ( (unsigned int)result <= 3 )
  {
    v3 = *(_QWORD *)a2;
    if ( *(_DWORD *)(a2 + 8) != 49 )
      return 6;
    if ( !v3 )
      return 6;
    result = 2;
    if ( !*(_QWORD *)(v3 + 2520) )
      return 6;
  }
  return result;
}

