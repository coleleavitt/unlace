/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B640
// Address: 0x0004B640

//----- (0004B640) --------------------------------------------------------
int __cdecl sub_4B640(int a1)
{
  int v1; // eax
  __int16 v2; // si
  int v3; // eax
  char *v4; // edi
  char **v5; // eax
  char *v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  _BYTE *v10; // eax
  int v11; // eax
  int v13; // ecx
  _BYTE *v14; // eax
  char v15; // al
  int v16; // ecx
  _BYTE *v17; // eax
  int v18; // ecx
  _BYTE *v19; // eax
  int v20; // ecx
  _WORD *v21; // eax
  __int16 v22; // [esp+8h] [ebp-14h]
  __int16 v23; // [esp+8h] [ebp-14h]

  v1 = *(_DWORD *)(a1 + 180);
  v2 = *(_WORD *)(*(_DWORD *)(a1 + 176) + 2 * v1 - 2);
  if ( v1 )
    *(_DWORD *)(a1 + 180) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 88);
  if ( *(_DWORD *)(v3 + 12 * (*(_DWORD *)(a1 + 92) - 1) + 4) )
    v4 = *(char **)(v3 + 12 * (*(_DWORD *)(a1 + 92) - 1));
  else
    v4 = byte_EF875;
  v22 = v2;
  v5 = sub_531C0(v4);
  if ( v5 )
  {
    v6 = v5[2];
    switch ( v6[v2] )
    {
      case 2:
        v7 = a1;
        if ( sub_47470(a1) )
          goto LABEL_31;
        *(_BYTE *)(a1 + 116) = -50;
        v8 = *(_DWORD *)(a1 + 108);
        v9 = *(_DWORD *)(v8 + 4);
        if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v9 + 1) )
        {
          *(_BYTE *)(*(_DWORD *)v8 + v9) = -50;
        }
        else
        {
          v10 = qvector_reserve(v8, *(void **)v8, v9 + 1, 1u);
          *(_DWORD *)v8 = v10;
          v10[*(_DWORD *)(v8 + 4)] = -50;
        }
        break;
      case 3:
        v7 = a1;
        if ( (*(_BYTE *)(a1 + 116) | 2) == 0xD2 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 116) = -48;
        v8 = *(_DWORD *)(a1 + 108);
        v13 = *(_DWORD *)(v8 + 4);
        if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v13 + 1) )
        {
          *(_BYTE *)(*(_DWORD *)v8 + v13) = -48;
        }
        else
        {
          v14 = qvector_reserve(v8, *(void **)v8, v13 + 1, 1u);
          *(_DWORD *)v8 = v14;
          v14[*(_DWORD *)(v8 + 4)] = -48;
        }
        break;
      case 4:
        v22 = v2 - (v6[v2 + 1] == 0);
        goto LABEL_31;
      case 5:
      case 6:
      case 8:
      case 10:
        goto LABEL_31;
      case 7:
        v7 = a1;
        v15 = *(_BYTE *)(a1 + 116);
        if ( v15 == -88 || v15 == -65 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 116) = -65;
        v8 = *(_DWORD *)(a1 + 108);
        v16 = *(_DWORD *)(v8 + 4);
        if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v16 + 1) )
        {
          v17 = *(_BYTE **)v8;
        }
        else
        {
          v17 = qvector_reserve(v8, *(void **)v8, v16 + 1, 1u);
          *(_DWORD *)v8 = v17;
          v16 = *(_DWORD *)(v8 + 4);
        }
        v17[v16] = -65;
        break;
      case 9:
        v7 = a1;
        if ( *(_BYTE *)(a1 + 116) == 0xD3 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 116) = -47;
        v8 = *(_DWORD *)(a1 + 108);
        v18 = *(_DWORD *)(v8 + 4);
        if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v18 + 1) )
        {
          *(_BYTE *)(*(_DWORD *)v8 + v18) = -47;
        }
        else
        {
          v19 = qvector_reserve(v8, *(void **)v8, v18 + 1, 1u);
          *(_DWORD *)v8 = v19;
          v19[*(_DWORD *)(v8 + 4)] = -47;
        }
        break;
      default:
        goto LABEL_13;
    }
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(v7 + 112);
  }
  else
  {
    v11 = sub_52E30(*(_DWORD **)(a1 + 60), v4);
    if ( v11 != -1 && *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 60) + 4 * v11) + 12) <= v2 )
    {
LABEL_13:
      set_error_string(0, v4);
      return set_qerrno(56);
    }
  }
LABEL_31:
  v23 = v22 + 1;
  v20 = *(_DWORD *)(a1 + 180);
  if ( *(_DWORD *)(a1 + 184) >= (unsigned int)(v20 + 1) )
  {
    v21 = *(_WORD **)(a1 + 176);
  }
  else
  {
    v21 = qvector_reserve(a1 + 176, *(void **)(a1 + 176), v20 + 1, 2u);
    *(_DWORD *)(a1 + 176) = v21;
    v20 = *(_DWORD *)(a1 + 180);
  }
  v21[v20] = v23;
  ++*(_DWORD *)(a1 + 180);
  return 0;
}
