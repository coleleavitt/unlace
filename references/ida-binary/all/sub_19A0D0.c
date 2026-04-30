__int64 __fastcall sub_19A0D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = get_current_extlang();
  v2 = result;
  if ( (*(_BYTE *)(result + 8) & 1) == 0 )
    result = sub_199E60(a1, *(const char **)(result + 16));
  if ( v2 )
    --*(_DWORD *)(v2 + 12);
  return result;
}
