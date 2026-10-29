/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45000
// Address: 0x00045000

//----- (00045000) --------------------------------------------------------
int __cdecl sub_45000(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // esi
  int v5; // ecx
  bool v6; // cf
  int v7; // ecx
  unsigned int v8; // esi
  int (__cdecl *v9)(int, int, int); // eax
  int v10; // edi
  int (__cdecl *v12)(int, int, int); // [esp+Ch] [ebp-20h]
  int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]

  v2 = a1[2];
  v3 = a1[7];
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  v5 = v3 - 1;
  if ( !v3 )
    v5 = 0;
  v13 = v5;
  v6 = v5 - 1 < v4;
  v7 = a1[11];
  *(_DWORD *)(a2 + 4) = -1;
  if ( v6 )
  {
    v8 = v4 + 1 - v13;
    if ( v8 )
    {
      v15 = a1[6];
      v14 = a1[1];
      if ( v7 )
        v9 = memicmp;
      else
        v9 = (int (__cdecl *)(int, int, int))&memcmp;
      v12 = v9;
      v10 = 0;
      while ( v12(v14 + v10, v15, v13) )
      {
        if ( ++v10 >= v8 )
          return 0;
      }
      *(_DWORD *)(a2 + 4) = v10;
    }
  }
  return 0;
}
