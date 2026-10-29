/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_865B4
// Address: 0x00000000000865B4

//----- (00000000000865B4) ----------------------------------------------------
void __fastcall sub_865B4(__int64 a1)
{
  void **v2; // x0
  unsigned __int64 v3; // x20
  __int64 v4; // x21
  unsigned __int64 v5; // x22
  void *v6; // x8
  void **v7; // x23

  v2 = *(void ***)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = 1;
      v6 = *v2;
      if ( *v2 )
        goto LABEL_6;
      while ( v5 < v3 )
      {
        v2 = *(void ***)a1;
        ++v5;
        v4 += 4;
        v6 = *(void **)(*(_QWORD *)a1 + v4 * 8);
        if ( v6 )
        {
LABEL_6:
          v7 = &v2[v4];
          v2[v4 + 1] = nullptr;
          qfree(v6);
          *v7 = nullptr;
          v7[2] = nullptr;
        }
      }
      v2 = *(void ***)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
