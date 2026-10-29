/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8077EF0
// Address: 0x08077EF0

//----- (08077EF0) --------------------------------------------------------
int __cdecl sub_8077EF0(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  char **v3; // ebp
  unsigned int v4; // esi
  char *v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v9; // [esp-1Ah] [ebp-38h]
  int v10; // [esp-16h] [ebp-34h]
  int v11; // [esp-12h] [ebp-30h]
  unsigned __int8 v12; // [esp+1h] [ebp-1Dh]
  char v13; // [esp+1h] [ebp-1Dh]

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    if ( v2 < a2 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(708, v9, v10, v11);
      BUG();
    }
    v3 = *(char ***)(a1 + 108);
    v4 = v2 - a2;
    *(_DWORD *)(a1 + 112) = v4;
    v5 = *v3;
    v6 = (unsigned int)v3[1];
    v7 = (unsigned __int8)(*v3)[v4];
    if ( v6 < v4 )
    {
      if ( (unsigned int)v3[2] < v4 )
      {
        v13 = (*v3)[v4];
        v5 = (char *)sub_80CF920((int)v3, v5, v4, 1u);
        v6 = (unsigned int)v3[1];
        LOBYTE(v7) = v13;
        *v3 = v5;
      }
      v12 = v7;
      memset(&v5[v6], 0, v4 - v6);
      v3[1] = (char *)v4;
      *(_BYTE *)(a1 + 116) = -87;
      return v12;
    }
    else
    {
      if ( v4 != v6 )
        v3[1] = (char *)v4;
      *(_BYTE *)(a1 + 116) = -87;
      return v7;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 116) = -87;
    return -87;
  }
}
// 8077FC9: variable 'v9' is possibly undefined
// 8077FC9: variable 'v10' is possibly undefined
// 8077FC9: variable 'v11' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
