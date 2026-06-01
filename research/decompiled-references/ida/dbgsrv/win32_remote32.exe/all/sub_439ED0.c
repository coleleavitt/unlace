/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439ED0
// Address: 0x00439ED0

//----- (00439ED0) --------------------------------------------------------
int __usercall sub_439ED0@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, int a3, const char **a4)
{
  void *v5; // [esp+4h] [ebp-44h] BYREF
  int v6; // [esp+8h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-3Ch]
  void *v8; // [esp+10h] [ebp-38h]
  int v9; // [esp+14h] [ebp-34h]
  int v10; // [esp+18h] [ebp-30h]
  void *v11; // [esp+1Ch] [ebp-2Ch]
  int v12; // [esp+20h] [ebp-28h]
  int v13; // [esp+24h] [ebp-24h]
  int (__usercall *v14)@<eax>(int@<ebx>, __m128i@<xmm0>, char *, ...); // [esp+28h] [ebp-20h]
  char v15; // [esp+2Ch] [ebp-1Ch]
  void *v16; // [esp+30h] [ebp-18h] BYREF
  int v17; // [esp+34h] [ebp-14h]
  int v18; // [esp+38h] [ebp-10h]
  int v19; // [esp+44h] [ebp-4h]

  sub_428330(a1, a2);
  dword_4B6C0C = sub_456280();
  if ( dword_4B6C0C && sub_414210(a2) )
  {
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    if ( sub_4560B0("IDA_DBGSRV_PASSWD", &v16) )
      sub_403330((int)&dword_4B6C60, (unsigned int *)&v16);
    sub_44D450(a1, a2, "IDA Windows 32-bit remote debug server(MT) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    byte_4B6C6C = byte_4B6C78;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v14 = sub_44D450;
    v15 = 1;
    LOBYTE(v19) = 1;
    sub_44CAF0((int)&v5, 1);
    sub_460A10((int)&v5, (__int128 *)&dword_48D3A0, 1);
    if ( byte_4B6C6C )
      sub_460A10((int)&v5, (__int128 *)"k", 2);
    sub_460A80(a2, &v5, a3, a4, (int)&dword_4B6C18);
    sub_44D210(&dword_4B6C18);
    sub_44CB20((int)&dword_4B6C18, a2);
    LOBYTE(v19) = 2;
    if ( v11 )
    {
      v12 = 0;
      sub_453A20(v11);
      v11 = nullptr;
      v13 = 0;
    }
    LOBYTE(v19) = 3;
    if ( v8 )
    {
      v9 = 0;
      sub_453A20(v8);
      v8 = nullptr;
      v10 = 0;
    }
    LOBYTE(v19) = 4;
    if ( v5 )
    {
      v6 = 0;
      sub_453A20(v5);
      v5 = nullptr;
      v7 = 0;
    }
    v19 = 5;
    if ( v16 )
    {
      v17 = 0;
      sub_453A20(v16);
    }
    return 0;
  }
  else
  {
    sub_44D450(a1, a2, "Could not initialize subsystem!");
    return -1;
  }
}
// 48D3A0: using guessed type int dword_48D3A0;
// 4B6C18: using guessed type int dword_4B6C18;
// 4B6C60: using guessed type int dword_4B6C60;
// 4B6C6C: using guessed type char byte_4B6C6C;
// 4B6C78: using guessed type char byte_4B6C78;
