/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6214C
// Address: 0x0006214C

//----- (0006214C) --------------------------------------------------------
int __fastcall sub_6214C(int a1, int *a2, __int64 a3, int a4)
{
  int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r6
  __int64 v8; // kr00_8
  __int64 v9; // r0
  __int64 v10; // r0
  _BYTE *v12; // r0
  _BYTE *v13; // r7
  size_t v14; // r0
  void *v15; // r0
  unsigned int v16; // r0
  unsigned int v18; // [sp+18h] [bp-8h] BYREF

  if ( !a3 || (v5 = 0, qlseek((int)a2, a3, 0) == a3) )
  {
    v5 = 0;
    if ( qlread((int)a2, &v18, 4) == 4 )
    {
      v6 = v18;
      if ( a4 )
      {
        v6 = (v18 << 24) + ((v18 << 8) & 0xFF0000) + ((v18 >> 8) & 0xFF00) + HIBYTE(v18);
        v18 = v6;
      }
      if ( v6 >= 5 )
      {
        v7 = 0;
        qlseek((int)a2, -4, 1);
        v8 = qlseek((int)a2, 0, 1);
        LODWORD(v9) = qlsize(a2);
        v10 = v9 - v8;
        if ( (v8 | v10) > -1 )
        {
          v5 = 0;
          if ( v10 >= v18 )
          {
            v12 = qalloc(v18 + 1);
            if ( !v12 )
              return v5;
            v13 = v12;
            v14 = qlread((int)a2, v12, v18);
            if ( v14 == v18 )
            {
              v13[v14] = 0;
              v15 = *(void **)a1;
              if ( *(_DWORD *)a1 )
              {
                *(_DWORD *)(a1 + 4) = 0;
                qfree(v15);
                *(_DWORD *)(a1 + 8) = 0;
                *(_DWORD *)a1 = 0;
              }
              v16 = v18 + 1;
              *(_DWORD *)a1 = v13;
              *(_DWORD *)(a1 + 4) = v16;
              *(_DWORD *)(a1 + 8) = v16;
              return 1;
            }
            qfree(v13);
            return 0;
          }
          v7 = v10;
        }
        v18 = v7;
        return 0;
      }
    }
  }
  return v5;
}
// 621EA: variable 'v9' is possibly undefined
