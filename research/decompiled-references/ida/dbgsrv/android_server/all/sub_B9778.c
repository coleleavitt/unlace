/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9778
// Address: 0x00000000000B9778

//----- (00000000000B9778) ----------------------------------------------------
void __fastcall sub_B9778(_QWORD *a1)
{
  __int64 v1; // x8
  void *v3; // x0
  unsigned __int64 v4; // x8
  void *v5; // x20
  void *v6; // x0
  void *v7; // x8
  void *v8; // x0

  v1 = a1[1];
  a1[3] = 0;
  v3 = *(void **)(v1 + 8);
  a1[4] = 0;
  a1[5] = 0;
  a1[2] = v3;
  v4 = *(unsigned int *)(v1 + 16);
  a1[6] = v4;
  if ( (_DWORD)v4 )
  {
    if ( (__int64)v3 >= 1 )
    {
      v5 = (void *)((((unsigned __int64)v3 + v4 - 1) / v4 + 7) >> 3);
      a1[5] = qalloc(v3);
      v6 = qalloc(v5);
      v7 = (void *)a1[5];
      a1[4] = v6;
      if ( v6 && v7 )
      {
        memset(v6, 0, (size_t)v5);
        return;
      }
      qfree(v7);
      v8 = (void *)a1[4];
      a1[5] = 0;
      qfree(v8);
      a1[4] = 0;
    }
    a1[6] = 0;
  }
}
