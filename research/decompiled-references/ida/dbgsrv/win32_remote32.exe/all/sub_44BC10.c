/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BC10
// Address: 0x0044BC10

//----- (0044BC10) --------------------------------------------------------
void *__userpurge sub_44BC10@<eax>(int a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, char a4)
{
  unsigned int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  signed int v9; // edi
  _DWORD *v10; // eax
  void *v11; // ebx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v15; // eax
  int v16; // edx
  unsigned int v17; // [esp+10h] [ebp-28h] BYREF
  char v18; // [esp+14h] [ebp-24h]
  _DWORD v19[7]; // [esp+18h] [ebp-20h] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) && !*(_BYTE *)(a1 + 4) )
  {
    v5 = *(_DWORD *)(a1 + 28);
    v6 = 0;
    if ( v5 )
    {
      v7 = *(_DWORD *)(a1 + 24);
      LOBYTE(a2) = a4;
      while ( *(_BYTE *)(v7 + 8 * v6) != a4 )
      {
        if ( ++v6 >= v5 )
          goto LABEL_7;
      }
      v8 = *(_DWORD *)(v7 + 8 * v6 + 4);
    }
    else
    {
LABEL_7:
      v8 = *(_DWORD *)(a1 + 32);
    }
    if ( !sub_44BB20((_BYTE *)a1, (int)&v17, 5, v8) )
    {
      v9 = (((v17 << 16) | v17 & 0xFF00) << 8) | ((HIWORD(v17) | v17 & 0xFF0000) >> 8);
      v17 = v9;
      if ( v9 >= 0 && (*(_BYTE *)(a1 + 37) || v9 <= 0x2000) )
      {
        v10 = sub_453990(v9 + 5);
        v11 = v10;
        if ( v10 )
        {
          *v10 = v17;
          *((_BYTE *)v10 + 4) = v18;
          if ( !sub_44BB20((_BYTE *)a1, (int)v10 + 5, v9, v8) )
            return v11;
          sub_453A20(v11);
        }
        else
        {
          v12 = sub_453720();
          sub_44D8F0(v9, a3, v19, 25, v12, v13, 0);
          sub_44BA30(0, a3, "%s rpc: no local memory", v19);
        }
      }
      else
      {
        v15 = sub_453720();
        sub_44D8F0(v9, a3, v19, 25, v15, v16, 0);
        sub_44BA30(a2, a3, "%s rpc: bad packet length", v19);
      }
    }
  }
  return nullptr;
}
// 44BCD8: variable 'v13' is possibly undefined
// 44BD3E: variable 'v16' is possibly undefined
