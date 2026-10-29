/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D3C
// Address: 0x00045D3C

//----- (00045D3C) --------------------------------------------------------
int __fastcall sub_45D3C(int result, int a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  _DWORD *v6; // r7
  unsigned int v7; // r9
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  signed int v10; // r3
  void *v11; // r0
  const char *v12; // r0
  const char *v13; // r1
  size_t n; // [sp+4h] [bp-28h]
  int v16; // [sp+1Ch] [bp-10h] BYREF
  int v17; // [sp+20h] [bp-Ch]

  if ( a3 != a2 )
  {
    v3 = a2;
    v4 = (_DWORD *)result;
    v5 = (_DWORD *)(result + 4);
    sub_42F38(&v16, (_DWORD *)result, result + 4, (const char **)(a2 + 16));
    while ( 1 )
    {
      v6 = (_DWORD *)v17;
      if ( !v17 )
        goto LABEL_4;
      v7 = v16 || v5 == (_DWORD *)v17;
      if ( !v7 )
        break;
LABEL_11:
      v8 = sub_805CC(0x38u);
      v8[4] = 0;
      v8[5] = 0;
      v9 = v8;
      v8[6] = 0;
      v10 = *(_DWORD *)(v3 + 20);
      n = v10;
      if ( v10 )
      {
        v11 = sub_77E84(v10);
        v9[4] = v11;
        v9[6] = n;
        memcpy(v11, *(const void **)(v3 + 16), n);
        v9[5] = n;
      }
      *((_BYTE *)v9 + 32) = 2;
      v9[10] = 0;
      v9[11] = 0;
      v9[12] = 0;
      v9[13] = 0;
      sub_459A0((unsigned __int8 *)v9 + 32, (unsigned __int8 *)(v3 + 32));
      sub_8132C((_DWORD *)v7, v9, v6, v5);
      ++v4[5];
LABEL_4:
      result = sub_81290(v3);
      v3 = result;
      if ( a3 == result )
        return result;
      sub_42F38(&v16, v4, (int)v5, (const char **)(result + 16));
    }
    if ( *(_DWORD *)(v3 + 20) )
    {
      v12 = *(const char **)(v3 + 16);
      if ( *(_DWORD *)(v17 + 20) )
      {
LABEL_16:
        v13 = *(const char **)(v17 + 16);
LABEL_17:
        v7 = (unsigned int)strcmp(v12, v13) >> 31;
        goto LABEL_11;
      }
    }
    else
    {
      v12 = (const char *)&dword_8DA5C;
      if ( *(_DWORD *)(v17 + 20) )
        goto LABEL_16;
    }
    v13 = (const char *)&dword_8DA5C;
    goto LABEL_17;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
