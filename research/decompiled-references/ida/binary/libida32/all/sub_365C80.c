__int64 __fastcall sub_365C80(__int64 a1, __int64 a2)
{
  _DWORD *func; // rax

  func = (_DWORD *)get_func(*(unsigned int *)(a1 + 8));
  if ( func )
    *(_DWORD *)(a2 + 8) = *func;
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

