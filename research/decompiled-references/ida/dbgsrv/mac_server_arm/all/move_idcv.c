/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x00000001000317F0

//----- (00000001000317F0) ----------------------------------------------------
__int64 __fastcall move_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v3; // w8
  void *v4; // x8
  unsigned __int8 *v5; // x20
  unsigned __int8 *v6; // x20
  unsigned __int8 *v7; // x8
  int v8; // w9
  __int128 v10; // q0
  void *v11; // x0

  if ( a1 == a2 )
    return 0;
  v3 = *a1;
  if ( v3 != 10 )
  {
LABEL_5:
    if ( v3 == 5 )
    {
      v6 = a1;
      sub_100031978(*((_QWORD *)a1 + 1), a1);
      a1 = v6;
    }
    else if ( v3 == 7 )
    {
      v4 = *((void **)a1 + 1);
      if ( v4 )
      {
        v5 = a1;
        *((_QWORD *)a1 + 2) = 0;
        qfree(v4);
        a1 = v5;
        *((_QWORD *)v5 + 3) = 0;
      }
    }
    *a1 = 2;
    *((_QWORD *)a1 + 1) = 0;
    v7 = a1 + 8;
    v8 = *a2;
    *a1 = v8;
    if ( v8 > 6 )
    {
      if ( v8 > 8 )
      {
        if ( v8 != 9 )
        {
          if ( v8 != 10 )
            goto LABEL_28;
LABEL_22:
          *(_OWORD *)v7 = *(_OWORD *)(a2 + 8);
          goto LABEL_24;
        }
      }
      else if ( v8 == 7 )
      {
        *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 1);
        v10 = *((_OWORD *)a1 + 1);
        *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
        *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 3);
        *((_OWORD *)a2 + 1) = v10;
        goto LABEL_24;
      }
    }
    else if ( v8 > 4 )
    {
      if ( v8 != 5 )
      {
        *(_DWORD *)v7 = *((_DWORD *)a2 + 2);
LABEL_24:
        *a2 = 2;
        *((_QWORD *)a2 + 1) = 0;
        return 0;
      }
    }
    else if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
LABEL_28:
        if ( under_debugger == 1 )
          __break(1u);
        interr(282);
        sub_1000013F4(v11);
      }
      goto LABEL_22;
    }
    *(_QWORD *)v7 = *((_QWORD *)a2 + 1);
    goto LABEL_24;
  }
  a1 = deref_idcv(a1, 1);
  if ( a1 )
  {
    v3 = *a1;
    goto LABEL_5;
  }
  return get_qerrno();
}
// 1000318C0: conditional instruction was optimized away because w9.4==8
// 1000318D4: conditional instruction was optimized away because w9.4==6
// 100031974: variable 'v11' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
