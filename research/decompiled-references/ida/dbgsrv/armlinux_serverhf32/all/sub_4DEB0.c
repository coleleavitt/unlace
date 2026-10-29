/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DEB0
// Address: 0x0004DEB0

//----- (0004DEB0) --------------------------------------------------------
int __fastcall sub_4DEB0(int a1, int a2, char a3)
{
  int v7; // r3
  char *v8; // r1
  int v9; // r2
  char *v10; // r0
  unsigned int v11; // r5
  unsigned __int8 *v12; // r2
  int v13; // t1
  char *v14; // r1
  _DWORD *v15; // r0
  char v16[4]; // [sp+0h] [bp-38h]
  char v17[4]; // [sp+0h] [bp-38h]
  _DWORD s[8]; // [sp+14h] [bp-24h] BYREF

  sub_4CC60(a1);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 612) = a2;
    *(_BYTE *)(a1 + 644) = 1;
    return 0;
  }
  v7 = *(_DWORD *)(a1 + 612);
  *(_BYTE *)(a1 + 644) = 0;
  if ( !v7 )
  {
    v15 = sub_805CC(0x1Cu);
    *(_DWORD *)(a1 + 612) = v15;
    v15[4] = 1065353216;
    v15[2] = 0;
    v15[3] = 0;
    v15[5] = 0;
    v15[6] = 0;
    *v15 = v15 + 6;
    v15[1] = 1;
  }
  if ( !sub_4DE7C(a1, &off_CFAF0) )
    return sub_70A10();
  if ( !byte_D3BA1 && (a3 & 1) == 0 )
    return 0;
  if ( !sub_4DE7C(a1, &off_CFD68) )
    return sub_70A10();
  if ( !byte_D3BA1 )
    return 0;
  v9 = dword_D2D48;
  if ( dword_D2D48 == -1 )
  {
    dword_D2D48 = (unsigned __int8)((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(
                                     0x35u,
                                     v8,
                                     -1,
                                     (int)callui,
                                     *(int *)v16);
    ((void (__fastcall *)(unsigned int, char *, int, int, int))callui)(
      0x34u,
      (char *)dword_D3A94,
      32,
      (int)callui,
      *(int *)v17);
    v9 = dword_D2D48;
  }
  if ( v9 )
  {
    sub_4DCB4(a1, "__QT__", "1", 0, 0, nullptr);
    sub_4DCB4(a1, "__GUI__", "1", 0, 0, nullptr);
  }
  else
  {
    sub_4DCB4(a1, "__TXT__", "1", 0, 0, nullptr);
  }
  sub_4DCB4(a1, "__IDA_VERSION__", (const char *)dword_D3A94, 0, 0, nullptr);
  s[0] = dword_D3A94[0];
  s[1] = dword_D3A94[1];
  s[2] = dword_D3A94[2];
  s[3] = dword_D3A94[3];
  s[4] = dword_D3AA4[0];
  s[5] = dword_D3AA4[1];
  s[6] = dword_D3AA4[2];
  s[7] = dword_D3AA4[3];
  v10 = strchr((const char *)s, 46);
  if ( v10 )
  {
    v11 = (unsigned int)(v10 + 1);
    v12 = (unsigned __int8 *)(v10 + 1);
    do
    {
      v13 = *v12++;
      v14 = v10;
      *v10++ = v13;
    }
    while ( v13 );
    if ( (unsigned int)&v12[~v11] <= 1 )
    {
      v14[1] = 0;
      *v14 = 48;
    }
  }
  sub_4DCB4(a1, "__IDAVER__", (const char *)s, 0, 0, nullptr);
  return 0;
}
// 4DF3C: variable 'v8' is possibly undefined
// 4DF3C: variable 'v16' is possibly undefined
// 4DF50: variable 'v17' is possibly undefined
// CFAF0: using guessed type char *off_CFAF0;
// CFD68: using guessed type char *off_CFD68;
// D2D48: using guessed type int dword_D2D48;
// D3924: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D3A94: using guessed type int dword_D3A94[4];
// D3AA4: using guessed type int dword_D3AA4[4];
// D3BA1: using guessed type char byte_D3BA1;
