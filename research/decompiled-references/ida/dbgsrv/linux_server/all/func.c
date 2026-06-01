/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: func
// Address: 0x000000000040F400

//----- (000000000040F400) ----------------------------------------------------
void __fastcall func(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  void *v3; // rdi

  v1 = a1[2];
  while ( v1 )
  {
    v2 = (_QWORD *)v1;
    sub_40F140(*(_QWORD **)(v1 + 24));
    v3 = *(void **)(v1 + 32);
    v1 = *(_QWORD *)(v1 + 16);
    if ( v3 )
    {
      v2[5] = 0;
      j__free(v3);
    }
    operator delete(v2, 0x40u);
  }
}
