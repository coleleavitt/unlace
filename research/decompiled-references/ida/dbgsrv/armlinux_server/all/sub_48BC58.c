/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BC58
// Address: 0x000000000048BC58

//----- (000000000048BC58) ----------------------------------------------------
void __fastcall sub_48BC58(_QWORD *a1)
{
  __int64 v1; // x1
  signed __int64 v2; // x2
  unsigned __int64 v3; // x1
  unsigned __int64 v5; // x20
  unsigned __int64 v6; // x20
  void *v7; // x0
  void *v8; // x2
  bool v9; // zf
  void *v10; // x0

  v1 = a1[1];
  a1[3] = 0;
  v2 = *(_QWORD *)(v1 + 8);
  a1[2] = v2;
  a1[4] = 0;
  a1[5] = 0;
  v3 = *(unsigned int *)(v1 + 16);
  a1[6] = v3;
  if ( v3 )
  {
    if ( v2 > 0 )
    {
      v5 = (v2 - 1 + v3) / v3;
      a1[5] = sub_491040(v2);
      v6 = (v5 + 7) >> 3;
      v7 = sub_491040(v6);
      v8 = (void *)a1[5];
      a1[4] = v7;
      if ( v7 )
        v9 = v8 == nullptr;
      else
        v9 = 1;
      if ( v9 )
      {
        j__free(v8);
        v10 = (void *)a1[4];
        a1[5] = 0;
        j__free(v10);
        a1[4] = 0;
        a1[6] = 0;
      }
      else
      {
        memset(v7, 0, v6);
      }
    }
    else
    {
      a1[6] = 0;
    }
  }
}
