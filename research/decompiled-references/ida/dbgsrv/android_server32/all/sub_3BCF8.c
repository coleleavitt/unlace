/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BCF8
// Address: 0x0003BCF8

//----- (0003BCF8) --------------------------------------------------------
int __fastcall sub_3BCF8(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int *v6; // r7
  int v7; // r0
  int v8; // r1
  char *v9; // r6
  char **v10; // r0
  char *v11; // r0
  int v12; // r6
  int v13; // r1
  _BYTE *v14; // r0
  char v15; // r4
  int v16; // r0
  int v18; // r1
  __int16 v19; // r0
  int v20; // r1
  char *v21; // r0
  int v22; // r1
  unsigned int v23; // r2
  void *v24; // r0
  void **v25; // [sp+8h] [bp-8h]
  __int16 v26; // [sp+Ch] [bp-4h]

  v2 = *(_DWORD *)(a1 + 180);
  v3 = *(_DWORD *)(a1 + 184);
  v4 = 2 * (v3 - 1);
  v5 = *(__int16 *)(v2 + v4);
  v26 = *(_WORD *)(v2 + v4);
  v6 = (int *)(a1 + 184);
  v25 = (void **)(a1 + 180);
  if ( v3 )
    *v6 = v3 - 1;
  v7 = *(_DWORD *)(a1 + 92);
  v8 = *(_DWORD *)(a1 + 96) - 1;
  if ( *(_DWORD *)(v7 + 12 * v8 + 4) )
    v9 = *(char **)(v7 + 12 * v8);
  else
    v9 = &byte_B3CBE;
  v10 = sub_40BBC(v9);
  if ( v10 )
  {
    v11 = v10[2];
    switch ( v11[v5] )
    {
      case 2:
        if ( sub_3947C(a1) )
          break;
        *(_BYTE *)(a1 + 120) = -50;
        v12 = *(_DWORD *)(a1 + 112);
        v13 = *(_DWORD *)(v12 + 4);
        if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v13 + 1) )
        {
          v14 = *(_BYTE **)v12;
        }
        else
        {
          v14 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v12, v13 + 1, 1u);
          *(_DWORD *)v12 = v14;
          v13 = *(_DWORD *)(v12 + 4);
        }
        v15 = -50;
        goto LABEL_32;
      case 3:
        if ( (*(unsigned __int8 *)(a1 + 120) | 2) == 0xD2 )
          break;
        *(_BYTE *)(a1 + 120) = -48;
        v12 = *(_DWORD *)(a1 + 112);
        v13 = *(_DWORD *)(v12 + 4);
        if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v13 + 1) )
        {
          v14 = *(_BYTE **)v12;
        }
        else
        {
          v14 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v12, v13 + 1, 1u);
          *(_DWORD *)v12 = v14;
          v13 = *(_DWORD *)(v12 + 4);
        }
        v15 = -48;
        goto LABEL_32;
      case 4:
        v18 = (unsigned __int8)v11[v5 + 1];
        v19 = v26 - 1;
        if ( v18 )
          v19 = v26;
        v26 = v19;
        break;
      case 5:
      case 6:
      case 8:
      case 10:
        break;
      case 7:
        v20 = *(unsigned __int8 *)(a1 + 120);
        v21 = (char *)(a1 + 120);
        if ( v20 == 168 || v20 == 191 )
          break;
        v15 = -65;
        goto LABEL_26;
      case 9:
        v21 = (char *)(a1 + 120);
        if ( *(unsigned __int8 *)(a1 + 120) == 211 )
          break;
        v15 = -47;
LABEL_26:
        *v21 = v15;
        v12 = *(_DWORD *)(a1 + 112);
        v13 = *(_DWORD *)(v12 + 4);
        if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v13 + 1) )
        {
          v14 = *(_BYTE **)v12;
        }
        else
        {
          v14 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v12, v13 + 1, 1u);
          *(_DWORD *)v12 = v14;
          v13 = *(_DWORD *)(v12 + 4);
        }
LABEL_32:
        v14[v13] = v15;
        ++*(_DWORD *)(v12 + 4);
        ++*(_DWORD *)(a1 + 116);
        break;
      default:
        goto LABEL_14;
    }
  }
  else
  {
    v16 = sub_40994(*(_DWORD **)(a1 + 64), v9);
    if ( v16 != -1 && *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 64) + 4 * v16) + 12) <= v5 )
    {
LABEL_14:
      set_error_string(0, v9);
      return set_qerrno(56);
    }
  }
  v22 = *v6;
  v23 = *v6 + 1;
  if ( *(_DWORD *)(a1 + 188) >= v23 )
  {
    v24 = *v25;
  }
  else
  {
    v24 = qvector_reserve((int)v25, *v25, v23, 2u);
    *v25 = v24;
    v22 = *v6;
  }
  *((_WORD *)v24 + v22) = v26 + 1;
  ++*v6;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
