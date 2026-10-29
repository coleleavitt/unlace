__int64 __fastcall sub_2851E0(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v4; // r9
  char v5; // al
  char *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[7]; // [rsp+18h] [rbp-38h] BYREF

  v9[4] = __readfsqword(0x28u);
  v4 = (char *)v9;
  do
  {
    --v4;
    v5 = a0123456789[a3 % 0xA];
    a3 /= 0xAu;
    *v4 = v5;
  }
  while ( a3 );
  v6 = (char *)((char *)v9 - v4);
  if ( (char *)v9 - v4 > a2 )
    return 0xFFFFFFFFLL;
  memcpy(a1, (const void *)((char *)&v8 - v6 + 24), (char *)v9 - v4);
  return (unsigned int)v6;
}

