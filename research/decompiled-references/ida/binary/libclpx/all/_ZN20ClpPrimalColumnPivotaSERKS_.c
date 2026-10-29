__int64 __fastcall ClpPrimalColumnPivot::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != a2 )
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  }
  return result;
}

