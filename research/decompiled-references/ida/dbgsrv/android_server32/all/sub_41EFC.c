/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EFC
// Address: 0x00041EFC

//----- (00041EFC) --------------------------------------------------------
int __fastcall sub_41EFC(int a1)
{
  int v1; // r4
  int v2; // r1
  int result; // r0
  int *v4; // r5
  char *v5; // r0
  char *v6; // r6
  char *v7; // r4
  int v8; // r0
  int v9; // r7
  int v10; // r7
  int v11; // r5
  int *v12; // [sp+4h] [bp-18h]
  int v13; // [sp+8h] [bp-14h]
  char *v14; // [sp+14h] [bp-8h]
  void *v15; // [sp+18h] [bp-4h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  result = loc_41FA0 + 270090;
  v4 = *(int **)(loc_41FA0 + 270090);
  if ( *v4 != v2 )
  {
    v5 = *(char **)&byte_4[(_DWORD)v4];
    v6 = &v5[24 * v2];
    v14 = &v5[24 * *v4];
    if ( v6 < v14 )
    {
      v12 = *(int **)(loc_41FA0 + 270090);
      v13 = v1;
      v7 = &v5[24 * v2];
      do
      {
        v8 = *((_DWORD *)v6 + 3);
        v7 += 24;
        if ( v8 )
        {
          v15 = (void *)(v8 - 8);
          v9 = *(_DWORD *)(v8 - 4);
          if ( v9 )
          {
            v10 = 24 * v9;
            v11 = v8 - 24;
            do
            {
              free_idcv((unsigned __int8 *)(v11 + v10));
              v10 -= 24;
            }
            while ( v10 );
          }
          operator delete[](v15);
        }
        qfree(*(void **)v6);
        qfree(*((void **)v6 + 2));
        *(_DWORD *)v6 = 0;
        *((_DWORD *)v6 + 1) = 0;
        *((_DWORD *)v6 + 2) = 0;
        *((_DWORD *)v6 + 3) = 0;
        *((_DWORD *)v6 + 4) = 0;
        *((_DWORD *)v6 + 5) = 0;
        v6 = v7;
      }
      while ( v7 < v14 );
      v4 = v12;
      v5 = *(char **)&byte_4[(_DWORD)v12];
      v1 = v13;
    }
    qfree(v5);
    *(_DWORD *)&byte_4[(_DWORD)v4] = *(_DWORD *)(v1 + 20);
    result = *(_DWORD *)(v1 + 24);
    *v4 = result;
  }
  return result;
}
