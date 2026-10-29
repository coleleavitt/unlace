/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A328
// Address: 0x0007A328

//----- (0007A328) --------------------------------------------------------
bool __fastcall sub_7A328(int a1)
{
  unsigned int v1; // r6
  int v2; // r5
  char *v3; // r2
  char *v4; // r7
  char *v5; // r5
  unsigned int v6; // r6
  int i; // r4
  void *v8; // r0
  _BOOL4 v11; // [sp+18h] [bp-102Ch]
  unsigned int v12; // [sp+1Ch] [bp-1028h]
  unsigned int v13; // [sp+20h] [bp-1024h]
  void *v14[3]; // [sp+28h] [bp-101Ch] BYREF
  char *v15; // [sp+34h] [bp-1010h] BYREF
  unsigned int v16; // [sp+38h] [bp-100Ch]
  int v17; // [sp+3Ch] [bp-1008h]
  char v18[4100]; // [sp+40h] [bp-1004h] BYREF

  v16 = 0;
  v15 = nullptr;
  v11 = 0;
  v17 = 0;
  if ( sub_7A220((int *)&v15) )
  {
    v12 = v16;
    if ( v16 )
    {
      v1 = 0;
      v2 = 4;
      do
      {
        v3 = &byte_B3CBE;
        if ( *(_DWORD *)&v15[v2] )
          v3 = *(char **)&v15[v2 - 4];
        v4 = qmakepath(v18, 4096, v3);
        if ( qfileexist(v4) )
        {
          sub_1B09C((int)v14, v4);
          sub_265B0(a1, v14);
          if ( v14[0] )
          {
            v14[1] = nullptr;
            qfree(v14[0]);
            v14[2] = nullptr;
            v14[0] = nullptr;
          }
        }
        v2 += 12;
        ++v1;
      }
      while ( v1 < v12 );
    }
    v11 = *(_DWORD *)(a1 + 4) != 0;
  }
  v5 = v15;
  if ( v15 )
  {
    v13 = v16;
    if ( v16 )
    {
      v6 = 1;
      for ( i = 8; ; i += 12 )
      {
        v8 = *(void **)&v5[i - 8];
        if ( v8 )
        {
          *(_DWORD *)&v5[i - 4] = 0;
          qfree(v8);
          *(_DWORD *)&v5[i - 8] = 0;
          *(_DWORD *)&v5[i] = 0;
        }
        if ( v6 >= v13 )
          break;
        ++v6;
        v5 = v15;
      }
      v5 = v15;
    }
    v16 = 0;
    qfree(v5);
    v17 = 0;
    v15 = nullptr;
  }
  return v11;
}
// B3CBE: using guessed type char byte_B3CBE;
