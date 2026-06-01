/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FCF0
// Address: 0x0001FCF0

//----- (0001FCF0) --------------------------------------------------------
char __cdecl sub_1FCF0(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edi
  char result; // al
  bool v5; // [esp+Bh] [ebp-11h]

  v1 = dword_13BCDC;
  if ( !dword_13BCDC )
  {
    if ( (unsigned __int8)qgetenv("IDA_USE_LIBTHREAD_DB", 0) || (v2 = sub_1FA20(), v1 = 2, v2 != 1) )
    {
      v1 = 3;
      if ( !byte_13BCD8 )
        byte_13BCD8 = 1;
    }
    dword_13BCDC = v1;
  }
  if ( v1 == 2 )
  {
    sub_8A3F0(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
    v3 = *(_DWORD *)(a1 + 624);
    if ( sub_1FA20() )
      ptrace(PTRACE_SETOPTIONS, v3, 0, 8);
    *(_DWORD *)(a1 + 468) = 0;
    *(_DWORD *)(a1 + 476) = 0;
    result = 1;
    if ( !*(_BYTE *)(a1 + 632) )
    {
      sub_8A3F0(a1, "DBG: collect threads\n");
      sub_1F170(a1);
      *(_BYTE *)(a1 + 632) = 1;
      return 1;
    }
  }
  else
  {
    if ( v1 == 1 )
    {
      sub_8A3F0(a1, "DBG: debugging of multi-threaded program is not available\n");
      return 0;
    }
    v5 = sub_1E9E0((int *)a1);
    sub_8A3F0(a1, "DBG: tdb_new returns %d\n", v5);
    if ( !v5 )
      return 0;
    result = 1;
    if ( *(_DWORD *)(a1 + 464) )
    {
      sub_8A3F0(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
      return 1;
    }
  }
  return result;
}
// 13BCD8: using guessed type char byte_13BCD8;
// 13BCDC: using guessed type int dword_13BCDC;
