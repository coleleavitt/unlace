unsigned __int64 __fastcall sub_22989D0(__int64 a1)
{
  int v1; // esi
  unsigned __int64 result; // rax
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 48);
  result = 1;
  if ( v1 != 17 )
  {
    v3 = *(_DWORD *)(a1 + 44);
    LODWORD(v4) = 0;
    if ( v3 <= 0x27 )
    {
      result = 0x80F8008232uLL >> v3;
      v4 = (0x80F8008232uLL >> v3) & 1;
    }
    LOBYTE(result) = v1 == 49;
    return (unsigned int)v4 | (unsigned int)result;
  }
  return result;
}
