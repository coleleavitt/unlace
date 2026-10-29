bool __fastcall sub_78EE90(__int64 a1)
{
  _QWORD *v1; // rdx
  bool result; // al

  v1 = *(_QWORD **)(a1 + 1544);
  result = 0;
  if ( *v1 )
    return *(_DWORD *)(v1[1] + 1620LL) == 0;
  return result;
}

