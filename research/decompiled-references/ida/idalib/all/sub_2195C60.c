unsigned __int64 __fastcall sub_2195C60(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int32 v6; // edx
  __int64 v7; // rsi

  if ( (unsigned __int64)a2 < sub_215DEC0(a1) || (v2 = sub_215DEC0(a1), (unsigned __int64)(a2 + 2) > v3 + v2) )
    sub_2221C70("Malformed MachO file.", 1);
  v4 = *(unsigned int *)(a1 + 8);
  result = *(_QWORD *)a2;
  v6 = _byteswap_ulong(*a2);
  if ( (unsigned int)v4 <= 0x14 )
  {
    v7 = 1398784;
    if ( _bittest64(&v7, v4) )
      return v6 | result & 0xFFFF00000000LL | (((HIWORD(result) << 8) | ((int)HIWORD(result) >> 8)) << 48);
  }
  return result;
}
