__int64 __fastcall sub_B62970(__int64 a1)
{
  _DWORD *v1; // rax
  int v2; // edx

  v1 = *(_DWORD **)(a1 + 32);
  if ( v1 )
    v2 = (*v1 >> 14) & 0x1F;
  else
    v2 = 0;
  return v2
       | ((unsigned __int8)(**(_DWORD **)(a1 + 16) >> 14) | (unsigned __int8)(**(_DWORD **)(a1 + 24) >> 14)) & 0x1Fu;
}
