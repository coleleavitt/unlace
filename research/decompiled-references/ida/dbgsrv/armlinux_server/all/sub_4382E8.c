/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4382E8
// Address: 0x00000000004382E8

//----- (00000000004382E8) ----------------------------------------------------
void __fastcall sub_4382E8(__int64 a1)
{
  unsigned int v2; // w0
  void **v3; // x19
  void *v4; // x0
  void **v5; // x20
  void *v6; // x0
  void *v7; // x19
  void **v8; // x20
  void *v9; // x0

  v2 = *(_DWORD *)a1;
  if ( v2 <= 4 )
  {
    if ( v2 < 2 )
    {
      if ( v2 == 1 )
      {
        v3 = *(void ***)(a1 + 16);
        if ( v3 )
        {
          v4 = *v3;
          if ( *v3 )
          {
            v3[1] = nullptr;
            j__free(v4);
          }
          j_j__free_0(v3);
        }
      }
      return;
    }
    v5 = *(void ***)(a1 + 8);
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = nullptr;
        j__free(v6);
      }
      j__free(v5);
    }
    goto LABEL_12;
  }
  if ( v2 != 5 )
    return;
  v8 = *(void ***)(a1 + 8);
  if ( !v8 )
  {
LABEL_12:
    v7 = *(void **)(a1 + 16);
    if ( !v7 )
      return;
LABEL_19:
    sub_4382E8(v7);
    j_j__free_0(v7);
    return;
  }
  v9 = *v8;
  if ( *v8 )
  {
    v8[1] = nullptr;
    j__free(v9);
  }
  j_j__free_0(v8);
  v7 = *(void **)(a1 + 16);
  if ( v7 )
    goto LABEL_19;
}
