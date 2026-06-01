/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461A00
// Address: 0x00461A00

//----- (00461A00) --------------------------------------------------------
int __cdecl sub_461A00(unsigned int *a1, int a2, char *a3, int a4, int a5)
{
  void *v5; // ebx
  int v6; // edi
  char *v7; // esi
  char *v8; // ecx
  unsigned __int8 v9; // dl
  char v10; // ah
  unsigned __int16 v11; // cx
  int v12; // esi
  char v13; // ah
  char *v14; // esi
  char v15; // dh
  int v16; // edi
  int v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v21; // [esp+10h] [ebp-18h] BYREF
  int v22; // [esp+14h] [ebp-14h]
  unsigned int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+24h] [ebp-4h]
  char *v25; // [esp+38h] [ebp+10h]
  unsigned __int16 v26; // [esp+3Ch] [ebp+14h]

  v5 = nullptr;
  v6 = 0;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v7 = a3;
  v24 = 0;
  v8 = &a3[a4];
  v25 = &a3[a4];
  while ( v7 < v8 )
  {
    v9 = *v7++;
    if ( v9 >= 0x80u )
    {
      if ( (v9 & 0xE0) == 0xC0 )
      {
        if ( v7 >= v8 )
          goto LABEL_21;
        v10 = *v7++;
        if ( (v10 & 0xC0) != 0x80 || (v11 = v10 & 0x3F | ((v9 & 0x1F) << 6), v26 = v11, v11 < 0x80u) && v11 )
        {
LABEL_10:
          v12 = -1;
          *sub_46B984() = 42;
          goto LABEL_25;
        }
      }
      else
      {
        if ( (v9 & 0xF0) != 0xE0 )
          goto LABEL_10;
        if ( v7 >= v8 )
          goto LABEL_21;
        v13 = *v7;
        v14 = v7 + 1;
        if ( (v13 & 0xC0) != 0x80 )
          goto LABEL_10;
        if ( v14 >= v8 )
        {
LABEL_21:
          v12 = -1;
          *sub_46B984() = 22;
          goto LABEL_25;
        }
        v15 = *v14;
        v7 = v14 + 1;
        if ( (v15 & 0xC0) != 0x80 )
          goto LABEL_10;
        v26 = v15 & 0x3F | (((v9 << 6) | v13 & 0x3F) << 6);
        if ( v26 < 0x800u )
          goto LABEL_10;
      }
      v8 = v25;
    }
    else
    {
      v26 = v9;
    }
    v16 = v6 != 0 ? v6 - 1 : 0;
    v17 = v16 + 3;
    if ( v16 + 3 > v23 )
    {
      v18 = (char *)sub_453B00((int)&v21, v5, v16 + 3, 1u);
      v8 = v25;
      v5 = v18;
      v21 = v18;
      v17 = v16 + 3;
    }
    v22 = v17;
    *((_BYTE *)v5 + v16 + 2) = 0;
    *(_WORD *)&v21[v16] = v26;
    v6 = v22;
    v5 = v21;
  }
  v19 = (char *)MultiByteStr;
  if ( v6 )
    v19 = (char *)v5;
  v12 = sub_459D00(a1, "UTF-16LE", a2, v19, v6 != 0 ? (const char *)(v6 - 1) : nullptr, a5);
LABEL_25:
  v24 = 11;
  if ( v21 )
  {
    v22 = 0;
    sub_453A20(v21);
  }
  return v12;
}
