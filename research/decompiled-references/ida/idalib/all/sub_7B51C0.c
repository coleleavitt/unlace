__int64 __fastcall sub_7B51C0(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int *v3; // rax

  v2 = *(unsigned __int8 *)(a1 + 5881);
  v3 = (unsigned int *)(a2 + v2 + 5);
  if ( *(unsigned __int16 *)(a2 + 1) - 3 == v2 )
    return *(unsigned __int8 *)v3;
  if ( (*(_BYTE *)(a1 + 6016) & 2) != 0 )
    return _byteswap_ulong(*v3);
  return swap64(*(_QWORD *)v3);
}
