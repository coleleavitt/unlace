/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38E8C
// Address: 0x00038E8C

//----- (00038E8C) --------------------------------------------------------
int __fastcall sub_38E8C(int a1)
{
  int v2; // r3
  __int16 v3; // r6
  int v4; // r2
  __int16 v5; // r5
  int v6; // r3
  const char **v7; // r8
  const char **v8; // r0
  const char *v9; // r2
  int v10; // r3
  int v11; // r6
  int v12; // r3
  _BYTE *v13; // r0
  char v14; // r2
  int v15; // r3
  __int16 v16; // r5
  void *v17; // r1
  void *v18; // r0
  int v20; // r0
  int v21; // r3

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_WORD *)(*(_DWORD *)(a1 + 180) + 2 * (v2 + 0x7FFFFFFF));
  if ( v2 )
    *(_DWORD *)(a1 + 184) = v2 - 1;
  v4 = *(_DWORD *)(a1 + 92);
  v5 = v3;
  v6 = 12 * *(_DWORD *)(a1 + 96) - 12;
  if ( *(_DWORD *)(v4 + v6 + 4) )
  {
    v7 = *(const char ***)(v4 + v6);
    v8 = sub_3EEF4(v7);
    if ( v8 )
    {
LABEL_5:
      v9 = v8[2];
      switch ( v9[v3] )
      {
        case 2:
          sub_38C64(a1);
          goto LABEL_12;
        case 3:
          v21 = *(unsigned __int8 *)(a1 + 120);
          if ( v21 == 208 || v21 == 210 )
            goto LABEL_12;
          v11 = *(_DWORD *)(a1 + 112);
          *(_BYTE *)(a1 + 120) = -48;
          v12 = *(_DWORD *)(v11 + 4);
          if ( (unsigned int)(v12 + 1) > *(_DWORD *)(v11 + 8) )
          {
            v13 = sub_77EB0(v11, *(void **)v11, v12 + 1, 1u);
            v12 = *(_DWORD *)(v11 + 4);
            *(_DWORD *)v11 = v13;
          }
          else
          {
            v13 = *(_BYTE **)v11;
          }
          v14 = -48;
          break;
        case 4:
          if ( !v9[v3 + 1] )
            v5 = v3 - 1;
          goto LABEL_12;
        case 5:
        case 6:
        case 8:
        case 0xA:
          goto LABEL_12;
        case 7:
          v10 = *(unsigned __int8 *)(a1 + 120);
          if ( v10 == 168 || v10 == 191 )
            goto LABEL_12;
          v11 = *(_DWORD *)(a1 + 112);
          *(_BYTE *)(a1 + 120) = -65;
          v12 = *(_DWORD *)(v11 + 4);
          if ( (unsigned int)(v12 + 1) > *(_DWORD *)(v11 + 8) )
          {
            v13 = sub_77EB0(v11, *(void **)v11, v12 + 1, 1u);
            v12 = *(_DWORD *)(v11 + 4);
            *(_DWORD *)v11 = v13;
          }
          else
          {
            v13 = *(_BYTE **)v11;
          }
          v14 = -65;
          break;
        case 9:
          if ( *(unsigned __int8 *)(a1 + 120) == 211 )
            goto LABEL_12;
          v11 = *(_DWORD *)(a1 + 112);
          *(_BYTE *)(a1 + 120) = -47;
          v12 = *(_DWORD *)(v11 + 4);
          if ( (unsigned int)(v12 + 1) > *(_DWORD *)(v11 + 8) )
          {
            v13 = sub_77EB0(v11, *(void **)v11, v12 + 1, 1u);
            v12 = *(_DWORD *)(v11 + 4);
            *(_DWORD *)v11 = v13;
          }
          else
          {
            v13 = *(_BYTE **)v11;
          }
          v14 = -47;
          break;
        default:
          goto LABEL_18;
      }
      v13[v12] = v14;
      ++*(_DWORD *)(v11 + 4);
      ++*(_DWORD *)(a1 + 116);
      goto LABEL_12;
    }
  }
  else
  {
    v7 = (const char **)&dword_8DA5C;
    v8 = sub_3EEF4((const char **)&dword_8DA5C);
    if ( v8 )
      goto LABEL_5;
  }
  v20 = sub_3ED68(*(_DWORD **)(a1 + 64), (char *)v7);
  if ( v20 != -1 && *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 64) + 4 * v20) + 12) <= v3 )
  {
LABEL_18:
    sub_70A98(0, (const char *)v7);
    return sub_70A2C(56);
  }
LABEL_12:
  v15 = *(_DWORD *)(a1 + 184);
  v16 = v5 + 1;
  v17 = *(void **)(a1 + 180);
  if ( (unsigned int)(v15 + 1) > *(_DWORD *)(a1 + 188) )
  {
    v18 = sub_77EB0(a1 + 180, v17, v15 + 1, 2u);
    v15 = *(_DWORD *)(a1 + 184);
    v17 = v18;
    *(_DWORD *)(a1 + 180) = v18;
  }
  *((_WORD *)v17 + v15) = v16;
  ++*(_DWORD *)(a1 + 184);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
