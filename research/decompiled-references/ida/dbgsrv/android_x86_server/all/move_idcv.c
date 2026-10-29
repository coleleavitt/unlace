/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: move_idcv
// Address: 0x00059590

//----- (00059590) --------------------------------------------------------
int __cdecl move_idcv(char *a1, char *a2)
{
  char *v2; // esi
  char *v3; // eax
  int v4; // eax
  __int64 v5; // xmm0_8
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  v2 = a1;
  if ( a1 != a2 )
  {
    if ( *a1 == 10 )
    {
      v3 = deref_idcv(a1, 1);
      if ( !v3 )
        return get_qerrno();
      v2 = v3;
    }
    free_idcv(v2);
    v4 = *a2;
    *v2 = v4;
    switch ( v4 )
    {
      case 2:
      case 5:
      case 6:
      case 8:
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        goto LABEL_12;
      case 3:
        v5 = *(_QWORD *)(a2 + 4);
        *(_QWORD *)(v2 + 12) = *(_QWORD *)(a2 + 12);
        goto LABEL_11;
      case 7:
        v7 = *((_DWORD *)v2 + 1);
        v8 = *((_DWORD *)v2 + 2);
        v9 = *((_DWORD *)v2 + 3);
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)v2 + 3) = *((_DWORD *)a2 + 3);
        *((_DWORD *)a2 + 1) = v7;
        *((_DWORD *)a2 + 2) = v8;
        *((_DWORD *)a2 + 3) = v9;
        goto LABEL_12;
      case 9:
      case 10:
        v5 = *(_QWORD *)(a2 + 4);
LABEL_11:
        *(_QWORD *)(v2 + 4) = v5;
LABEL_12:
        *a2 = 2;
        *((_DWORD *)a2 + 1) = 0;
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(282);
        BUG();
    }
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
