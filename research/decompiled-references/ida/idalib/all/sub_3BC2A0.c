char __fastcall sub_3BC2A0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx

  result = 0;
  if ( a2 != -1 )
  {
    v3 = *(_QWORD *)(a1 + 1672);
    if ( a2 == *(_QWORD *)(v3 + 1208) )
    {
      return *(_BYTE *)(v3 + 1216);
    }
    else
    {
      *(_QWORD *)(v3 + 1208) = a2;
      result = rangeset_t_find_range(v3 + 1120, a2) != 0;
      *(_BYTE *)(v3 + 1216) = result;
    }
  }
  return result;
}
