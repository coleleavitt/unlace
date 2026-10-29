__int64 __fastcall sub_7670C0(unsigned int a1, unsigned int a2)
{
  _BYTE *v2; // rdx
  unsigned int v3; // ecx
  char *v4; // r9
  unsigned int v5; // ecx
  char *v6; // rsi
  _BYTE *v7; // rdi
  _BYTE *v8; // rax
  unsigned int v10; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v11[63]; // [rsp+10h] [rbp-58h] BYREF
  char v12; // [rsp+4Fh] [rbp-19h] BYREF
  char v13; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v2 = v11;
  do
  {
    *v2++ = a1 % 0x1A + 65;
    v3 = a1;
    a1 /= 0x1Au;
  }
  while ( v3 > 0x19 );
  if ( a2 )
  {
    v4 = &v13;
    do
    {
      *--v4 = a2 % 0xA + 48;
      v5 = a2;
      a2 /= 0xAu;
    }
    while ( v5 > 9 );
    v6 = v4;
    v7 = v2;
    do
      *v7++ = *v6++;
    while ( v6 < &v13 );
    v8 = (_BYTE *)(&v12 - v4);
    if ( &v13 < v4 + 1 )
      LODWORD(v8) = 0;
    LODWORD(v2) = (_DWORD)v2 + (_DWORD)v8 + 1;
  }
  sub_76FC00(&v10, v11, (unsigned int)v2 - (unsigned int)v11);
  return v10;
}
