bool __fastcall sub_893ED0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 48);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 - 4) != 0;
  return result;
}

