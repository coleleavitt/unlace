/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062B90
// Address: 0x08062B90

//----- (08062B90) --------------------------------------------------------
int __cdecl sub_8062B90(int a1)
{
  int v1; // eax
  unsigned __int8 v2; // di
  int v4; // eax
  int v5; // edi
  bool v6; // zf

  v1 = dword_811E5FC;
  if ( !dword_811E5FC )
  {
    sub_8059FC0();
    v1 = dword_811E5FC;
    if ( dword_811E5FC != 1 )
      goto LABEL_3;
LABEL_9:
    sub_80A03F0(a1, "DBG: debugging of multi-threaded program is not available\n");
    return 0;
  }
  if ( dword_811E5FC == 1 )
    goto LABEL_9;
LABEL_3:
  if ( v1 == 2 )
  {
    sub_80A03F0(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
    v4 = dword_811D384;
    v5 = *(_DWORD *)(a1 + 724);
    if ( dword_811D384 == -1 )
    {
      sub_80582E0();
      v4 = dword_811D384;
    }
    if ( v4 )
      ptrace(PTRACE_SETOPTIONS, v5, 0, 8);
    v6 = *(_BYTE *)(a1 + 732) == 0;
    *(_DWORD *)(a1 + 532) = 0;
    *(_DWORD *)(a1 + 540) = 0;
    if ( v6 )
    {
      sub_80A03F0(a1, "DBG: collect threads\n");
      sub_8062020(a1);
      *(_BYTE *)(a1 + 732) = 1;
    }
    return 1;
  }
  v2 = sub_8062950(a1);
  sub_80A03F0(a1, "DBG: tdb_new returns %d\n", v2);
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 528) )
      sub_80A03F0(a1, "DBG: libthread_db.so will be used in debugging multi-threaded program\n");
    return 1;
  }
  return 0;
}
// 811D384: using guessed type int dword_811D384;
// 811E5FC: using guessed type int dword_811E5FC;
