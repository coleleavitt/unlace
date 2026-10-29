/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48340
// Address: 0x0000000000048340

//----- (0000000000048340) ----------------------------------------------------
__int64 __fastcall sub_48340(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  sub_38C30((_QWORD *)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
    goto LABEL_9;
  v2 = *(_QWORD *)(a1 + 552);
  if ( !v2 )
    LODWORD(v2) = *(_DWORD *)(a1 + 648);
  if ( (int)v2 <= 0 )
  {
LABEL_9:
    if ( !(_BYTE)under_debugger )
      interr(30016);
    BUG();
  }
  nullsub_12(1);
  return 1;
}
// A3F50: using guessed type __int64 __fastcall nullsub_12(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
