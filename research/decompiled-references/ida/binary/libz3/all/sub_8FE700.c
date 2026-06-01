char __fastcall sub_8FE700(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = *(_BYTE *)(v1 + 50);
  if ( result )
    return *(_DWORD *)(v1 + 40) != 2;
  return result;
}

