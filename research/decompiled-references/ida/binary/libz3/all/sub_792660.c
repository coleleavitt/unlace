__int64 __fastcall sub_792660(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 8368);
  if ( result )
  {
    v3 = ***(unsigned int ***)(a2 + 64);
    if ( (unsigned int)v3 >= *(_DWORD *)(result - 4) )
      return 0;
    else
      return *(_QWORD *)(result + 8 * v3);
  }
  return result;
}

