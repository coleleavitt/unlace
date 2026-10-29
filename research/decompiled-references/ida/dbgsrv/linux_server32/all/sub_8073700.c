/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073700
// Address: 0x08073700

//----- (08073700) --------------------------------------------------------
int __cdecl sub_8073700(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // [esp+0h] [ebp-34h]
  int v11; // [esp+4h] [ebp-30h]
  unsigned int v12; // [esp+8h] [ebp-2Ch]
  int v13; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v14; // [esp+10h] [ebp-24h]
  int v15; // [esp+14h] [ebp-20h]
  unsigned int v16; // [esp+18h] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  v13 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  v14 = 0;
  v15 = 0;
  if ( v2 > 0 )
  {
    v11 = v2;
    v10 = *(_DWORD *)(a1 + 4);
    v12 = v2 + 1;
    v13 = (int)sub_80CF920((int)&v13, nullptr, v2 + 1, 1u);
    v7 = v13;
    v8 = v14;
    if ( v14 < v12 )
    {
      do
      {
        *(_BYTE *)(v7 + v8) = v10;
        v9 = v8;
        v7 = v13;
        ++v8;
      }
      while ( v9 != v11 );
    }
    v14 = v12;
    *(_BYTE *)(v7 + v11) = 0;
    v5 = v13;
    v4 = v14;
    v3 = v15;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v5;
  *(_DWORD *)(a2 + 8) = v4;
  *(_DWORD *)(a2 + 12) = v3;
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
