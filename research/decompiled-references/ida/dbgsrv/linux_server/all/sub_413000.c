/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413000
// Address: 0x0000000000413000

//----- (0000000000413000) ----------------------------------------------------
void __fastcall sub_413000(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = (void *)a1[17];
  if ( v2 )
  {
    a1[18] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    j__free(v3);
  }
  v4 = a1[10];
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_40F970(*(_QWORD **)(v4 + 24));
    v6 = *(void **)(v4 + 40);
    v4 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v5[6] = 0;
      j__free(v6);
    }
    operator delete(v5, 0x40u);
  }
  v7 = (void *)a1[5];
  if ( v7 )
  {
    a1[6] = 0;
    j__free(v7);
  }
  v8 = (void *)a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    j__free(v8);
  }
}
