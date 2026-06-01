/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476A0
// Address: 0x000476A0

//----- (000476A0) --------------------------------------------------------
int __cdecl sub_476A0(_DWORD *a1)
{
  int v1; // edi
  int v2; // edi
  _DWORD *v3; // esi
  const char *v4; // eax
  char *v5; // eax
  int v7; // [esp+8h] [ebp-44h]
  int v8; // [esp+Ch] [ebp-40h]
  const char *v9; // [esp+10h] [ebp-3Ch]
  int v10[3]; // [esp+18h] [ebp-34h] BYREF
  char v11[4]; // [esp+24h] [ebp-28h] BYREF
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+30h] [ebp-1Ch]
  int v15; // [esp+34h] [ebp-18h]
  unsigned int v16; // [esp+38h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v7 = a1[6];
  v8 = a1[15];
  v1 = *(_DWORD *)(v8 + 52);
  if ( (v1 & 0x7FFFFFF) != 0 )
  {
    v9 = byte_EF875;
    if ( v7 )
      v9 = (const char *)a1[5];
    v2 = 32 * v1;
    v3 = (_DWORD *)(*(_DWORD *)(v8 + 48) + 4);
    while ( 1 )
    {
      v4 = byte_EF875;
      if ( *v3 )
        v4 = (const char *)*(v3 - 1);
      if ( !strcmp(v4, v9) )
        break;
      v3 += 8;
      v2 -= 32;
      if ( !v2 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v7 )
      v5 = (char *)a1[5];
    else
      v5 = byte_EF875;
    sub_1B530((int)v10, v5);
    v11[0] = 2;
    v13 = 0;
    v12 = 0;
    v15 = 0;
    v14 = 0;
    sub_47840(v8 + 48, (unsigned int)v10);
    free_idcv(v11);
    if ( v10[0] )
    {
      v10[1] = 0;
      qfree((void *)v10[0]);
      v10[0] = 0;
      v10[2] = 0;
    }
  }
  return 0;
}
