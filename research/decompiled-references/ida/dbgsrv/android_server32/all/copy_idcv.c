/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_idcv
// Address: 0x00043CB0

//----- (00043CB0) --------------------------------------------------------
int __fastcall copy_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int result; // r0
  unsigned __int8 *v5; // r0
  int v6; // r0
  int v7; // r1
  size_t v8; // r6
  void *v9; // r0
  int v10; // r0

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
      case 6:
      case 8:
        *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
        result = 0;
        break;
      case 3:
        qmemcpy(a1 + 8, a2 + 8, 0x10u);
        result = 0;
        break;
      case 5:
        v10 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a1 + 2) = v10;
        ++*(_DWORD *)(v10 + 12);
        result = 0;
        break;
      case 7:
        result = 0;
        *((_DWORD *)a1 + 2) = 0;
        *((_DWORD *)a1 + 3) = 0;
        *((_DWORD *)a1 + 4) = 0;
        v8 = *((_DWORD *)a2 + 3);
        if ( v8 )
        {
          v9 = qalloc_or_throw(*((_DWORD *)a2 + 3));
          *((_DWORD *)a1 + 2) = v9;
          *((_DWORD *)a1 + 4) = v8;
          qmemcpy(v9, *((const void **)a2 + 2), v8);
          *((_DWORD *)a1 + 3) = v8;
          result = 0;
        }
        break;
      case 9:
      case 10:
        v7 = *((_DWORD *)a2 + 3);
        *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)a1 + 3) = v7;
        result = 0;
        break;
      default:
        if ( !under_debugger )
          interr(283);
        __debugbreak();
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
