/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_idcv
// Address: 0x00058520

//----- (00058520) --------------------------------------------------------
int __cdecl copy_idcv(char *a1, char *a2)
{
  char *v2; // esi
  char *v3; // eax
  int v4; // eax
  __int64 v5; // xmm0_8
  void *v7; // eax
  int v8; // eax
  size_t v9; // [esp+18h] [ebp-14h]

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
      case 6:
      case 8:
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        return 0;
      case 3:
        v5 = *(_QWORD *)(a2 + 4);
        *(_QWORD *)(v2 + 12) = *(_QWORD *)(a2 + 12);
        goto LABEL_10;
      case 5:
        v8 = *((_DWORD *)a2 + 1);
        *((_DWORD *)v2 + 1) = v8;
        ++*(_DWORD *)(v8 + 12);
        return 0;
      case 7:
        *((_DWORD *)v2 + 1) = 0;
        *((_DWORD *)v2 + 2) = 0;
        *((_DWORD *)v2 + 3) = 0;
        if ( *((_DWORD *)a2 + 2) )
        {
          v9 = *((_DWORD *)a2 + 2);
          v7 = qalloc_or_throw(v9);
          *((_DWORD *)v2 + 1) = v7;
          *((_DWORD *)v2 + 3) = v9;
          memcpy(v7, *((const void **)a2 + 1), v9);
          *((_DWORD *)v2 + 2) = v9;
        }
        return 0;
      case 9:
      case 10:
        v5 = *(_QWORD *)(a2 + 4);
LABEL_10:
        *(_QWORD *)(v2 + 4) = v5;
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(283);
        BUG();
    }
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
