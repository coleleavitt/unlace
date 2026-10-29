__int64 __fastcall sub_17FBF0(__int64 a1, unsigned __int8 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  bool v4; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 1760);
  v3 = ((unsigned __int8)v2 | a2) & 1;
  v4 = (v2 & 0x100) == 0;
  result = 0;
  if ( v4 )
    return v3;
  return result;
}

