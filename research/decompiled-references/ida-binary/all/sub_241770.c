_BOOL8 __fastcall sub_241770(__int64 a1, double a2)
{
  _BOOL4 v2; // ebp
  __int64 v4; // rax
  __int64 func; // rax

  v2 = 0;
  if ( !*(_DWORD *)a1 )
    return v2;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
    return (_BOOL4)*(unsigned __int8 *)(a1 + 377);
  v4 = sub_241540((unsigned int *)a1, a2);
  func = get_func(v4);
  if ( func )
    v2 = (*(_BYTE *)(func + 16) & 4) != 0;
  *(_DWORD *)(a1 + 4) |= 8u;
  *(_BYTE *)(a1 + 377) = v2;
  return v2;
}
