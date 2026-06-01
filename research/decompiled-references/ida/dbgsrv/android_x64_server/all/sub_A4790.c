/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4790
// Address: 0x00000000000A4790

//----- (00000000000A4790) ----------------------------------------------------
bool __fastcall sub_A4790(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_A4110();
  return v1 && (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v1 + 488LL))(v1, a1, 0) >= 0;
}
