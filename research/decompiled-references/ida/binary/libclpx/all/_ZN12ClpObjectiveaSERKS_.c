__int64 __fastcall ClpObjective::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = a1;
  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 16) = v3;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  }
  return result;
}

