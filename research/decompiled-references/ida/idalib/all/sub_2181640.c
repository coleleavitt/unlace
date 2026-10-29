unsigned __int64 __fastcall sub_2181640(__int64 a1, __int64 a2)
{
  unsigned __int8 (*v2)(void); // rax
  char v3; // al

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 248LL);
  if ( (char *)v2 == (char *)sub_21814F0 )
  {
    v3 = _byteswap_uint64(*(_QWORD *)(a2 + 8));
    if ( (v3 & 2) != 0 && ((v3 & 4) != 0 || (v3 & 1) == 0) )
      return 0;
  }
  else if ( v2() )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 4) != 0x8000000 )
    return (_byteswap_uint64(*(_QWORD *)(a2 + 8)) >> 1) & 1;
  return 0;
}
