_BOOL8 __fastcall sub_12958E0(__int64 a1)
{
  unsigned int v1; // ecx
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 1;
  if ( v1 <= 0x26 )
    return ((1LL << v1) & 0x7879A0001ELL) == 0;
  return result;
}
