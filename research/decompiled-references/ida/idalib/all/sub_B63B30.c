__int64 __fastcall sub_B63B30(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rdx
  _DWORD *v4; // rdx

  v1 = *(_DWORD **)(a1 + 32);
  result = (**(_DWORD **)(a1 + 24) >> 14) & 0x1F;
  if ( v1 )
    result = (*v1 >> 14) & 0x1F | (unsigned int)result;
  v3 = *(_DWORD **)(a1 + 40);
  if ( v3 )
    result = (*v3 >> 14) & 0x1F | (unsigned int)result;
  if ( !*(_DWORD *)(a1 + 16) )
  {
    v4 = *(_DWORD **)(a1 + 48);
    if ( v4 )
      return (*v4 >> 14) & 0x1F | (unsigned int)result;
  }
  return result;
}
