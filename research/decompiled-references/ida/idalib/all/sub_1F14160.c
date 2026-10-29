__int64 __fastcall sub_1F14160(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 result; // rax

  v6 = *(_DWORD *)(a1 + 9384);
  if ( v6 == 1 )
  {
    sub_1F10680((std::_V2 *)(a1 - 24));
    v6 = *(_DWORD *)(a1 + 9384);
  }
  result = (unsigned int)(v6 - 1);
  *(_DWORD *)(a1 + 9384) = result;
  if ( !(_DWORD)result )
    return sub_1ED6E50(a1 - 24, a2, a3, a4, a5, a6);
  return result;
}
