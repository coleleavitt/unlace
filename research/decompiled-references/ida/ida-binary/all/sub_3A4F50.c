__int64 __fastcall import_std_enum(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  _BYTE *v6; // rax

  v4 = *(unsigned __int8 *)(a1 + 8);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = (*a4 & 0x3F) == 61;
    return v4;
  }
  v6 = (_BYTE *)resolve_typedef(a2, a4);
  if ( !v6 )
    return v4;
  LOBYTE(v4) = (*v6 & 0x3F) == 45;
  return v4;
}
