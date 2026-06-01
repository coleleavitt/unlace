char __fastcall sub_3B7720(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx

  result = 0;
  if ( (_DWORD)a2 != -1 )
  {
    v3 = *(_QWORD *)(a1 + 1480);
    if ( (_DWORD)a2 == *(_DWORD *)(v3 + 1196) )
    {
      return *(_BYTE *)(v3 + 1200);
    }
    else
    {
      *(_DWORD *)(v3 + 1196) = a2;
      result = rangeset_t_find_range(v3 + 1112, a2) != 0;
      *(_BYTE *)(v3 + 1200) = result;
    }
  }
  return result;
}

