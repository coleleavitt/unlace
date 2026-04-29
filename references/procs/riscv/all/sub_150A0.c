bool __fastcall sub_150A0(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 dtype_size; // rax

  if ( *(_WORD *)(a2 + 24) != *(_WORD *)(a1 + 24) )
    return 0;
  if ( *(_BYTE *)(a2 + 41) == *(_BYTE *)(a1 + 41) )
  {
    v3 = *(_BYTE *)(a1 + 81);
    if ( *(_BYTE *)(a2 + 81) == v3
      && *(_BYTE *)(a2 + 85) == *(_BYTE *)(a1 + 85)
      && (v3 != 4 || *(_WORD *)(a2 + 86) == *(_WORD *)(a1 + 86)) )
    {
      dtype_size = get_dtype_size();
      if ( *(unsigned __int16 *)(a2 + 46) == *(unsigned __int16 *)(a1 + 46) + 1 )
        return *(_QWORD *)(a1 + 96) + dtype_size == *(_QWORD *)(a2 + 96);
    }
  }
  return 0;
}
