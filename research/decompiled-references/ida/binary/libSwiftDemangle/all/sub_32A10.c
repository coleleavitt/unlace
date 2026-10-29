__int64 __fastcall sub_32A10(void *dest, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v5; // rdi
  unsigned __int64 v6; // rax
  _QWORD v9[7]; // [rsp+18h] [rbp-38h] BYREF

  v9[2] = __readfsqword(0x28u);
  v5 = (char *)v9;
  do
  {
    *--v5 = a0123456789[a3 % 0xA];
    v6 = a3;
    a3 /= 0xAu;
  }
  while ( v6 > 9 );
  if ( (char *)v9 - v5 > a2 )
    return 0xFFFFFFFFLL;
  memcpy(dest, (char *)&v9[4] - ((char *)v9 - v5), (char *)v9 - v5);
  return (unsigned int)((char *)v9 - v5);
}

