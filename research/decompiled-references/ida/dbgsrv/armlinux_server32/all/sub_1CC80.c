/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CC80
// Address: 0x0001CC80

//----- (0001CC80) --------------------------------------------------------
int __fastcall sub_1CC80(int a1)
{
  int v2; // r3
  int v3; // r5
  int v5; // r2

  v2 = dword_D4998;
  if ( !dword_D4998 )
  {
    sub_17854();
    v2 = dword_D4998;
    if ( dword_D4998 != 1 )
      goto LABEL_3;
LABEL_11:
    sub_53ED4(a1, "DBG: debugging of multi-threaded program is not available\n");
    return 0;
  }
  if ( dword_D4998 == 1 )
    goto LABEL_11;
LABEL_3:
  if ( v2 == 2 )
  {
    sub_53ED4(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
    sub_1744C(*(_DWORD *)(a1 + 1068));
    v5 = *(unsigned __int8 *)(a1 + 1076);
    *(_DWORD *)(a1 + 864) = 0;
    *(_DWORD *)(a1 + 876) = 0;
    if ( !v5 )
    {
      v3 = 1;
      sub_53ED4(a1, "DBG: collect threads\n");
      sub_1C434(a1);
      *(_BYTE *)(a1 + 1076) = 1;
      return v3;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 860) )
    {
      sub_53ED4(a1, "DBG: tdb_new returns %d\n", 1);
    }
    else
    {
      v3 = sub_1CAE4((_DWORD *)a1);
      sub_53ED4(a1, "DBG: tdb_new returns %d\n", v3);
      if ( !v3 )
        return v3;
    }
    if ( *(_DWORD *)(a1 + 860) )
    {
      v3 = 1;
      sub_53ED4(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
      return v3;
    }
  }
  return 1;
}
// D4998: using guessed type int dword_D4998;
