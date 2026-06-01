/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044190
// Address: 0x0000000100044190

//----- (0000000100044190) ----------------------------------------------------
__int64 __fastcall sub_100044190(__int64 a1, _QWORD *a2)
{
  unsigned __int8 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r14
  unsigned __int8 *v7; // r14
  int v8; // eax
  void *v9; // rdi

  v4 = (unsigned __int8 *)(*a2 + 32LL * a2[1] - 32);
  *(_BYTE *)a1 = 2;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  copy_idcv((unsigned __int8 *)a1, v4);
  v5 = a2[1];
  if ( v5 )
  {
    v6 = v5 - 1;
    a2[1] = v6;
    v7 = (unsigned __int8 *)(*a2 + 32 * v6);
    if ( !v7 )
    {
      if ( under_debugger != 1 )
        interr(0xA60u);
      BUG();
    }
    v8 = *v7;
    if ( v8 == 5 )
    {
      sub_1000380B0(*((unsigned __int8 ***)v7 + 1), v7);
    }
    else if ( v8 == 7 )
    {
      v9 = *((void **)v7 + 1);
      if ( v9 )
      {
        *((_QWORD *)v7 + 2) = 0;
        qfree(v9);
        *((_QWORD *)v7 + 3) = 0;
      }
    }
    *v7 = 2;
    *((_QWORD *)v7 + 1) = 0;
  }
  return a1;
}
// 1000AE23D: using guessed type char under_debugger;
