__int64 __fastcall sub_1B10(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  unsigned int v3; // eax

  v1 = *(_BYTE *)(a1 + 16) == 7;
  *(_DWORD *)a1 = _byteswap_ulong(*(_DWORD *)a1);
  *(_DWORD *)(a1 + 4) = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  result = _byteswap_ulong(*(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 8) = result;
  if ( v1 )
  {
    v3 = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a1 + 18) = __ROL2__(*(_WORD *)(a1 + 18), 8);
    result = _byteswap_ulong(v3);
    *(_DWORD *)(a1 + 12) = result;
  }
  else
  {
    *(_WORD *)(a1 + 12) = __ROL2__(*(_WORD *)(a1 + 12), 8);
    *(_WORD *)(a1 + 14) = __ROL2__(*(_WORD *)(a1 + 14), 8);
    *(_WORD *)(a1 + 18) = __ROL2__(*(_WORD *)(a1 + 18), 8);
  }
  return result;
}

