/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032910
// Address: 0x0000000140032910

//----- (0000000140032910) ----------------------------------------------------
_QWORD *__fastcall sub_140032910(_QWORD *a1, char a2)
{
  void **v4; // rsi
  void *v5; // rcx
  void **v6; // rsi
  void *v7; // rcx
  __int64 v8; // rcx
  void **v9; // rsi
  void *v10; // rcx

  if ( *(_DWORD *)a1 == 1 )
  {
    v9 = (void **)a1[2];
    if ( v9 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        v9[1] = nullptr;
        j_free(v10);
        *v9 = nullptr;
        v9[2] = nullptr;
      }
      j_j_free(v9);
    }
  }
  else
  {
    if ( *(_DWORD *)a1 == 2 || *(_DWORD *)a1 == 3 || *(_DWORD *)a1 == 4 )
    {
      v6 = (void **)a1[1];
      if ( v6 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = nullptr;
          j_free(v7);
          *v6 = nullptr;
          v6[2] = nullptr;
        }
        j_free(v6);
      }
    }
    else
    {
      if ( *(_DWORD *)a1 != 5 )
        goto LABEL_20;
      v4 = (void **)a1[1];
      if ( v4 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          v4[1] = nullptr;
          j_free(v5);
          *v4 = nullptr;
          v4[2] = nullptr;
        }
        j_j_free(v4);
      }
    }
    v8 = a1[2];
    if ( v8 )
      sub_140032910(v8, 1);
  }
LABEL_20:
  if ( (a2 & 1) != 0 )
    j_j_free(a1);
  return a1;
}
