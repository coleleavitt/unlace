__int64 __fastcall sub_368120(__int64 a1, __int64 a2)
{
  _DWORD *prev_fchunk; // rax

  prev_fchunk = (_DWORD *)get_prev_fchunk(*(unsigned int *)(a1 + 8));
  if ( prev_fchunk )
    *(_DWORD *)(a2 + 8) = *prev_fchunk;
  else
    *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

