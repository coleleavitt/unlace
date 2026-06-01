/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C250
// Address: 0x0001C250

//----- (0001C250) --------------------------------------------------------
void __cdecl sub_1C250(_DWORD *a1)
{
  _DWORD *v1; // edi
  void **v2; // esi
  void **v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // edx
  char *v6; // edi
  void **v7; // esi
  unsigned int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // [esp+10h] [ebp-1Ch]
  unsigned int v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-1Ch]
  unsigned int v14; // [esp+14h] [ebp-18h]
  _DWORD *v15; // [esp+14h] [ebp-18h]
  unsigned int v16; // [esp+18h] [ebp-14h]
  void **v17; // [esp+18h] [ebp-14h]

  v1 = a1;
  v11 = a1[4];
  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  if ( v3 == v2 )
  {
    v15 = a1 + 5;
  }
  else
  {
    v16 = v11 / 0x5D;
    v14 = v11 % 0x5D;
    v4 = a1[5] + v11;
    v12 = v4 / 0x5D;
    v5 = v4 % 0x5D;
    v17 = &v2[v16];
    v6 = (char *)*v17 + 44 * v14;
    v15 = a1 + 5;
    v13 = (int)v2[v12] + 44 * v5;
    if ( (char *)v13 == v6 )
    {
      v1 = a1;
    }
    else
    {
      v7 = v17;
      do
      {
        free_debug_event(v6);
        v6 += 44;
        if ( v6 - (_BYTE *)*v7 == 4092 )
        {
          v6 = (char *)v7[1];
          ++v7;
        }
      }
      while ( (char *)v13 != v6 );
      v1 = a1;
      v2 = (void **)a1[1];
      v3 = (void **)a1[2];
    }
  }
  *v15 = 0;
  v8 = v3 - v2;
  if ( v8 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v9 = v1[2];
      v2 = (void **)(v1[1] + 4);
      v1[1] = v2;
      v8 = (v9 - (int)v2) >> 2;
    }
    while ( v8 > 2 );
  }
  if ( v8 == 1 )
  {
    v10 = 46;
  }
  else
  {
    if ( v8 != 2 )
      return;
    v10 = 93;
  }
  v1[4] = v10;
}
// FF0: using guessed type Elf32_Sym stru_FF0;
