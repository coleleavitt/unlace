/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C460
// Address: 0x0003C460

//----- (0003C460) --------------------------------------------------------
unsigned int *__cdecl sub_3C460(int a1, int a2, char *s2)
{
  int v3; // eax
  unsigned int *v4; // ecx
  __int64 *v5; // edi
  unsigned int *v6; // esi
  const char *v7; // eax
  char *v9; // [esp+18h] [ebp-24h] BYREF
  int v10; // [esp+1Ch] [ebp-20h]
  int v11; // [esp+20h] [ebp-1Ch]
  unsigned int v12; // [esp+28h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20099);
    BUG();
  }
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  if ( (v3 & 0x3FFFFFF) == 0 )
    return nullptr;
  v4 = *(unsigned int **)(a1 + 16);
  v5 = (__int64 *)(a1 + 140);
  v6 = v4;
  do
  {
    if ( v6[1] == a2 )
    {
      v10 = 0;
      v7 = byte_EF875;
      if ( *v5 >= 1 )
      {
        v7 = byte_EF875;
        if ( *(_QWORD *)(a1 + 156) )
        {
          sub_3C8A0(*(int **)(a1 + 132), (void **)&v9, v5, *v6);
          v7 = byte_EF875;
          if ( v10 )
            v7 = v9;
        }
      }
      if ( !strcmp(v7, s2) )
        goto LABEL_13;
      v4 = *(unsigned int **)(a1 + 16);
      v3 = *(_DWORD *)(a1 + 20);
    }
    v6 += 16;
  }
  while ( v6 != &v4[16 * v3] );
  v6 = nullptr;
LABEL_13:
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
    v9 = nullptr;
    v11 = 0;
  }
  return v6;
}
// 13E34C: using guessed type int under_debugger;
