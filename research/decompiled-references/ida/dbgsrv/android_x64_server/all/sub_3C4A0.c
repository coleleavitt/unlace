/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C4A0
// Address: 0x000000000003C4A0

//----- (000000000003C4A0) ----------------------------------------------------
__int64 __fastcall sub_3C4A0(unsigned __int64 a1, double a2, double a3)
{
  unsigned int v3; // r14d
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebp
  _BOOL4 v7; // ebp

  v4 = dword_155724;
  if ( dword_155724 )
  {
    if ( dword_155724 != 2 )
    {
LABEL_3:
      if ( v4 == 1 )
      {
        v3 = 0;
        sub_9FDA0(a1, "DBG: debugging of multi-threaded program is not available\n");
      }
      else
      {
        v7 = sub_3B1B0(a1, a2, a3);
        v3 = 0;
        sub_9FDA0(a1, "DBG: tdb_new returns %d\n", v7);
        if ( v7 )
        {
          LOBYTE(v3) = 1;
          if ( *(_QWORD *)(a1 + 824) )
            sub_9FDA0(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
        }
      }
      return v3;
    }
  }
  else
  {
    if ( (unsigned __int8)qgetenv("IDA_USE_LIBTHREAD_DB", 0)
      || (v5 = sub_3C1B0((__int64)"IDA_USE_LIBTHREAD_DB"), v4 = 2, v5 != 1) )
    {
      v4 = 3;
      if ( !byte_155720 )
        byte_155720 = 1;
    }
    dword_155724 = v4;
    if ( v4 != 2 )
      goto LABEL_3;
  }
  sub_9FDA0(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
  v6 = *(_DWORD *)(a1 + 1140);
  if ( (unsigned int)sub_3C1B0(a1) )
    ptrace(PTRACE_SETOPTIONS, v6, 0, 8);
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  LOBYTE(v3) = 1;
  if ( !*(_BYTE *)(a1 + 1148) )
  {
    sub_9FDA0(a1, "DBG: collect threads\n");
    sub_3B950(a1);
    *(_BYTE *)(a1 + 1148) = 1;
  }
  return v3;
}
// 3C5CC: variable 'v3' is possibly undefined
// 155720: using guessed type char byte_155720;
// 155724: using guessed type int dword_155724;
