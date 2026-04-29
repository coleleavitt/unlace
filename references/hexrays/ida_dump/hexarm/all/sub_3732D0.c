__int64 __fastcall sub_3732D0(int a1)
{
  char v1; // al
  __int64 v2; // rdx
  unsigned __int64 v3; // rax

  v1 = getinf(57);
  v2 = 260;
  v3 = v1 & 0xF;
  LOBYTE(v3) = _bittest64(&v2, v3);
  LOBYTE(v2) = a1 == 112;
  return (unsigned int)v2 & (unsigned int)v3;
}
