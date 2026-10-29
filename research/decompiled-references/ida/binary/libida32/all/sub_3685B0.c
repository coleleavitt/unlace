__int64 __fastcall sub_3685B0(__int64 a1, __int64 a2)
{
  _DWORD *prev_func; // rax

  prev_func = (_DWORD *)get_prev_func(*(unsigned int *)(a1 + 8));
  if ( prev_func )
    *(_DWORD *)(a2 + 8) = *prev_func;
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

