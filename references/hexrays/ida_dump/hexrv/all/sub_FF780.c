bool __fastcall sub_FF780(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 v3; // cl
  bool result; // al

  v2 = *(_BYTE *)(a1 + 8);
  v3 = *(_BYTE *)(a2 + 8);
  result = 1;
  if ( v2 >= v3 )
  {
    result = 0;
    if ( v3 >= v2 )
      return *(_QWORD *)a1 < *(_QWORD *)a2;
  }
  return result;
}
