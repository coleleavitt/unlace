/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CB10
// Address: 0x000000010003CB10

//----- (000000010003CB10) ----------------------------------------------------
void __usercall sub_10003CB10(__int64 *a1@<X0>, __int64 a2@<X8>)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  unsigned __int8 *v8; // x19
  int v9; // w8
  void *v10; // x0

  v4 = *a1 + 32 * a1[1];
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  copy_idcv((unsigned __int8 *)a2, (unsigned __int8 *)(v4 - 32));
  v5 = a1[1];
  if ( v5 )
  {
    v6 = *a1;
    v7 = v5 - 1;
    a1[1] = v7;
    v8 = (unsigned __int8 *)(v6 + 32 * v7);
    if ( !v8 )
    {
      if ( under_debugger != 1 )
        goto LABEL_12;
      while ( 1 )
      {
        __break(1u);
LABEL_12:
        interr(2656);
      }
    }
    v9 = *v8;
    if ( v9 == 5 )
    {
      sub_100031978(*((_QWORD *)v8 + 1), v8);
    }
    else if ( v9 == 7 )
    {
      v10 = *((void **)v8 + 1);
      if ( v10 )
      {
        *((_QWORD *)v8 + 2) = 0;
        qfree(v10);
        *((_QWORD *)v8 + 3) = 0;
      }
    }
    *v8 = 2;
    *((_QWORD *)v8 + 1) = 0;
  }
}
// 10009D90D: using guessed type char under_debugger;
