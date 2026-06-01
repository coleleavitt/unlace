__int64 __fastcall sub_3685E0(__int64 a1, __int64 a2)
{
  _DWORD *next_func; // rax

  next_func = (_DWORD *)get_next_func(*(unsigned int *)(a1 + 8));
  if ( next_func )
    *(_DWORD *)(a2 + 8) = *next_func;
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

