/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0B40
// Address: 0x000D0B40

//----- (000D0B40) --------------------------------------------------------
_DWORD *__fastcall sub_D0B40(char **a1)
{
  char v2; // al
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  char *v6; // edi
  char *v7; // edx
  signed int v8; // edi
  char *v9; // eax
  int v10; // edx
  void *v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-20h]
  _DWORD *v13; // [esp+14h] [ebp-18h]
  char *v14; // [esp+18h] [ebp-14h]

  if ( a1[1] == *a1 )
    return (_DWORD *)sub_C61C0(a1);
  v2 = **a1;
  if ( v2 == 68 )
  {
    v3 = (_DWORD *)sub_C6FD0(a1);
    if ( !v3 )
      return nullptr;
LABEL_8:
    v4 = v3;
    v6 = a1[38];
    if ( v6 == a1[39] )
    {
      v7 = a1[37];
      v8 = v6 - v7;
      v12 = v8 >> 1;
      v13 = v3;
      if ( a1 + 40 == (char **)v7 )
      {
        v14 = a1[37];
        v11 = malloc(2 * v8);
        if ( v8 )
          memmove(v11, v14, v8);
        v9 = (char *)v11;
        a1[37] = (char *)v11;
        v4 = v13;
        v10 = v8 >> 2;
      }
      else
      {
        v9 = (char *)realloc(v7, 2 * v8);
        v10 = v8 >> 2;
        v4 = v13;
        a1[37] = v9;
      }
      v6 = &v9[4 * v10];
      a1[38] = v6;
      a1[39] = &v9[4 * v12];
    }
    a1[38] = v6 + 4;
    *(_DWORD *)v6 = v4;
    return v4;
  }
  if ( v2 != 84 )
    return (_DWORD *)sub_C61C0(a1);
  v3 = sub_C6CF0((int)a1);
  if ( v3 )
    goto LABEL_8;
  return nullptr;
}
