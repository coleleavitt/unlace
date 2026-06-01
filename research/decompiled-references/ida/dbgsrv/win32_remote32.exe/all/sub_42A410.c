/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A410
// Address: 0x0042A410

//----- (0042A410) --------------------------------------------------------
int __stdcall sub_42A410(int a1)
{
  int v1; // edi
  int v2; // esi
  const char *v3; // ecx
  const char *v4; // eax
  int v5; // eax
  const char *v6; // edi
  _BYTE *v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // eax
  _BYTE *v11; // [esp+Ch] [ebp-38h] BYREF
  unsigned int v12; // [esp+10h] [ebp-34h]
  int v13; // [esp+14h] [ebp-30h]
  char v14[8]; // [esp+1Ch] [ebp-28h] BYREF
  __int128 v15; // [esp+24h] [ebp-20h]
  int *v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+40h] [ebp-4h]
  int v18; // [esp+4Ch] [ebp+8h]

  v1 = a1 + 16;
  v16 = (int *)(*(_DWORD *)(a1 + 56) + 52);
  v2 = *v16;
  v18 = *v16 + 40 * v16[1];
  if ( *v16 == v18 )
  {
LABEL_10:
    if ( *(_DWORD *)(v1 + 4) )
      v6 = *(const char **)v1;
    else
      v6 = MultiByteStr;
    v7 = nullptr;
    v11 = nullptr;
    v12 = 0;
    v13 = 0;
    v17 = 0;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8 + 1;
      if ( v8 != -1 )
      {
        v7 = sub_453B00((int)&v11, nullptr, v8 + 1, 1u);
        v9 = v8 + 1;
        v11 = v7;
      }
      v12 = v9;
      sub_464310((unsigned int)v7, (unsigned int)v6, v8);
      v11[v8] = 0;
    }
    v14[0] = 2;
    v15 = 0;
    LODWORD(v15) = 0;
    v17 = 1;
    sub_42E8F0((int)v16, (unsigned int)&v11);
    v17 = 2;
    sub_423B70((int)v14);
    v17 = 3;
    if ( v11 )
    {
      v12 = 0;
      sub_453A20(v11);
    }
  }
  else
  {
    while ( 1 )
    {
      v3 = MultiByteStr;
      if ( *(_DWORD *)(v1 + 4) )
        v3 = *(const char **)v1;
      v4 = MultiByteStr;
      if ( *(_DWORD *)(v2 + 4) )
        v4 = *(const char **)v2;
      v5 = strcmp(v4, v3);
      if ( v5 )
        v5 = v5 < 0 ? -1 : 1;
      if ( !v5 )
        break;
      v2 += 40;
      if ( v2 == v18 )
        goto LABEL_10;
    }
  }
  return 0;
}
