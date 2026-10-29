__int64 __fastcall sub_821130(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) <= 0x40u && *(_DWORD *)(a2 + 8) <= 0x40u )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    result = *(unsigned __int8 *)(a2 + 12);
    *(_BYTE *)(a1 + 12) = result;
  }
  else
  {
    sub_2585EA0(a1, a2);
    result = *(unsigned __int8 *)(a2 + 12);
    *(_BYTE *)(a1 + 12) = result;
  }
  return result;
}

