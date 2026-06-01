/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_652B0
// Address: 0x00000000000652B0

//----- (00000000000652B0) ----------------------------------------------------
void __fastcall sub_652B0(int *a1)
{
  int v2; // eax
  void **v3; // rbx
  void *v4; // rdi
  void **v5; // rbx
  void *v6; // rdi
  void **v7; // rbx
  void *v8; // rdi

  v2 = *a1;
  if ( (unsigned int)(*a1 - 2) < 3 )
  {
    v3 = *((void ***)a1 + 1);
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = nullptr;
        qfree(v4);
        *v3 = nullptr;
        v3[2] = nullptr;
      }
      qfree(v3);
    }
LABEL_15:
    v5 = *((void ***)a1 + 2);
    if ( !v5 )
      return;
    sub_652B0(*((_QWORD *)a1 + 2));
    goto LABEL_17;
  }
  if ( v2 == 5 )
  {
    v7 = *((void ***)a1 + 1);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v7[1] = nullptr;
        qfree(v8);
      }
      operator delete(v7);
    }
    goto LABEL_15;
  }
  if ( v2 == 1 )
  {
    v5 = *((void ***)a1 + 2);
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = nullptr;
        qfree(v6);
      }
LABEL_17:
      operator delete(v5);
    }
  }
}
