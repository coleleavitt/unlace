/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91950
// Address: 0x00091950

//----- (00091950) --------------------------------------------------------
unsigned int __cdecl sub_91950(_DWORD *a1, int *a2, char a3)
{
  _BYTE *v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  int v12; // [esp+Ch] [ebp-20h]
  _BYTE src[5]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v14[5]; // [esp+18h] [ebp-14h] BYREF

  v14[0] = __readgsdword(0x14u);
  v3 = pack_dd(src, (unsigned int)v14, a2[1]);
  sub_3A950(a1, src, v3 - src);
  if ( a2[1] )
  {
    v4 = a2;
    v5 = 0;
    v6 = 12;
    do
    {
      v12 = v5;
      v7 = *v4;
      v8 = pack_dd(src, (unsigned int)v14, *(_DWORD *)(*v4 + v6 - 12));
      sub_3A950(a1, src, v8 - src);
      v9 = pack_dd(src, (unsigned int)v14, *(_DWORD *)(v7 + v6));
      sub_3A950(a1, src, v9 - src);
      if ( a3 )
      {
        v10 = pack_dd(src, (unsigned int)v14, *(_DWORD *)(v7 + v6 - 8));
        sub_3A950(a1, src, v10 - src);
        sub_3A950(a1, *(void **)(v7 + v6 - 4), *(_DWORD *)(v7 + v6));
      }
      v5 = v12 + 1;
      v6 += 20;
      v4 = a2;
    }
    while ( v12 + 1 < (unsigned int)a2[1] );
  }
  return __readgsdword(0x14u);
}
