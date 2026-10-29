__int64 __fastcall sub_368180(__int64 a1, __int64 a2)
{
  __int64 func; // rdi
  int v3; // eax

  func = get_func(*(unsigned int *)(a1 + 8));
  v3 = -1;
  if ( func )
    v3 = sub_5A0B20();
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

