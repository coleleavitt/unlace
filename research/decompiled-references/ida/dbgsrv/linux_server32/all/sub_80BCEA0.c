/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BCEA0
// Address: 0x080BCEA0

//----- (080BCEA0) --------------------------------------------------------
void *__cdecl sub_80BCEA0(int a1, char a2)
{
  char v2; // cl
  int (__cdecl *v3)(int); // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // edx
  _DWORD *v10; // eax
  void *v11; // ebp
  __suseconds_t v13; // eax
  time_t v14; // edx
  __suseconds_t v15; // eax
  time_t v16; // edx
  int v17; // [esp+0h] [ebp-50h]
  unsigned int v18; // [esp+12h] [ebp-3Eh] BYREF
  char v19; // [esp+16h] [ebp-3Ah]
  _BYTE v20[25]; // [esp+17h] [ebp-39h] BYREF
  unsigned int v21; // [esp+30h] [ebp-20h]

  v2 = a2;
  v21 = __readgsdword(0x14u);
  v3 = *(int (__cdecl **)(int))(*(_DWORD *)a1 + 12);
  if ( v3 == sub_80BC3C0 )
  {
    v4 = *(_DWORD *)(a1 + 52);
  }
  else
  {
    v4 = v3(a1);
    v2 = a2;
  }
  if ( v4 && !*(_BYTE *)(a1 + 4) )
  {
    v5 = *(_DWORD *)(a1 + 28);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      v7 = 0;
      while ( v2 != *(_BYTE *)v6 )
      {
        ++v7;
        v6 += 8;
        if ( v5 == v7 )
          goto LABEL_20;
      }
      v8 = *(_DWORD *)(v6 + 4);
    }
    else
    {
LABEL_20:
      v8 = *(_DWORD *)(a1 + 32);
    }
    if ( !sub_80BC720(a1, (int)&v18, 5, v8) )
    {
      v9 = _byteswap_ulong(v18);
      v18 = v9;
      if ( v9 >= 0 && (*(_BYTE *)(a1 + 37) == 1 || v9 <= 0x2000) )
      {
        v17 = v9;
        v10 = sub_80CF710(v9 + 5);
        v11 = v10;
        if ( v10 )
        {
          *v10 = v18;
          *((_BYTE *)v10 + 4) = v19;
          if ( !sub_80BC720(a1, (int)v10 + 5, v17, v8) )
            goto LABEL_18;
          sub_80CF780(v11);
        }
        else
        {
          v15 = sub_80D0330();
          sub_80BC270(v20, 25, v15, v16, 0);
          sub_80BCDD0("%s rpc: no local memory", v20);
        }
      }
      else
      {
        v13 = sub_80D0330();
        sub_80BC270(v20, 25, v13, v14, 0);
        sub_80BCDD0("%s rpc: bad packet length", v20);
      }
    }
  }
  v11 = nullptr;
LABEL_18:
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v11;
}
// 80BD003: variable 'v14' is possibly undefined
// 80BD030: variable 'v16' is possibly undefined
