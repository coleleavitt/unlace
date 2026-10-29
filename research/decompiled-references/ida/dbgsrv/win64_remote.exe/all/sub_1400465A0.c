/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400465A0
// Address: 0x00000001400465A0

//----- (00000001400465A0) ----------------------------------------------------
bool __fastcall sub_1400465A0(__int64 a1)
{
  __int64 v2; // rax

  v2 = sub_140040170();
  return v2 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 480LL))(v2, a1, 0) >= 0;
}
