/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078220
// Address: 0x08078220

//----- (08078220) --------------------------------------------------------
void *__usercall sub_8078220@<eax>(int a1@<eax>, unsigned __int8 a2@<dl>, __int16 a3@<cx>)
{
  char v5; // dl
  char v6; // al
  void **v7; // ebp
  char v8; // di
  _BYTE *v9; // edx
  void *v10; // eax
  void *result; // eax
  char v12; // di
  _BYTE *v13; // ecx
  void *v14; // eax
  void **v15; // edi
  _BYTE *v16; // ecx
  __int16 v17; // [esp+4h] [ebp-20h]
  char v18; // [esp+4h] [ebp-20h]
  char v19; // [esp+4h] [ebp-20h]

  v5 = a3;
  v6 = a2 >> 3;
  v7 = *(void ***)(a1 + 108);
  if ( (unsigned __int8)a3 == a3 )
  {
    v12 = v6 + 0x80;
    *(_BYTE *)(a1 + 116) = v6 + 0x80;
    v13 = v7[1];
    v14 = *v7;
    if ( v7[2] < v13 + 1 )
    {
      v18 = v5;
      v14 = sub_80CF920((int)v7, v14, (unsigned int)(v13 + 1), 1u);
      v13 = v7[1];
      v5 = v18;
      *v7 = v14;
    }
    v13[(_DWORD)v14] = v12;
    v7[1] = (char *)v7[1] + 1;
    v15 = *(void ***)(a1 + 108);
    ++*(_DWORD *)(a1 + 112);
    v16 = v15[1];
    result = *v15;
    if ( v15[2] < v16 + 1 )
    {
      v19 = v5;
      result = sub_80CF920((int)v15, result, (unsigned int)(v16 + 1), 1u);
      v16 = v15[1];
      v5 = v19;
      *v15 = result;
    }
    v16[(_DWORD)result] = v5;
    v15[1] = (char *)v15[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  else
  {
    v8 = v6 - 127;
    *(_BYTE *)(a1 + 116) = v6 - 127;
    v9 = v7[1];
    v10 = *v7;
    if ( v7[2] < v9 + 1 )
    {
      v17 = a3;
      v10 = sub_80CF920((int)v7, v10, (unsigned int)(v9 + 1), 1u);
      v9 = v7[1];
      a3 = v17;
      *v7 = v10;
    }
    v9[(_DWORD)v10] = v8;
    v7[1] = (char *)v7[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    return sub_8078190(a1, a3);
  }
  return result;
}
