__int64 __fastcall sub_2198410(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 32) = _byteswap_uint64(*(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 40) = _byteswap_uint64(*(_QWORD *)(a1 + 40));
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(*(_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 52) = _byteswap_ulong(*(_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 56) = _byteswap_ulong(*(_DWORD *)(a1 + 56));
  *(_DWORD *)(a1 + 60) = _byteswap_ulong(*(_DWORD *)(a1 + 60));
  *(_DWORD *)(a1 + 64) = _byteswap_ulong(*(_DWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 68) = _byteswap_ulong(*(_DWORD *)(a1 + 68));
  result = _byteswap_ulong(*(_DWORD *)(a1 + 72));
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
