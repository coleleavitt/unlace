bool __fastcall sub_F7C150(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)a2 == *(_QWORD *)a1
    && *(_OWORD *)(a2 + 8) == *(_OWORD *)(a1 + 8)
    && *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24)
    && *(_QWORD *)(a2 + 32) == *(_QWORD *)(a1 + 32)
    && *(_QWORD *)(a1 + 40) == *(_QWORD *)(a2 + 40) )
  {
    return *(_QWORD *)(a1 + 48) == *(_QWORD *)(a2 + 48);
  }
  return result;
}
