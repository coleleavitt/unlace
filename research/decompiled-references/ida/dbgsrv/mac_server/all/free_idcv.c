/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_idcv
// Address: 0x0000000100038220

//----- (0000000100038220) ----------------------------------------------------
void __fastcall free_idcv(unsigned __int8 *a1)
{
  int v2; // eax
  void *v3; // rdi
  void *v4; // rax

  if ( !a1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0xA60u);
    sub_100001690(v4);
  }
  v2 = *a1;
  if ( v2 == 5 )
  {
    sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
  }
  else if ( v2 == 7 )
  {
    v3 = *((void **)a1 + 1);
    if ( v3 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v3);
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 2;
  *((_QWORD *)a1 + 1) = 0;
}
// 100038294: variable 'v4' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
