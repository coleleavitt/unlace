/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CF90
// Address: 0x0004CF90

//----- (0004CF90) --------------------------------------------------------
int __cdecl sub_4CF90(int a1)
{
  size_t v1; // eax
  char *v2; // ecx
  int v3; // edi
  int v4; // ecx
  _BYTE *v5; // eax
  int v6; // edi
  int v7; // ecx
  _BYTE *v8; // eax
  int v9; // edi
  int v10; // esi
  char *v12; // [esp+8h] [ebp-24h] BYREF
  size_t v13; // [esp+Ch] [ebp-20h]
  int v14; // [esp+10h] [ebp-1Ch]
  unsigned int v15; // [esp+18h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  switch ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    case 3u:
    case 5u:
      sub_472F0(a1, *(_DWORD *)(a1 + 36));
      break;
    case 4u:
      v12 = nullptr;
      v13 = 0;
      v14 = 0;
      sub_486B0((int)&v12, a1 + 20);
      v1 = v13;
      if ( v13 )
      {
        v1 = v13 - 1;
        v2 = v12;
      }
      else
      {
        v2 = byte_EF875;
      }
      sub_47000(a1, v2, v1);
      if ( v12 )
      {
        v13 = 0;
        qfree(v12);
        v12 = nullptr;
        v14 = 0;
      }
      break;
    case 7u:
      *(_BYTE *)(a1 + 116) = -46;
      v6 = *(_DWORD *)(a1 + 108);
      v7 = *(_DWORD *)(v6 + 4);
      if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
      {
        v8 = *(_BYTE **)v6;
      }
      else
      {
        v8 = qvector_reserve(v6, *(void **)v6, v7 + 1, 1u);
        *(_DWORD *)v6 = v8;
        v7 = *(_DWORD *)(v6 + 4);
      }
      v8[v7] = -46;
      ++*(_DWORD *)(v6 + 4);
      ++*(_DWORD *)(a1 + 112);
      sub_51F00(*(_DWORD *)(a1 + 108), (void *)(a1 + 44), 0x10u);
      *(_DWORD *)(a1 + 112) += 16;
      break;
    case 8u:
      *(_BYTE *)(a1 + 116) = -45;
      v3 = *(_DWORD *)(a1 + 108);
      v4 = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
      {
        v5 = *(_BYTE **)v3;
      }
      else
      {
        v5 = qvector_reserve(v3, *(void **)v3, v4 + 1, 1u);
        *(_DWORD *)v3 = v5;
        v4 = *(_DWORD *)(v3 + 4);
      }
      v5[v4] = -45;
      ++*(_DWORD *)(v3 + 4);
      ++*(_DWORD *)(a1 + 112);
      v9 = *(_DWORD *)(a1 + 44);
      v10 = *(_DWORD *)(a1 + 48);
      sub_46F00(a1, v9);
      sub_46F00(a1, SHIWORD(v9));
      sub_46F00(a1, v10);
      sub_46F00(a1, SHIWORD(v10));
      break;
    default:
      if ( !(_BYTE)under_debugger )
        interr(275);
      BUG();
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
