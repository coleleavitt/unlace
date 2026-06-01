/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003EA40
// Address: 0x000000010003EA40

//----- (000000010003EA40) ----------------------------------------------------
void __fastcall sub_10003EA40(__int64 *a1)
{
  __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x8
  unsigned __int8 *v4; // x19
  int v5; // w8
  void *v6; // x0

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *a1;
    v3 = v1 - 1;
    a1[1] = v3;
    v4 = (unsigned __int8 *)(v2 + 32 * v3);
    if ( !v4 )
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
    v5 = *v4;
    if ( v5 == 5 )
    {
      sub_10003307C(*((_QWORD *)v4 + 1), v4);
    }
    else if ( v5 == 7 )
    {
      v6 = *((void **)v4 + 1);
      if ( v6 )
      {
        *((_QWORD *)v4 + 2) = 0;
        qfree(v6);
        *((_QWORD *)v4 + 3) = 0;
      }
    }
    *v4 = 2;
    *((_QWORD *)v4 + 1) = 0;
  }
}
// 1000A590D: using guessed type char under_debugger;
