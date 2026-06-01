__int64 __fastcall sub_4C40(__int64 a1, __int64 a2, char a3)
{
  unsigned __int32 v3; // eax
  __int64 result; // rax

  if ( a3 )
  {
    *(_QWORD *)a2 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
    v3 = _byteswap_ulong(*(_DWORD *)a1);
  }
  else
  {
    *(_QWORD *)a2 = *(unsigned int *)(a1 + 4);
    v3 = *(_DWORD *)a1;
  }
  *(_DWORD *)(a2 + 8) = v3;
  *(_BYTE *)(a2 + 12) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a2 + 13) = *(_BYTE *)(a1 + 9);
  *(_BYTE *)(a2 + 14) = *(_BYTE *)(a1 + 10);
  result = *(unsigned __int8 *)(a1 + 11);
  *(_BYTE *)(a2 + 15) = result;
  return result;
}

