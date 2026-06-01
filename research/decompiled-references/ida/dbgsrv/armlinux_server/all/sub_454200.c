/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454200
// Address: 0x0000000000454200

//----- (0000000000454200) ----------------------------------------------------
void __fastcall sub_454200(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // x20
  __int64 v5; // x6
  _QWORD *v6; // x0
  unsigned __int64 v7; // x4
  _QWORD *v8; // x3
  unsigned __int64 v9; // x1
  _QWORD *v10; // x2

  if ( a2 == 1 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v4 = (_QWORD *)(a1 + 48);
    v5 = a1 + 48;
  }
  else
  {
    v4 = sub_4508C0(a2);
    v5 = a1 + 48;
  }
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  if ( v6 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*v6;
        v9 = v6[6] % a2;
        v10 = (_QWORD *)v4[v9];
        if ( !v10 )
          break;
        *v6 = *v10;
        *(_QWORD *)v4[v9] = v6;
LABEL_6:
        v6 = v8;
        if ( !v8 )
          goto LABEL_10;
      }
      *v6 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v6;
      v4[v9] = a1 + 16;
      if ( !*v6 )
      {
        v7 = v9;
        goto LABEL_6;
      }
      v4[v7] = v6;
      v7 = v9;
      v6 = v8;
    }
    while ( v8 );
  }
LABEL_10:
  if ( *(_QWORD *)a1 != v5 )
    j__free_0(*(void **)a1);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = a2;
}
