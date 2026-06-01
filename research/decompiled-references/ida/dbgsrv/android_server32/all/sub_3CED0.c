/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CED0
// Address: 0x0003CED0

//----- (0003CED0) --------------------------------------------------------
int __fastcall sub_3CED0(int a1)
{
  const char *v2; // r1
  int v3; // r5
  int v4; // r1
  _BYTE *v5; // r0
  int v6; // r5
  int v7; // r1
  _BYTE *v8; // r0
  unsigned int v9; // r6
  unsigned int v10; // r7
  size_t v11; // r2
  char *v13; // [sp+8h] [bp-10h] BYREF
  int v14; // [sp+Ch] [bp-Ch]
  int v15; // [sp+10h] [bp-8h]

  switch ( *(_WORD *)(a1 + 36) )
  {
    case 3:
    case 5:
      sub_3936C(a1, *(_DWORD *)(a1 + 40));
      break;
    case 4:
      v14 = 0;
      v13 = nullptr;
      v15 = 0;
      sub_39D2C((int)&v13, a1 + 24);
      if ( v14 )
        v2 = v13;
      else
        v2 = &byte_B3CBE;
      v11 = v14 - 1;
      if ( !v14 )
        v11 = 0;
      sub_39160(a1, v2, v11);
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
        v15 = 0;
        v13 = nullptr;
      }
      break;
    case 7:
      *(_BYTE *)(a1 + 120) = -46;
      v6 = *(_DWORD *)(a1 + 112);
      v7 = *(_DWORD *)(v6 + 4);
      if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
      {
        v8 = *(_BYTE **)v6;
      }
      else
      {
        v8 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v6, v7 + 1, 1u);
        *(_DWORD *)v6 = v8;
        v7 = *(_DWORD *)(v6 + 4);
      }
      v8[v7] = -46;
      ++*(_DWORD *)(v6 + 4);
      ++*(_DWORD *)(a1 + 116);
      sub_40150(*(_DWORD *)(a1 + 112), (const void *)(a1 + 48), 0x10u);
      *(_DWORD *)(a1 + 116) += 16;
      break;
    case 8:
      *(_BYTE *)(a1 + 120) = -45;
      v3 = *(_DWORD *)(a1 + 112);
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
      ++*(_DWORD *)(a1 + 116);
      v9 = *(_DWORD *)(a1 + 48);
      v10 = *(_DWORD *)(a1 + 52);
      sub_390C4(a1, (unsigned __int16)v9);
      sub_390C4(a1, HIWORD(v9));
      sub_390C4(a1, (unsigned __int16)v10);
      sub_390C4(a1, HIWORD(v10));
      break;
    default:
      if ( !under_debugger )
        interr(275);
      __debugbreak();
  }
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
