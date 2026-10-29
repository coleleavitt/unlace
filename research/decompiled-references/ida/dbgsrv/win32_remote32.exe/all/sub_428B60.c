/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428B60
// Address: 0x00428B60

//----- (00428B60) --------------------------------------------------------
char __userpurge sub_428B60@<al>(__m128i a1@<xmm0>, char *a2, char *a3, int a4, int a5)
{
  _DWORD *v5; // eax
  struct _RTL_CRITICAL_SECTION *v6; // esi
  unsigned int v7; // edi
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  struct _RTL_CRITICAL_SECTION *v13; // esi
  int v14; // edi
  int v15; // edx
  int v17; // [esp+24h] [ebp-30h]
  _DWORD *v18; // [esp+2Ch] [ebp-28h]
  char v19; // [esp+33h] [ebp-21h]
  _DWORD v20[4]; // [esp+34h] [ebp-20h] BYREF
  int v21; // [esp+50h] [ebp-4h]

  v5 = sub_428030();
  v6 = dword_4B6B40;
  v18 = v5;
  sub_4562D0(dword_4B6B40);
  v7 = 0;
  v21 = 0;
  v8 = 1;
  v9 = 0;
  v10 = v18[8];
  v11 = v18[9];
  v17 = v11;
  while ( 1 )
  {
    v12 = (v7 & v11 | v8 & v10) == 0;
    v10 = v18[8];
    if ( v12 )
      break;
    v11 = v18[9];
    ++v9;
    v7 = __PAIR64__(v7, v8) >> 31;
    v8 *= 2;
    if ( v9 >= 0x40 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1443);
    }
  }
  v18[8] |= v8;
  v18[9] = v7 | v17;
  sub_4562F0(v6);
  v21 = -1;
  sub_453D50(a1, v20, 16, "___idcexec%d", v9);
  v19 = sub_428A70(v9, a1, (const char *)v20, a3, a4, a5, 0);
  if ( v19 )
    v19 = sub_4235F0(v9, a2, (char *)v20, nullptr, 0, a4, a5);
  v13 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v21 = 3;
  v14 = 0;
  if ( v9 >= 0x20 )
    v14 = 1 << v9;
  v15 = v14 ^ (1 << v9);
  if ( !(v14 & v18[9] | v15 & v18[8]) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1444);
  }
  v18[8] &= ~v15;
  v18[9] &= ~v14;
  v21 = 4;
  sub_4562F0(v13);
  return v19;
}
// 428C95: conditional instruction was optimized away because ebx.4<40u
// 4B70F0: using guessed type char byte_4B70F0;
