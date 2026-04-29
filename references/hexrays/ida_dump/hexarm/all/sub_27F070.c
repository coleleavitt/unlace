_BOOL8 __fastcall sub_27F070(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a1 + 68) )
    return (*(_DWORD *)(a1 + 64))-- == 1;
  return result;
}
