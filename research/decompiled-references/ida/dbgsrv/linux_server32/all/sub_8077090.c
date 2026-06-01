/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077090
// Address: 0x08077090

//----- (08077090) --------------------------------------------------------
int __cdecl sub_8077090(int a1)
{
  int v1; // eax
  __int16 v2; // bp
  int v3; // eax
  char *v4; // edx
  int v5; // eax
  char *v6; // edx
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  char v11; // al
  void **v12; // edi
  _BYTE *v13; // edx
  void *v14; // eax
  void **v15; // edi
  _BYTE *v16; // edx
  void *v17; // eax
  void **v18; // edi
  _BYTE *v19; // edx
  void *v20; // eax
  char *s2; // [esp+1Ch] [ebp-20h]
  char *s2a; // [esp+1Ch] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 180);
  v2 = *(_WORD *)(*(_DWORD *)(a1 + 176) + 2 * v1 - 2);
  if ( v1 )
    *(_DWORD *)(a1 + 180) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 88) + 12 * *(_DWORD *)(a1 + 92) - 12;
  v4 = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v3 + 4) )
    v4 = *(char **)v3;
  s2 = v4;
  v5 = sub_80809D0(v4);
  v6 = s2;
  if ( v5 )
  {
    s2a = *(char **)(v5 + 8);
    switch ( s2a[v2] )
    {
      case 2:
        ++v2;
        sub_8077010(a1);
        goto LABEL_10;
      case 3:
        ++v2;
        if ( (*(_BYTE *)(a1 + 116) & 0xFD) != 0xD0 )
        {
          v18 = *(void ***)(a1 + 108);
          *(_BYTE *)(a1 + 116) = -48;
          v19 = v18[1];
          v20 = *v18;
          if ( v18[2] < v19 + 1 )
          {
            v20 = sub_80CF920((int)v18, v20, (unsigned int)(v19 + 1), 1u);
            v19 = v18[1];
            *v18 = v20;
          }
          v19[(_DWORD)v20] = -48;
          v18[1] = (char *)v18[1] + 1;
          ++*(_DWORD *)(a1 + 112);
        }
        goto LABEL_10;
      case 4:
        if ( s2a[v2 + 1] )
          goto LABEL_9;
        goto LABEL_10;
      case 5:
      case 6:
      case 8:
      case 10:
        goto LABEL_9;
      case 7:
        v11 = *(_BYTE *)(a1 + 116);
        ++v2;
        if ( v11 != -88 && v11 != -65 )
        {
          v12 = *(void ***)(a1 + 108);
          *(_BYTE *)(a1 + 116) = -65;
          v13 = v12[1];
          v14 = *v12;
          if ( v12[2] < v13 + 1 )
          {
            v14 = sub_80CF920((int)v12, v14, (unsigned int)(v13 + 1), 1u);
            v13 = v12[1];
            *v12 = v14;
          }
          v13[(_DWORD)v14] = -65;
          v12[1] = (char *)v12[1] + 1;
          ++*(_DWORD *)(a1 + 112);
        }
        goto LABEL_10;
      case 9:
        ++v2;
        if ( *(_BYTE *)(a1 + 116) != 0xD3 )
        {
          v15 = *(void ***)(a1 + 108);
          *(_BYTE *)(a1 + 116) = -47;
          v16 = v15[1];
          v17 = *v15;
          if ( v15[2] < v16 + 1 )
          {
            v17 = sub_80CF920((int)v15, v17, (unsigned int)(v16 + 1), 1u);
            v16 = v15[1];
            *v15 = v17;
          }
          v16[(_DWORD)v17] = -47;
          v15[1] = (char *)v15[1] + 1;
          ++*(_DWORD *)(a1 + 112);
        }
        goto LABEL_10;
      default:
        goto LABEL_29;
    }
  }
  v7 = sub_80806D0(*(int **)(a1 + 60), s2);
  v6 = s2;
  if ( v7 == -1 || *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 60) + 4 * v7) + 12) > v2 )
  {
LABEL_9:
    ++v2;
LABEL_10:
    v8 = *(_DWORD *)(a1 + 180);
    v9 = *(void **)(a1 + 176);
    if ( *(_DWORD *)(a1 + 184) < (unsigned int)(v8 + 1) )
    {
      v9 = sub_80CF920(a1 + 176, v9, v8 + 1, 2u);
      v8 = *(_DWORD *)(a1 + 180);
      *(_DWORD *)(a1 + 176) = v9;
    }
    *((_WORD *)v9 + v8) = v2;
    ++*(_DWORD *)(a1 + 180);
    return 0;
  }
  else
  {
LABEL_29:
    sub_80C7910(0, v6);
    return sub_80C7880(56);
  }
}
// 80DDFD8: using guessed type int dword_80DDFD8;
