__int64 __fastcall sub_36EC40(__int64 a1)
{
  int v1; // ebx
  char v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = *(_DWORD *)(a1 + 72);
  v2 = getinf(57);
  v3 = 260;
  v4 = v2 & 0xF;
  LOBYTE(v4) = _bittest64(&v3, v4);
  LOBYTE(v3) = v1 == 112;
  return (unsigned int)v3 & (unsigned int)v4;
}
