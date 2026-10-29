_BOOL8 __fastcall sub_D11C0(__int64 a1)
{
  _BOOL4 v1; // ebp
  __int64 func; // rax

  v1 = 0;
  if ( !*(_DWORD *)a1 )
    return v1;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
    return (_BOOL4)*(unsigned __int8 *)(a1 + 229);
  sub_D0EB0(a1);
  func = get_func();
  if ( func )
    v1 = (*(_BYTE *)(func + 8) & 4) != 0;
  *(_DWORD *)(a1 + 4) |= 8u;
  *(_BYTE *)(a1 + 229) = v1;
  return v1;
}

