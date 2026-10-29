__int64 __fastcall sub_7B72C0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax

  if ( a2 == -1 )
    return -1;
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 60) = a3;
    *(_WORD *)(a1 + 53) = 6;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v4 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a3;
    *(_QWORD *)(a1 + 56) = v4;
  }
  return sub_7B5210(a1, a3, a2, 1);
}
