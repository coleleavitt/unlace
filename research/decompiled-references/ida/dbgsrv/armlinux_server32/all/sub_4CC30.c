/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CC30
// Address: 0x0004CC30

//----- (0004CC30) --------------------------------------------------------
int __fastcall sub_4CC30(_DWORD *a1, int a2)
{
  int v3; // r8
  _DWORD *v4; // r10
  size_t v6; // r6
  int v7; // r5
  _DWORD *v8; // r4
  const char *v9; // r0
  const char *v10; // r1
  int result; // r0
  void *v12; // r4
  int v13; // r8
  char *v14; // r10

  v3 = a1[1];
  v4 = (_DWORD *)*a1;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *a1 + 12 * v3;
  if ( *a1 == v7 )
  {
LABEL_9:
    v12 = (void *)v6;
    if ( v6 )
    {
      v12 = sub_77FEC(v6);
      memcpy(v12, *(const void **)a2, v6);
      v3 = a1[1];
      v4 = (_DWORD *)*a1;
    }
    if ( (unsigned int)(v3 + 1) > a1[2] )
    {
      v4 = sub_78018((int)a1, v4, v3 + 1, 0xCu);
      v3 = a1[1];
      *a1 = v4;
    }
    result = 1;
    v13 = 3 * v3;
    v4[v13] = v12;
    v14 = (char *)&v4[v13];
    *((_DWORD *)v14 + 1) = v6;
    *((_DWORD *)v14 + 2) = v6;
    ++a1[1];
  }
  else
  {
    v8 = (_DWORD *)*a1;
    while ( 1 )
    {
      v9 = v6 ? *(const char **)a2 : (const char *)&dword_8DB98;
      v10 = v8[1] ? (const char *)*v8 : (const char *)&dword_8DB98;
      result = strcmp(v9, v10);
      if ( !result )
        break;
      v8 += 3;
      if ( (_DWORD *)v7 == v8 )
        goto LABEL_9;
    }
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
