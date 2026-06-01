/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_idcv
// Address: 0x000000000006E1A8

//----- (000000000006E1A8) ----------------------------------------------------
__int64 __fastcall copy_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 *v3; // x19
  unsigned __int8 *v4; // x0
  pthread_mutex_t *v5; // x0
  __int64 v6; // x1
  int v7; // w9
  __int64 result; // x0
  _QWORD *v9; // x19
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x8

  if ( a1 == a2 )
    return 0;
  v3 = (__int64 *)a1;
  if ( *a1 == 10 )
  {
    v4 = deref_idcv(a1, 1);
    if ( !v4 )
      return get_qerrno();
    v3 = (__int64 *)v4;
  }
  free_idcv(v3);
  v7 = *a2;
  *(_BYTE *)v3 = v7;
  switch ( v7 )
  {
    case 2:
    case 8:
    case 9:
      v3[1] = *((_QWORD *)a2 + 1);
      return 0;
    case 3:
    case 10:
      *(_OWORD *)(v3 + 1) = *(_OWORD *)(a2 + 8);
      return 0;
    case 5:
      v12 = *((_QWORD *)a2 + 1);
      v3[1] = v12;
      ++*(_DWORD *)(v12 + 24);
      return 0;
    case 6:
      *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
      return 0;
    case 7:
      v3[1] = 0;
      v9 = v3 + 1;
      v9[1] = 0;
      v9[2] = 0;
      v10 = *((_QWORD *)a2 + 2);
      if ( v10 )
      {
        v11 = qalloc_or_throw(*((_QWORD *)a2 + 2));
        *v9 = v11;
        v9[2] = v10;
        memcpy(v11, *((const void **)a2 + 1), v10);
        v9[1] = v10;
      }
      return 0;
    default:
      if ( !under_debugger )
        v5 = interr(283);
      __break(1u);
      result = create_idcv_ref(&v5->__align, v6);
      break;
  }
  return result;
}
// 6E2B1: variable 'v5' is possibly undefined
// 6E2B1: variable 'v6' is possibly undefined
// 168DF0: using guessed type char under_debugger;
