unsigned __int64 __fastcall sub_2195FC0(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned __int32 v7; // esi
  unsigned int v8; // ecx
  unsigned __int32 v9; // r8d
  unsigned __int32 v10; // r9d

  if ( (unsigned __int64)a2 < sub_215DEC0(a1) || (v4 = sub_215DEC0(a1), (unsigned __int64)(a2 + 3) > v5 + v4) )
    sub_2195DF0();
  v6 = *a2;
  v7 = a2[1];
  v8 = *(_DWORD *)(a1 + 8);
  v9 = _byteswap_ulong(*a2);
  v10 = _byteswap_ulong(a2[1]);
  if ( v8 <= 0x14 && ((0x155800uLL >> v8) & 1) != 0 )
  {
    v7 = v10;
    v6 = v9;
  }
  return __PAIR64__(v7, v6);
}
