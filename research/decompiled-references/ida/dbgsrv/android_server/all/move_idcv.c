/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x000000000006F084

//----- (000000000006F084) ----------------------------------------------------
void __fastcall move_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 *v3; // x20
  unsigned __int8 *v4; // x0
  pthread_mutex_t *v5; // x0
  unsigned __int8 *v6; // x1
  int v7; // w9
  __int128 v8; // q0
  __int64 v9; // x9

  if ( a1 != a2 )
  {
    v3 = (__int64 *)a1;
    if ( *a1 == 10 )
    {
      v4 = deref_idcv(a1, 1);
      if ( !v4 )
      {
        get_qerrno();
        return;
      }
      v3 = (__int64 *)v4;
    }
    free_idcv(v3);
    v7 = *a2;
    *(_BYTE *)v3 = v7;
    switch ( v7 )
    {
      case 2:
      case 5:
      case 8:
      case 9:
        v3[1] = *((_QWORD *)a2 + 1);
        goto LABEL_11;
      case 3:
      case 10:
        *(_OWORD *)(v3 + 1) = *(_OWORD *)(a2 + 8);
        goto LABEL_11;
      case 6:
        *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
        goto LABEL_11;
      case 7:
        v8 = *(_OWORD *)(v3 + 1);
        v9 = v3[3];
        v3[1] = *((_QWORD *)a2 + 1);
        v3[2] = *((_QWORD *)a2 + 2);
        v3[3] = *((_QWORD *)a2 + 3);
        *(_OWORD *)(a2 + 8) = v8;
        *((_QWORD *)a2 + 3) = v9;
LABEL_11:
        *a2 = 2;
        *((_QWORD *)a2 + 1) = 0;
        break;
      default:
        if ( !under_debugger )
          v5 = interr(282);
        __break(1u);
        sub_6F17C((__int64)v5, v6);
        break;
    }
  }
}
// 6F179: variable 'v5' is possibly undefined
// 6F179: variable 'v6' is possibly undefined
// 168DF0: using guessed type char under_debugger;
