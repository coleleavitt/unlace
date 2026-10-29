/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450E98
// Address: 0x0000000000450E98

//----- (0000000000450E98) ----------------------------------------------------
void __fastcall sub_450E98(__int64 a1)
{
  __int64 v1; // x2
  __int64 v2; // x21
  __int64 v3; // x2
  __int64 v4; // x22
  char **v5; // x23
  char *v6; // x1
  char *v7; // x24
  __int64 v8; // x19
  char *v9; // x20
  void *v10; // x0
  char *v11; // x1

  v2 = *(_QWORD *)(a1 + 56);
  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 56 * v1 - 32);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(v2 + 56 * v1 - 24);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v2 + 56 * v1 - 8);
  if ( v1 )
  {
    v3 = v1 - 1;
    *(_QWORD *)(a1 + 64) = v3;
    v4 = 56 * v3;
    v5 = (char **)(v2 + 56 * v3);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = v5[1];
      if ( v7 )
      {
        v8 = 0;
        v9 = nullptr;
        while ( 1 )
        {
          v10 = *(void **)&v6[v8];
          v11 = &v6[v8];
          if ( v10 )
          {
            *((_QWORD *)v11 + 1) = 0;
            j__free(v10);
          }
          ++v9;
          v8 += 24;
          if ( v7 == v9 )
            break;
          v6 = *v5;
        }
        v6 = *(char **)(v2 + v4);
      }
      v5[1] = nullptr;
      j__free(v6);
    }
  }
}
