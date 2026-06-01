__int64 __fastcall sub_368150(__int64 a1, __int64 a2)
{
  _DWORD *next_fchunk; // rax

  next_fchunk = (_DWORD *)get_next_fchunk(*(unsigned int *)(a1 + 8));
  if ( next_fchunk )
    *(_DWORD *)(a2 + 8) = *next_fchunk;
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

