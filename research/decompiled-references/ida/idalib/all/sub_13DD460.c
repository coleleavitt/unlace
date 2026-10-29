__int64 __fastcall sub_13DD460(int a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // eax

  v1 = (unsigned int)(a1 - 45);
  if ( (unsigned __int8)(a1 - 45) > 0x38u || (v2 = 0x100000001001FFBLL, result = 1, !_bittest64(&v2, v1)) )
  {
    v4 = a1 & 0xFFFFFFDF;
    LOBYTE(v4) = (a1 & 0xDF) == 70;
    LOBYTE(v1) = (_BYTE)a1 == 43;
    return (unsigned int)v1 | v4;
  }
  return result;
}
