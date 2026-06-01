/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412ED8
// Address: 0x0000000000412ED8

//----- (0000000000412ED8) ----------------------------------------------------
__int64 __fastcall sub_412ED8(__int64 a1)
{
  int v2; // w0
  unsigned int v3; // w20
  int v5; // w0

  v2 = dword_5220C0;
  if ( !dword_5220C0 )
  {
    sub_40B230();
    v2 = dword_5220C0;
    if ( dword_5220C0 != 1 )
      goto LABEL_3;
LABEL_11:
    sub_45CDF8(a1, (__int64)"DBG: debugging of multi-threaded program is not available\n");
    return 0;
  }
  if ( dword_5220C0 == 1 )
    goto LABEL_11;
LABEL_3:
  if ( v2 == 2 )
  {
    sub_45CDF8(
      a1,
      (__int64)"DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
    sub_40AAA0(*(unsigned int *)(a1 + 2044));
    *(_QWORD *)(a1 + 1664) = 0;
    v5 = *(unsigned __int8 *)(a1 + 2052);
    *(_QWORD *)(a1 + 1680) = 0;
    if ( !v5 )
    {
      sub_45CDF8(a1, (__int64)"DBG: collect threads\n");
      v3 = 1;
      sub_412270(a1);
      *(_BYTE *)(a1 + 2052) = 1;
      return v3;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 1656) )
    {
      sub_45CDF8(a1, (__int64)"DBG: tdb_new returns %d\n", 1);
    }
    else
    {
      v3 = (unsigned __int8)sub_412CD8(a1);
      sub_45CDF8(a1, (__int64)"DBG: tdb_new returns %d\n", v3);
      if ( !v3 )
        return v3;
    }
    if ( *(_QWORD *)(a1 + 1656) )
    {
      v3 = 1;
      sub_45CDF8(a1, (__int64)"DBG: libthread_db.so will be used in debugging multi-threaded program\n");
      return v3;
    }
  }
  return 1;
}
// 5220C0: using guessed type int dword_5220C0;
