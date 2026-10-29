/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458FF0
// Address: 0x00458FF0

//----- (00458FF0) --------------------------------------------------------
signed int __cdecl sub_458FF0(int a1)
{
  int v1; // ebp
  int v2; // ebx
  int *v3; // edi
  unsigned int v4; // esi
  int v5; // eax
  char *v6; // ebp
  signed int ACP; // ebx
  int v8; // eax
  int v9; // ebx
  signed int result; // eax
  int v11; // eax
  char *v12; // eax
  int v13; // esi
  char **v14; // ebp
  int v15; // esi
  int *v16; // esi
  int v17; // [esp+10h] [ebp-Ch]
  char *v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  v1 = dword_4B74E0;
  v2 = 0;
  v3 = (int *)a1;
  v4 = 0;
  v19 = dword_4B74E0++;
  do
  {
    if ( dword_4B7360[v4] )
    {
      v5 = strcmp((const char *)&dword_4B7384[v4], (const char *)a1);
      if ( v5 )
        v5 = v5 < 0 ? -1 : 1;
      if ( !v5 )
      {
        v9 = v2 << 6;
        result = *(int *)((char *)dword_4B7360 + v9);
        *(int *)((char *)dword_4B7364 + v9) = v1;
        return result;
      }
    }
    v4 += 16;
    ++v2;
  }
  while ( v4 < 96 );
  v6 = (char *)a1;
  ACP = -1;
  v18 = (char *)a1;
  if ( !*(_BYTE *)a1 )
    goto LABEL_28;
  v8 = strcmp((const char *)a1, "char");
  if ( v8 )
    v8 = v8 < 0 ? -1 : 1;
  if ( v8 )
  {
    v11 = strcmp((const char *)a1, "wchar_t");
    if ( v11 )
      v11 = v11 < 0 ? -1 : 1;
    if ( !v11 )
    {
      ACP = 1200;
LABEL_30:
      v15 = (unsigned int)dword_4B73A4 < dword_4B7364[0];
      if ( dword_4B73E4 < (unsigned int)dword_4B7364[16 * v15] )
        v15 = 2;
      if ( dword_4B7424 < (unsigned int)dword_4B7364[16 * v15] )
        v15 = 3;
      if ( dword_4B7464 < (unsigned int)dword_4B7364[16 * v15] )
        v15 = 4;
      if ( dword_4B74A4 < (unsigned int)dword_4B7364[16 * v15] )
        v15 = 5;
      v16 = &dword_4B7360[16 * v15];
      *v16 = ACP;
      sub_45ACB0((unsigned int)(v16 + 2), v6, 28);
      sub_45ACB0((unsigned int)(v16 + 9), (char *)v3, 28);
      v16[1] = v19;
      return ACP;
    }
    if ( !sub_46BCAB(-1, a1, (unsigned __int8 *)a1, "cp", 2) )
      goto LABEL_18;
    if ( (unsigned __int8)(*(_BYTE *)a1 - 48) > 9u )
    {
      if ( !sub_46BCAB(-1, a1, (unsigned __int8 *)a1, "xx", 2) )
      {
LABEL_18:
        ACP = sub_469088(-1, a1, (unsigned __int8 *)(a1 + 2));
        goto LABEL_29;
      }
      v12 = off_4B50B4;
      if ( !off_4B50B4 )
        return ACP;
      v13 = 0;
      v14 = &off_4B50B4;
      v17 = 0;
      do
      {
        if ( !sub_468261(ACP, a1, (unsigned __int8 *)a1, (unsigned __int8 *)v12) )
        {
          ACP = *(int *)((char *)dword_4B50B0 + v13);
          v18 = *v14;
        }
        v13 = v17 * 4 + 8;
        v12 = (&off_4B50B4)[v17 + 2];
        v14 = &(&off_4B50B4)[v17 + 2];
        v17 += 2;
      }
      while ( v12 );
      v6 = v18;
    }
    else
    {
      ACP = sub_469088(-1, a1, (unsigned __int8 *)a1);
    }
  }
  else
  {
LABEL_28:
    ACP = GetACP();
    v3 = sub_457CE0(ACP);
  }
LABEL_29:
  if ( ACP > 0 )
    goto LABEL_30;
  return ACP;
}
// 4B50B0: using guessed type int dword_4B50B0[];
// 4B50B4: using guessed type char *off_4B50B4;
// 4B7360: using guessed type int dword_4B7360[];
// 4B7364: using guessed type int dword_4B7364[];
// 4B7384: using guessed type int dword_4B7384[8];
// 4B73A4: using guessed type int dword_4B73A4;
// 4B73E4: using guessed type int dword_4B73E4;
// 4B7424: using guessed type int dword_4B7424;
// 4B7464: using guessed type int dword_4B7464;
// 4B74A4: using guessed type int dword_4B74A4;
// 4B74E0: using guessed type int dword_4B74E0;
