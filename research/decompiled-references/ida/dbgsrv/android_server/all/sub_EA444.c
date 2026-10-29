/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EA444
// Address: 0x00000000000EA444

//----- (00000000000EA444) ----------------------------------------------------
__int64 __fastcall sub_EA444(__int64 a1, __int64 a2)
{
  _BYTE *v2; // x21
  _BYTE *v5; // x20
  __int64 result; // x0

  v2 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v5 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
  if ( v5[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
  return result;
}
