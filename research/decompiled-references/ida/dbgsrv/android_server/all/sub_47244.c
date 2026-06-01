/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47244
// Address: 0x0000000000047244

//----- (0000000000047244) ----------------------------------------------------
__int64 __fastcall sub_47244(__int64 a1, _QWORD *a2)
{
  pthread_mutex_t *v4; // x0
  __int64 v5; // x8
  __int64 v7; // x19

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  sub_39BD8((_QWORD *)a1);
  v4 = (pthread_mutex_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
    goto LABEL_9;
  v5 = *(_QWORD *)(a1 + 552);
  if ( !v5 )
    LODWORD(v5) = *(_DWORD *)(a1 + 648);
  if ( (int)v5 <= 0 )
  {
LABEL_9:
    if ( !under_debugger )
      v4 = interr(30016);
    __break(1u);
    v7 = (__int64)v4;
    v4[45].__list.__next = nullptr;
    sub_4280C(&v4->__align);
    return sub_A2E24(v7);
  }
  else
  {
    nullsub_1(1);
    return 1;
  }
}
// 9DA6C: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 168DF0: using guessed type char under_debugger;
