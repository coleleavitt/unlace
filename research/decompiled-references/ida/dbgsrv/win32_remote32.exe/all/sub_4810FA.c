/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4810FA
// Address: 0x004810FA

//----- (004810FA) --------------------------------------------------------
int __cdecl sub_4810FA(int a1, const CHAR *a2, int a3, int *a4)
{
  const CHAR *v4; // ebx
  int *v5; // esi
  int v6; // eax
  unsigned int *v7; // edi
  char v9; // cl
  char v10; // al
  unsigned __int8 v11; // ch
  unsigned __int8 v12; // cl
  unsigned int v13; // edx
  char v14; // ah
  unsigned int v15; // [esp+14h] [ebp-1Ch]
  const CHAR *v16; // [esp+18h] [ebp-18h]
  char v17; // [esp+1Dh] [ebp-13h]
  unsigned __int8 v18; // [esp+1Eh] [ebp-12h]
  char v19; // [esp+1Fh] [ebp-11h]
  int v20; // [esp+20h] [ebp-10h]
  int v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]

  v4 = a2;
  v5 = a4;
  if ( !a4 )
    v5 = dword_4B7F9C;
  if ( a2 )
  {
    v6 = a3;
  }
  else
  {
    v4 = pNodeName;
    v6 = 1;
  }
  v15 = v6;
  v7 = a2 != nullptr ? (unsigned int *)a1 : nullptr;
  if ( !v6 )
    return -2;
  if ( *((_WORD *)v5 + 3) )
  {
    v12 = *((_BYTE *)v5 + 4);
    v13 = *v5;
    v11 = *((_BYTE *)v5 + 6);
    if ( (unsigned __int8)(v12 - 2) <= 2u && v11 && v11 < v12 )
      goto LABEL_23;
    return sub_47F0F6(v5);
  }
  v9 = *v4++;
  v18 = v9;
  if ( v9 >= 0 )
  {
    if ( v7 )
      *v7 = (unsigned __int8)v9;
    return v9 != 0;
  }
  if ( (v9 & 0xE0) != 0xC0 )
  {
    if ( (v9 & 0xF0) == 0xE0 )
    {
      v10 = 3;
      goto LABEL_19;
    }
    if ( (v9 & 0xF8) == 0xF0 )
    {
      v10 = 4;
      goto LABEL_19;
    }
    return sub_47F0F6(v5);
  }
  v10 = 2;
LABEL_19:
  v19 = v10;
  v17 = v10;
  v11 = v10;
  v12 = v10;
  v13 = v18 & ((1 << (7 - v10)) - 1);
LABEL_23:
  if ( v11 < v15 )
    v15 = v11;
  v16 = (const CHAR *)(v4 - a2);
  while ( (unsigned int)v16 < v15 )
  {
    v14 = *v4++;
    ++v16;
    if ( (v14 & 0xC0) != 0x80 )
      return sub_47F0F6(v5);
    v13 = v14 & 0x3F | (v13 << 6);
  }
  if ( v15 < v11 )
  {
    *((_WORD *)v5 + 2) = v12;
    *v5 = v13;
    *((_WORD *)v5 + 3) = (unsigned __int8)(v11 - v15);
    return -2;
  }
  if ( v13 >= 0xD800 && v13 <= 0xDFFF )
    return sub_47F0F6(v5);
  if ( v13 > 0x10FFFF )
    return sub_47F0F6(v5);
  v20 = 128;
  v21 = 2048;
  v22 = 0x10000;
  if ( v13 < (unsigned int)(&v16)[v12] )
    return sub_47F0F6(v5);
  if ( v7 )
    *v7 = v13;
  *v5 = 0;
  v5[1] = 0;
  return v13 != 0 ? v11 : 0;
}
// 4B7F9C: using guessed type int dword_4B7F9C[2];
