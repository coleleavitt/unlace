/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A2F0
// Address: 0x000000000041A2F0

//----- (000000000041A2F0) ----------------------------------------------------
void __fastcall sub_41A2F0(_QWORD *a1)
{
  char *v2; // x0
  __int64 v3; // x23
  __int64 v4; // x20
  __int64 v5; // x21
  char *v6; // x19
  void *v7; // x0
  void *v8; // x0

  v2 = (char *)a1[5];
  *a1 = off_519C30;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = &v2[v5];
        v7 = *(void **)&v2[v5 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          j__free(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v8);
        }
        ++v4;
        v5 += 96;
        v2 = (char *)a1[5];
      }
      while ( v3 != v4 );
    }
    a1[6] = 0;
    j__free(v2);
  }
  j_j__free_0(a1);
}
// 519C30: using guessed type __int64 (__fastcall *off_519C30[2])();
