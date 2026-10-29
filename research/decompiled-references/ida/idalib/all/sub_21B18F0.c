unsigned __int64 __fastcall sub_21B18F0(_DWORD *a1, __int64 a2)
{
  unsigned __int8 (*v2)(void); // rax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
  {
    if ( a1[2] != 12 )
      return _byteswap_ulong(*(_DWORD *)(a2 + 16));
  }
  else if ( !v2() )
  {
    return _byteswap_ulong(*(_DWORD *)(a2 + 16));
  }
  return _byteswap_uint64(*(_QWORD *)(a2 + 24));
}
