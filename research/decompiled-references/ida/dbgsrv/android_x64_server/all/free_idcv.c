/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_idcv
// Address: 0x0000000000072FB0

//----- (0000000000072FB0) ----------------------------------------------------
void __fastcall free_idcv(char *a1, double a2, __m128 a3)
{
  int v4; // eax
  void *v5; // rdi

  if ( !a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2656);
    BUG();
  }
  v4 = *a1;
  if ( v4 == 5 )
  {
    sub_72DD0(*((char ***)a1 + 1), a1, a2, a3);
  }
  else if ( v4 == 7 )
  {
    v5 = *((void **)a1 + 1);
    if ( v5 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v5);
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 2;
  *((_QWORD *)a1 + 1) = 0;
}
// 158B40: using guessed type __int64 under_debugger;
