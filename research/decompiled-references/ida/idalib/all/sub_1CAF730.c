__int64 __fastcall sub_1CAF730(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( !a2 )
    return sub_BC97E0(a1, a2);
  if ( ((*(_WORD *)a2 + 509) & 0x1FFu) > 0x7E )
    return sub_BC97E0(a1, a2);
  result = *((unsigned __int8 *)a1 + 16);
  if ( !(_BYTE)result || (*(_DWORD *)a2 & 0x10000) != 0 )
    return sub_BC97E0(a1, a2);
  return result;
}
