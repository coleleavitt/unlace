bool __fastcall sub_FBFF90(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // r8d
  unsigned __int64 v5; // rdi
  int v6; // ecx
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rax

  v3 = a1;
  v4 = a2;
  v5 = HIDWORD(a1);
  v6 = 1;
  v7 = HIDWORD(a2);
  v8 = &off_2B4D460;
  do
  {
    if ( v3 == v8[3]
      && (((unsigned int)v5 ^ v8[4]) & 0x7FFFFFFF) == 0
      && ((v4 ^ v8[5]) & 0x7FFFFFFF) == 0
      && (((unsigned int)v7 ^ v8[6]) & 0x7FFFFFFF) == 0 )
    {
      break;
    }
    v8 += 8;
    v6 = v8[2];
  }
  while ( v6 );
  if ( a3 )
    return v6 > 7;
  else
    return v6 > 5;
}
