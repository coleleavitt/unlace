bool __fastcall sub_1466830(__int64 a1)
{
  int v1; // ecx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 32);
  result = 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(v1 - 1) + 16) == 2 )
    return *(_DWORD *)(a1 + 36) != v1;
  return result;
}
