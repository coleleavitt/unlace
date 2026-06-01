/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100039BA0
// Address: 0x0000000100039BA0

//----- (0000000100039BA0) ----------------------------------------------------
void __fastcall sub_100039BA0(unsigned __int8 *a1)
{
  int v2; // eax
  void *v3; // rdi

  if ( !a1 )
  {
    if ( under_debugger != 1 )
      interr(0xA60u);
    BUG();
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
// 1000AE23D: using guessed type char under_debugger;
