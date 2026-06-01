bool __fastcall sub_6EE910(__int64 a1)
{
  bool result; // al

  result = *(_BYTE *)(a1 + 112) & 1;
  if ( !result )
    return *(_QWORD *)(a1 + 112) != 0;
  return result;
}
