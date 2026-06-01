/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_405490
// Address: 0x00405490

//----- (00405490) --------------------------------------------------------
bool __thiscall sub_405490(struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi
  bool v3; // bl

  v2 = *(this + 4);
  sub_4562D0(v2);
  v3 = *(this + 3) != nullptr;
  sub_4562F0(v2);
  return v3;
}
