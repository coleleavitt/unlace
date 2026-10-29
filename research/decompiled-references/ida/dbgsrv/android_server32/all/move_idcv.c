/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x000447FC

//----- (000447FC) --------------------------------------------------------
int __fastcall move_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int result; // r0
  unsigned __int8 *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r2

  result = 0;
  if ( a1 != a2 )
  {
    if ( *a1 == 10 )
    {
      v5 = deref_idcv(a1, 1);
      if ( !v5 )
        return get_qerrno();
      a1 = v5;
    }
    free_idcv(a1);
    v6 = *a2;
    *a1 = v6;
    switch ( v6 )
    {
      case 2:
      case 5:
      case 6:
      case 8:
        *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
        break;
      case 3:
        qmemcpy(a1 + 8, a2 + 8, 0x10u);
        break;
      case 7:
        v8 = *((_DWORD *)a1 + 2);
        *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
        v9 = *((_DWORD *)a1 + 3);
        *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
        v10 = *((_DWORD *)a1 + 4);
        *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
        *((_DWORD *)a2 + 2) = v8;
        *((_DWORD *)a2 + 3) = v9;
        *((_DWORD *)a2 + 4) = v10;
        break;
      case 9:
      case 10:
        v7 = *((_DWORD *)a2 + 3);
        *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)a1 + 3) = v7;
        break;
      default:
        if ( !under_debugger )
          interr(282);
        __debugbreak();
    }
    result = 0;
    *((_DWORD *)a2 + 2) = 0;
    *a2 = 2;
  }
  return result;
}
// E0550: using guessed type char under_debugger;
