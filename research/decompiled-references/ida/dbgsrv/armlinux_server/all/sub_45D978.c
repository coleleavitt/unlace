/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D978
// Address: 0x000000000045D978

//----- (000000000045D978) ----------------------------------------------------
bool __fastcall sub_45D978(_BYTE *a1, char a2)
{
  a1[216] = a2;
  return (*(unsigned int (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)a1 + 168LL))(a1, a1 + 200) == 1;
}
