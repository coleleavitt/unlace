/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044270
// Address: 0x0000000100044270

//----- (0000000100044270) ----------------------------------------------------
void __fastcall sub_100044270(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  unsigned __int8 *v3; // rbx
  int v4; // eax
  void *v5; // rdi

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 - 1;
    a1[1] = v2;
    v3 = (unsigned __int8 *)(*a1 + 32 * v2);
    if ( !v3 )
    {
      if ( under_debugger != 1 )
        interr(0xA60u);
      BUG();
    }
    v4 = *v3;
    if ( v4 == 5 )
    {
      sub_1000380B0(*((unsigned __int8 ***)v3 + 1), v3);
    }
    else if ( v4 == 7 )
    {
      v5 = *((void **)v3 + 1);
      if ( v5 )
      {
        *((_QWORD *)v3 + 2) = 0;
        qfree(v5);
        *((_QWORD *)v3 + 3) = 0;
      }
    }
    *v3 = 2;
    *((_QWORD *)v3 + 1) = 0;
  }
}
// 1000AE23D: using guessed type char under_debugger;
