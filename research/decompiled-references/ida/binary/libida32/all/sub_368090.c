__int64 __fastcall sub_368090(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 fchunk; // rax

  v2 = *(_DWORD *)(a1 + 40);
  fchunk = get_fchunk(*(unsigned int *)(a1 + 8));
  *(_DWORD *)(a2 + 8) = (unsigned __int8)set_tail_owner(fchunk, v2);
  return 0;
}

