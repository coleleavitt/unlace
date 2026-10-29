__int64 __fastcall sub_B73F60(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 41 <= 1 )
    return *(unsigned int *)(a1 + 136);
  v2 = sub_B73ED0(a1);
  result = 0;
  if ( v2 )
    return *(unsigned int *)(v2 + 8);
  return result;
}
