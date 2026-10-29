unsigned __int64 __fastcall sub_1091D20(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx

  v3 = 0;
  if ( a2 <= 4 )
  {
    v4 = dword_2590E70[a2];
    if ( v4 >= 0 )
    {
      v2 = (unsigned int)v4;
      v3 = 1;
    }
  }
  return (v3 << 32) | v2 & 0xFFFFFF00FFFFFFFFLL;
}
