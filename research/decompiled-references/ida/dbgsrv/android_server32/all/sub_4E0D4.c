/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E0D4
// Address: 0x0004E0D4

//----- (0004E0D4) --------------------------------------------------------
int __fastcall sub_4E0D4(int a1, const char **a2, int a3, int a4, int a5)
{
  const char **v7; // r1
  int v8; // r2
  int v9; // r7
  const char *v10; // r0
  __int16 v11; // r7
  size_t v12; // r6
  char *v13; // r1
  char *v14; // r5
  unsigned int v16; // [sp+3Ch] [bp-2Ch]
  const char *v17; // [sp+4Ch] [bp-1Ch]
  int v19; // [sp+50h] [bp-18h]
  const char **v21; // [sp+54h] [bp-14h]
  unsigned int v22; // [sp+58h] [bp-10h] BYREF
  size_t v23; // [sp+5Ch] [bp-Ch]
  void *ptr; // [sp+60h] [bp-8h]

  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  memset((void *)a1, 0, 0x2Du);
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 1065353216;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = a4;
  *(_DWORD *)(a1 + 104) = sub_4E3E0;
  *(_DWORD *)(a1 + 108) = a1;
  memset((void *)(a1 + 112), 0, 0x24u);
  *(_BYTE *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 148) = -1;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 184) = 1;
  *(_DWORD *)(a1 + 444) = 0;
  *(_BYTE *)(a1 + 448) = 0;
  *(_BYTE *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_BYTE *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_BYTE *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 484) = 1065353216;
  *(_DWORD *)(a1 + 492) = 5;
  v7 = a2;
  v8 = 132;
  if ( a2 )
    v8 = a3;
  if ( v8 )
  {
    if ( !a2 )
      v7 = (const char **)off_D9C28;
    v9 = 0;
    v16 = v8;
    do
    {
      v10 = *v7;
      v21 = v7 + 1;
      ptr = nullptr;
      v23 = 0;
      v22 = 0;
      v19 = v9;
      v11 = v9 + 128;
      v17 = v10;
      v12 = strlen(v10);
      if ( v12 >= 0xFFFFFFF0 )
        sub_55F54();
      if ( v12 >= 0xB )
      {
        v13 = (char *)operator new((v12 + 16) & 0xFFFFFFF0);
        ptr = v13;
        v23 = v12;
        v22 = (v12 + 16) & 0xFFFFFFF0 | 1;
      }
      else
      {
        LOBYTE(v22) = 2 * v12;
        v13 = (char *)&v22 + 1;
        if ( !v12 )
          goto LABEL_13;
      }
      v14 = v13;
      qmemcpy(v13, v17, v12);
      v13 = v14;
LABEL_13:
      v13[v12] = 0;
      *(_WORD *)sub_4E474(a1 + 48, (int *)&v22) = v11;
      if ( (unsigned __int8)v22 << 31 )
        operator delete(ptr);
      v9 = v19 + 1;
      v7 = v21;
    }
    while ( v19 + 1 < v16 );
  }
  sub_4E710(a1, 0, a5);
  return a1;
}
// D9C28: using guessed type char *off_D9C28[132];
