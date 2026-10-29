/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x0000000100037F60

//----- (0000000100037F60) ----------------------------------------------------
__int64 __fastcall move_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  unsigned __int8 *v3; // rax
  void *v4; // rax
  int v5; // ecx
  unsigned __int8 *v6; // rax
  __int128 v8; // xmm0
  void *v9; // rax

  if ( a1 != a2 )
  {
    v2 = *a1;
    if ( *a1 == 10 )
    {
      v3 = deref_idcv(a1, 1);
      if ( !v3 )
        return get_qerrno();
      a1 = v3;
      v2 = *v3;
    }
    if ( v2 == 5 )
    {
      sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
    }
    else if ( v2 == 7 )
    {
      v4 = *((void **)a1 + 1);
      if ( v4 )
      {
        *((_QWORD *)a1 + 2) = 0;
        qfree(v4);
        *((_QWORD *)a1 + 3) = 0;
      }
    }
    *a1 = 2;
    *((_QWORD *)a1 + 1) = 0;
    v5 = *a2;
    *a1 = v5;
    v6 = a1 + 8;
    switch ( v5 )
    {
      case 2:
      case 5:
      case 8:
      case 9:
        *(_QWORD *)v6 = *((_QWORD *)a2 + 1);
        break;
      case 3:
      case 10:
        *(_OWORD *)v6 = *(_OWORD *)(a2 + 8);
        break;
      case 6:
        *(_DWORD *)v6 = *((_DWORD *)a2 + 2);
        break;
      case 7:
        *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 1);
        v8 = *((_OWORD *)a1 + 1);
        *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
        *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 3);
        *((_OWORD *)a2 + 1) = v8;
        break;
      default:
        if ( under_debugger == 1 )
          BUG();
        interr(0x11Au);
        sub_100001690(v9);
    }
    *a2 = 2;
    *((_QWORD *)a2 + 1) = 0;
  }
  return 0;
}
// 100038078: variable 'v9' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
