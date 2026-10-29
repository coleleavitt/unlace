/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016DBC
// Address: 0x0000000100016DBC

//----- (0000000100016DBC) ----------------------------------------------------
__int64 __fastcall sub_100016DBC(__int64 a1, const char *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // x0
  __int64 v10; // x19
  void *v12; // [xsp+10h] [xbp-30h]

  v9 = open_linput(a2, 0);
  v12 = (void *)v9;
  if ( !v9 )
    return 0;
  if ( sub_100016ECC(a1, v9, a5) )
    v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v12, a3, a4);
  else
    v10 = 0;
  close_linput(v12);
  return v10;
}
