bool __fastcall sub_2FBDB0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 592);
  result = 1;
  if ( v1 )
    return *(_DWORD *)(v1 - 4) == 0;
  return result;
}

