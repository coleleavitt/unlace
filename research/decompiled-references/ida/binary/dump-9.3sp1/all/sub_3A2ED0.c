bool __fastcall sub_3A2ED0(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( **(_QWORD **)(a1 + 24) == **(_QWORD **)(a2 + 24) && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32) )
    return *(_QWORD *)(a1 + 40) == *(_QWORD *)(a2 + 40);
  return result;
}
