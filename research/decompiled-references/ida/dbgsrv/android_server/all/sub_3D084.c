/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D084
// Address: 0x000000000003D084

//----- (000000000003D084) ----------------------------------------------------
__int64 __fastcall sub_3D084(__int64 a1)
{
  int v1; // w8
  char v3; // w20
  unsigned int v4; // w20
  unsigned int v5; // w20
  int v6; // w8

  v1 = dword_1669F4;
  if ( !dword_1669F4 )
  {
    if ( (qgetenv("IDA_USE_LIBTHREAD_DB", 0) & 1) != 0 || (unsigned int)sub_3CDC0() != 1 )
    {
      if ( (byte_1669F0 & 1) == 0 )
        byte_1669F0 = 1;
      v1 = 3;
    }
    else
    {
      v1 = 2;
    }
    dword_1669F4 = v1;
    if ( v1 != 2 )
      goto LABEL_3;
LABEL_17:
    sub_99D18(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
    v5 = *(_DWORD *)(a1 + 1844);
    if ( (unsigned int)sub_3CDC0() )
      ptrace(PTRACE_SETOPTIONS, v5, 0, 8);
    v6 = *(unsigned __int8 *)(a1 + 1852);
    v4 = 1;
    *(_QWORD *)(a1 + 1536) = 0;
    *(_QWORD *)(a1 + 1552) = 0;
    if ( !v6 )
    {
      sub_99D18(a1, "DBG: collect threads\n");
      sub_3C53C(a1);
      *(_BYTE *)(a1 + 1852) = 1;
    }
    return v4;
  }
  if ( dword_1669F4 == 2 )
    goto LABEL_17;
LABEL_3:
  if ( v1 == 1 )
  {
    sub_99D18(a1, "DBG: debugging of multi-threaded program is not available\n");
    return 0;
  }
  v3 = sub_3BD48(a1);
  sub_99D18(a1, "DBG: tdb_new returns %d\n", v3 & 1);
  if ( (v3 & 1) == 0 )
    return 0;
  if ( *(_QWORD *)(a1 + 1528) )
    sub_99D18(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
  return 1;
}
// 1669F0: using guessed type char byte_1669F0;
// 1669F4: using guessed type int dword_1669F4;
