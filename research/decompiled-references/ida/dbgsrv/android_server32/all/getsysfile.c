/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x00079A94

//----- (00079A94) --------------------------------------------------------
char *__fastcall getsysfile(char *a1, int a2, int a3, char *a4)
{
  unsigned int v4; // r6
  int v5; // r4
  char *v6; // r2
  char *v7; // r5
  char *v8; // r0
  unsigned int v9; // r6
  int i; // r7
  char *v11; // r1
  int v12; // r3
  void *v13; // r0
  _DWORD *v14; // r4
  unsigned int v18; // [sp+18h] [bp-1Ch]
  char *v19; // [sp+1Ch] [bp-18h]
  char *v20; // [sp+24h] [bp-10h] BYREF
  unsigned int v21; // [sp+28h] [bp-Ch]
  int v22; // [sp+2Ch] [bp-8h]

  v21 = 0;
  v20 = nullptr;
  v22 = 0;
  get_ida_subdirs((int *)&v20, a4, 0);
  if ( v21 )
  {
    v4 = 0;
    v5 = 4;
    do
    {
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)&v20[v5] )
        v6 = *(char **)&v20[v5 - 4];
      v7 = qmakepath(a1, a2, v6);
      ++v4;
      if ( qfileexist(v7) )
        break;
      v5 += 12;
      v7 = nullptr;
    }
    while ( v4 < v21 );
  }
  else
  {
    v7 = nullptr;
  }
  v8 = v20;
  if ( v20 )
  {
    v18 = v21;
    if ( v21 )
    {
      v9 = 1;
      for ( i = 8; ; i += 12 )
      {
        v19 = v8;
        v11 = &v8[i];
        v12 = (int)&v8[i - 4];
        v13 = *(void **)&v8[i - 8];
        v14 = (_DWORD *)(v12 - 4);
        if ( v13 )
        {
          *((_DWORD *)v11 - 1) = 0;
          qfree(v13);
          *v14 = 0;
          *(_DWORD *)&v19[i] = 0;
        }
        if ( v9 >= v18 )
          break;
        ++v9;
        v8 = v20;
      }
      v8 = v20;
    }
    v21 = 0;
    qfree(v8);
    v22 = 0;
    v20 = nullptr;
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;
