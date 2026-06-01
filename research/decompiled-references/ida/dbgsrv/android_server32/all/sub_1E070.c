/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E070
// Address: 0x0001E070

//----- (0001E070) --------------------------------------------------------
int __fastcall sub_1E070(int a1)
{
  int v2; // r1
  int v4; // r0
  int v5; // r5
  int v6; // r5
  int v7; // r6

  v2 = dword_DE2EC;
  if ( dword_DE2EC )
  {
    if ( dword_DE2EC != 2 )
    {
LABEL_3:
      if ( v2 == 1 )
      {
        sub_64B30(a1, "DBG: debugging of multi-threaded program is not available\n");
        return 0;
      }
      v7 = sub_1D244((int *)a1);
      sub_64B30(a1, "DBG: tdb_new returns %d\n");
      v6 = 0;
      if ( v7 )
      {
        v6 = 1;
        if ( *(_DWORD *)(a1 + 796) )
          sub_64B30(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
      }
      return v6;
    }
  }
  else
  {
    if ( qgetenv("IDA_USE_LIBTHREAD_DB", 0) || (v4 = sub_1DE70(), v2 = 2, v4 != 1) )
    {
      v2 = 3;
      if ( !byte_DE2E8 )
      {
        byte_DE2E8 = 1;
        v2 = 3;
      }
    }
    dword_DE2EC = v2;
    if ( v2 != 2 )
      goto LABEL_3;
  }
  sub_64B30(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
  v5 = *(_DWORD *)(a1 + 968);
  if ( sub_1DE70() )
    ptrace(PTRACE_SETOPTIONS, v5, 0, 8);
  *(_DWORD *)(a1 + 812) = 0;
  *(_DWORD *)(a1 + 800) = 0;
  v6 = 1;
  if ( !*(_BYTE *)(a1 + 976) )
  {
    sub_64B30(a1, "DBG: collect threads\n");
    sub_1D8D8(a1);
    *(_BYTE *)(a1 + 976) = 1;
    return 1;
  }
  return v6;
}
// DE2E8: using guessed type char byte_DE2E8;
// DE2EC: using guessed type int dword_DE2EC;
