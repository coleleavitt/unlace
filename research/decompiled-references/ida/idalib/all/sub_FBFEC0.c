__int64 __fastcall sub_FBFEC0(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // ecx
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int *v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 result; // rax

  v2 = a1;
  v3 = a2;
  v4 = HIDWORD(a1);
  v5 = (unsigned int *)&off_2B4D460;
  v6 = HIDWORD(a2);
  result = 1;
  do
  {
    if ( v5[3] == v2
      && (((unsigned int)v4 ^ v5[4]) & 0x7FFFFFFF) == 0
      && ((v3 ^ v5[5]) & 0x7FFFFFFF) == 0
      && (((unsigned int)v6 ^ v5[6]) & 0x7FFFFFFF) == 0 )
    {
      break;
    }
    v5 += 8;
    result = v5[2];
  }
  while ( (_DWORD)result );
  return result;
}
