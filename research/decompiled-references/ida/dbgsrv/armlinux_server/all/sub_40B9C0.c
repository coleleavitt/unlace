/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B9C0
// Address: 0x000000000040B9C0

//----- (000000000040B9C0) ----------------------------------------------------
bool __fastcall sub_40B9C0(__int64 a1, __int64 a2)
{
  int v4; // w0

  if ( *(_QWORD *)a2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
           a1,
           4,
           *(_QWORD *)a2,
           a2 + 8,
           *(unsigned __int8 *)(a2 + 12));
    *(_QWORD *)a2 = 0;
    *(_BYTE *)(a2 + 12) = 0;
    return v4 != 0;
  }
  else
  {
    *(_QWORD *)a2 = 0;
    *(_BYTE *)(a2 + 12) = 0;
    return 1;
  }
}
