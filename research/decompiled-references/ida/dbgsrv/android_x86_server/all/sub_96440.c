/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96440
// Address: 0x00096440

//----- (00096440) --------------------------------------------------------
void *__cdecl sub_96440(int a1, char a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  __suseconds_t v10; // eax
  time_t v11; // edx
  _BYTE *v13; // eax
  __suseconds_t v14; // eax
  time_t v15; // edx
  void *v16; // [esp+0h] [ebp-3Ch]
  int v17; // [esp+4h] [ebp-38h]
  unsigned int v18; // [esp+8h] [ebp-34h] BYREF
  char v19; // [esp+Ch] [ebp-30h]
  _BYTE v20[25]; // [esp+Fh] [ebp-2Dh] BYREF
  unsigned int v21; // [esp+28h] [ebp-14h]

  v21 = __readgsdword(0x14u);
  v2 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 12))(a1);
  v3 = 0;
  if ( v2 && !*(_BYTE *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(a1 + 28);
    if ( v4 )
    {
      v5 = (int *)(*(_DWORD *)(a1 + 24) + 4);
      v6 = 0;
      while ( *((_BYTE *)v5 - 4) != a2 )
      {
        ++v6;
        v5 += 2;
        if ( v6 >= v4 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v5 = (int *)(a1 + 32);
    }
    v7 = *v5;
    v8 = sub_96200(a1, (int)&v18, 5, *v5);
    v3 = 0;
    if ( !v8 )
    {
      v17 = v7;
      v9 = _byteswap_ulong(v18);
      v18 = v9;
      if ( v9 >= 0 && (v9 < 8193 || *(_BYTE *)(a1 + 37)) )
      {
        v13 = qalloc(v9 + 5);
        if ( v13 )
        {
          v13[4] = v19;
          *(_DWORD *)v13 = v18;
          v16 = v13;
          if ( !sub_96200(a1, (int)(v13 + 5), v9, v17) )
            return v16;
          qfree(v16);
        }
        else
        {
          v14 = qtime64();
          format_timestamp(v20, 25, v14, v15, 0);
          sub_965B0("%s rpc: no local memory", v20);
        }
      }
      else
      {
        v10 = qtime64();
        format_timestamp(v20, 25, v10, v11, 0);
        sub_965B0("%s rpc: bad packet length", v20);
      }
      return nullptr;
    }
  }
  return (void *)v3;
}
// 964FD: variable 'v11' is possibly undefined
// 96587: variable 'v15' is possibly undefined
