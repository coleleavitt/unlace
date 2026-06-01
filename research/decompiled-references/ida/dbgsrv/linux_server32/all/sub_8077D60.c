/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077D60
// Address: 0x08077D60

//----- (08077D60) --------------------------------------------------------
int __cdecl sub_8077D60(int a1)
{
  __int16 v1; // ax
  int v2; // edi
  int v3; // ebp
  char *v4; // eax
  char v6; // bp
  void **v7; // edi
  _BYTE *v8; // edx
  void *v9; // eax
  void **v10; // edi
  _BYTE *v11; // edx
  void *v12; // eax
  char *s1; // [esp+0h] [ebp-20h]

  v1 = *(_WORD *)(a1 + 68);
  *(_BYTE *)(a1 + 124) = 0;
  sub_807FB30(*(int **)(a1 + 108), 1, v1);
  if ( *(_BYTE *)(a1 + 116) != 0xAF )
  {
    v6 = -32;
    if ( *(_DWORD *)(a1 + 120) == 1 )
      v6 = 112;
    v7 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = v6;
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < v8 + 1 )
    {
      v9 = sub_80CF920((int)v7, v9, (unsigned int)(v8 + 1), 1u);
      v8 = v7[1];
      *v7 = v9;
    }
    v8[(_DWORD)v9] = v6;
    v7[1] = (char *)v7[1] + 1;
    v10 = *(void ***)(a1 + 108);
    ++*(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 116) = -81;
    v11 = v10[1];
    v12 = *v10;
    if ( v10[2] < v11 + 1 )
    {
      v12 = sub_80CF920((int)v10, v12, (unsigned int)(v11 + 1), 1u);
      v11 = v10[1];
      *v10 = v12;
    }
    v11[(_DWORD)v12] = -81;
    v10[1] = (char *)v10[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  sub_807FD20(*(_DWORD *)(a1 + 104) + 16, (_DWORD *)(a1 + 212));
  v2 = *(_DWORD *)(a1 + 100);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 104);
    if ( *(_DWORD *)(v3 + 4) )
    {
      v4 = strchr(*(const char **)v3, 46);
      if ( v4 )
      {
        s1 = v4 + 1;
        if ( !strcmp(v4 + 1, "__getattr__") )
        {
          *(_DWORD *)(v2 + 44) = sub_8080690(*(_DWORD **)(a1 + 60), v3);
        }
        else if ( !strcmp(s1, "__setattr__") )
        {
          *(_DWORD *)(v2 + 48) = sub_8080690(*(_DWORD **)(a1 + 60), v3);
        }
      }
    }
  }
  sub_8077B70((_DWORD *)a1);
  return 0;
}
