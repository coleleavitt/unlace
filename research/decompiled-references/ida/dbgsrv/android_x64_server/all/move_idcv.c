/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x0000000000072CF0

//----- (0000000000072CF0) ----------------------------------------------------
__int64 __fastcall move_idcv(char *a1, char *a2, double a3, __m128 a4)
{
  char *v4; // rbx
  char *v5; // rax
  int v6; // eax
  __int128 v8; // xmm0
  __int64 v9; // rax

  if ( a1 != a2 )
  {
    v4 = a1;
    if ( *a1 == 10 )
    {
      v5 = deref_idcv(a1, 1, a3, a4);
      if ( !v5 )
        return get_qerrno();
      v4 = v5;
    }
    free_idcv(v4, a3, a4);
    v6 = *a2;
    *v4 = v6;
    switch ( v6 )
    {
      case 2:
      case 5:
      case 8:
      case 9:
        *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
        break;
      case 3:
      case 10:
        *(_OWORD *)(v4 + 8) = *(_OWORD *)(a2 + 8);
        break;
      case 6:
        *((_DWORD *)v4 + 2) = *((_DWORD *)a2 + 2);
        break;
      case 7:
        v8 = *(_OWORD *)(v4 + 8);
        v9 = *((_QWORD *)v4 + 3);
        *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
        *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
        *((_QWORD *)v4 + 3) = *((_QWORD *)a2 + 3);
        *(_OWORD *)(a2 + 8) = v8;
        *((_QWORD *)a2 + 3) = v9;
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(282);
        BUG();
    }
    *a2 = 2;
    *((_QWORD *)a2 + 1) = 0;
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
