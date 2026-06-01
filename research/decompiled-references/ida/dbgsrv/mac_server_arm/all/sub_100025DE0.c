/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025DE0
// Address: 0x0000000100025DE0

//----- (0000000100025DE0) ----------------------------------------------------
int *__fastcall sub_100025DE0(int *a1)
{
  int v2; // w8
  void **v3; // x20
  void *v4; // x0
  void **v5; // x20
  void *v6; // x0
  void **v7; // x20
  void *v8; // x0

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
    goto LABEL_15;
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
LABEL_15:
    v5 = *((void ***)a1 + 2);
    if ( v5 )
    {
      sub_100025DE0(*((_QWORD *)a1 + 2));
LABEL_17:
      operator delete(v5);
      return a1;
    }
    return a1;
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
      goto LABEL_17;
    }
  }
  return a1;
}
