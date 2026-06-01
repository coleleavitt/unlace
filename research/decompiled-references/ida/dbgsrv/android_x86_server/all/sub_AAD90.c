/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AAD90
// Address: 0x000AAD90

//----- (000AAD90) --------------------------------------------------------
int __cdecl sub_AAD90(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  const char *v4; // eax
  char *v5; // esi
  int v6; // eax
  char *v7; // esi
  unsigned int v8; // ecx
  int i; // edi
  void *v10; // eax
  int v12; // [esp+1Ch] [ebp-1040h]
  unsigned int v13; // [esp+20h] [ebp-103Ch]
  unsigned int v14; // [esp+20h] [ebp-103Ch]
  int v15; // [esp+24h] [ebp-1038h]
  unsigned int v16; // [esp+24h] [ebp-1038h]
  int v17[4]; // [esp+28h] [ebp-1034h] BYREF
  char *v18; // [esp+38h] [ebp-1024h] BYREF
  unsigned int v19; // [esp+3Ch] [ebp-1020h]
  int v20; // [esp+40h] [ebp-101Ch]
  char v21[4096]; // [esp+48h] [ebp-1014h] BYREF
  unsigned int v22; // [esp+1048h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  if ( sub_AABD0((int *)&v18) )
  {
    v13 = v19;
    if ( v19 )
    {
      v2 = 0;
      v3 = 4;
      do
      {
        v15 = v2;
        v4 = byte_EF875;
        if ( *(_DWORD *)&v18[v3] )
          v4 = *(const char **)&v18[v3 - 4];
        v5 = qmakepath(v21, 4096, v4, a2);
        if ( qfileexist(v5) )
        {
          sub_1B530((int)v17, v5);
          sub_2DAC0(a1, (char *)v17);
          if ( v17[0] )
          {
            v17[1] = 0;
            qfree((void *)v17[0]);
            v17[0] = 0;
            v17[2] = 0;
          }
        }
        v2 = v15 + 1;
        v3 += 12;
      }
      while ( v15 + 1 < v13 );
    }
    v6 = a1;
    LOBYTE(v6) = *(_DWORD *)(a1 + 4) != 0;
    v12 = v6;
  }
  else
  {
    v12 = 0;
  }
  v7 = v18;
  if ( v18 )
  {
    v14 = v19;
    if ( v19 )
    {
      v8 = 1;
      for ( i = 0; ; i += 12 )
      {
        v10 = *(void **)&v7[i];
        if ( v10 )
        {
          v16 = v8;
          *(_DWORD *)&v7[i + 4] = 0;
          qfree(v10);
          *(_DWORD *)&v7[i] = 0;
          *(_DWORD *)&v7[i + 8] = 0;
          v8 = v16;
        }
        if ( v8 >= v14 )
          break;
        v7 = v18;
        ++v8;
      }
      v7 = v18;
    }
    v19 = 0;
    qfree(v7);
    v18 = nullptr;
    v20 = 0;
  }
  return v12;
}
