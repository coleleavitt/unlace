/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69260
// Address: 0x00069260

//----- (00069260) --------------------------------------------------------
unsigned int __cdecl sub_69260(int a1, char **a2, int a3, int a4, char a5)
{
  int v5; // esi
  char **v6; // ecx
  unsigned int v7; // edx
  const char *v8; // eax
  size_t v9; // eax
  size_t v10; // ecx
  char *v11; // esi
  size_t v12; // edi
  size_t v13; // edi
  char *v14; // eax
  unsigned int v15; // edx
  unsigned int v17; // [esp+10h] [ebp-3Ch]
  size_t v18; // [esp+18h] [ebp-34h]
  unsigned int v19; // [esp+1Ch] [ebp-30h]
  char **v20; // [esp+20h] [ebp-2Ch]
  const char *v21; // [esp+24h] [ebp-28h]
  int v22; // [esp+28h] [ebp-24h] BYREF
  size_t v23; // [esp+2Ch] [ebp-20h]
  void *v24; // [esp+30h] [ebp-1Ch]
  unsigned int v25; // [esp+38h] [ebp-14h]

  v25 = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 41) = 0;
  *(_DWORD *)(a1 + 37) = 0;
  *(_DWORD *)(a1 + 64) = 1065353216;
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 100) = a4;
  *(_DWORD *)(a1 + 104) = sub_697D0;
  *(_DWORD *)(a1 + 108) = a1;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = -1;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 161) = 0;
  *(_DWORD *)(a1 + 157) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 184) = 1;
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 268) = 1065353216;
  *(_BYTE *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 5;
  v5 = 132;
  if ( a2 )
    v5 = a3;
  if ( v5 )
  {
    v6 = off_137FCC;
    if ( a2 )
      v6 = a2;
    v20 = v6;
    v7 = 0;
    v19 = v5;
    do
    {
      v17 = v7;
      v8 = v20[v7];
      v23 = 0;
      v22 = 0;
      v24 = nullptr;
      v21 = v8;
      v9 = strlen(v8);
      if ( v9 >= 0xFFFFFFF0 )
        sub_758B0();
      v10 = v9;
      if ( v9 >= 0xB )
      {
        v18 = v9;
        v12 = (v9 + 16) & 0xFFFFFFF0;
        v11 = (char *)operator new(v12);
        v24 = v11;
        v22 = v12 | 1;
        v10 = v18;
        v23 = v18;
      }
      else
      {
        LOBYTE(v22) = 2 * v9;
        v11 = (char *)&v22 + 1;
        if ( !v9 )
          goto LABEL_13;
      }
      v13 = v10;
      memcpy(v11, v21, v10);
      v10 = v13;
LABEL_13:
      v11[v10] = 0;
      v14 = sub_698D0(a1 + 48, (unsigned __int8 *)&v22);
      v15 = v17;
      *(_WORD *)v14 = v17 + 128;
      if ( (v22 & 1) != 0 )
      {
        operator delete(v24);
        v15 = v17;
      }
      v7 = v15 + 1;
    }
    while ( v7 < v19 );
  }
  sub_69C70(a1, 0, a5);
  return __readgsdword(0x14u);
}
// 137FCC: using guessed type char *off_137FCC[132];
