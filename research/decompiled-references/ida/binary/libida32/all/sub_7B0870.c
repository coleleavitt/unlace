bool __fastcall sub_7B0870(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 16) == 16 )
    return *a3 == *(_OWORD *)*(_QWORD *)(a2 + 8);
  return result;
}

