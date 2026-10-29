/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806FB80
// Address: 0x0806FB80

//----- (0806FB80) --------------------------------------------------------
_BOOL4 __cdecl sub_806FB80(int a1, int a2, unsigned int *a3)
{
  _DWORD *v3; // eax
  void *v4; // eax
  unsigned int v6; // eax
  char v7; // cl
  int v8; // edi
  unsigned int v9; // edx
  void *v10; // eax
  unsigned int v11; // [esp-40h] [ebp-40h]
  char v12; // [esp-36h] [ebp-36h]
  bool v13; // [esp-35h] [ebp-35h]
  unsigned int v14; // [esp-34h] [ebp-34h]
  int v15; // [esp-30h] [ebp-30h]
  char *v16; // [esp-2Ch] [ebp-2Ch] BYREF
  unsigned int v17; // [esp-28h] [ebp-28h]
  int v18; // [esp-24h] [ebp-24h]
  unsigned int v19; // [esp-20h] [ebp-20h]

  v19 = __readgsdword(0x14u);
  v3 = sub_806EA50(a1, 1, ".gnu_debuglink");
  if ( v3 )
  {
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    sub_806F910(a1, (int)&v16, (int)v3);
    v13 = v17 > 4;
    if ( v17 <= 4 )
      goto LABEL_3;
    v14 = v17 - 4;
    if ( a3 )
    {
      v6 = *(_DWORD *)&v16[v17 - 4];
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 132) + 389) == 2 )
        v6 = _byteswap_ulong(v6);
      *a3 = v6;
    }
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) < v14 )
        *(_DWORD *)a2 = sub_80CF920(a2, *(void **)a2, v14, 1u);
      v15 = 0;
      while ( 1 )
      {
        v4 = v16;
        v7 = v16[v15];
        if ( !v7 )
          break;
        v8 = *(_DWORD *)(a2 + 4);
        v9 = 2;
        if ( v8 )
          v9 = v8-- + 1;
        v10 = *(void **)a2;
        if ( *(_DWORD *)(a2 + 8) < v9 )
        {
          v12 = v16[v15];
          v11 = v9;
          v10 = sub_80CF920(a2, v10, v9, 1u);
          v7 = v12;
          v9 = v11;
          *(_DWORD *)a2 = v10;
        }
        *(_DWORD *)(a2 + 4) = v9;
        *((_BYTE *)v10 + v8) = v7;
        ++v15;
        *(_BYTE *)(*(_DWORD *)a2 + v8 + 1) = 0;
        if ( v15 == v14 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      v4 = v16;
    }
    if ( v4 )
    {
      v17 = 0;
      sub_80CF780(v4);
    }
  }
  else
  {
    v13 = 0;
  }
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v13;
}
