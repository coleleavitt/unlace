bool __fastcall sub_953530(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1184LL);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 - 4) != 0;
  return result;
}

